#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, d, e, f, D, Dx, Dy, zero, x, y;
    cin >> a >> b >> c >> d >> e >> f;
    cout << setprecision(6) << fixed;
    zero = 1.0e-7;
    D = a * d - c * b; // Определитель матрицы
    Dx = e * d - f * b;
    Dy = a * f - c * e;
    if (not fabs(D) <= zero) {
        // Одно решение
        x = Dx / D;
        y = Dy / D;
        cout << 2 << " " << x << " " << y;
    }
    else {
        if (fabs(a) + fabs(b) + fabs(c) + fabs(d) <= zero) {
            if (fabs(e) + fabs(f) <= zero) cout << 5; // бесконечное множество решений
            else cout << 0; // решений нет
        }
        else if ((not fabs(Dx) <= zero) || (not fabs(Dy) <= zero)) cout << 0; // нет решений
        else if (b == 0) {
            if (not fabs(a) <= zero) cout << 3 << " " << e / a; // y - любое число
            else if (fabs(d) <= zero) cout << 3 << " " << f / c; // y - любое число
            else if (fabs(c) <= zero) cout << 4 << " " << f / d; // x - любое число
            else cout << 1 << " " << -c/d << " " << f/d; // y = kx + b
        }
        else if (a == 0) {
            if (not fabs(b) <= zero) cout << 4 << " " << e / b; // x - любое число
            else if (fabs(d) <= zero) cout << 3 << " " << f / c; // y - любое число
            else if (fabs(c) <= zero) cout << 4 << " " << f / d; // x - любое число
            else cout << 1 << " " << -c/d << " " << f/d; // y = kx + b
        }
        else cout << 1 << " " << -a/b << " " << e/b; // y = kx + b
    }
    return 0;
}