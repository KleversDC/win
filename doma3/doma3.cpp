#include <iostream>
#include <iomanip>
using namespace std;
	//void ShowInfo()
	//{
	//	cout << "Some information about the program" << endl;
	//}
	//void ShowMenu(void(*p)())
	//{
	//	cout << "1. Create array" << endl;
	//	cout << "2. Show array" << endl;
	//	cout << "3. Delete array" << endl;
	//	cout << "4. Exit" << endl;
	//	p();
	//}
	//auto Sum(int a, int b) -> int
	//{
	//	return a + b;
	//}
	//string ShowSomething()
	//{
	//	return "Hello";
	//}
	//int main()
	//{
	//	auto abc = Sum(2, 3);
	//	cout << abc << endl;

//1
//int** addRow(int** matrix, int& rows, int cols, int* newRow) {
//	int** newMatrix = new int* [rows + 1];
//	for (int i = 0; i < rows; i++) {
//		newMatrix[i] = matrix[i];
//	}
//	newMatrix[rows] = newRow;
//	rows++;
//	return newMatrix;
//}
//2
//int** addRowToStart(int** matrix, int& rows, int cols, int* newRow) {
//	int** newMatrix = new int* [rows + 1];
//	newMatrix[0] = newRow;
//	for (int i = 0; i < rows; i++) {
//		newMatrix[i + 1] = matrix[i];
//	}
//	rows++;
//	return newMatrix;
//}

//3
//int** addRowAtPosition(int** matrix, int& rows, int cols, int* newRow, int position) {
//	int** newMatrix = new int* [rows + 1];
//	for (int i = 0; i < position; i++) {
//		newMatrix[i] = matrix[i];
//	}
//	newMatrix[position] = newRow;
//	for (int i = position; i < rows; i++) {
//		newMatrix[i + 1] = matrix[i];
//	}
//	rows++;
//	return newMatrix;
//}
//4
//int** removeRow(int** matrix, int& rows, int cols, int rowToDelete) {
//	int** newMatrix = new int* [rows - 1];
//	for (int i = 0; i < rowToDelete; i++) {
//		newMatrix[i] = matrix[i];
//	}
//	for (int i = rowToDelete + 1; i < rows; i++) {
//		newMatrix[i - 1] = matrix[i];
//	}
//	delete[] matrix[rowToDelete];
//	rows--;
//	return newMatrix;
//}

int main()
{
    //int rows = 3;
    //int cols = 3;
    //int** matrix = new int*[rows];
    //matrix[0] = new int[cols] {1, 2, 3};
    //matrix[1] = new int[cols] {4, 5, 6};
    //matrix[2] = new int[cols] {7, 8, 9};
    //cout << "Initial matrix:" << endl;
    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < cols; j++) {
    //        cout << matrix[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    //int rowToDelete = 1;
    //matrix = removeRow(matrix, rows, cols, rowToDelete);
    //cout << "Matrix after removing row " << rowToDelete << ":" << endl;
    //for (int i = 0; i < rows; i++) {
    //    for (int j = 0; j < cols; j++) {
    //        cout << matrix[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    //for (int i = 0; i < rows; i++) {
    //    delete[] matrix[i];
    //}
    //delete[] matrix;




	//3
	//int rows = 3;
	//int cols = 3;
	//int** matrix = new int* [rows];
	//matrix[0] = new int[cols] {1, 2, 3};
	//matrix[1] = new int[cols] {4, 5, 6};
	//matrix[2] = new int[cols] {7, 8, 9};
	//cout << "Initial matrix:" << endl;
	//for (int i = 0; i < rows; i++) {
	//	for (int j = 0; j < cols; j++) {
	//		cout << matrix[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	//int* newRow = new int[cols] {10, 11, 12};
	//int position = 1;
	//matrix = addRowAtPosition(matrix, rows, cols, newRow, position);
	//cout << "Matrix after adding new row at position " << position << ":" << endl;
	//for (int i = 0; i < rows; i++) {
	//	for (int j = 0; j < cols; j++) {
	//		cout << matrix[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	//for (int i = 0; i < rows; i++) {
	//	delete[] matrix[i];
	//}
	//delete[] matrix;







	//2
	//int rows = 3;
	//int cols = 3;
	//int** matrix = new int* [rows];
	//matrix[0] = new int[cols] {1, 2, 3};
	//matrix[1] = new int[cols] {4, 5, 6};
	//matrix[2] = new int[cols] {7, 8, 9};
	//cout << "Initial matrix:" << endl;
	//for (int i = 0; i < rows; i++) {
	//	for (int j = 0; j < cols; j++) {
	//		cout << matrix[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	//int* newRow = new int[cols] {10, 11, 12};
	//matrix = addRowToStart(matrix, rows, cols, newRow);
	//cout << "Matrix after adding new row to start:" << endl;
	//for (int i = 0; i < rows; i++) {
	//	for (int j = 0; j < cols; j++) {
	//		cout << matrix[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	//for (int i = 0; i < rows; i++) {
	//	delete[] matrix[i];
	//}
	//delete[] matrix;











	//1
	//int rows = 3;
	//int cols = 3;
	//int** matrix = new int* [rows];
	//matrix[0] = new int[cols] {1, 2, 3};
	//matrix[1] = new int[cols] {4, 5, 6};
	//matrix[2] = new int[cols] {7, 8, 9};
	//cout << "Initial matrix:" << endl;
	//for (int i = 0; i < rows; i++) {
	//	for (int j = 0; j < cols; j++) {
	//		cout << matrix[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	//int* newRow = new int[cols] {10, 11, 12};
	//matrix = addRow(matrix, rows, cols, newRow);
	//cout << "Matrix after adding new row:" << endl;
	//for (int i = 0; i < rows; i++) {
	//	for (int j = 0; j < cols; j++) {
	//		cout << matrix[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	//for (int i = 0; i < rows; i++) {
	//	delete[] matrix[i];
	//}
	//delete[] matrix;






		//cout << ShowSomething << endl;
		/*void(* ptr)() = ShowInfo;
		cout << ptr << endl;
		(*ptr)();

		int(*ptrSum)(int, int);
		ptrSum = Sum;
		cout << ptrSum(2, 3) << endl;*/
		/*enum myBoolean {FALSE, TRUE} b;
		enum signal { OFF, ON } a = ON;
		enum answer {YES, NO, MAYBE =-1} c;

		int i, j = true;
		a = OFF;
		i = a;
		b = FALSE;*/


		/*enum Seasons { WINTER = 'a', SPRING, SUMMER, AUTUMN };

		cout << WINTER << endl;
		cout << SPRING << endl;
		cout << SUMMER << endl;*/
		/*char choice;
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case WINTER:
			cout << "Winter" << endl;
			break;
		case SPRING:
			cout << "Spring" << endl;
			break;
		case SUMMER:
			cout << "Summer" << endl;
			break;
		case AUTUMN:
			cout << "Autumn" << endl;
			break;
		default:
			break;
		}*/






    //srand(time(NULL));
    //int count;
    //cout << "enter count of students you want to create: ";
    //cin >> count;

    //int** parr = new int* [count];
    //int* sizes = new int[count];

    //for (int i = 0; i < count; i++)
    //{
    //    cout << "enter size of marks for student " << i + 1;
    //    cin >> sizes[i];
    //    parr[i] = new int[sizes[i]];
    //}

    //for (int i = 0; i < count; i++)
    //{
    //    for (int j = 0; j < sizes[i]; j++)
    //    {
    //        parr[i][j] = rand() % 12;
    //    }
    //}

    //for (int i = 0; i < count; i++)
    //{
    //    cout << "marks for student " << i + 1 << ": ";
    //    for (int j = 0; j < sizes[i]; j++)
    //    {
    //        cout << setw(2) << parr[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    //cout << endl;

    //for (int i = 0; i < count; i++)
    //{
    //    delete[] parr[i];
    //}
    //delete[] parr;
    //delete[] sizes;
}

