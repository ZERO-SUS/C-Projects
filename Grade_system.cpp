#include <iostream>
#include <string>

auto& print = std::cout;
auto& input = std::cin;

void grade(double per) {
    if (per < 0 || per > 100) {
        print << "Invalid Percentage\n";
    }
    else if (per >= 90) {
        print << "Grade : A\n";
        print << "You are topper !!\n";
    }
    else if (per >= 80) {
        print << "Grade : B\n";
    }
    else if (per >= 70) {
        print << "Grade : C\n";
    }
    else if (per >= 60) {
        print << "Grade : D\n";
    }
    else {
        print << "Grade : Fail\n";
        print << "Try Next Time Better\n";
    }
}

int main() {
    std::string name;
    double sub1, sub2, sub3, sub4, sub5;
    double tot, avg, per;

    print << "======== COLLEGE RESULT ========\n\n";
    
    print << "Enter your Name : ";
    std::getline(input, name);
    print << "\n";

    print << "Enter Marks of Subject 1 : ";
    input >> sub1;
    print << "Enter Marks of Subject 2 : ";
    input >> sub2;
    print << "Enter Marks of Subject 3 : ";
    input >> sub3;
    print << "Enter Marks of Subject 4 : ";
    input >> sub4;
    print << "Enter Marks of Subject 5 : ";
    input >> sub5;
    print << "\n";

    tot = sub1 + sub2 + sub3 + sub4 + sub5;
    avg = tot / 5.0;
    per = (tot / 500.0) * 100.0;

    print << "Name        : " << name << '\n';
    print << "Total Marks : " << tot << "/500\n";
    print << "Average     : " << avg << '\n';
    print << "Percentage  : " << per << "%\n";
    
    grade(per);

    return 0;
}