 /**< UVa272, Tex Quotes
 2019.01.13 */

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int c, q = 1;
    while((c = getchar()) != EOF){
        if(c == '"'){
            printf("%s", q ? "``" : "''");
            q = !q;
        }
        else printf("%c", c);
    }
    return 0;
}
