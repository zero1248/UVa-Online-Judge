 /**< UVa340, Master-Mind Hints
 2019.01.14 */

#include <iostream>
#include <stdio.h>

using namespace std;
#define MAXN 1010

// ͳһ���룬ͳһ�����AC��
int main(){
    int n;
    int a[MAXN], b[MAXN];
    int casecount = 0; // ��¼ case ��
    int result[100]; // ��¼���
    int resultcount = 0;
    int case_num[20]; // ��¼ case �е��������� 1 ��ʼ

    while(scanf("%d", &n) == 1 && n){ //�� 0 ��������
        casecount++; //�� 1 ��ʼ
        for(int i=0; i<n; i++){
            scanf("%d", &a[i]);
        }
        for(;;){
            int A = 0, B = 0;
            for(int i=0; i<n; i++){
                scanf("%d", &b[i]);
                if(a[i] == b[i])
                    A++;
            }
            if(b[0] == 0)
                break; //�� 0 ������ Game
            else
                case_num[casecount]++;
            for(int d=0; d<=9; d++){
                int c1 = 0, c2 = 0;
                for(int i=0; i<n; i++){
                    if(a[i] == d)
                        c1++;
                    if(b[i] == d)
                        c2++;
                }
                if(c1 < c2)
                    B += c1;
                else
                    B += c2;
            }
            result[resultcount++] = A;
            result[resultcount++] = B-A;
        }
    }
    int output_i = 0;
    for(int i=0; i<casecount; i++){
        printf("Game %d:\n", i+1);
        for(int j=1; j<=case_num[i+1]; j++){
            int a = output_i++;
            int b = output_i++;
            printf("    (%d,%d)\n", result[a], result[b]);
        }
    }
    return 0;
}

// ���������Presentation error��
//int main(){
//    int n;
//    int a[MAXN], b[MAXN];
//    int casecount = 0;
//
//    while(scanf("%d", &n) == 1 && n){ //�� 0 ��������
//        printf("Game %d:\n", ++casecount);
//        for(int i=0; i<n; i++){
//            scanf("%d", &a[i]);
//        }
//        for(;;){
//            int A = 0, B = 0;
//            for(int i=0; i<n; i++){
//                scanf("%d", &b[i]);
//                if(a[i] == b[i])
//                    A++;
//            }
//            if(b[0] == 0)
//                break; //�� 0 ������ Game
//            for(int d=0; d<=9; d++){
//                int c1 = 0, c2 = 0;
//                for(int i=0; i<n; i++){
//                    if(a[i] == d)
//                        c1++;
//                    if(b[i] == d)
//                        c2++;
//                }
//                if(c1 < c2)
//                    B += c1;
//                else
//                    B += c2;
//            }
//            printf("    (%d,%d)\n", A, B-A);
//        }
//    }
//
//    return 0;
//}


