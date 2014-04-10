#include <iostream>

using namespace std;

void mayorMenor(float *pt){
    float mayor=0, menor=100;
    while (*pt!='\0'){
        if (*pt>mayor){
            mayor=*pt;
        }
        if (*pt<menor && *pt>1){
            cout << menor << endl;
            menor=*pt;
        }
        pt++;
    }

    cout << "El mayor es "<< mayor<<endl;
    cout << "El menor es "<< menor<<endl;
}

int main(){
    float arr[5]={2.2,8.4,2.1,8.2,7};
    float *pt;

    pt = arr;

    mayorMenor(pt);

    return 0;
}
