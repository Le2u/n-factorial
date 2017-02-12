#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n ;
    printf("请输入一个数字以计算它的阶乘\n");
    scanf("%d",&n);
    int fact = 1 ;
    
    for ( ; n > 1 ; n -- ) {
        fact *= n ;
    }
    
    printf("%d\n",fact);
    return 0;
}
