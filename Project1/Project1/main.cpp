//

#include <iostream>
#include "Matr3d.h"
using namespace std;
int main()
{
    Matr3Diag matrA, matrB;
    //! ���� ������
    matrA.input(3);
    matrB.input(3);
    cout << "MATRIX A :" << '\n';
    matrA.print();

    cout << "INSERT ELEMENTS OF MATRIX B" << '\n';
    cin >> matrB;
    cout << "MATRIX b :" << '\n';
    matrB.print();
    //! ������ ���� ��������
    cout << matrA.mult(matrB);
}

// ������ ���������: CTRL+F5 ��� ���� "�������" > "������ ��� �������"
// ������� ���������: F5 ��� ���� "�������" > "��������� �������"

// ������ �� ������ ������ 
//   1. � ���� ������������ ������� ����� ��������� ����� � ��������� ���.
//   2. � ���� Team Explorer ����� ������������ � ������� ���������� ��������.
//   3. � ���� "�������� ������" ����� ������������� �������� ������ ������ � ������ ���������.
//   4. � ���� "������ ������" ����� ������������� ������.
//   5. ��������������� �������� ������ ���� "������" > "�������� ����� �������", ����� ������� ����� ����, ��� "������" > "�������� ������������ �������", ����� �������� � ������ ������������ ����� ����.
//   6. ����� ����� ������� ���� ������ �����, �������� ������ ���� "����" > "�������" > "������" � �������� SLN-����.