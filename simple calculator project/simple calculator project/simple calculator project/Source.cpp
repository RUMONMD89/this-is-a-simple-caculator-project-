#include<iostream>
using namespace std;
int main()
{
	float numOne, numTwo, res;
	int choice;
	int a;
	printf("\nplese choose your language (1)=English  (2)=���{���English \n\n");
	scanf_s("%d", &a);
	if (a == 1)
	{

		do
		{
			cout << "\n1. Addition (+) \n";
			cout << "2. Subtraction (-)\n";
			cout << "3. Multiplication (�~)\n";
			cout << "4. Division�@(��)\n";
			cout << "5. Exit ����\n\n";
			cout << "Enter Your Choice(1-5): ";
			cin >> choice;
			if (choice >= 1 && choice <= 4)
			{
				cout << "\nEnter any two Numbers: ";
				cin >> numOne >> numTwo;
			}
			switch (choice)
			{
			case 1:
				res = numOne + numTwo;
				cout << "\nResult = " << res;
				break;
			case 2:
				res = numOne - numTwo;
				cout << "\nResult = " << res;
				break;
			case 3:
				res = numOne * numTwo;
				cout << "\nResult = " << res;
				break;
			case 4:
				res = numOne / numTwo;
				cout << "\nResult = " << res;
				break;
			case 5:
				printf("\nthank you sir\n welcome again\n");
				return 0;
			default:
				cout << "\n Sorry,'\u0444' this is a Wrong Choice!";
				break;
			}
			cout << "\n------------------------\n";
		} while (choice != 5);
		cout << endl;
	}
	else if (a == 2) {
		do
		{
			cout << "\n(1)=>>. Addition �����Z(+) \n";
			cout << "(2)=>>. Subtraction �����Z(-)\n";
			cout << "(3)=>>. Multiplication �|���Z(�~)\n";
			cout << "(4)=>>. Division�@����Z(��)\n";
			cout << "(5)=>>. Exit �o������\n\n";
			cout << "Enter Your Choice(1-5):\n ���Ȃ��̑I������͂��Ă�������(1-5):\n\n";
			cin >> choice;
			if (choice >= 1 && choice <= 4)
			{
				cout << "\nEnter any two Numbers: \n�C�ӂ̂Q�̐�������͂��Ă��������F�@";
				cin >> numOne >> numTwo;
			}
			switch (choice)
			{
			case 1:
				res = numOne + numTwo;
				cout << "\nResult\n�M���̑����Z�̌��ʂ� = " << res;
				break;
			case 2:
				res = numOne - numTwo;
				cout << "\nResult\n�M���̈����Z�̌��ʂ� = " << res;
				break;
			case 3:
				res = numOne * numTwo;
				cout << "\nResult\n�M���̊|���Z�̌��ʂ� = " << res;
				break;
			case 4:
				res = numOne / numTwo;
				cout << "\nResult\n�M���̊���Z�̌��ʂ� = " << res;
				break;
			case 5:
				printf("\nthank you sir & welcome again...\n���肪�Ƃ��@�������܂����B�܂��@�悱�����c��\n");
				return 0;
			default:
				cout << "\n Sorry,'\u0444' this is a Wrong Choice!\n���݂܂���A����͊Ԉ�����I���ł�!";
				break;
			}
			cout << "\n------------------------\n";
		} while (choice != 5);
		cout << endl;
	}
	return 0;
}

