#include "std_lib_facilities.h"

int main(){

    cout << "Please enter an expression\n";

    int lval = 0, rval = 0;
    char op=0;
    int res=0;
    cin >> lval >> op >> rval;
    switch(op){
        case '+':
            res = lval + rval;
            break;
        case '-':
            res = lval - rval;
            break;
        case '*':
            res = lval*rval;
            break;
        case '/':
            res = lval/rval;
            break;
    }
    cout << "Result: " << res << "\n";
}
