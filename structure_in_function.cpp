#include<iostream>
using namespace std;
struct time{
   int hour;
   int min;
   int sec;
   int total;
  public:
      void input(){
      cout<<"enter the value hour ,min ,second"<<endl;
      cin>>hour>>min>>sec;
}
      void second(){
      total=hour*3600 + min*60 + sec;
      cout<<total;
      }
};
int main(){
   struct time t;
  t.input();
 t.second();
}

