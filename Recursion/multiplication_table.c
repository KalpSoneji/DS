#include <stdio.h>

int calc(int num, int cnt){

    if(cnt > 10)
        return 0;

    printf("%d * %d = %d\n", num, cnt, num * cnt);

    calc(num, cnt + 1);

    return 0;
}

int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    calc(num, 1);

}