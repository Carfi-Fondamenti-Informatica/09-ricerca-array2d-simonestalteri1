#include "lib.h"
#include <iostream>
using namespace std;
int v=0;
void riempi(char a[10][20]){
    for (int i = 0; i < 10; i++) {
        for (int k = 0; k < 20; k++) {
            a[i][k]=' ';
        }
    }
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
}
void riempi2(char a[]){
    for (int k = 0; k < 20; k++) {
        a[k] = ' ';
    }
        cin >> a;
}
bool conf(char a[][20], char b[])
{
    for (v = 0; v < 10; v++) {
        for (int k = 0; k < 20; k++) {
            if (a[v][k] != b[k])
            {
                break;
            }
            else if (k==19)
            {
                return true;
            }
        }
    } return false;
}
void analisi(char a[10][20], char b[20]){
    if (conf(a, b))
    {
        cout << v;
    }
    else
    {
        cout << "non presente";
    }
}
