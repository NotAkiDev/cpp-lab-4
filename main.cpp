#include <iostream>

using namespace std;


int main() {
    unsigned long n;
    cin >> n;
    unsigned long sum = (n * (n + 1) / 2);

    /*
     * Если сумма чисел от 1 -> n делится на 2, то мини порции можно разделить поровну
     */

    if (sum % 2 == 0) {
        cout << "YES" << endl;

        unsigned long left_sum = 0;
        unsigned long left_arr[n];
        unsigned long right_arr[n];

        unsigned long indexer_left = 0;
        unsigned long indexer_right = 0;

        for (unsigned long i = n; i > 0; --i) {
            if (left_sum + i <= sum / 2) {
                left_arr[indexer_left] = i;
                indexer_left += 1;
                left_sum += i;
            } else {
                right_arr[indexer_right] = i;
                indexer_right += 1;
            }
        }
        cout << "Мини порции Пети: " << indexer_left << endl;
        for (unsigned long i = 0; i < indexer_left; ++i){
            cout << left_arr[i] << " ";
        }
        cout << endl;

        cout << "Мини порции Маши: " << indexer_right << endl;
        for (unsigned long i = 0; i < indexer_right; ++i){
            cout << right_arr[i] << " ";
        }
    } else
        cout << "NO" << endl;


    return 0;
}
