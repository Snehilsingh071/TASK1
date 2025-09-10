
#include <iostream>
using namespace std;

int main() {
    int a, b ,c;
    cout<<"Enter 2 numbers :" <<endl;
    cin>>a>>b;
    
    cout<<"choose a operation :" << endl;
    cout<<"1. sum\n 2. substract\n 3. multiply\n 4. divide\n"<<endl;
    cin>>c;
    
    switch(c) {
         case 1 : cout<<"sum is :"<<a+b;
      break;
      case 2 : cout<<"substract is :" << a-b;
      break;
      case 3 : cout<<"multiply is :" << a*b;
      break;
      case 4 : if(b!=0) {
              cout<<"divide is :"<<a/b;
         }else {
              cout<<"divison by 0 is undefined";
         } default:
         cout<<"invalid choices"<<endl;
    }

    return 0;
}
    