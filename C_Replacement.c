#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++){
        int element;
        scanf("%d",&element);
        if(element>0){
            arr[i]=1;
        }
        else if (element<0)
        {
          arr[i]=2;
        }
        else{
            arr[i] = 0;
        }
        printf("%d ", arr[i]);
    }   
    
    return 0;
}