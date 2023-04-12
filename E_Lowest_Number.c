#include<stdio.h>
int main()
{
    int n, min;
    int index = 0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int element =0;
        scanf("%d",&element);
        if(i==0){
            min = element;
            //printf("%d", element);
        }
        else{
            if(element<min){
                min = element;
                index = i;
            }
        }
    }
    printf("%d %d",min, index+1);
    return 0;
}