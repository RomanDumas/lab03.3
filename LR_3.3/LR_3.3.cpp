#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, y, R;

	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;

	if (x <= (-8 - R)) {
		y = R;
		cout << "y1 = " << y << endl;;
	}
	else
		if ((-8 - R < x) && (x <= R - 8)) {
			y = sqrt(R * R - (x + 8) * (x + 8)) - R;
			cout << "y2 = " << y << endl;
		}
		else
			if ((R - 8 < x) && (x <= 2)) {
				y = (2 + R) * (x + 8 - R) / (10 - R) - R;
				cout << "y3 = " << y << endl;
			}
			else
				if ((2 < x) && (x <= 6)) {
					y = 0;
					cout << "y4 = " << y << endl;
				}
				else
					if (x > 6) {
						y = (x - 6) * (x - 6);
						cout << "y5 = " << y << endl;
					}
	cout << "y = 3" << y << endl;







	return 0;
}