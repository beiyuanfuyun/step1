#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//�ṹ��-struct
//��-���Ӷ���-������
//��-����+����+����+������
//���Ӷ���-�ṹ��-�Լ����������һ������
//����һ���ṹ������
struct Book
{
	char name[20];//c����
	short price;//44
};//:����ȱ��
int main()
{   //���ýṹ�����ʹ���һ�������͵Ľṹ�����
	struct Book b1 = { "c����",44 };
	printf("������%s\n", b1.name);//������.������
	printf("�۸�%dԪ\n", b1.price);
	
	b1.price = 10;//��������ֱ�Ӹ�
	//b1.name = "c++";//name�൱�ڵ�ַ�޷�ֱ�Ӹ��ģ�
	//Ҫ�õ�strcpy---string copy-�ַ�����������-
	strcpy(b1.name , "c++");//ҪӦ��ͷ�ļ�#include<string.h>//���м仹��,��//����������
	printf("%s\n", b1.name);
	
	printf("%d\n", b1.price);
	return 0;
}

//��
//struct man
//{
//	char name[10];
//	double tall;
//	char sex[10];
//};
//int main()
//{
//	struct man r1= { "jies",1.78,"����" };
//	/*printf("������%s\n", r1.name);
//	printf("��ߣ�%lf\n", r1.tall);
//	printf("�Ա�%s\n", r1.sex);*/
//	struct man* ps = &r1;
//	/*printf("%s\n%lf\n%s\n", (* ps).name,(*ps).tall,(*ps).sex);*/
//	//�򻯲�����->
//	printf("%s\n", ps->name);
//	printf("%s\n", ps->tall);
//	printf("%s\n", ps->sex);
//	//.   �ṹ�����.��Ա
//	//->  �ṹ��ָ��->��Ա
//
//}

//ָ�뺯��
//1.������ڴ�
// �ռ����-�ڴ��-���縺��ת��Ϊ1��0����һ���ڴ��Ϊһ���ֽ�
//int main()
//{
//	int a = 10;//�ĸ�������
//	//&ȡ��ַ����
//	int*  p=&a;//ȡ��ַ//����ַ������//Ҫ��a�����ͣ��Ż����*pǰ��Ĳ�����
//	//int*��Ȼ�Ǹ����嵫��*������p��ָ�����
//	printf("%p\n", &a);
//	printf("%p\n", p);
//
//	*p;//*-�����ò�����//���*��int*��*����ͬ
//	//��p���н����ò������ҵ���ָ����a
//	//�����������д
//	*p = 20;//����ͨ��*p�ҵ�����Ӧ��a������a��Ϊ20
//	printf("a=%d\n", a);//ָ��Ϊ��������ŵ�ַ����*
//	//��һ�ֱ�����������ŵ�ַ��-ָ�����
//	//printf("%p\n", &a);
//	char ch = 'w';//�����÷�
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
//	printf("%lf\n", *pd);//ͨ��*pdָ���һ�ȥ
//	printf("%d\n", sizeof(pd));//32λƽ̨��Ϊ4��64λƽ̨��Ϊ8
//	printf("%d\n", sizeof(char*));//ȫΪ8��Ȼ���Ϊ32λ�ϣ���ȫΪ4
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(short*));
//}



//#define���庯���������ʶ���������
   //1.���庯��
//#define MAX 100
//int main()
//{
//	int a = MAX;
//	return 0;
//}
   //2.����  ��
//������ʵ��
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//	    return y;
//}
//��
//#define MAX(x,y)(x>y?x:y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);//�ں���a���滻x��b���滻y
//	printf("%d\n", max);
//
//	return 0;
//}



//void text()
//{//static-��̬-1.���ξֲ��������ֲ������������䳤�ˣ�����������һ�����������ˣ����˵�һ��ʶ��

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


//2.����ȫ�ֱ���
//int main()
//{    //��static������ȫ�ֱ�����ʱ���������������仯������ֻ��Դ�ļ��ڲ�ʹ��
//	////�ص�//extern-�����ⲿ���ŵ�
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}

//int main()
//{    //typedef���Ͷ���-�����ض���,�������
//	typedef unsigned int  uint;
//	unsigned int num1 = 20;
//	uint num2 = 20;
//	return 0;
//
//}

////3.static���κ���
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


//�ؼ���
//int main()
//{   //auto�Զ���
	//int a = 10;//a-�ֲ�����-�Զ�����-�Զ������Զ�����-ԭ��ǰ����auto����ʡ����-��Ϊ�ֲ����������Զ�����
	//return 0;
	//break -while�����������ֹѭ�����Լ�switch-case�л��õ�
	//case-   switch-case
	//char-�ַ�����
	//const-������ǰ����
	//continue-����-ѭ������
	//default-Ĭ��-switch-case����
	//do-   do-whileѭ��
	//double-double����
	//else-   if-else���
	//enum   ö��
	//extern-�����ⲿ����
	//float-�����ȸ�����
	//for-forѭ��
	// goto-goto���
	// if-if���
	//int ����
	// long������
	// register-�Ǽ�-�Ĵ���-
	// ������Ĵ洢����-->Ӳ��500G���ڴ�4G\8G\16G�����ٶȸ���Ӳ�̡����ٻ�����ڴ�ķ����ٶȻ��߿ռ��С���Ĵ����ٶȸ����ڴ��С
	// ������е�cpu-���봦����-�ڴ����ݸ�cpu�н��м���-����cpu�Ĵ����ٶ�Խ��Խ��-����ֻ��ͨ�����ݴ������ĸ��ٻ�����Ĵ�����ȥ��ȡ����
	//����cpu����Ĵ��������������û�������·���
	//������
    //int main()
    //{//�������Ҫ����ʹ��a������д
    //	register int a = 10;//�����顱��a����Ĵ������Ͼ��Ĵ����Ŀռ��С���༭�����Զ��ж�Ҫ��Ҫ����
    //	return 0;
    //return- ����
	// short-������
	// signed--�з�����������intǰ����ʵ��signed���������������������߸���
	// unsigned-�޷����������磺unsigned int a=-2;�������������2
	// sizeof-�����ֽ���
	// static-��̬��
	// struct-�ṹ��ؼ���
	// switch-switch-case���
	// typedef-type define-���Ͷ���
	// union-��������߽й�����
	// void-��
	// volatile-����ϵͳ�еĶ�λ
	// while-whileѭ��
    //}
    // 


	  







//int main()
//{   //  ||�߼���
//	int a = 0;
//	int b = 1;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//
//}  
 
 

//{     //&&�߼��룬�����ͬ��&��&�Ƕ���Ӧ���ֵĶ��������ֽ���ȡ��
//	int a = 0;//һ�з�0��������Ϊ�棬0Ϊ��
//	int b = 5;
//	int c = a && b;//aΪ�棬bΪ�棬c����Ϊ��
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