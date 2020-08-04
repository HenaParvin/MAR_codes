//To check if the number is prime or not
//copyright : Hena Parvin
#include <stdio.h>
#include <math.h>
int main()
{
    int n, f=0, i;
    printf("enter the no.\n");
    scanf("%d",&n);
    if(n <= 1){
        printf("%d is not prime\n",n);
        return 0;
    }
    else{
        for(i = 2; i <= sqrt(n); i++){
            if(n%i == 0){
               f+=1;
               break;
            }
        }
        if(f == 1)
            printf("%d is not prime\n",n);
        else
            printf("%d is prime\n",n);
    }
    return 0;
}
