#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	float fr,cl;
	cout<<"ENTER FARENHEIT  ";
	cin>>fr;
	cl=(0.556*fr-38);
	cout<<"TEMP IN CELSIUS IS "<<cl;
	return 0;
}
