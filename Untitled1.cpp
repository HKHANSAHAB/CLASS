#include<iostream>
using namespace std;
	class car{
		
		public:
			int tyres;
			string name;
			int model;
			string color;
		
		private:
			int number_plate;
			
		public:
			void setdata(int a);
			void getdata(){
				cout<<number_plate;
			};
		
	};
	void car :: setdata(int a){
	
		cin>>number_plate;
	}
	int main ()
	{
		car c;
		int a;
		
		c.setdata(a);
		c.getdata();
	}
	
	
	
