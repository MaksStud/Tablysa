#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 100; // максимальний розмір таблиці

class Table {
private:
    string keys[MAX_SIZE];  // масив ключів
    int values[MAX_SIZE];   // масив значень
    int size;               // поточний розмір таблиці

public:
    // додавання пари ключ-значення до таблиці
    void add(string key, int value) {
        if (size < MAX_SIZE) {
            keys[size] = key;
            values[size] = value;
            size++;
        }
        else {
            cout << "Таблиця заповнена!" << endl;
        }
    }

    // отримання значення за ключем
    int get(string key) {
        for (int i = 0; i < size; i++) {
            if (keys[i] == key) {
                return values[i];
            }
        }
        cout << "Значення не знайдено!" << endl;
        return -1;
    }

    // видалення значення за ключем
    void remove(string key) {
        int index = -1;
        for (int i = 0; i < size; i++) {
            if (keys[i] == key) {
                index = i;
                break;
            }
        }
        if (index == -1) {
            cout << "Значення не знайдено!" << endl;
        }
        else {
            for (int i = index; i < size - 1; i++) {
                keys[i] = keys[i + 1];
                values[i] = values[i + 1];
            }
            size--;
        }
    }

    // виведення всіх значень таблиці
    void print() {
        cout << "Ключі: ";
        for (int i = 0; i < size; i++) {
            cout << keys[i] << " ";
        }
        cout << endl;
        cout << "Значення: ";
        for (int i = 0; i < size; i++) {
            cout << values[i] << " ";
        }
        cout << endl;
    }

    Table() {
        size = 0;
    }
};
