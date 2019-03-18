#include<stdio.h>
#include<string.h>
void xstrcat(char *t,char *s,char *);
int main()
{
    char arr1[50],arr2[50],cat[100];
    int i=0;
    puts("enter first string:");
    gets(arr1);
    puts("enter second string:");
    gets(arr2);

    xstrcat(arr1,arr2,cat);
    printf("concatenated string = %s",cat);
}
void xstrcat(char *a,char *b,char *cat)
{
    int l1,l2,l3,x=0,y=0;
    l1=strlen(a);
    l2=strlen(b);
    l3=l1+l2;
    while(x<l3)
    {
       if(x<l1)
        {
            cat[x]=a[x];
        }
       else
       {
           cat[x]=b[y];
           y++;
       }
       x++;


    }
    cat[x]='\0';

}
