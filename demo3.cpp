//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>  

//������
//1.����������
//+-*/%ȡ��
//int main()
//{
//	int a = 5 % 2;
//	printf("%d\n", a);
//	return 0;
//}
//2.��λ������
//����<<,����>>
//�Ƶ��Ƕ�����λi
//int main()
//{
//	int a = 1;
//	//1ռ�ĸ��ֽڣ�λ32��biteλ
//	int b=a << 1;//һ���ǽ�������������//����������������һλ��
//	int c = b << 2;
//	printf("%d\n", b);
//	//���ƻ�����ʱ����2�ı���
//
//}
//3.��λ
//&  ��λ��  ��and����   ȫ1Ϊ1
//|  ��λ��   ��or����   ��1��1
//^  ��λ���     ������λ����ͬΪ0������Ϊ1   ��1��1��ȫ1��0
//int main()
//{//��λ&
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("%d\n", c);
//	//3=011
//	//5=101
//	//a&b=001=1
//}
//int main()
//{
//	//��λ��|
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	printf("%d\n", c);
//	return 0;//011//101//111=7
//}
//int main()
//{//^���
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);//011//101//110=6
//}
//4.��ֵ������
//=��ֵ   ==�ж����
//a=a+10��a+=10��ͬ
//a=a-1,a-=1,a&=2���ϸ�ֵ��^=,|=,*=
//5.��Ŀ������
// ���߼�������
//int main()
//{
//	//int a = 10;
//	//printf("%d\n", a);//�������г�0�����������ȫΪ�棬0��Ϊ��
//	//printf("%d\n", !a);//�򣡽�10������ת��Ϊ��Ϊ0
//	//int b = 0;
//	//printf("%d\n", !b);
//	//int c = -10;
//	//int d = +3;//+һ��ʡ������Ϊ��ֵ
//	6.//&ȡ��ַ��������*��ӷ��ʲ�������6.sizeof���������ͳ������ֽ�Ϊ��λ
//	int a = 10;
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof int);�ᱨ��
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	int  b = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", b);
//	return 0;
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	7.//~��һ�����Ķ����ư�λ����ȡ��,����0000��λȡ����Ϊ1111
//	int a = 0;//�ĸ��ֽڣ�32��biteλ
//	int b = ~a;
//	//�����漰�� ԭ�� ����  �Լ������ת��
//	//0=00000 00000 00000 00000 00000 00000 00
//	//  11111 11111 11111 11111 11111 11111 11
//	//�����ڼ�����д����ʱ�򣬴����Ϊ�����ƵĲ��룬����ʱΪԭ�룬�����ͷ�����ִ���������
// //������洢ʱ����Ҳ�ǲ���Ҳ����˵��ԭ��
// ֻҪ�����������������븺�������ڴ��д洢�Ķ��Ƕ����ƵĲ���
// ����ԭ�뷴�벹��������ͬ�������������ڴ��ж��ǲ���Ҳû������
// ����
//ԭ�룺 ֱ�Ӱ�������Ҳ����������
// ���룺ԭ��ķ���λ���䣬��λΪ��λȡ���õ���
// ���룺����+1
// -2
// -2��ԭ��10000 00000 00000 00000 00000 00000 10
// ����Ϊ11111 11111 11111 11111 11111 11111 01
// ����Ϊ11111 11111 11111 11111 11111 11111 10
//	//0��ͷ������1��ͷΪ����
//	//���������11111 11111 11111 11111 11Ϊ����
//	//��ʽΪԭ�뷴�Ŷ����Ƶõ����룬�����1Ϊ����
//	//������������Ϊ���� 11111 11111 11111 11111 10
//	//����Ϊԭ�� 10000 00000 00000 00000 01��ǰ�������Ϊ�������Ų��ܱ仯����Ȼ~���������
//	printf("%d\n", b);
//}
//int main()
//{
//	8.//++��
//	int a = 10;
//	int num1 = 10;
//	//int b = a++;//����++���Ƚ�a��ֵ����b����++
//	//int b = ++a;//ǰ��++����++����ʹ��a,b
//	/*printf("a=%d,b=%d\n", a, b);*/
//	int c = a--;
//	int d = --num1;
//	printf("a=%d,c=%d,d=%d,num1=%d\n", a, c, d,num1);
//}


//9.*��ӷ��ʲ������������ò���������&ȡ��ַΪһ��
//10.()ǿ������ת��������
//#include<stdio.h>
//int main()
//{
//	//int a = 3.14;
//	//printf("%d\n", a);//����ᶪʧ����
//	int a = (int)3.14;//3.14ԭΪdoule���͵ģ�����ת��Ϊint����
//	printf("%d\n", a);
//	return 0;
//}




//
//}

//6.˫Ŀ������
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = a + b;//+��Ϊ˫Ŀ������������������
//}
//7.��Ŀ������
//int main()
//{   //����������exp1?exp2:exp3  //exp��������ʽ//��Ŀ������
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	max(a > b ? a : b);//���a>b��a����max,���a<b��b����max//�����д���ǵû�����
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	return 0;
//}
 

//8.���ű���ʽ
//exp1,exp2,exp3,...expn


//9.�±������
// 2.()�������ò�����
//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return  z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//2.()�������ò�����
//	return 0;





	//1.//[]�±����ò�����
	// int arr[10] = { 0 };
	//arr[4];
	//return 0;
//}

////����--һ����ͬ���͵�����
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};//����һ�������ʮ������������
//									   //�±���0��ʼ�����Դ��10�������һ�����±�Ϊ9
//	//printf("%d\n", arr[9]);//���±���ʽ����Ԫ��//�����[]���������Ϊ������
// ���ҿ�������дint arr[]={1,2,3,4,5,6,7,8,9,0};
// �Լ�����дchar ch[10]="hello bit"�������ÿ��Բ�����ʮ���ַ����Ͽո��Լ�����ʡ�Ե�\0
// \0�����һ���ַ�����\0�����ַ����ȣ���������c:\test\121���ַ�����
// ��Ȼ�����и�\0����Ȼ�����ַ�����
//	/*char ch[20];
//	float arr2[4];
//	return 0;*/
//	int a = 0;
//	while (a < 10)
//	{
//		printf("%d\n", arr[a]);
//		a += 1;//Ҳ��������дa++����Ӧ��Ĭ��Ϊ1
//		
//	}
//return 0;
//}
////����
//	//1.�Զ��庯��
//int Add(int x, int y)
//
//{
//	
//	int z = x + y;
//	return z;
//
//}
//int main()
//{
//	int sum = 0;
//	int num1 = 10;
//	int num2 = 20;
//	int a = 100;
//	int b = 200;
//	//sum = num1 + num2;
//	sum = Add(num1, num2);
//	//sum=a+b;
//	sum = Add(a, b);
//	/*sum = Add(2, 3);*/
//	printf("sum=%d\n", sum);
//	return 0;
//
//
//}
//{
//	//whileѭ��
//	int line = 0;
//	printf("�������\n");
//	while (line < 20)//����û��;
//	{
//		printf("��һ�д���%d\n",line);
//		line ++;
//	}
//	printf("��offer\n");
//	return 0;
//}
//{
//	//1.whileѭ��
//	//2.forѭ��
//	//3.do...whileѭ��
//	/*int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0):");
//
//	scanf("%d", &input);
//	if (input == 1)
//	      printf("��offer\n");
//	else
//		  printf("������\n");*/
//	return 0;
//}
//ע��
//c���Ե���������     /*  �м䶼û��  */����������һ�������⣬��\*\**\*\ǰ������Ϊһ�彫�м��
// �����һ��*\�ͳ�Ϊ������
// c++�ķ��\\c����Ҳ���������ְ취
// 
//
//	//ת���ַ�
//	// 
//	// 9.\xddΪһ���ַ���Ϊʮ�����Ƶ�����
//	//printf("%c\n", '\x61');
//	
//	//\x61=1*16^0+6*16^1=97Ϊa
//	//8.\dddΪһ���ַ���Ϊ�˽����µ������跭��Ϊʮ���Ƶ�������ȥ���ַ���
//	//printf("%d\n", strlen("c:\test\32\test.c"));//����Ϊ13���ַ���\t��\32����һ���ַ�
//	////   /32=2*8^0+3*8^1=26,��ӦASCII�����Ұ˽����в��ܳ���8
//	//printf(" \32");
//	// 7��\b�˸��,\f��ֽ����\r�س���\tˮƽ�Ʊ���\v��ֱ�Ʊ�
//	// 6.\a�����ַ�������
//	// 5.\'
//	//printf("%c\n", '\'');
//	//printf("%c\n", "\"");
//	//// 4."//"��ֹ��ת���һ����ת�����
//	////3.\?������д����ʺ�ʱʹ�ã���ֹ������Ϊ����ĸ��
//	//printf("(are you ok??)\n");//�������ϰ���������γ�һ������ĸ��ת��λ],
//	////���ʱ��Ϳ��Դ��\?\?
//	////2.\tˮƽ�Ʊ�����˵�򵥾���ռ��ռ���������ӵĴ�С
//	//printf("12\t34567\n");//�����Ҫ��������Ϊת���ַ��ģ����ڼ���һ��/
//	////1.\n����
//	//printf("abc\n");
//	return 0;
//}
//int float
//char
//�ַ�������
//˫���������һ���ַ����ַ���
// 
//#include<string.h>//����Ҫ����ͷ�ļ�
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));//3//strlen-string-length-�����ַ�������//\0��û�����뵽��
//	printf("%d\n", strlen(arr2));//42//������Ϊû�н�����\0��
//	//���Ծ���������ڵ�42λ����0ֹͣ��Ϊ���ֵ,���Կ����ڵڶ����к������0
//	
//	//char arr1[]="abc";//����//���ַ�������ʽ����ʱ���Զ����㣬
//	////�ַ���������'a''b''c'''�ټ�������'\0'---'\0'Ϊ�ַ����Ľ�����־
//	////����������ַ������оͲ��У������ֶ�����0,���û�����\0��û�н�����־���������ӡ
//	////���Է�0����\0,���������ַ�����ĩβ�����ַ����Ҫ�ֶ�����
//	//char arr2[] = { 'a','b','c',0};//��''�����aΪ�ַ�a,""�����Ϊ�ַ���
//	////{}������ʼ������
//	////��ÿһ���ַ�������ص����֣�'a'-97,'A'-65��ASCII���룬�ַ����ڵ���ֵ����ר�ŵ�ASCII��
//	////������'\0'Ϊ0����ֵ
//	//printf("%s\n", arr1);//ע������Ϊs����d,%c�ַ���%s�ַ���
//	//printf("%s\n", arr2);
//	return 0;
	//"abcdef";
	//"helloworld";
	//	"";//���ַ���
		//return 0;
//}