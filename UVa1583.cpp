 /**< UVa1583, Digit Generator
 2019.01.14 */

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

#define METHOD1
//#define METHOD2

#ifdef METHOD2
#define MAXM 100005
int ans[MAXM];
#endif

int main(){

#ifdef METHOD1
/*---方法一：根据输入单次枚举---*/
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int x = 0;
        int sum = 0;
        int ans = 0;
        for(int i=n-50; i<n; i++){
            x = i;
            sum = x;
            while(x>0){
                sum += x%10;
                x /= 10;
            }
            if( sum == n){
                ans = i;
                break;
            }
        }
        printf("%d\n", ans);
    }
#endif

/*---方法二：枚举1~100000的所有最小生成元然后查询---*/
#ifdef METHOD2
    int t, n;
    memset(ans, 0, sizeof(ans));
    for(int m=1; m<MAXM; m++){
        int x=m, y=m;
        while(x>0){
            y += x%10;
            x /= 10;
        }
        if(y>MAXM)
            continue;
        if(ans[y]==0 || m<ans[y])
            ans[y] = m;
    }
//    for(int i=1; i<MAXM; i++){
//        printf("%7d %7d\n", i, ans[i]);
//    }
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        printf("%d\n", ans[n]);
    }

#endif

    return 0;
}
