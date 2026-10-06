@echo off
chcp 65001 >nul
echo ============================================
echo   Packing C++ source code ...
echo   (see report below)
echo ============================================
echo.
"C:\Users\yelloww\.workbuddy\binaries\python\versions\3.13.12\python.exe" "%~dp0_build_zip.py"
echo.
echo Done. Press any key to close this window.
pause >nul
