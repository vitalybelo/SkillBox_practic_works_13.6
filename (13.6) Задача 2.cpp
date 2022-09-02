#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<float> prices {2.5, 4.25, 3.0, 10.0};
    vector<int> items {1, 1, 0, 3};

    float sum = 0.0;
    int sizeArray = (int) prices.size();
    for (int i = 0; i < sizeArray; i++) {
        if ( items[i] >= 0 && items[i] < sizeArray)
            sum += prices[items[i]];
    }
    cout.precision(2);
    cout << "Суммарная стоимость будет равна " << fixed << sum << endl;
    return 0;
}
