#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//结构体-struct
//人-复杂对象-多数据
//书-书名+作者+定价+出版社
//复杂对象-结构体-自己创造出来的一种类型
//创建一个结构体类型
struct Book
{
	char name[20];//c语言
	short price;//44
};//:不可缺少
int main()
{   //利用结构体类型创建一个该类型的结构体变量
	struct Book b1 = { "c语言",44 };
	printf("书名：%s\n", b1.name);//操作符.不能少
	printf("价格：%d元\n", b1.price);
	
	b1.price = 10;//变量可以直接改
	//b1.name = "c++";//name相当于地址无法直接更改，
	//要用到strcpy---string copy-字符串拷贝函数-
	strcpy(b1.name , "c++");//要应用头文件#include<string.h>//且中间还是,号//有两个参数
	printf("%s\n", b1.name);
	
	printf("%d\n", b1.price);
	return 0;
}

//人
//struct man
//{
//	char name[10];
//	double tall;
//	char sex[10];
//};
//int main()
//{
//	struct man r1= { "jies",1.78,"男性" };
//	/*printf("姓名：%s\n", r1.name);
//	printf("身高：%lf\n", r1.tall);
//	printf("性别：%s\n", r1.sex);*/
//	struct man* ps = &r1;
//	/*printf("%s\n%lf\n%s\n", (* ps).name,(*ps).tall,(*ps).sex);*/
//	//简化操作符->
//	printf("%s\n", ps->name);
//	printf("%s\n", ps->tall);
//	printf("%s\n", ps->sex);
//	//.   结构体变量.成员
//	//->  结构体指针->成员
//
//}

//指针函数
//1.先理解内存
// 空间分组-内存块-正电负电转化为1与0，且一个内存块为一个字节
//int main()
//{
//	int a = 10;//四个操作符
//	//&取地址符号
//	int*  p=&a;//取地址//将地址存起来//要看a的类型，才会决定*p前面的操作符
//	//int*虽然是个整体但是*告诉我p是指针变量
//	printf("%p\n", &a);
//	printf("%p\n", p);
//
//	*p;//*-解引用操作符//这个*与int*的*不相同
//	//对p进行解引用操作符找到所指对象a
//	//如果我们这样写
//	*p = 20;//代表通过*p找到所对应的a，并将a改为20
//	printf("a=%d\n", a);//指针为变量，存放地址——*
//	//有一种变量是用来存放地址的-指针变量
//	//printf("%p\n", &a);
//	char ch = 'w';//单引用符
//	char*   ph = &ch;
//	*ph = 'a';
//	printf("%c\n", ch);
//	printf("%d\n", sizeof(ph));
//	return 0;
//
//}

//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 2.2;
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);//通过*pd指针找回去
//	printf("%d\n", sizeof(pd));//32位平台上为4，64位平台上为8
//	printf("%d\n", sizeof(char*));//全为8当然如果为32位上，则全为4
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(short*));
//}



//#define定义函数，定义标识符常量与宏
   //1.定义函数
//#define MAX 100
//int main()
//{
//	int a = MAX;
//	return 0;
//}
   //2.定义  宏
//函数的实现
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//	    return y;
//}
//宏
//#define MAX(x,y)(x>y?x:y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);//在宏中a会替换x，b会替换y
//	printf("%d\n", max);
//
//	return 0;
//}



//void text()
//{//static-静态-1.修饰局部变量，局部变量的生命变长了，几乎将下面一条代码跳过了，除了第一次识别

//	static   int a = 1;
//	a++;
//	printf("a=%d\n", a);
//
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		text();
//			i++;
//		
//		printf("i=%d\n", i);
//	}
//	return  0;
//}


//2.修饰全局变量
//int main()
//{    //当static作用在全局变量上时，让其作用域发生变化，让其只在源文件内部使用
//	////重点//extern-声明外部符号的
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}

//int main()
//{    //typedef类型定义-类型重定义,起个别名
//	typedef unsigned int  uint;
//	unsigned int num1 = 20;
//	uint num2 = 20;
//	return 0;
//
//}

////3.static修饰函数
//extern int z(int, int);
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	int sum =z(x, y);
//	printf("SUM % d = % d + % d\n", sum, x, y);
//		return 0;
//
//}


//关键字
//int main()
//{   //auto自动》
	//int a = 10;//a-局部变量-自动变量-自动创建自动销毁-原本前面有auto后来省略了-因为局部变量都是自动变量
	//return 0;
	//break -while语句中用来终止循环的以及switch-case中会用到
	//case-   switch-case
	//char-字符类型
	//const-常变量前面用
	//continue-继续-循环里用
	//default-默认-switch-case中用
	//do-   do-while循环
	//double-double类型
	//else-   if-else语句
	//enum   枚举
	//extern-引用外部符号
	//float-单精度浮点数
	//for-for循环
	// goto-goto语句
	// if-if语句
	//int 整型
	// long长整型
	// register-登记-寄存器-
	// 计算机的存储数据-->硬盘500G、内存4G\8G\16G访问速度高于硬盘、高速缓存比内存的访问速度还高空间更小、寄存器速度更快内存更小
	// 计算机中的cpu-中央处理器-内存数据给cpu中进行计算-后来cpu的处理速度越来越快-所以只能通过数据传输更快的高速缓存与寄存器中去拿取数据
	//所以cpu先向寄存器中拿数据如果没有在向下访问
	//这样用
    //int main()
    //{//如果我们要大量使用a则这样写
    //	register int a = 10;//“建议”将a放入寄存器，毕竟寄存器的空间很小，编辑器会自动判断要不要放入
    //	return 0;
    //return- 返回
	// short-短整型
	// signed--有符号数，例如int前面其实有signed，所以它可以是正数或者负数
	// unsigned-无符号数，例如：unsigned int a=-2;翻译出来还是正2
	// sizeof-计算字节数
	// static-静态的
	// struct-结构体关键字
	// switch-switch-case语句
	// typedef-type define-类型定义
	// union-联合体或者叫共用体
	// void-无
	// volatile-操作系统中的断位
	// while-while循环
    //}
    // 


	  







//int main()
//{   //  ||逻辑或
//	int a = 0;
//	int b = 1;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//
//}  
 
 

//{     //&&逻辑与，这个不同于&，&是对相应数字的二进制数字进行取与
//	int a = 0;//一切非0的数，都为真，0为假
//	int b = 5;
//	int c = a && b;//a为真，b为真，c才能为真
//	printf("%d\n", c);
//	return 0;
//}


/* int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 20;
	int Max = 0;
	Max=max( a, b);
    printf("max=%d\n", Max);
	return 0;
}*/  


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d\n", &a, &b);
//	if (a > b)
//		printf("%d\n", a);
//	else
//		printf("%d\n", b);
//}