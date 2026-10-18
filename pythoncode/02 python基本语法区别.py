#注释用#号  多行注释用三个双引号"""

#变量声明不需要声明类型  常量默认字母全大写的为常量

#python运算符中没有++和--  多了整除// 和 幂运算**    逻辑运算符与或非变成了英文 and or not

#输出  想要输出一个表达式如1+1的结果或者一个变量 需要使用f+{...}的形式 f放在引号前面
a = 10
print(f"1+1={1+1}")
print(f"{a}")

#python输出默认换行 若想以空格区分开 需用end
print(f"{a}",end=" ")
print(f"{a+1}",end=" ")

#输入  python的输入可以与赋值同时进行 也可出现文字说明
x=input("请输入:")
print(f"{x}")

#列表
a = ["123", "456", "789", "abc",10]   # 记得是中括号
print(a[0])   #与数组类似 可以用下角标查找
#遍历列表用 for i in a:

#if else语句
if a[0] == "123":    #记得加冒号
    print("对")
else: print("错")
#else if缩写为elif

#for循环
for i in a:     #i只是一个替身 用来指代遍历的对象(迭代对象)
    print(i)        #无大括号 用缩进代替

for i in range(5):
    print(i)          #for循环用于有限次循环  5表示循环次数  默认i从0开始  输出结果是0到4

#range用法
for i in range(2,10,2):     #range(start,stop,step)   start表示开始的i值  stop表示停止的i值(不包括)  step表示每次循环结束i的变化
    print(i)                #等价于C++的 for(int i=2;i<10;i+=2)...
#循环控制用的break和continue与c++中基本一样

#switch case语句     python中用 match case
b = 3
match b:
    case 1:
        print("一")
    case 2:
        print("二")
    case 3 | 4 | 6:        #多种情况对应同一个操作 用 |
        print("哈哈")
    case _:  # _ 相当于default  表示其他情况  一定要放在最后
        print("None")  # 这里不用break  找到结果会自动跳出这个语句

#while循环是条件循环 条件成立就一直进行
cnt = 4
while a[cnt]!="123":    #有冒号
    print(a[cnt])
    cnt-=1

#元组用圆括号 数据不可变  而列表的元素可以改变
yuanzu = ("1", 55, "啊哦额")
print(yuanzu)
#遍历元组
for i in yuanzu:
    print(i)

#字典 分为键和值  二者中间用冒号隔开  用花括号
zidian_1={"name": "张三","age": 18,}   #键相当于自定义的索引
print(zidian_1["name"])        #查找元素用中括号
zidian_1["age"] = 20   #修改值
zidian_1["house"] = "深圳"   #添加键和值
#遍历字典
for i in zidian_1:
    print(i, zidian_1[i])     #i指代键
#也可用 .items() 可以把字典转换"键值对"序列
print(zidian_1.items())
#输入为dict_items([('name', '张三'), ('age', 20), ('house', '深圳')])   把字典中的每一个键值对变成了元组中的一个元素
#还有元组解包的形式
for key, value in zidian_1.items():
    print(key, value)        #把变成元组后的键值对 键赋给key 值赋给value
#如果只写一个变量 那么得到的是完整的元组
for item in zidian_1.items():
    print(item)       #输出('name', '张三') ('age', 20) ('house', '深圳') 带括号


#C++用NULL/nullptr    python用None  判断时用 if x is None

