#include<iostream>
using namespace std;
int main()
{
	float numOne, numTwo, res;
	int choice;
	int a;
	printf("\nplese choose your language (1)=English  (2)=“ú–{Œê‚ÆEnglish \n\n");
	scanf_s("%d", &a);
	if (a == 1)
	{

		do
		{
			cout << "\n1. Addition (+) \n";
			cout << "2. Subtraction (-)\n";
			cout << "3. Multiplication (~)\n";
			cout << "4. Division@(€)\n";
			cout << "5. Exit „\n\n";
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
			cout << "\n(1)=>>. Addition ‘«‚µZ(+) \n";
			cout << "(2)=>>. Subtraction ˆø‚«Z(-)\n";
			cout << "(3)=>>. Multiplication Š|‚¯Z(~)\n";
			cout << "(4)=>>. Division@Š„‚èZ(€)\n";
			cout << "(5)=>>. Exit oŒû„\n\n";
			cout << "Enter Your Choice(1-5):\n ‚ ‚È‚½‚Ì‘I‘ğ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(1-5):\n\n";
			cin >> choice;
			if (choice >= 1 && choice <= 4)
			{
				cout << "\nEnter any two Numbers: \n”CˆÓ‚Ì‚Q‚Â‚Ì”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F@";
				cin >> numOne >> numTwo;
			}
			switch (choice)
			{
			case 1:
				res = numOne + numTwo;
				cout << "\nResult\n‹M•û‚Ì‘«‚µZ‚ÌŒ‹‰Ê‚Í = " << res;
				break;
			case 2:
				res = numOne - numTwo;
				cout << "\nResult\n‹M•û‚Ìˆø‚«Z‚ÌŒ‹‰Ê‚Í = " << res;
				break;
			case 3:
				res = numOne * numTwo;
				cout << "\nResult\n‹M•û‚ÌŠ|‚¯Z‚ÌŒ‹‰Ê‚Í = " << res;
				break;
			case 4:
				res = numOne / numTwo;
				cout << "\nResult\n‹M•û‚ÌŠ„‚èZ‚ÌŒ‹‰Ê‚Í = " << res;
				break;
			case 5:
				printf("\nthank you sir & welcome again...\n‚ ‚è‚ª‚Æ‚¤@‚²‚´‚¢‚Ü‚µ‚½B‚Ü‚½@‚æ‚±‚»‚¤c™\n");
				return 0;
			default:
				cout << "\n Sorry,'\u0444' this is a Wrong Choice!\n‚·‚İ‚Ü‚¹‚ñA‚±‚ê‚ÍŠÔˆá‚Á‚½‘I‘ğ‚Å‚·!";
				break;
			}
			cout << "\n------------------------\n";
		} while (choice != 5);
		cout << endl;
	}
	return 0;
}

