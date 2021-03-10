#include<stdio.h>
#include<string.h>

int main()
{
	int i;
    char PS[1000],s[1000],ch;

    scanf("%s %c %s", PS,&ch,s);

    for( i=0;i<strlen(PS);i++)
        {
            if(PS[i]==ch)
                {
                    for( i=0;i<strlen(s);i++)
                        printf("%c",s[i]);
                }
            else
                printf("%c",PS[i]);
        }


    return 0;
}
