 /**< UVa10082, WERTYU
 2019.01.13 */

#include <iostream>
#include <stdio.h>

using namespace std;

char s[] = "`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";

int main(){
    int i, c;
    while((c = getchar()) != EOF){
        for(i=1; s[i] && s[i] != c; i++); //�ҵ�Ԫ��λ��
        if(s[i])
            putchar(s[i-1]); //���ǰһ��Ԫ��
        else
            putchar(c);
    }
    return 0;
}
