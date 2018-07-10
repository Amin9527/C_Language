#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

void my_print(int tmp)
{
	if (tmp > 9)
	{
		my_print(tmp/10);
	}
		
	putchar(tmp%10+'0');
}
void print(const char *p, ....)
{
	va_list arg;
	va_start(arg, p);
	while (*p)
	{
		
		switch (*p)
		{
		case 's':
		{
					char *zf = va_arg(arg, char*);
					while (*zf)
					{
						putchar(*zf);
						zf++;
					}
		}
			break;
		case 'c':
		{
					char ch = va_arg(arg, char);
					putchar(ch);
		}
			break;
		case 'd':
		{
					int tmp = va_arg(arg, int);
					my_print(tmp);
		}
			break;
		default:
			putchar(*p);
			break;
		}
		p++;
	}
	va_end(arg);
}
int main()
{
	print("s ccc d\n", "hello", 'b', 'i', 't', 20);
	system("pause");
	return 0;
}
