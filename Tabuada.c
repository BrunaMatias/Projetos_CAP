#include <stdio.h>

int main()
{
    int i, n;
    
    scanf("%d", &n);
    
    if(n<2 || n>2000){
        return 0;
    }
    
    printf("Tabulada do %d", n);
    printf("\n");
    
    for(i=1; i<=10; i++){
        printf("%d x %d = %d\n", i, n, i*n); 
    }
    
    return 0;
}

