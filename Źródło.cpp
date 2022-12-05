using namespace std;
#include <iostream>
int main()
{
	int liczba = 0;
	cin >> liczba;
	if(liczba%2==0)
	{
		int suma1 = 0;
		for (int i = 0; i <= liczba; i+=2)
		{
			cout << i << endl;
			suma1 += i;
		}
		cout << suma1 << endl;
	}
	else
	{
		int suma2 = 0;
		for (int i = 0; i <= liczba; i ++ )
	    {
			cout << i << endl;
			suma2 += i;

	    }
		cout << suma2 << endl;
	}
	return 0;
}