#include <iostream>
#include <windows.h> 

bool Val = false; 
float Seconds = 0, SleepSeconds = 0;
float Minutes, SleepMinutes;
float Hours, SleepHours;
int Option;

float calcseconds()
{
    std::cout << "Choose ON time (1 = hours, 2 = minutes, 3 = seconds): ";
    std::cin >> Option;
    
    if (Option == 1){
        std::cout << "How many hours ON? >> ";
        std::cin >> Hours;
        Seconds = Hours * 3600;
    } else if (Option == 2){
        std::cout << "How many minutes ON? >> ";
        std::cin >> Minutes;
        Seconds = Minutes * 60;
    } else if (Option == 3){
        std::cout << "How many seconds ON? >> ";
        std::cin >> Seconds; 
    } else {
        std::cout << "\nInvalid choice. Choose 1, 2, or 3.\n";
    }

    return Seconds;
}

float sleepsecondsf()
{
    std::cout << "Choose OFF time (1 = hours, 2 = minutes, 3 = seconds): ";
    std::cin >> Option;
    
    if (Option == 1){
        std::cout << "How many hours OFF? >> ";
        std::cin >> SleepHours;
        SleepSeconds = SleepHours * 3600;
    } else if (Option == 2){
        std::cout << "How many minutes OFF? >> ";
        std::cin >> SleepMinutes;
        SleepSeconds = SleepMinutes * 60;
    } else if (Option == 3){
        std::cout << "How many seconds OFF? >> ";
        std::cin >> SleepSeconds; 
    } else {
        std::cout << "\nInvalid choice. Choose 1, 2, or 3.\n";
    }

    return SleepSeconds;
}

int main() {
    calcseconds();
    sleepsecondsf();

    while (true)
    {
        Val = true;
        std::cout << "ON:  " << Val << std::endl;
        Sleep(Seconds * 1000);  

        Val = false;
        std::cout << "OFF: " << Val << std::endl;
        Sleep(SleepSeconds * 1000); 
    }

    return 0;
}
