  #include <stdio.h>
    int main(){
        int n;
        printf("Enter a number:");
        scanf("%d",&n);

        for(int i =1; i<=n; i++){
            int j = i * (i+1)/2;
        printf("The traingular number of %d is %d\n is",i,j);
        }
        return 0;
    }
