#include<stdio.h>

int main()
{

    int i,test;
    scanf("%d",&test);

    for(i=1;i<=test;i++)
    {

        lol();

    }

    return 0;
}





void lol()
{
    char string[1000];
    getchar();
    gets(string);

    int length;

    length=strlen(string);

    if((length)%2!=0)
    {
        odd(length,string);
    }

    else{
        even();
    }


}


void odd(int length,char string[])
{
    //can we make palindrom? yes/no
    int max_char[26];
    char making_palindrom[26];

    int i;

    for(i=0;i<length;i++)
    {
        max_char[i]=string[i];
    }



}









