#include <iostream>
#include <lib.h>
using namespace std;
int main(){
  int d=0; cin >> d; float numero [d], float x=0;
    for (int i=0; i<d; i++) {
        cin >> numero[i];
    } for (int i=1; i<d; i++) {
        float n=funzione (numero[i], numero[i-1]);
    if (n>x) {
        x=n;
    }
    }
    cout <<x;
  return 0;
}
