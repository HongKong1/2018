#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include "first_lab_func.h"

int main()
{
    setlocale(LC_ALL, "Rus"); // ����������� ������������� ���������
    int variable_B = 0; // ���������� � ����������� ���������� B
    int variable_A = 0; // ���������� � ����������� ���������� A
    int variable_C = 0; // ���������� � ����������� ���������� C
    float result_Q = 0; // ���������� � ����������� ���������� ��� ������ ���������� ����� ���������
    int value_result = 0; // ��������� � ����������� ���������� ��� �������� �� ������������ �����
    printf("������ ��������� ��������� ���������� ���������: \n"); // ������ � �������������
    printf("\n\t(A^2) + (B^2)\n\t------------- + B!\n\t  B + (5^C)\n\n"); // ������ � �������������
    printf("������� ������������� �������� ��� ���������� 'A':\nA = "); // ������ � �������������
    do
    {
        value_result = scanf("%i", &variable_A);
        fflush(stdin);
        if (value_result == 1)
        {
           printf("��������� ���� ��������: %i\n", variable_A); // ������ � �������������
        }else
        {
           printf("��������� ���� �������� �� ������������� ������� ���������.\n��������� �������:\nA = "); // ������ � �������������
        }
    }while(value_result != 1);
    printf("������� ������������� �������� ��� ���������� 'B':\nB = "); // ������ � �������������
    do
    {
        value_result = scanf("%i", &variable_B);
        fflush(stdin);
        if (value_result == 1)
        {
           printf("��������� ���� ��������: %i\n", variable_B); // ������ � �������������
        }else
        {
           printf("��������� ���� �������� �� ������������� ������� ���������.\n��������� �������:\nB = "); // ������ � �������������
        }
    }while(value_result != 1);
    printf("������� ������������� �������� ��� ���������� 'C':\nC = "); // ������ � �������������
    do
    {
        value_result = scanf("%i", &variable_C);
        fflush(stdin);
        if (value_result == 1)
        {
           printf("��������� ���� ��������: %i\n", variable_C); // ������ � �������������
        }else
        {
           printf("��������� ���� �������� �� ������������� ������� ���������.\n��������� �������:\nC = "); // ������ � �������������
        }
    }while(value_result != 1);
    int output_factorial = factorial(variable_B); // ���������� � ����������� ���������� ��� ��������� �������� ����������
    int output_numerator = numerator(variable_A, variable_B);
    int output_denominator = denominator(variable_B, variable_C);
    result_Q = all_expression(output_factorial, output_numerator, output_denominator);
    printf("\n����������� ������� ��������� ��� ��������� ���� ������ (A = %i; B = %i; C = %i) ����� ����� ��������: %f\n", variable_A, variable_B, variable_C, result_Q); // ������ � �������������
    return 0;
}
