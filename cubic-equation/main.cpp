#include <iostream>
#include <conio.h>
#include <complex>
using namespace std;
int main() {
	float a, b, c, d, a1, b1, c1, d1;
	float cos_30 = (sqrt(3))/2;
	cout << "Enter first coefficient(real and imaginary part): ";
	cin >> a >> a1;
	cout << "Enter second coefficient(real and imaginary part): ";
	cin >> b >> b1;
	cout << "Enter third coefficient(real and imaginary part): ";
	cin >> c >> c1;
	cout << "Enter fourth coefficient(real and imaginary part): ";
	cin >> d >> d1;
	complex<float>za(a, a1);
	complex<float>zb(b, b1);
	complex<float>zc(c, c1);
	complex<float>zd(d, d1);
	complex<float>one_three(0.3333333333, 0);
	complex<float>z1(0, 1);
	complex<float>two(2.0, 0);
	complex<float>twenty_seven(27.0, 0);
	complex<float>six(6.0, 0);
	complex<float>nine(9.0, 0);
	complex<float>three(3.0, 0);
	complex<float>n = ((-pow(zb, three))/(twenty_seven*pow(za, three)))+((zb*zc)/(six*pow(za, two)))-((zd)/(two*za));
	complex<float>h = ((-pow(zb, two))/(nine*pow(za, two)))+((zc)/(three*za));
	complex<float>s(-0.5, cos_30);
	complex<float>s1(-0.5, -cos_30);
	complex<float>v = -(zb/(three*za));
	complex<float>x1 = pow((n+sqrt(pow(n, two)+pow(h, three))), one_three)+pow((n-sqrt(pow(n, two)+pow(h, three))), one_three)-v;
	complex<float>x2 = (s*(pow((n+sqrt(pow(n, two)+pow(h, three))), one_three)))+(s1*(pow((n-sqrt(pow(n, two)+pow(h, three))), one_three)))-v;
	complex<float>x3 = (s1*(pow((n+sqrt(pow(n, two)+pow(h, three))), one_three)))+(s*(pow((n-sqrt(pow(n, two)+pow(h, three))), one_three)))-v;
	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
	cout << "x3 = " << x3 << endl;
	getch();
	return 0;
}