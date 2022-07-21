#define _CRT_SECURE_NO_WARNINGS
static int g_val = 2022;//全局变量
 static    int z(int a, int b)//声明函数，static可以将函数的作用域改变（不准确），
	 //正确说法-改变函数的连接属性-让它有了内部链接属性-普通函数具有外部连接属性但需要声明，

{

	int z = a + b;
	return z;
}