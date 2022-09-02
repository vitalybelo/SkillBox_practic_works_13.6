#include <iostream>
#include <vector>
using namespace std;

int main() {

    int deleteValue, vectorSize;
    cout << "\nВведите размер массива типа <вектор> = ";
    cin >> vectorSize;

    vector<int> array(vectorSize);
    cout << "Введите значения массива (через пробел) = ";
    for (int i = 0; i < vectorSize; i++) cin >> array[i];

    cout << "Принято :::";
    for (int i : array) cout << " " << i;
    cout << endl;

    cout << "\nКакое значение хотите удалить ? = ";
    cin >> deleteValue;

    for (int i = 0; i < array.size();) {
        if (array[i] == deleteValue) {
            for (int n = i; n < array.size() - 1; n++)
                swap(array[n],array[n+1]);
            array.pop_back();
        } else i++;
    }

    cout << "\nПолучилось :::";
    for (int i : array) cout << " " << i;
    cout << endl;

    return 0;
}
