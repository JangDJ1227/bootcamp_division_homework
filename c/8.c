/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int num,factorial=1,sum=0;
    while(scanf("%d",&num)){
        if(num<=12)
            break;
        else{
            printf("error: rewrite number:");
            continue;
        }
    }
    while(1){
        if(num>=1){
            factorial*=num;
            sum+=num;
            num-=1;
        }
        else{
            printf("%d\n%d\n",sum,factorial);
            break;
        }
    }

    return 0;
}