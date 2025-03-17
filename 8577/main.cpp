#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c, p;
    float s, pol;
    cout << "Input A: "; cin >> a;
    cout << "Input B: "; cin >> b;
    cout << "Input C: "; cin >> c;
    if(a + b > c && b + c > a && c + a > b)
    {
        cout << "This is a triangle!!!" << endl;
        p = a + b + c;
        pol = p / 2;
        cout << "Perimetr = " << p << endl;
        s = pol * (pol - a) * (pol - b) * (pol - c);
        s = pow(s, 0.5);
        cout << "Ploshad = " << s << endl;
        if(c * c == a * a + b * b || a * a == c * c + b * b || b * b == a * a + c * c)
        {
            cout << "Прямоугольный" << endl;
        }
        else if(c * c > a * a + b * b || a * a > c * c + b * b || b * b > c * c + a * a )
        {
            cout << "Тупоугольный" << endl;
        }
        else if(c * c < a * a + b * b && a * a < c * c + b * b && b * b < a * a + c * c)
        {
            cout << "Остроугольный" << endl;
        }
        else if(a == b && a == c)
        {
            cout << "Pавносторонний" << endl;
        }
        else if (a == b || a == c || c == b)
        {
            cout << "Равнобедренный" << endl;
        }
    }
    else
    {
        cout << "Is not triangle!!!" << endl;
    }
    return 0;
}
