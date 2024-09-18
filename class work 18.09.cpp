#include <iostream>
using namespace std;

int randint(int min, int max)
{
	return (rand() % (max - min + 1)) + min;
}


int main() {

	srand(time(nullptr));
	const int rows = 6, columns = 6;
	int matrix[rows][columns];
	double sum = 0;
	int max = matrix[rows][columns];
	int min = matrix[rows][columns];
	int min_mas[rows];
	int max_mas[rows];
	

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			matrix[i][j] = randint(-20, 20);
		}
	}

	for (int n = 0; n < rows; n++) {
		min_mas[n] = matrix[n][0];
	}
	for (int n = 0; n < rows; n++) {
		max_mas[n] = matrix[n][0];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << matrix[i][j] << "\t";
			sum += matrix[i][j];
			if (matrix[i][j] > max)
			{
				max = matrix[i][j];
			}
			if (matrix[i][j] < min)
			{
				min = matrix[i][j];
			}
			if (matrix[i][j] > max_mas[i])
			{
				max_mas[i] = matrix[i][j];
			}
			if (matrix[i][j] < min_mas[i])
			{
				min_mas[i] = matrix[i][j];
			}
		}
		cout << " | "; cout << "Suma: " << sum; cout << ", ";
		cout << "Seredne arifmetichne: " << double(sum / (rows * columns));
		cout << ", "; cout << "max = " << max_mas[i]; cout << ", "; cout << "min = " << min_mas[i] << endl;
		cout << endl;
	}
	cout << endl << endl << endl;
	cout << "Suma vsih elementiv: " << sum << endl;
	cout << "Seredne arifmetichne vsih elementiv: " << double(sum / (rows * columns)) << endl;
	cout << "max = " << max << endl;
	cout << "min = " << min;



	return 0;
}
