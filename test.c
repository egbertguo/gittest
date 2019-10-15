// this is a test git file
// this is on the master branch
// add news on the master branch
#include<stdio.h>
#include<stdlib.h>

char *strcpy(char *dest,const char *src)
{
	if((dest == NULL) || (src == NULL))
		return NULL;
	char *ret = dest;
	while((*dest++ = *src++) != '\0');
	return ret;	

}

1、判断是否为空指针
2、增加中间变量，保证dest的首地址
3、逐个复制，在u遇到结束符终止
4、finish the copy
4、finish the copy
4、finish the copy
4、finish the copy
4、finish the copy
4、finish the copy
4、finish the copy
4、finish the copy
int main()
{
	char *ptr;
	if((ptr = (char*)malloc(0)) == NULL)
		printf("a\n");
	else
		printf("b\n");

}
