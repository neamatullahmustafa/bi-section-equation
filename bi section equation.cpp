
#include <iostream>
#include <CMATH>
using namespace std;
int main()
{
	cout << "bi section equation\n";
	float a = 0, b = 0, c = 0, d = 0, pi = (22 / 7), f = 0, f1 = 0, f2 = 0, p = 0, p1 = 0, p2 = 0;
	int n = 0;
	cout << "please enter number 1 if need equation ( f(x) = a x^3 + b x^2 + c x )\n";
	cout << "please enter number 2 if need equation ( f(x) = a sin(bx) + c x )\n";
	cout << "please enter number 3 if need equation ( f(x) = a cos(bx) + c x )\n";
	cout << "please enter number 4 if need equation ( f(x) = a tan(bx) + c x )\n";
	cout << "please enter number 5 if need equation ( f(x) = a sin(bx) + c e^dx )\n";
	cout << "please enter number 6 if need equation ( f(x) = a cos(bx) + c e^dx )\n";
	cout << "please enter number 7 if need equation ( f(x) = a tan(bx) + c e^dx )\n";
	cin >> n;
	cout << "please enter a ";
	cin >> a;
	cout << "please enter b ";
	cin >> b;
	cout << "please enter c ";
	cin >> c;
	if (n > 4)
	{
		cout << "please enter d ";
		cin >> d;
	}
	cout << "please enter point (p1,p2) ";
	cin >> p1 >> p2;
	p = (p1 + p2) / 2;
	switch (n)
	{
	case (1):
	{
		for (int i = 0; i < 20; i++)
		{
			f1 = a * pow(p1, 3) + b * pow(p1, 2) + c * p1;
			f2 = a * pow(p2, 3) + b * pow(p2, 2) + c * p2;
			f = a * pow(p, 3) + b * pow(p, 2) + c * p;
			if (f1 > 0 && f > 0 || f1 < 0 && f < 0)
				p1 = p;
			else
				p2 = p;
			p = (p1 + p2) / 2;
		}
		break;
	}
	case (2):
	{
		for (int i = 0; i < 20; i++)
		{
			f1 = a * sin(b * p1 * (180 / pi)) + c * p1;
			f2 = a * sin(b * p2 * (180 / pi)) + c * p2;
			f = a * sin(b * p * (180 / pi)) + c * p;
			if (f1 > 0 && f > 0 || f1 < 0 && f < 0)
				p1 = p;
			else
				p2 = p;
			p = (p1 + p2) / 2;
		}
		break;
	}
	case (3):
	{
		for (int i = 0; i < 20; i++)
		{
			f1 = a * cos(b * p1 * (180 / pi)) + c * p1;
			f2 = a * cos(b * p2 * (180 / pi)) + c * p2;
			f = a * cos(b * p * (180 / pi)) + c * p;
			if (f1 > 0 && f > 0 || f1 < 0 && f < 0)
				p1 = p;
			else
				p2 = p;
			p = (p1 + p2) / 2;
		}
		break;
	}
	case (4):
	{
		for (int i = 0; i < 20; i++)
		{
			f1 = a * tan(b * p1 * (180 / pi)) + c * p1;
			f2 = a * tan(b * p2 * (180 / pi)) + c * p2;
			f = a * tan(b * p * (180 / pi)) + c * p;
			if (f1 > 0 && f > 0 || f1 < 0 && f < 0)
				p1 = p;
			else
				p2 = p;
			p = (p1 + p2) / 2;
		}
		break;
	}
	case (5):
	{
		for (int i = 0; i < 20; i++)
		{
			f1 = a * sin(b * p1 * (180 / pi)) + c * exp(d * p1);
			f2 = a * sin(b * p2 * (180 / pi)) + c * exp(d * p2);
			f = a * sin(b * p * (180 / pi)) + c * exp(d * p);
			if (f1 > 0 && f > 0 || f1 < 0 && f < 0)
				p1 = p;
			else
				p2 = p;
			p = (p1 + p2) / 2;
		}
		break;
	}
	case (6):
	{
		for (int i = 0; i < 20; i++)
		{
			f1 = a * cos(b * p1 * (180 / pi)) + c * exp(d * p1);
			f2 = a * cos(b * p2 * (180 / pi)) + c * exp(d * p2);
			f = a * cos(b * p * (180 / pi)) + c * exp(d * p);
			if (f1 > 0 && f > 0 || f1 < 0 && f < 0)
				p1 = p;
			else
				p2 = p;
			p = (p1 + p2) / 2;
		}
		break;
	}
	case (7):
	{
		for (int i = 0; i < 20; i++)
		{
			f1 = a * tan(b * p1 * (180 / pi)) + c * exp(d * p1);
			f2 = a * tan(b * p2 * (180 / pi)) + c * exp(d * p2);
			f = a * tan(b * p * (180 / pi)) + c * exp(d * p);
			if (f1 > 0 && f > 0 || f1 < 0 && f < 0)
				p1 = p;
			else
				p2 = p;
			p = (p1 + p2) / 2;
		}
		break;
	}
	}
	cout << "point = ( " << p << " , " << f << " )\n";

}

