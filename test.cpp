#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    setlocale(0, "");
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    // объявление массивов, на которых будут тестироваться функции
    int arr_int[100];
    double arr_double[100];
    int size_int, size_double; // данные скрыты
     // тестируем функцию fillArray
    fillArray(arr_int, size_int);
    fout << "Массив целых чисел, заполненный нулями:" << endl;
    for (int i = 0; i < size_int; i++)
        fout << arr_int[i] << " ";
    fout << endl;
    int x_int; // данные скрыты
    fillArray(arr_int, size_int, x_int);
    fout << "Массив целых чисел, заполненный значением x_int:" << endl;
    for (int i = 0; i < size_int; i++)
        fout << arr_int[i] << " ";
    fout << endl;
    fillArray(arr_double, size_double);
    fout << "Массив вещественных чисел, заполненный нулями:" << endl;
    for (int i = 0; i < size_double; i++)
        fout << arr_double[i] << " ";
    fout << endl;
    int x_double; // данные скрыты
    fillArray(arr_double, size_double, x_double);
    fout << "Массив вещественных чисел, заполненный значением x_double:" << endl;
    for (int i = 0; i < size_double; i++)
        fout << arr_double[i] << " ";
    fout << endl;
    // тестируем функцию arrayCopy
    int arr_int_copy[100];
    double arr_double_copy[100];
    int size_int_copy, size_double_copy; // данные скрыты
    arrayCopy(arr_int, size_int, arr_int_copy);
    fout << "Содержимое копии массива целых чисел:" << endl;
    printArray(arr_int_copy, size_int_copy, fout);
    arrayCopy(arr_double, size_double, arr_double_copy);
    fout << "Содержимое копии массива вещественных чисел:" << endl;
    printArray(arr_double_copy, size_double_copy, fout);
    // тестируем функцию combineArrays
    int arr_int_new[100]; // данные скрыты
    double arr_double_new[100]; // данные скрыты
    int size_int_new, size_double_new; // данные скрыты
    combineArrays(arr_int_new, size_int_new, arr_int, size_int);
    fout << "Содержимое двух объединенных массивов целых чисел:" << endl;
    printArray(arr_int_new, size_int_new, fout);
    combineArrays(arr_double_new, size_double_new, arr_double, size_double);
    fout << "Содержимое двух объединенных массивов вещественных чисел:" << endl;
    printArray(arr_double_new, size_double_new, fout);
    // тестируем функцию reverseArray
    size_int_copy = size_int;
    arrayCopy(arr_int, size_int, arr_int_copy);
    size_double_copy = size_double;
    arrayCopy(arr_double, size_double, arr_double_copy);
    reverseArray(arr_int_copy, size_int_copy);
    fout << "Содержимое перевернутного массива целых чисел:" << endl;
    printArray(arr_int_copy, size_int_copy, fout);
    reverseArray(arr_double_copy, size_double_copy);
    fout << "Содержимое перевернутного массива вещественных чисел:" << endl;
    printArray(arr_double_copy, size_double_copy, fout);
    // тестируем функцию arraySum
    fout << "Сумма элементов массива целых чисел: ";
    fout << arraySum(arr_int, size_int) << endl;
    fout << "Сумма элементов массива вещественных чисел: ";
    fout << arraySum(arr_double, size_double) << endl;
    // тестируем функцию arrayProduct
    fout << "Произведение элементов массива целых чисел: ";
    fout << arrayProduct(arr_int, size_int) << endl;
    fout << "Произведение элементов массива вещественных чисел: ";
    fout << fixed << setprecision(2) << arrayProduct(arr_double, size_double) << endl;
    // тестируем функцию arrayMean
    fout << "Среднее арифметическое элементов массива целых чисел: ";
    fout << fixed << setprecision(2) << arrayMean(arr_int, size_int) << endl;
    fout << "Среднее арифметическое элементов массива вещественных чисел: ";
    fout << fixed << setprecision(2) << arrayMean(arr_double, size_double) << endl;
    // тестируем функцию arrayMean
    fout << "Индекс первого минимума массива целых чисел: ";
    fout << arrayMin(arr_int, size_int) << endl;
    fout << "Индекс первого минимума массива вещественных чисел: ";
    fout << arrayMin(arr_double, size_double) << endl;
    fout << "Индекс последнего минимума массива целых чисел: ";
    fout << arrayMin(arr_int, size_int, false) << endl;
    fout << "Индекс последнего минимума массива вещественных чисел: ";
    fout << arrayMin(arr_double, size_double, false) << endl;
    // тестируем функцию arrayMax
    fout << "Индекс первого максимума массива целых чисел: ";
    fout << arrayMax(arr_int, size_int) << endl;
    fout << "Индекс первого максимума массива вещественных чисел: ";
    fout << arrayMax(arr_double, size_double) << endl;
    fout << "Индекс последнего максимума массива целых чисел: ";
    fout << arrayMax(arr_int, size_int, false) << endl;
    fout << "Индекс последнего максимума массива вещественных чисел: ";
    fout << arrayMax(arr_double, size_double, false) << endl;
    // тестируем функцию arrayFind
    int int_value; // данные скрыты
    double double_value; // данные скрыты
    int index_int, index_double; // данные скрыты
    fout << "Индекс первого вхождения значения int_value при поиске с начала массива целых чисел: ";
    fout << arrayFind(arr_int, size_int, int_value) << endl; 
    fout << "Индекс первого вхождения значения double_value при поиске с начала массива вещественных чисел: ";
    fout << arrayFind(arr_double, size_double, double_value) << endl; 
    fout << "Индекс первого вхождения значения int_value при поиске начиная с index_int индекса: ";
    fout << arrayFind(arr_int, size_int, int_value, index_int) << endl;
    fout << "Индекс первого вхождения значения double_value при поиске начиная с index_double индекса: ";
    fout << arrayFind(arr_double, size_double, double_value, index_double) << endl;
    // тестируем функцию insertInArray
    size_int_copy = size_int;
    arrayCopy(arr_int, size_int, arr_int_copy);
    size_double_copy = size_double;
    arrayCopy(arr_double, size_double, arr_double_copy);
    int insert_value_int; // данные скрыты
    double insert_value_double; // данные скрыты
    int pos_int, pos_double; // данные скрыты
    insertInArray(arr_int_copy, size_int_copy, pos_int, insert_value_int);
    fout << "Массив целых чисел после вставки значения insert_value_int на позицию pos_int:" << endl;
    printArray(arr_int_copy, size_int_copy, fout);
    insertInArray(arr_double_copy, size_double_copy, pos_double, insert_value_double);
    fout << "Массив вещественных чисел после вставки значения insert_value_double на позицию pos_double:" << endl;
    printArray(arr_double_copy, size_double_copy, fout);
    // тестируем функцию eraseFromArray
    size_int_copy = size_int;
    arrayCopy(arr_int, size_int, arr_int_copy);
    size_double_copy = size_double;
    arrayCopy(arr_double, size_double, arr_double_copy);
    // инициализация переменных pos_int, pos_double новыми значениями
    fout << "Массив целых чисел после удаления значения с индексом pos_int:" << endl;
    eraseFromArray(arr_int_copy, size_int_copy, pos_int);
    printArray(arr_int_copy, size_int_copy, fout);
    fout << "Массив вещественных чисел после удаления значения с индексом pos_double:" << endl;
    eraseFromArray(arr_double_copy, size_double_copy, pos_double);
    printArray(arr_double_copy, size_double_copy, fout);
    // тестируем функцию sortArray
    size_int_copy = size_int;
    arrayCopy(arr_int, size_int, arr_int_copy);
    size_double_copy = size_double;
    arrayCopy(arr_double, size_double, arr_double_copy);
    fout << "Массив целых чисел, отсортированный по возрастанию:" << endl;
    sortArray(arr_int, size_int);
    printArray(arr_int, size_int, fout);
    fout << "Массив вещественных чисел, отсортированный по возрастанию:" << endl;
    sortArray(arr_double, size_double);
    printArray(arr_double, size_double, fout);
    fout << "Массив целых чисел, отсортированный по убыванию:" << endl;
    sortArray(arr_int_copy, size_int_copy, false);
    printArray(arr_int_copy, size_int_copy, fout);
    fout << "Массив вещественных чисел, отсортированный по убыванию:" << endl;
    sortArray(arr_double_copy, size_double_copy, false);
    printArray(arr_double_copy, size_double_copy, fout);
    
    // ДОПОЛНИТЕЛЬНЫЕ ЗАДАЧИ
    // объввление массивов, на которых будут тестироваться функции
    int matrix1[100][100]; // данные скрыты
    int matrix2[100][100]; // данные скрыты
    // тестируем функцию matrixMultiplier
    int matrix_mult[100][100]; // данные скрыты
    int row_matrix1, column_matrix1, row_matrix2, column_matrix2; // данные скрыты
    int row_matrix_mult, column_matrix_mult; // данные скрыты
    matrixMultiplier(matrix1, row_matrix1, column_matrix1,
                     matrix2, row_matrix2, column_matrix2,
                     matrix_mult);
    fout << "Результат перемножения двух матриц целых чисел: " << endl;
    for (int i = 0; i < row_matrix_mult; i++) {
        for (int j = 0; j < column_matrix_mult; j++)
            fout << matrix_mult[i][j] << " ";
        fout << endl;
    }
    // тестируем функцию minSumArray
    fout << "Индекс строки двумерного массива целых чисел с минимальной суммой: ";
    fout << minSumArray(matrix1, row_matrix1, column_matrix1) << endl;
    fout << "Индекс столбца двумерного массива целых чисел с минимальной суммой: ";
    fout << minSumArray(matrix1, row_matrix1, column_matrix1, false) << endl;
    // тестируем функцию isArraySymmetrical
    fout << "Проверка массива на симметричность: (1 - симметричный, 0 - не симметричный)" << endl;
    fout << isArraySymmetrical(matrix2, row_matrix2);
    fin.close();
    fout.close();
    return 0;
}