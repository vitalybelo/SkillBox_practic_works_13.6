#include <iostream>
#include <vector>
using namespace std;

int main() {

    int deleteValue, vectorSize;
    cout << "\nВведите размер массива типа <вектор> = ";
    cin >> vectorSize;

    vector<int>::iterator iter;
    vector<int> array(vectorSize);
    cout << "Введите значения массива (через пробел) = ";
    for (int i = 0; i < vectorSize; i++) cin >> array[i];

    cout << "Принято :::";
    for (iter = array.begin(); iter < array.end(); iter++)
        cout << " " << *iter;
    cout << endl;

    cout << "\nКакое значение хотите удалить ? = ";
    cin >> deleteValue;

    for (iter = array.begin(); iter < array.end();) {
        if (*iter == deleteValue) array.erase(iter);
        else iter++;
    }

    cout << "\nПолучилось :::";
    for (iter = array.begin(); iter < array.end(); iter++)
        cout << " " << *iter;
    cout << endl;

    return 0;
}
