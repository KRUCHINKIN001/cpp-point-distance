#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

// Структура для хранения координат точки
struct Point {
    double x;
    double y;
};

// Docstring: Вычисляет расстояние между двумя точками по формуле.
double calculateDistance(Point p1, Point p2) {
    // Разность координат по осям X и Y
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;

    // Формула расстояния: корень квадратный из (dx^2 + dy^2)
    return sqrt(dx * dx + dy * dy);
}

int main() {
    // Установка русской кодировки для консоли
    setlocale(LC_ALL, "Russian");

    Point p1, p2;

    cout << "=== ВЫЧИСЛЕНИЕ РАССТОЯНИЯ МЕЖДУ ТОЧКАМИ ===" << endl;
    cout << endl;

    // Ввод первой точки
    cout << "Введите координаты первой точки (x и y через пробел): ";
    cin >> p1.x >> p1.y;

    // Ввод второй точки
    cout << "Введите координаты второй точки (x и y через пробел): ";
    cin >> p2.x >> p2.y;

    // Вызов функции для расчета
    double distance = calculateDistance(p1, p2);

    // Вывод результата
    cout << endl;
    cout << "Расстояние между точками:" << endl;
    cout << "A(" << p1.x << "; " << p1.y << ") и B(" << p2.x << "; " << p2.y << ")" << endl;
    cout << "Расстояние = " << distance << endl;

    return 0;
}
