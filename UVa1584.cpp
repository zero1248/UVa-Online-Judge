 /**< UVa1584, Circular Sequence
 2019.01.14 */

#define METHOD1
//#define METHOD2

#ifdef METHOD1
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
#define MAXN 105

int main(){

    int num = 0;
    scanf("%d", &num);
    while(num--){
        char s[MAXN];
        scanf("%s", s);
        int len = strlen(s);
//        printf("length %d\n", len);
        int min = 0; // ��¼��С�ֵ���ʼ��λ��
        int count_num = 0;
        int x;
        int y;
        for(int i=0; i<len; i++){
            x = i;
            y = min;
            count_num = 0;
            while(s[y] == s[x] && count_num<len){
                y = (y+1) % len;
                x = (x+1) % len;
                count_num++;
            }
            if(s[y] > s[x]) //���ָ�С��ı� min λ��
                min = i;
//            printf("min now:\n");
//            for(int k=0; k<len; k++)
//                putchar(s[(min+k)%len]);
//            putchar('\n');
        }
        for(int i=0; i<len; i++)
            putchar(s[(min+i)%len]);
        putchar('\n');
    }
    return 0;
}
#endif // METHOD1

#ifdef METHOD2 //Rujia Liu
#include<stdio.h>
#include<string.h>
#define maxn 105
// ��״��s�ı�ʾ��p�Ƿ�ȱ�ʾ��q���ֵ���С
int less(const char* s, int p, int q) {
    int n = strlen(s);
    for(int i = 0; i < n; i++)
    if(s[(p+i)%n] != s[(q+i)%n])
        return s[(p+i)%n] < s[(q+i)%n];//���С�ھ�reture true��
    return 0; // ��ȾͲ�����
}

int main() {
    int T;
    char s[maxn];
    scanf("%d", &T);
    while(T--) {
        scanf("%s", s);
        int ans = 0;
        int n = strlen(s);
        for(int i = 1; i < n; i++)
            if(less(s, i, ans)) ans = i;
        for(int i = 0; i < n; i++)
            putchar(s[(i+ans)%n]);
        putchar('\n');
    }
    return 0;
}
#endif // METHOD2
