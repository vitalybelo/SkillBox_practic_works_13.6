#include <iostream>
#include <vector>
using namespace std;

int main() {
    setlocale(LC_ALL,"Russian");

    int inputValue;
    int arrayLimit = 10;
    vector<int> dataBase;               // лучший метод объ€влени€ vector здесь и сейчас
    //vector<int> dataBase(arrayLimit); // если объ€вл€ть сразу размер
    //dataBase.resize(0);               // тогда эта строка понадобитс€

    cout << "ќграничение стека = " << arrayLimit << endl;
    do {
        cout << "¬ведите значение = ";
        cin >> inputValue;
        if (inputValue == -1) {
            cout << "\tћассив = [";
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
