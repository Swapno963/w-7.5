#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        int element;
        scanf("%d",&element);
        arr[i] = element;
    }


    //  taking x
    int x ;
    scanf("%d",&x);
    for(int i=0; i<n; i++){
       if(arr[i]==x){
        printf("%d",i);
        break;
       }
       else if (i==n-1)
       {
        printf("%d",-1);
       }
    }
    return 0;
}