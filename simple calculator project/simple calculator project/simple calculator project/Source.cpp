#include<iostream>
using namespace std;
int main()
{
	float numOne, numTwo, res;
	int choice;
	int a;
	printf("\nplese choose your language (1)=English  (2)=日本語とEnglish \n\n");
	scanf_s("%d", &a);
	if (a == 1)
	{

		do
		{
			cout << "\n1. Addition (+) \n";
			cout << "2. Subtraction (-)\n";
			cout << "3. Multiplication (×)\n";
			cout << "4. Division　(÷)\n";
			cout << "5. Exit ＝＞\n\n";
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
			cout << "\n(1)=>>. Addition 足し算(+) \n";
			cout << "(2)=>>. Subtraction 引き算(-)\n";
			cout << "(3)=>>. Multiplication 掛け算(×)\n";
			cout << "(4)=>>. Division　割り算(÷)\n";
			cout << "(5)=>>. Exit 出口＝＞\n\n";
			cout << "Enter Your Choice(1-5):\n あなたの選択を入力してください(1-5):\n\n";
			cin >> choice;
			if (choice >= 1 && choice <= 4)
			{
				cout << "\nEnter any two Numbers: \n任意の２つの数字を入力してください：　";
				cin >> numOne >> numTwo;
			}
			switch (choice)
			{
			case 1:
				res = numOne + numTwo;
				cout << "\nResult\n貴方の足し算の結果は = " << res;
				break;
			case 2:
				res = numOne - numTwo;
				cout << "\nResult\n貴方の引き算の結果は = " << res;
				break;
			case 3:
				res = numOne * numTwo;
				cout << "\nResult\n貴方の掛け算の結果は = " << res;
				break;
			case 4:
				res = numOne / numTwo;
				cout << "\nResult\n貴方の割り算の結果は = " << res;
				break;
			case 5:
				printf("\nthank you sir & welcome again...\nありがとう　ございました。また　よこそう…☆\n");
				return 0;
			default:
				cout << "\n Sorry,'\u0444' this is a Wrong Choice!\nすみません、これは間違った選択です!";
				break;
			}
			cout << "\n------------------------\n";
		} while (choice != 5);
		cout << endl;
	}
	return 0;
}

