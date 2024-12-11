#include <iostream>
using namespace std;

// Fungsi untuk menghitung dan menampilkan deret Fibonacci
void fibonacci(int n) {
    long long a = 0, b = 1, next;

    // Jika n <= 0, tidak ada output
    if (n <= 0) {
        cout << "Masukkan angka lebih besar dari 0!" << endl;
        return;
    }

    cout << "Deret Fibonacci hingga " << n << " angka: ";

    // Menampilkan angka pertama dan kedua
    if (n >= 1) cout << a << " ";
    if (n >= 2) cout << b << " ";

    // Menghitung dan menampilkan deret Fibonacci
    for (int i = 3; i <= n; i++) {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }

    cout << endl;
}

int main() {
    int n;

    // Input jumlah angka deret Fibonacci
    cout << "Masukkan jumlah angka deret Fibonacci: ";
    cin >> n;

    // Panggil fungsi fibonacci
    fibonacci(n);

    return 0;
}
