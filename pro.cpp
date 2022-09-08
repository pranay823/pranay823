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
   int i;
 struct example e[10] ;
  for(i=0;i<10;i++){
   e[i].input();
}
for(i=0;i<10;i++){
  e[i].display();

}}
