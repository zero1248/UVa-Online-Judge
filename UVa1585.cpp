 /**< UVa1585, Score
 2019.01.14 */

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    char s[80];
    int o_count = 0;
    int score = 0;
    int n;
    scanf("%d", &n);
    while(n--){
        int i = 0;
        scanf("%s", s);
        while(s[i]){
            if(s[i++] == 'O'){
                o_count++;
                score += o_count;
            }
            else{
                o_count = 0;
            }
        }
        printf("%d\n", score);
        score = 0;
        o_count = 0;
    }
    return 0;
}
