Digital Clock Simulation
This C++ program simulates a digital clock that starts from a given time and continuously updates every second.

Features
Input Validation: Ensures the input time (hours, minutes, seconds) is within valid ranges.
Continuous Update: Updates and displays the time every second.
Clear Console Screen: Uses system("cls") to clear the console screen for a smoother display update.

Notes
The program uses Sleep(999) to pause execution for approximately 999 milliseconds (1 second minus the time taken for processing). Adjust this if necessary for accurate timekeeping.
Ensure your compiler supports the windows.h header for Sleep() function usage. For cross-platform compatibility, consider using alternative time handling functions or libraries.
