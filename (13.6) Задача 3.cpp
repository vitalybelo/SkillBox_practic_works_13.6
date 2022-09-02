#include <iostream>
#include <vector>
using namespace std;

int main() {

    int inputValue;
    int arrayLimit = 10;
    vector<int> dataBase;               // лучший метод объявления vector в нашем случае
    //vector<int> dataBase(arrayLimit); // если объявлять сразу размер
    //dataBase.resize(0);               // тогда эта строка понадобится

    cout << "Ограничение стека = " << arrayLimit << endl;
    do {
        cout << "Введите значение = ";
        cin >> inputValue;
        if (inputValue == -1) {
            cout << "\tМассив = [";
            for (int i : dataBase) cout << " " << i;
            cout << " ]" << endl;
        } else {
            if (dataBase.size() == arrayLimit)
                dataBase.erase(dataBase.begin());
            dataBase.push_back(inputValue);
        }
    } while (inputValue != -2);

    cout << endl;
    return 0;
}
