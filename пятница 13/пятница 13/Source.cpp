#include <iostream>
using namespace std;

int howManyFridays(int beginYearShiftx, int finishYearShiftx)
{
    int numbOfFrx = 0;
    int arrOfFridays[28][2] = {
    {1920, 2},
    {1921, 1},
    {1922, 2},
    {1923, 2},
    {1924, 1},
    {1925, 3},
    {1926, 1},
    {1927, 1},
    {1928, 3},
    {1929, 2},
    {1930, 1},
    {1931, 3},
    {1932, 1}, 
    {1933, 2},
    {1934, 2},
    {1935, 2},
    {1936, 2},
    {1937, 1},
    {1938, 1},
    {1939, 2},
    {1940, 2},
    {1941, 1},
    {1942, 3},
    {1943, 1},
    {1944, 1},
    {1945, 2},
    {1946, 2},
    {1947, 1}
    };
    int shiftLength = finishYearShiftx - beginYearShiftx;
    int i = ((beginYearShiftx - 1920) % 28);
    for (int k = 0; k <= shiftLength; k++)
    {
        numbOfFrx = numbOfFrx + arrOfFridays[i][1];
        i++;
        if (i == 28) i = 0;
    }
    return numbOfFrx;
 }

int main()
{
    int numbOfFr = 0;
    int numberOfShifts;
    cout << "Enter the number of shifts Santa was working in town: ";
    cin >> numberOfShifts;
    int beginYearShift;
    int finishYearShift;
    cout << "Enter years from and to which he was working then: ";
    for (int i = 0; i < numberOfShifts; i++)
    {
        cin >> beginYearShift >> finishYearShift;
        numbOfFr = numbOfFr + howManyFridays(beginYearShift, finishYearShift);
    }
    cout << "This is how many fridays the 13th Santa was in town " + numbOfFr;
	return 0;
}

