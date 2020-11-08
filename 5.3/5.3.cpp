#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
double h(const double x);
int main()
{
	double qp, qk, z;
	int n;
	cout << "gp = "; cin >> qp;
	cout << "gk = "; cin >> qk;
	cout << "n = "; cin >> n;
	cout << fixed;
	cout << "--------------------------------" << endl;
	cout << "|" << setw(7) << "q" << " |"
		<< setw(20) << "z" << " |"
		<< endl;
	cout << "--------------------------------" << endl;
	double dq = (qk - qp) / n;
	double q = qp;
	while (q <= qk)
	{
		z = h(q + 1) + h(pow(q, 2) + 1) + pow(pow(q, 2), 2);
		cout << "|" << setw(7) << setprecision(2) << q << " |"
			<< setw(20) << z << " |"
			<< endl;
		q += dq;
	}
	cout << "--------------------------------" << endl;
	return 0;
	system("pause");
}

double h(const double x)
{
	if (abs(x) >= 1)
		return ((cos(x) + 1) / (pow(cos(x), 2) + 1));
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		double p = 1;
		S = a;
		do
		{
			i++;
			double R = pow(x, 2 * i) / p;
			while (a <= (2 * i)) {
				p *= a;
				a++;
			}
			S += R;
		} while (i < 6);
		return ((1 / cos(x)) * S);
	}
}

