#include <iostream>
using namespace std;
class Time{
	private:// thuoc tinh
		unsigned int hours;
		unsigned int minutes;
		unsigned int seconds;
	public:
		Time()
		{
			hours =0;
			minutes =0;
			seconds =0;
		}
	Time (unsigned int h,unsigned int m,unsigned int s)//khoi tao
	{
		hours =h;
		minutes =m;
		seconds =s;
	}
	void display ()
	
	{
		cout<<hours<<":"<<minutes<<":"<<seconds;
	}
	void add (Time t1,Time t2)
	{
		seconds=t1.seconds+t2.seconds;
		if(seconds>=60)
		{
			minutes ++;
			seconds-=60;
		}
		minutes +=(t1.minutes+t2.minutes);
		if(minutes>=60)
		{
			hours ++;
			minutes-=60;
		}
		hours +=t1.hours+t2.hours;
		if(hours>=24)
		{
			hours-=24;
		}
	}
		
};
int main()
{
	Time t1(23,59,59);
	Time t2(4,15,16);
	Time t3;
	t3.add(t1,t2);
	t3.display();
	return 0;
}
