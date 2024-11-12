#include <iostream>
#include <chrono>
#include <vector>

class Person {
private:
    std::string name, surname;
    std::vector<double> HW;
    float exam;
    float grade;
public:
    Person();
    Person(std::string A, std::string B, std::vector<double> C, float D, float E);
    ~Person();
    void SetName(std::string N);
    std::string GetName();
    void printPerson();
};

Person::Person() {
    name = "test";
    surname = "test";
    HW = {};
    exam = 0;
    grade = 0;
}

Person::Person(std::string A, std::string B, std::vector<double> C, float D, float E) {
    name = A;
    surname = B;
    HW = C;
    exam = D;
    grade = E;
}

Person::~Person() {
    name.clear();
    surname.clear();
    HW.clear();
    exam = 0;
    grade = 0;
}

void Person::SetName(std::string N) { name = N; }
std::string Person::GetName() { return name; }
void Person::printPerson() {
    std::cout << name << " " << surname << " " << grade << std::endl;
}

int main(){
    Person A;
    A.printPerson();
    std::vector<Person> arr;
    for (int i = 0; i < 10; i++) {
        std::cout << "Please input student name and surname: ";
        std::string TN, TS;
        std::cin >> TN >> TS;
        std::cout << "Please input student HW points:" << std::endl;
        std::vector<double> THW;

        for (int j = 0; j < 3; j++) {
            std::cout << "Please input points of HW" << j + 1 << ": ";
            double n;
            std::cin >> n;
            THW.push_back(n);
        }

        std::cout << "Please input student Final Exam points: ";
        double TE;
        std::cin >> TE;

        arr.push_back({TN, TS, THW, TE, 0});
    }

    for (auto &var : arr) {
        var.printPerson();
    }
}
