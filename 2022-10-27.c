#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}

//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//
//	return 0;
//}




//int main()
//{
//	int x = 0;
//	while (x <= 10)
//	{
//		x++;
//		if (5==x)
//			continue;
//		printf("%d\n", x);
//	}
	/*while (x <= 10);
	{
	x++;
	if(5 == x);
	continue;
		printf("%d\n", x);


	}*/
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	while (x <= 10)
//	{
//		printf("%d\n", x);
//		x++;
//	}
//	return 0;
//}