//strncat函数模拟实现
#include<stdio.h>
#include<string.h>
#define MAXCHAR 1000
char* my_strncat(char* destination, const char* source, size_t num)
{
    if (destination == NULL)
    {
        return NULL;
    }
    if (source == NULL)
    {
        return destination;
    }
    char* dest = destination + strlen(destination);
    for (size_t i = 0; i < num; i++)
    {
        *(dest++) = *(source++);
    }
    //字符串末尾以 '\0' 结尾 
    *dest = '\0';
    return destination;
}

int main()
{
    int i,c,n;
    char str1[MAXCHAR];
    char str2[MAXCHAR];
    for(i = 0;(i < MAXCHAR -1 )&&((c = getchar()) != '\n') ; ++i )
        str1[i] = c;
    str1[i] = '\0';     /* 储存字符串并加上结束符 */
	for(i = 0;(i < MAXCHAR -1 )&&((c = getchar()) != '\n') ; ++i )
        str2[i] = c;
    str2[i] = '\0';     /* 储存字符串并加上结束符 */
    scanf("%d",&n);
	//strjoin(n);     /* 调用函数拼接字符串 */
    printf("%s",my_strncat(str1,str2,n));
    return 0;
}
