#include <iostream>
using namespace std;
//#include "chapter4.h"
#include "getObesity.h"

int main()
{
	double height;
	double weight;
	double bmi;
	int himan;
	string a;
	int i;

	cout << "身長（cm）を入力してください：";
	cin >> height;

	cout << "体重（kg）を入力してください：";
	cin >> weight;

	bmi = getBmi(height, weight);
	himan = getObesity(bmi);

	switch (himan)
	{
	case -1:
		a = "低体重です";
		break;
	case 0:
		a = "普通体重です";
		break;
	case 1:
		a = "肥満(1度)です";
		break;
	case 2:
		a = "肥満(2度)です";
		break;
	case 3:
		a = "肥満(3度)です";
		break;
	default:
		a = "肥満(4度)です";
	}

	cout << "あなたのBMIは、" << bmi << "です。" << endl;
	cout << a;

	cin >> i;

	return 0;
}