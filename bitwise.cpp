#include<stdio.h>
int main()
{
    char a;
    char b[10];
    char c[20];
    printf("enter a chracter");
    scanf("%c",&a);
    printf("enter a word");
    scanf("%s\n", b);
    printf("enter a sentense");
    scanf("%[^\n]s", c);
    printf("chracter:%c\nword:%s\nsentense:%s",a,b,c);
	return 0;  	
}
