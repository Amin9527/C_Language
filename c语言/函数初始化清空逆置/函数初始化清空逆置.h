#include <stdio.h>
int arr[45] = {0};
void menu()//菜单函数
{
 printf("#########################################\n");
 printf("#########        Choose          ########\n");
 printf("#####      1   初始化数组          ######\n");
 printf("#####      2   数组元素逆置        ######\n");
 printf("#####      3    清空数组           ######\n");
 printf("#########################################\n");
}
int inti_arr(int sz)//初始化函数
{
 int i = 0;
 for (i = 0; i < sz; i++)
 {
  printf("%d ", arr[i]);//顺序输出
 }
 printf("\n");
 return 1;
}
int reverse_arr(int sz)//逆置函数
{
 int i = 0;
 int left = 0;
 int right = sz-1;
 while (left < right)//定义左右变量实现循环
 {
  int tmp = 0;
  tmp = arr[left];
  arr[left] = arr[right];//互换
  arr[right] = tmp;
  left++;//下一组元素
  right--;
 }
 for (i = 0; i < sz; i++)//逆置后数组输出
 {
  printf("%d ", arr[i]);
 }
 printf("\n");
 return 2;
}
void empty_arr(int sz)//清空函数
{
 int i = 0;
 for (i = 0; i < sz; i++)
 {
  arr[i] = 0;
  printf("%d ", arr[i]);
 }
 printf("\n");
 return 3;
}
int main()
{
 int i = 0;
 int sz = sizeof (arr) / sizeof(arr[0]);//数组大小赋值
 int selectNum;
 printf("请定义你的数组大小：\n");
 scanf("%d", &sz);
 printf("请输入你的数组元素：\n");//输入数组元素
 for (i = 0; i < sz; i++)
 {
  scanf("%d", &arr[i]);
 }
 do
 {
  menu();
  scanf("%d", &selectNum);//菜单选择
  switch (selectNum)
  {
  case 1:
   inti_arr(sz);
   break;
  case 2:
   reverse_arr(sz);
   break;
  case 3:
   empty_arr(sz);
   break;
  default:
   printf("输入错误\n");
   break;
  }
 } while (sz);
 system("pause");
 return 0;
}
