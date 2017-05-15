//这是一个fopen和fclose函数的应用实例
//调用对应的流操作函数创建一个文件，并且关闭
//文件名由argv[1]参数传递
#include <stdio.h>
int main(int argc, char *argv[])
{
  FILE  *fp;  //指向FILE对象的指针
  int temp;   //存放fclose函数的返回值
  if(argc != 2)   //如果参数不正确
  {
    printf("请输入正确的参数\n");
    return 1;
  }
  fp = fopen( *(argv+1),"a+b"); //如果没有文件，则建立文件
  if(fp == NULL)                //如果FILE为NULL则表示失败
  {
    printf("创建文件%s失败!", *(argv+1));
    return 2;
  }
  printf("创建文件%s成功!\n",*(argv+1));
  temp = fclose(fp);           //关闭文件
  if(temp == 0)
  {
    printf("关闭文件%s完成!\n",*(argv+1));
    return 0;
  }
  else
  {
    printf("关闭文件%s出错!", *(argv+1));
    return 3;
  }
}
