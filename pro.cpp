#include<iostream>
using namespace std;
struct example{
    int a;
    float b;
    char c;
  public:
         void input(){
        cout<<"enter the value a ,b and c";
          cin>>a>>b>>c;
         }
         void display(){
          cout<<" a = "<<a<<"b ="<<b<<"c ="<<c<<endl;
         }
  };
int main(){
 struct example e;
 e.input();
 e.display();
}
