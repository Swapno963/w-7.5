#include<stdio.h>
int main()
{
    int N;
    long long int sum = 0;
    scanf("%d",&N);
    for(int i=0; i<N; i++){
        int element;
        scanf("%d",&element);
        sum+=element;
    }
    if(sum<0){
        sum*=-1;
    }
    printf("%lld\n",sum);
    return 0;
}