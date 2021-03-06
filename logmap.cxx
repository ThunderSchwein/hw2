#include <iostream>
#include <iostream>
#include <fstream>

using namespace std;

int main(void){
	ofstream out("output.dat");
	double x0 = 0.5;
	double x;
	cout << "a = ";  cin >> a;      
 	cout << "b = ";  cin >> b;
	int Nskip = 100; //Number of iterations to skip
	int Nend  = 200; //Number of total iterations

	for(double r=0; r <= 4; r += 0.001){
	   x=x0;
	   for(int i=1; i <= Nskip; i++)
		   x = r*x*(1-x);
	   for(int i=Nskip+1; i <= Nend; i++){
	   		   x = r*x*(1-x);
	   		   out << r << "\t" << x << endl;
   	   }
	}
	
	out.close();
	return 0;
}
