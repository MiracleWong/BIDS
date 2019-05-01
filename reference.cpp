#include <iostream>
#include <string>

using namespace std;


void FA(int x){
    x = 1;
}


void FB(int& x){
    x = 1;
}


void FC(const int& x){
    cout << x << endl;
}


int main(){
    int w = 0;
    FA(w);
    FC(w);
    FB(w);
    FC(w);
    const int N = 42;
    // FB(N); 常量不能够被赋值
    FC(N);
    return 0;
}
