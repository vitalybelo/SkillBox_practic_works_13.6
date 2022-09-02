#include <iostream>
#include <vector>
using namespace std;

int main() {
    setlocale(LC_ALL,"Russian");

    int inputValue;
    int arrayLimit = 10;
    vector<int> dataBase;               // ������ ����� ���������� vector ����� � ������
    //vector<int> dataBase(arrayLimit); // ���� ��������� ����� ������
    //dataBase.resize(0);               // ����� ��� ������ �����������

    cout << "����������� ����� = " << arrayLimit << endl;
    do {
        cout << "������� �������� = ";
        cin >> inputValue;
        if (inputValue == -1) {
            cout << "\t������ = [";
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
