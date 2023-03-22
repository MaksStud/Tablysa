#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 100; // ������������ ����� �������

class Table {
private:
    string keys[MAX_SIZE];  // ����� ������
    int values[MAX_SIZE];   // ����� �������
    int size;               // �������� ����� �������

public:
    // ��������� ���� ����-�������� �� �������
    void add(string key, int value) {
        if (size < MAX_SIZE) {
            keys[size] = key;
            values[size] = value;
            size++;
        }
        else {
            cout << "������� ���������!" << endl;
        }
    }

    // ��������� �������� �� ������
    int get(string key) {
        for (int i = 0; i < size; i++) {
            if (keys[i] == key) {
                return values[i];
            }
        }
        cout << "�������� �� ��������!" << endl;
        return -1;
    }

    // ��������� �������� �� ������
    void remove(string key) {
        int index = -1;
        for (int i = 0; i < size; i++) {
            if (keys[i] == key) {
                index = i;
                break;
            }
        }
        if (index == -1) {
            cout << "�������� �� ��������!" << endl;
        }
        else {
            for (int i = index; i < size - 1; i++) {
                keys[i] = keys[i + 1];
                values[i] = values[i + 1];
            }
            size--;
        }
    }

    // ��������� ��� ������� �������
    void print() {
        cout << "�����: ";
        for (int i = 0; i < size; i++) {
            cout << keys[i] << " ";
        }
        cout << endl;
        cout << "��������: ";
        for (int i = 0; i < size; i++) {
            cout << values[i] << " ";
        }
        cout << endl;
    }

    Table() {
        size = 0;
    }
};
