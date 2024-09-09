#include <iostream>
using namespace std;

int main()
{
	/*
	int end;
	cout << "Vedit max diapozon: ";
	cin >> end;
	end++;
	for (int i = 0; i < end; i++)
	{
		cout << i << "\t";
	}
	*/
	int start, end, c;
	cout << "Vedit min diapozon: ";
	cin >> start;
	cout << "Vedit max diapozon: ";
	cin >> end;
	end++;
	if (start > end)
	{
		end--;
		end--;
		for (int g = start, h = end; g > h; g--)
		{
			cout << g << " ";
		}
		cout << "\n";
		for (int i = start, o = end; i > o; i--)
		{
			if (i % 2 == 0)
			{
				cout << i << " ";
			}
		}
		cout << "\n";
		for (int k = start, l = end; k > l; k--)
		{
			if (k % 2 != 0)
			{
				cout << k << " ";
			}
		}
		cout << "\n";
		for (int n = start, m = end; n > m; n--)
		{
			if (n % 7 == 0)
			{
				cout << n << " ";
			}
		}
	}
	if (start < end)
	{
		for (int g = start, h = end; g < h; g++)
		{
			cout << g << " ";
		}
		for (int i = start, o = end; i < o; i++)
		{
			if (i % 2 == 0)
			{
				cout << i << " ";
			}
		}
		cout << "\n";
		for (int k = start, l = end; k < l; k++)
		{
			if (k % 2 != 0)
			{
				cout << k << " ";
			}
		}
		cout << "\n";
		for (int n = start, m = end; n < m; n++)
		{
			if (n % 7 == 0)
			{
				cout << n << " ";
			}
		}
	}

	return 0;
}
