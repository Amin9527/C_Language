#include <stdio.h>
int arr[45] = {0};
void menu()//�˵�����
{
 printf("#########################################\n");
 printf("#########        Choose          ########\n");
 printf("#####      1   ��ʼ������          ######\n");
 printf("#####      2   ����Ԫ������        ######\n");
 printf("#####      3    �������           ######\n");
 printf("#########################################\n");
}
int inti_arr(int sz)//��ʼ������
{
 int i = 0;
 for (i = 0; i < sz; i++)
 {
  printf("%d ", arr[i]);//˳�����
 }
 printf("\n");
 return 1;
}
int reverse_arr(int sz)//���ú���
{
 int i = 0;
 int left = 0;
 int right = sz-1;
 while (left < right)//�������ұ���ʵ��ѭ��
 {
  int tmp = 0;
  tmp = arr[left];
  arr[left] = arr[right];//����
  arr[right] = tmp;
  left++;//��һ��Ԫ��
  right--;
 }
 for (i = 0; i < sz; i++)//���ú��������
 {
  printf("%d ", arr[i]);
 }
 printf("\n");
 return 2;
}
void empty_arr(int sz)//��պ���
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
 int sz = sizeof (arr) / sizeof(arr[0]);//�����С��ֵ
 int selectNum;
 printf("�붨����������С��\n");
 scanf("%d", &sz);
 printf("�������������Ԫ�أ�\n");//��������Ԫ��
 for (i = 0; i < sz; i++)
 {
  scanf("%d", &arr[i]);
 }
 do
 {
  menu();
  scanf("%d", &selectNum);//�˵�ѡ��
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
   printf("�������\n");
   break;
  }
 } while (sz);
 system("pause");
 return 0;
}
