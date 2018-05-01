#include <iostream>
using namespace std;
class Int{
	private:
		    int number;
	public:
		    Int ():number(0)
	         {}
	        Int(int num):number(num)
	        {}
			int get_num(){
				return number;
			}
			void set_num(int num)
			{number=num;
			cin>>number;
			}
			void add_num(Int num1,Int num2)
			{
				number=num1.get_num()+ num2.get_num();
			}
};
int main()
{Int num3(5);
Int num4(6);
Int sum;
sum.add_num(num3,num4);
cout <<sum.get_num();
return 0;
}
