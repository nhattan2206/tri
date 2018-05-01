#include <iostream>
#include <conio.h>

using namespace std;

class employee{
 private:
  int emp_num;
  float emp_comp;
 public:
  void entData(){
   cout << "Enter Employee\'s Number ";
   cin >> emp_num;
   cout << "Enter Employee\'s Salary " ;
   cin >> emp_comp;
  }
  void display(){
   cout << "Employee\'s Number " << emp_num << endl;
   cout << "Enployee\'s Salary " << emp_comp << endl;
  }
};

int main(){
 
 employee emp1, emp2, emp3;
 cout << "Enter Data For Employee 1" << endl;
 emp1.entData();
 cout << "Enter Data For Employee 2" << endl;
 emp2.entData();
 cout << "Enter Data For Employee 3" << endl;
 emp3.entData();
 cout << "Total Data Entered Is" << endl;
 emp1.display();
 emp2.display();
 emp3.display();
 
}
