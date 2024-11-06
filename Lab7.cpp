#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
        int d;
        cout << "Введіть розмір масиву: ";
        cin >> d;
        int* arr = new int[d];
        cout << "Введіть елементи масиву:" << endl;
        for (int i = 0; i < d; i++) {
            cin >> arr[i];
        }
        int* evenArr = new int[d]; 
        int* oddArr = new int[d];  
        int evenCount = 0; 
        int oddCount = 0;  
        for (int i = 0; i < d; i++) {
            if (arr[i] % 2 == 0) {
                evenArr[evenCount] = arr[i];
                evenCount++; 
            }
            else {
                oddArr[oddCount] = arr[i];
                oddCount++; 
            }
        }
        cout << "Парні числа: ";
        for (int i = 0; i < evenCount; i++) {
            cout << evenArr[i] << " ";
        }
        cout << endl;
        cout << "Непарні числа: ";
        for (int i = 0; i < oddCount; i++) {
            cout << oddArr[i] << " ";
        }
        cout << endl;
        delete[] arr;
        delete[] evenArr;
        delete[] oddArr;
        return 0;
    }
   



	
