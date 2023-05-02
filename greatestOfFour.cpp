#include <iostream>
using namespace std;

int greaterNum (int a , int b, int c, int d) {
//returns the greatest integer
    if (a>b){
        if (a>c) {
            if (a>d)
                return a;
            else 
                return d;
        } else {
            if (c>d)
                return c;
            else
                return d;
        }
    } else {
        if (b>c){
            if (b>d)
                return b;
            else
                return d;
        } else {
            if (c>d)
                return c;
            else 
                 return d;
        }
    }
}

int main() {
    int a,b,c,d;
    cin >>a>>b>>c>>d;
    cout<<greaterNum(a,b,c,d)<<endl;
    return 0;
}
