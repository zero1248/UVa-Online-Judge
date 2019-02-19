 /**< UVa10082, WERTYU
 2019.01.13 */

#include <iostream>
#include <stdio.h>

using namespace std;

char s[] = "`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";

int main(){
    int i, c;
    while((c = getchar()) != EOF){
        for(i=1; s[i] && s[i] != c; i++); //找到元素位置
        if(s[i])
            putchar(s[i-1]); //输出前一个元素
        else
            putchar(c);
    }
    return 0;
}
