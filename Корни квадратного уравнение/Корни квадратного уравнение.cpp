// Корни квадратного уравнение.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, D, x1, x2, x;
    
    setlocale(LC_CTYPE, "Russian");
    
    cout << "Введите коенфициенты квадратного уравнения ax2+bx+c=0:" << endl;
    std::cin >> a >> b >> c;
     
     D = b*b - 4 * a * c;
    
     {

     }
    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        cout << "Первый корень квадратного уравнения:"<< x1 << endl;
        cout << "Второй корень квадратного уравнения:" << x2 << endl;
    }
    if (D == 0) {
        x = -b / (2 * a);
        cout << "Корень квадратного уравнения: " << x << endl;
    }
    if (D < 0)cout << "Квадратное уравнение не имеет корней" << endl;
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"                                     
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
