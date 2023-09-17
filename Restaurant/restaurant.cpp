#include <iostream>
#include <ctime>

/*
****************************** [Getting the current date] **************************************
    time_t now = time(0);
    tm *local = localtime(&now);

    std::cout << "Year: " << 1900 + local->tm_year << std::endl;
    std::cout << "Month: " << 1 + local->tm_mon << std::endl;
    std::cout << "Day: " << local->tm_mday << std::endl;
    std::cout << "Time: " << local->tm_hour << ":" <<
        local->tm_min << ":" << 
        local->tm_sec << std::endl;


****************************** [Measuring program runtime with clock] **************************************

    clock_t time;
    time = clock();

    std::cout << "Timer starts" << std::endl;
    std::cout << "Press 'enter' to stop the counter" << std::endl;
    while(1){
        if (getchar())
            break;
    }
    std::cout << "Timer ends" << std::endl;
    time = clock() - time;
    double total_time = ((double)time) / CLOCKS_PER_SEC;
    std::cout << "Program took " << total_time << " seconds." << std::endl;


*/

int main(){

    clock_t time;
    time = clock();

    std::cout << "Timer starts" << std::endl;
    std::cout << "Press 'enter' to stop the counter" << std::endl;

    while(1){
        if (getchar())
            break;
    }
    std::cout << "Timer ends" << std::endl;
    time = clock() - time;
    double total_time = ((double)time) / CLOCKS_PER_SEC;
    std::cout << "Program took " << total_time << " seconds." << std::endl;

    return 0;
}