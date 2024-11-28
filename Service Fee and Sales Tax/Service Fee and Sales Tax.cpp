#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course_4_Solution_40
// Service Fee and Sales Tax.


float ReadPositiveNumber(string Message)
{
	float Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

float TotalBillAfterServiceAndTax(float TotalBill)
{
	TotalBill = TotalBill * 1.1;
	TotalBill = TotalBill * 1.16;

	return TotalBill;
}

int main()
{
	float TotalBill = ReadPositiveNumber("Please Enter Total Bill?");

	cout << endl;
	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Bill After Service Fee and Sales Tax = "
		<< TotalBillAfterServiceAndTax(TotalBill) << endl;

}
