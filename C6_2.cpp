#include <iostream>
#include <conio.h>
using namespace std;
class tollbooth{
	private:
		unsigned int numberofcar;
	    double amount;
	public:
		tollbooth(){
			numberofcar =0;
			amount =0;
		}
	 void paycar()
	 {
		numberofcar ++;
		amount +=0.5;
	 }
     void nopaycar()
     {
    	++ numberofcar;
	 }
	 void display()
     {
    	cout<<"tong so xe "<< numberofcar<<endl;
        cout<<"tong tien thu "<<amount<<endl;
	 }

};
int main()
{
	tollbooth bot;
	char key;//p,n,esc
	while(1)
	{
		key=getch();
		switch (key){
			case 'p':
			bot.paycar();
			break;
			case 'n':
			bot.nopaycar();
			break;
			case 27:
			bot.display();
			return 0;
		}
	}
}
