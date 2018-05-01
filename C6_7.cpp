
#include<iostream>
#include<conio.h>

using namespace std;

class angle{
 private:
  int degrees;
  float minutes;
  char direction;
 public:
  angle(int deg, float min, char dir){
   degrees=deg;
   minutes=min;
   direction=dir;
  }
  void getAngle(int deg, float min, char dir){
   degrees=deg;
   minutes=min;
   if(dir>96 && dir<124)
    direction=dir-32;
   else
    direction=dir;
  }
  void disp() const {
  cout << degrees << "\xF8" << minutes << "\'" << direction << endl;
  }
};

int main(){
 angle A(17, 31.5f, 'S');
 int a; float b; char c;
 A.disp();
 cout<<"Enter degrees  : ";
 cin>>a;
 cout<<"Enter minutes  : ";
 cin>>b;
 cout<<"Enter direction: ";
 cin>>c;
 A.getAngle(a, b, c);
 A.disp();
}

