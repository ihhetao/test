#include<stdio.h>
int main()
{
    int n;
    int num;
    int record[200];
    int pos = -1;
    int comparenumber;
    scanf("%d",&n);
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&num);
        record[i] = num;
    }
    scanf("%d",&comparenumber);
    for(int i = 0;i < n;i++)
    {
        if(record[i] == comparenumber)
        pos = i;
    }
    printf("%d\n",pos);
    return 0;
}

