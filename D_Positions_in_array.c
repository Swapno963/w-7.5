#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int element;
        scanf("%d",&element);
        if(element<=10){
            printf("A[%d] = %d\n",i,element);
        }
    }
    return 0;
}