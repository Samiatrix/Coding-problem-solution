#include<iostream>
using namespace std;
class Hari{
  public:
    Hari(int a, int b){
      n=a;
      m = b;
      cout<<n<<" "<<m<<endl;
    }
    int n;
    int m;
    // int get(){
    //   return a;
    // }
};
int main(){
  Hari h = Hari(5, 10);
  cout<<h.n<<endl;
  cout<<h.m<<endl;
  // cout<<h.get()<<endl;

  return 0;
}
