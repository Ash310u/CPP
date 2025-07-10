#include <iostream>

enum Days {
    MONDAY = 0,
    TUESDAY = 1,
    WEDNESDAY = 2,
    THURSDAY = 3,
    FRIDAY = 4,
    SATURDAY = 5,
    SUNDAY = 6
};

int main() {
    Days day = Days::MONDAY;
    // static_cast is used to convert the enum to an integer
    std::cout << "Day: " << static_cast<int>(day) << std::endl;
    
    Days day2 = FRIDAY;
    switch (day2) {
        case MONDAY:
            std::cout << "It is Monday" << std::endl;
            break;
        case TUESDAY:
            std::cout << "It is Tuesday" << std::endl;
            break;
        case WEDNESDAY:
            std::cout << "It is Wednesday" << std::endl;
            break;
        case THURSDAY:
            std::cout << "It is Thursday" << std::endl;
            break;
        case FRIDAY:
            std::cout << "It is Friday" << std::endl;
            break;
        case SATURDAY:
            std::cout << "It is Saturday" << std::endl;
            break;
        case SUNDAY:
            std::cout << "It is Sunday" << std::endl;
            break;
    }
}