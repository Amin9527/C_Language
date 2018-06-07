#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void print(char *left, char *right )
{
	char tmp=0;
	while (left < right)
	{
		tmp= *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
my_print(char *arr, int ret)
{
	int rete=0,am=0;
	char *start = arr;
	char *end = arr;
	while ((arr[am] != '\0') || (am=ret))
	{
		if ((arr[am] == ' ')||(arr[am]=='\0'))
		{
			end= start + rete-1;
			print(start, end);
			start=end + 2;
			rete = -1;
			if (am == ret)
				break;
		}
		am++;
		rete++;
		
	}
}
int main()
{
	int ret = 0;
	char arr[] = "i am a student";
	char *left = arr;
	ret = strlen(arr);
	char *right = arr + ret-1;
	printf("%s\n", arr);
	print(arr,right);
	printf("%s\n", arr);
	my_print(arr, ret);
	printf("%s\n", arr);
	system("pause");
	return 0;
}