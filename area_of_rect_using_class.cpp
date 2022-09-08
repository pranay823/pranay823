#include<iostream>
using namespace std;
class Area{
      int l;
      int b;
      int  ar;
      public:
            void rectangle(){
             cout<<"enter the value of length and breath"<<endl;
             cin>>l>>b;
             ar=l*b;
             cout<<"the area is "<<ar;
            }};
 int main(){
  Area a;
 a.rectangle();
}
             
  
