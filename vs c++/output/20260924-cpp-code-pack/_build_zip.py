# -*- coding: utf-8 -*-
"""把 E:\vs c++ 下的 C++ 练习项目打包成便于分享的源码压缩包。

规则：
  - 只收源码 / 工程文件，剔除 x64、.vs 等编译产物目录
  - zip 内统一放在 "C++练习代码/" 根目录下，解压后是完整的一个文件夹
  - 附带 README.txt 说明
"""
import os
import sys
import unicodedata
import zipfile

try:
    sys.stdout.reconfigure(encoding="utf-8", errors="replace")
except Exception:
    pass

ROOT = r"E:\vs c++"
OUT_DIR = os.path.join(ROOT, "output", "20260924-cpp-code-pack")
ZIP_PATH = os.path.join(OUT_DIR, "C++练习代码_源码包.zip")
ROOT_IN_ZIP = "C++练习代码"

# 允许进入压缩包的扩展名（源码 + VS 工程文件）
ALLOW_EXT = {
    ".cpp", ".c", ".cc", ".cxx",
    ".h", ".hpp", ".hxx",
    ".sln", ".vcxproj", ".filters",
    ".md", ".txt",
}
# 直接跳过的目录名（大小写不敏感）
SKIP_DIRS = {"x64", "x86", "arm64", ".vs", "debug", "release",
             "ipch", "output", "__pycache__", ".git"}

# 不参与打包的项目（按需增删，只影响压缩包，不动原文件夹）
EXCLUDE_PROJ = {
    "Atm",
    "B2029",
    "ETOJ P1014",
    "P1009",
    "P1055",
    "P1271",
    "P1425",
    "洛谷5707",
    "蓝桥2",
    "手写单向链表",
}
EXCLUDE_LOWER = {p.casefold() for p in EXCLUDE_PROJ}

OS_LABEL = {"cpp": "C++ 源文件", "c": "C 源文件", "h": "头文件",
            "hpp": "头文件", "sln": "解决方案", "vcxproj": "工程文件"}
PROJ_EXT = {".cpp", ".c", ".cc", ".cxx", ".h", ".hpp", ".hxx"}


def collect():
    """返回 [(绝对路径, zip 内相对路径)]，相对路径以 ROOT_IN_ZIP/... 开头。"""
    items = []
    for top in sorted(os.listdir(ROOT)):
        top_path = os.path.join(ROOT, top)
        if not os.path.isdir(top_path):
            continue
        if top.lower() in SKIP_DIRS or top.startswith("."):
            continue
        if top.casefold() in EXCLUDE_LOWER:
            continue
        for dirpath, dirnames, filenames in os.walk(top_path):
            dirnames[:] = sorted(
                d for d in dirnames
                if d.lower() not in SKIP_DIRS and not d.startswith(".")
            )
            for fn in sorted(filenames):
                ext = os.path.splitext(fn)[1].lower()
                if ext not in ALLOW_EXT:
                    continue
                abs_path = os.path.join(dirpath, fn)
                rel = os.path.relpath(abs_path, ROOT)
                items.append((abs_path, os.path.join(ROOT_IN_ZIP, rel)))
    return items


def count_lines(path):
    """统计源码行数（非空行）。"""
    try:
        with open(path, "r", encoding="utf-8", errors="ignore") as f:
            return sum(1 for line in f if line.strip())
    except Exception:
        return 0


def disp_width(s):
    """字符串的终端显示宽度：中文/全角字符按 2 列算。"""
    return sum(2 if unicodedata.east_asian_width(ch) in ("W", "F") else 1
               for ch in s)


def pad(s, width, align="left"):
    """按显示宽度补空格。"""
    s = str(s)
    gap = " " * max(0, width - disp_width(s))
    return s + gap if align == "left" else gap + s


def build_readme(items):
    """生成 README 文本，列出每个项目的源码与行数。"""
    # 按项目汇总
    projects = {}
    for abs_path, rel_zip in items:
        # rel_zip = C++练习代码/<项目>/...
        parts = rel_zip.replace("\\", "/").split("/")
        if len(parts) < 3:
            continue
        proj = parts[1]
        ext = os.path.splitext(abs_path)[1].lower()
        if ext in PROJ_EXT:
            projects.setdefault(proj, []).append((os.path.basename(abs_path), abs_path))

    total_files = len(items)
    total_lines = sum(
        count_lines(p)
        for p, _ in items
        if os.path.splitext(p)[1].lower() in PROJ_EXT
    )

    L = []
    L.append("C++ 练习代码合集")
    L.append("=" * 46)
    L.append("")
    L.append("这是一个 Visual Studio 的 C++ 练习项目合集：共 %d 个项目，"
             "%d 个源码文件，合计约 %d 行代码。"
             % (len(projects), sum(len(v) for v in projects.values()), total_lines))
    L.append("内容涵盖：变量与常量、循环与分支、数组与指针、函数、引用、"
             "结构体、动态内存、vector 等 C++ 基础知识点。")
    L.append("")
    L.append("【怎么查看】")
    L.append("  1. 每个项目都是独立的 Visual Studio 解决方案（.sln）。")
    L.append("  2. 双击任意 <项目名>/<项目名>.sln 即可用 VS 打开；")
    L.append("     或者直接打开对应的 <项目名>.cpp 看源码，用记事本 / VS Code 也能读。")
    L.append("  3. 若要自己编译运行：需要 Visual Studio 2019 或更高版本，")
    L.append("     安装时勾选「使用 C++ 的桌面开发」工作负载。")
    L.append("     （压缩包里不含编译产物，首次打开需要自行生成一次。）")
    L.append("")
    L.append("【项目清单】")
    L.append("")
    L.append("  " + pad("#", 4) + pad("项目名", 24) + pad("行数", 8, "right") + "  源文件")
    L.append("  " + "-" * 74)
    idx = 0
    for proj in sorted(projects, key=lambda s: s.lower()):
        files = projects[proj]
        lines = sum(count_lines(p) for _, p in files)
        names = "、".join(n for n, _ in files)
        idx += 1
        L.append("  " + pad(idx, 4) + pad(proj, 24) + pad(lines, 8, "right") + "  " + names)
    L.append("  " + "-" * 74)
    L.append("  " + pad("合计", 4 + 24) + pad(total_lines, 8, "right")
             + "  %d 个文件" % sum(len(v) for v in projects.values()))
    L.append("")
    L.append("生成时间：2026-09-24")
    L.append("")
    return "\n".join(L)


def main():
    items = collect()
    if not items:
        print("没有找到可打包的文件")
        return 1

    readme = build_readme(items)

    # 同目录另存一份 README，方便直接预览
    with open(os.path.join(OUT_DIR, "README.txt"), "w",
              encoding="utf-8-sig", newline="\r\n") as f:
        f.write(readme)

    with zipfile.ZipFile(ZIP_PATH, "w", zipfile.ZIP_DEFLATED, compresslevel=9) as zf:
        for abs_path, rel_zip in items:
            zf.write(abs_path, rel_zip)
        # README 放在 zip 最外层
        zf.writestr(ROOT_IN_ZIP + "/README.txt",
                    "\ufeff" + readme)  # BOM 让 Windows 记事本正确识别中文

    size = os.path.getsize(ZIP_PATH)
    print("打包完成")
    print("  文件数：%d" % len(items))
    print("  压缩包：%s" % ZIP_PATH)
    print("  体积：%.2f MB" % (size / 1024 / 1024))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
