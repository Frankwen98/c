#define _crt_secure_no_warnings
#include<stdio.h>
���������Ľϴ�ֵ
int max(int x,int y)
{
	if (x>y)
		return x;
	else
		return y;
}
int main()
{
	���������Ľϴ�ֵ 10 20
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);

	int m = max(a, b);
	printf("%d\n", m);
	return 0;
}
int main(){
	int m = 0;
	scanf("%d", &m);

	if (m % 5 == 0)
		printf("yes\n");
	else
		printf("no\n");

	

	
	return 0;

}