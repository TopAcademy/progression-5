/*
 * Задача "Прогрессия нечетных"
 * ----------------------------
 * Описать функцию, заполняющую целочисленный массив
 * нечетными числами, начиная с 1, исключая значения
 * кратные 5.
 */

#include <iostream>
using std::cout;
using std::endl;

// Заполнение массива прогрессией
void fill_array(int m[], short n)
{
    short step = 2;                 // шаг прогрессии
    int value = 1;                  // значения элементов
    for (int i = 0; i < n; i++) {
        m[i] = value;
        value += step;
        // проверка на кратность 5
        if (value % 5 == 0) value += step;
    }
}

// Вывод массива на консоль
void print_array(int m[], short n)
{
    for (int i = 0; i < n; i++)
        cout << m[i] << ", ";
    cout << endl;
}

// Старт!
int main()
{
    const short N = 12;
    int mas[N];
    // заполняем массив
    fill_array(mas, N);
    // выводим на экран
    print_array(mas, N);
}
