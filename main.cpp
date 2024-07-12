#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int hour{0}, min{0}, sec{0};

    // Input initial time
    cout << "Hour : ";
    cin >> hour;
    cout << "Minutes : ";
    cin >> min;
    cout << "Seconds : ";
    cin >> sec;

    // Validate the input time
    if (hour > 23 || hour < 0)
    {
        cout << "Wrong hour!\n";
        return 0;
    }
    else if (min > 59 || min < 0)
    {
        cout << "Wrong minutes!\n";
        return 0;
    }
    else if (sec > 59 || sec < 0)
    {
        cout << "Wrong seconds!\n";
        return 0;
    }

    // Main loop to update and display time
    while (true)
    {
        system("cls"); // Clear the console screen

        // Adjust time if seconds exceed 59
        if (sec > 59)
        {
            sec = 0;
            min++;
        }

        // Adjust time if minutes exceed 59
        if (min > 59)
        {
            min = 0;
            hour++;
        }

        // Adjust time if hours exceed 23
        if (hour > 23)
        {
            hour = 0;
        }

        // Display the current time
        cout << hour << ":" << min << ":" << sec;

        // Increment seconds
        sec++;

        // Pause execution for 1 second (999 milliseconds)
        Sleep(999);
    }

    return 0;
}
