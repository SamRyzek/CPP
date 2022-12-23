#include<iostream>

using namespace std;

class clockType
{
	public:
		void setTime(int, int, int);
		void getTime(int&, int&, int&) const;
		void printTime() const;
		void incrementSeconds();
		void incrementMinutes();
		void incrementHours();
		bool equalTime(const clockType&) const;
		clockType(int, int, int);
		clockType();

	private:
		int hr = 0;
		int min = 0;
		int sec = 0;
};

int main(){

	clockType clock1;
	clockType clock2(23, 13, 75);
	clock1.printTime();
	cout << endl;
	clock2.printTime();
	cout << endl;
	clock1.setTime(6, 59, 39);
	clock1.printTime();
	cout << endl;
	clock1.incrementMinutes();
	clock1.printTime();
	cout << endl;
	clock1.setTime(0, 13, 0);
	if (clock1.equalTime(clock2))
	cout << "clock1 time is the same as clock2 time." << endl;
	else
	cout << "The two times are different." << endl;

	return 0;
}
