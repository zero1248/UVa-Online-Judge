 /**< UVa401, Palindromes
 2019.01.13 */

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

using namespace std;

const char* rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
const char* msg[] = {
    "not a palindrome",      //不是回文
    "a regular palindrome",  //是回文
    "a mirrored string",     //是镜像
    "a mirrored palindrome"  //是镜像回文
};

char get_mirror(char c){
    // 题目指出输入数据只可能是大写字母或数字
    // 也可以用 ASCII 码来分辨是数字还是字母
    if(isalpha(c)) return rev[c - 'A'];
    return rev[c - '0' + 25];
}

int main(){
    char s[30];
    while(scanf("%s",s) == 1){
        int len = strlen(s);
        int p = 1, m = 1;
        for(int i=0; i<(len+1)/2; i++){
            if(s[i] != s[len-1-i]) p = 0; //不回文
            if(get_mirror(s[i]) != s[len-1-i]) m = 0;//不镜像
            char a = get_mirror(s[i]);
        }
        printf("%s -- is %s.\n\n", s, msg[m*2+p]);
    }
    return 0;
}


