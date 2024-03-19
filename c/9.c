/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int num,sum=0;
    while(scanf("%d",&num)==1){
        if(num>0){
            break;
        }
        else{
            printf("X\n");
            continue;
        }
    }

    for(int i=0;;){
        if(num>0){
            sum+=num;
            num-=1;
        }
        else{
            printf("%d\n",sum);
            break;
        }
    }

    return 0;
}