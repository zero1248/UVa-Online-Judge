 /**< UVa1586, Molar Mass
 2019.01.14 */

#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

using namespace std;

int main(){

    int n;
    char s[100];
    char molar[4] ={'H', 'C', 'N', 'O'};
    int mass[4] = {0, 0, 0, 0};
    scanf("%d", &n);
    int i=0;
//    double mass_tot = 0;
    while(n--){
        i=0;
//        mass_tot = 0;
        memset(mass, 0, sizeof(mass));
        scanf("%s", s);
        int len = strlen(s);
        int m = 0;
        while(s[i]){
            m = 0;
            if(isalpha(s[i])){
                while(s[i] != molar[m++]); //元素在第 m-1 个位置
                if(s[i+1] && isdigit(s[i+1])){
                    if(s[i+2] && isdigit(s[i+2]))
                        mass[m-1] += ((s[i+1]-'0')*10+s[i+2]-'0');
                    else
                        mass[m-1] += (s[i+1]-'0');
                }
                else
                    mass[m-1] += 1;
            }
            i++;
        }
        double mass_tot = mass[0]*1.008+mass[1]*12.01+mass[2]*14.01+mass[3]*16.00;
        printf("%.3f\n", mass_tot);
    }
    return 0;
}
