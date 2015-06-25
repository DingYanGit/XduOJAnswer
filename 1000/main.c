#include<stdio.h>
int main(void)
{
    int j=0;
    unsigned int a,b,i,num,c;
    while(EOF!=scanf("%u%u",&a,&b))
    {
        j++;
        char s[a][b+1];
        for(i=0; i<a; i++)
            scanf("%s",&s[i][0]);
        scanf("%u",&num);
        unsigned int n1[num],n2[num],n3[num];
        for(i=0; i<num; i++)
        {
            scanf("%u%u%u",&n1[i],&n2[i],&n3[i]);

        }
        printf("Case #%u:\n",j);
        unsigned int line[a],row[b];
        for(i=0;i<a;i++)
            line[i]=i;
        for(i=0;i<b;i++)
            row[i]=i;
        for(i=0;i<num;i++)
        {
            switch(n1[i])
            {
            case 1:
                if('T'==s[line[n2[i]-1]][row[n3[i]-1]])
                    printf("Tree\n");
                else
                {
                if('i'==s[line[n2[i]-1]][row[n3[i]-1]])
                    printf("Phone\n");
                    else
                    printf("Empty\n");
                }
                break;
            case 2:
                c=line[n3[i]-1];
                line[n3[i]-1]=line[n2[i]-1];
                line[n2[i]-1]=c;
                break;
            case 3:
                c=row[n3[i]-1];
                row[n3[i]-1]=row[n2[i]-1];
                row[n2[i]-1]=c;
                break;
            default:
                break;
            }
        }
    }

    return(0);
}
