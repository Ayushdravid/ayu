
#include<stdio.h>
int compute(int ans);
int main()
        {
            int a=input();
            int b=compute(a);
            print(b);
        }
int input()
        {            int n;
            printf("enter the value of n \n");
            scanf("%d",&n);
            return n;
         }
int compute(int a)
         {
            int ans=a+1;
            return ans;
         }
void print(int ans)
         {
            printf("%d",ans);
         }



