 /**< UVa455, Periodic Strings
 2019.01.14 */

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    char s[100];
    int n;
    scanf("%d", &n);
    while(n--){
        scanf("%s", s);
        int len = strlen(s);
        int step;
        int flag = 0;
        for(step=1; step<=len; step++){
            if(!(len % step)){
                for(int i=0; i<step; i++){
                    for(int j=1; j<=(len/step-1); j++){
                        if(s[i] != s[i+j*step]){
                            flag = 1;
                            break;
                        }
                    }
                    if(flag)
                        break;
                }
                if(flag){
                    flag = 0;
                }
                else{
                    printf("%d\n", step);
                    break;
                }
            }
        }
        memset(s, 0, sizeof(s));
        if(n)
            printf("\n");
    }
    return 0;
}
