 /**< UVa1225, Digit Counting
 2019.01.14 */

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

#define MAXN 10005
int s[MAXN];

int main(){
    int m[10];
    int n;
    scanf("%d", &n);
    while(n--){
        int input;
        memset(m, 0, sizeof(m));
        scanf("%d", &input);
        for(int i=0; i<=input; i++){
            int y = i;
            while(y){
                int x = y % 10;
                m[x]++;
                y /= 10;
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",m[0],m[1],m[2],m[3],m[4],m[5],m[6],m[7],m[8],m[9]);
    }

    return 0;
}
