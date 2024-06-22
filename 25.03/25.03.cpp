#include <iostream>
#include <WIndows.h>
#include <algorithm>
#include <vector>

bool leapyear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Days(int year1, int month1, int day1, int year2, int month2, int day2)
{
    int days = 0;
    int daysinmonth[12]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    while (month1 != month2 || day1 != day2)
    {


        if (month1 == month2)
        {
            days = day2 - day1;
        }
        else
        {
            for (int i = day1; i < daysinmonth[month1 - 1]; i++)
            {
                days++;
            }
            while (month1 != month2 - 1)
            {
                month1++;
                if (month1 > 12)
                {
                    month1 = 1;
                    year1++;
                }
                if (leapyear(year1))
                {
                    daysinmonth[1] = 29;
                }
                days += daysinmonth[month1 - 1];

            }
            for (int i = 0; i < day2; i++)
            {
                days++;
            }
        }

        break;


    }
        

        for (int i = year1; i < year2; i++)
        {
            if (leapyear(i))
            {
                days += 366;
            }
            else
            {
                days += 365;
            }


        }
        
        
        
    
    return days;
}



float ArithmeticMean(float numbers[], int size)
{
    float sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }

    return sum / size;
}


void CountOfElements(float numbers2[], int size)
{
    int negative = 0, positive = 0, null = 0;

    for (int i = 0; i < size; i++)
    {
        if (numbers2[i] == 0)
        {
            null++;
        }
        else if (numbers2[i] < 0)
        {
            negative++;
        }
        else if (numbers2[i] > 0)
        {
            positive++;
        }
    }

    std::cout << "\nкол-во положительных элементов: " << positive;
    std::cout << "\nкол-во отрицательных элементов: " << negative;
    std::cout << "\nкол-во нулевых элеметов: " << null;

}

void MatrixInitialization(int matrix[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrix[i][j] = rand() % 10;
        }
    }
}

void MatrixInitialization(double matrix[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            matrix[i][j] = rand() % 10;
        }
    }
}

void PrintMatrix(int matrix[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void PrintMatrix(double matrix[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int Min(int matrix[5][5])
{
    int min = matrix[0][0];
    for (int i = 1; i < 5; i++)
    {
        if (matrix[i][i] < min)
        {
            min = matrix[i][i];
        }
    }

    return min;
}

int Max(int matrix[5][5])
{
    int max = matrix[0][0];
    for (int i = 1; i < 5; i++)
    {
        if (matrix[i][i] > max)
        {
            max = matrix[i][i];
        }
    }

    return max;
}

double Min(double matrix[5][5])
{
    double min = matrix[0][0];
    for (int i = 1; i < 5; i++)
    {
        if (matrix[i][i] < min)
        {
            min = matrix[i][i];
        }
    }

    return min;
}

double Max(double matrix[5][5])
{
    double max = matrix[0][0];
    for (int i = 1; i < 5; i++)
    {
        if (matrix[i][i] > max)
        {
            max = matrix[i][i];
        }
    }

    return max;
}

void Sort(int matrix[5][5])
{
    for (int a = 0; a < 5; a++)
    {
        int arr[5];
        for (int j = 0; j < 5; j++)
        {
            arr[j] = matrix[a][j];
        }
        int temp;
        for (int i = 0; i < 5 - 1; i++) {
            for (int j = 0; j < 5 - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        for (int j = 0; j < 5; j++)
        {
            matrix[a][j] = arr[j];
        }
        for (int j = 0; j < 5; j++)
        {
            std::cout << matrix[a][j] << " ";
        }

        std::cout << "\n";
    }
}

void Sort(double matrix[5][5])
{
    for (int a = 0; a < 5; a++)
    {
        double arr[5];
        for (int j = 0; j < 5; j++)
        {
            arr[j] = matrix[a][j];
        }
        double temp;
        for (int i = 0; i < 5 - 1; i++) {
            for (int j = 0; j < 5 - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        for (int j = 0; j < 5; j++)
        {
            matrix[a][j] = arr[j];
        }
        for (int j = 0; j < 5; j++)
        {
            std::cout << matrix[a][j] << " ";
        }

        std::cout << "\n";
    }
}

int FindDel(int num1, int num2)
{
    int del = num1;
    while (num2 % del != 0 || num1 % del != 0)
    {
        del--;
    }
    return del;
}

bool isnumberin(int k, int botnumberarr[4])
{
    for (int i = 0; i < 4; i++)
    {
        if (k == botnumberarr[i])
        {
            return true;
        }
    }
    return false;
}



void game(int botnumberarr[4], int usernumber, int count)
{
    int cows = 0, bulls = 0;
    usernumber = usernumber * 10;
    
    int usernumberarr[4];
    for (int i = 4; i > 0; i--)
    {
        usernumber = usernumber / 10;
        usernumberarr[i - 1] = usernumber % 10;
    }
    
    /*for (int i = 0; i < 4; i++)
    {
        std::cout << botnumberarr[i];
    }
    std::cout << '\n';
    for (int i = 0; i < 4; i++)
    {
        std::cout << usernumberarr[i];
    }*/

    for (int i = 0; i < 5; i++)
    {
        if (isnumberin(usernumberarr[i], botnumberarr))
        {
            bulls++;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (botnumberarr[i] == usernumberarr[i])
        {
            cows++;
        }
    }
    
    std::cout << "\nбыки: " << bulls;
    std::cout << "\nкоровы: " << cows;

    if (cows < 4)
    {
        count++;
        int usnumber;
        std::cout << "\nвведите число : ";
        std::cin >> usnumber;
        game(botnumberarr, usnumber, count);
        
    }
    else
    {
        std::cout << "\nкол-во попыток: " << count;
    }
    
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    //1
    std::cout << "1)\n";
    int year1, month1, day1, year2, month2, day2;
    std::cout << "Введите год 1: ";
    std::cin >> year1;
    std::cout << "Введите месяц 1: ";
    std::cin >> month1;
    std::cout << "Введите день 1: ";
    std::cin >> day1;
    std::cout << "Введите год 2: ";
    std::cin >> year2;
    std::cout << "Введите месяц 2: ";
    std::cin >> month2;
    std::cout << "Введите день 2: ";
    std::cin >> day2;

    std::cout << Days(year1, month1, day1, year2, month2, day2);

    //2

    int size;
    std::cout << "\n2)\n";
    std::cout << "Введите количество элементов массива: ";
    std::cin >> size;

    float* numbers = new float[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "Введите элемент массива: ";
        std::cin >> numbers[i];
    }
    std::cout << ArithmeticMean(numbers, size);
    delete[]numbers;

    //3

    int size1;
    std::cout << "\n3)\n";
    std::cout << "Введите кол-во элементов массива: ";
    std::cin >> size1;

    float* numbers2 = new float[size1];

    for (int i = 0; i < size1; i++)
    {
        std::cout << "Введите элемент массива: ";
        std::cin >> numbers2[i];
    }

    CountOfElements(numbers2, size);

    //4

    
    std::cout << "\n4)\n";
    int matrix[5][5];

    MatrixInitialization(matrix);
    PrintMatrix(matrix);
    std::cout << "\nmin: " << Min(matrix) << "\nmax: " << Max(matrix) << "\n\n";
    Sort(matrix);

    //5
    std::cout << "\n5)\n";
    int num1, num2;
    std::cout << "Введите 2 числа (первое число должно быть меньше второго)\nчисло 1: ";
    std::cin >> num1;
    std::cout << "\nчисло 2: ";
    std::cin >> num2;
    std::cout << "\nНаибольший общий делитель: " << FindDel(num1, num2);

    //6
    std::cout << "\n6)\n";
    int botnumber = 1000 + rand() % 10000, usernumber, count = 0;
    std::cout << "Введите число: ";
    std::cin >> usernumber;

    int botnumberarr[4];
    botnumber = botnumber * 10;
    for (int i = 4; i > 0; i--)
    {
        botnumber = botnumber / 10;
        botnumberarr[i - 1] = botnumber % 10;
    }
    

    game(botnumberarr, usernumber, count);


    return 0;
}

