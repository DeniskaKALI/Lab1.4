#include <iostream>
#include <list>

// Функция для подсчета элементов списка, значения которых больше 7
int countElementsGreaterThan7(const std::list<double>& lst) {
    int count = 0;
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        if (*it > 7) {
            count++;
        }
    }
    return count;
}

int main() {
    std::list<double> myList;

    // Добавляем элементы в список
    myList.push_back(5.5);
    myList.push_back(8.2);
    myList.push_back(6.7);
    myList.push_back(10.1);
    myList.push_back(4.3);
    myList.push_back(7.8);

    // Определяем количество элементов списка со значениями больше 7
    int count = countElementsGreaterThan7(myList);

    // Выводим результат
    std::cout << "Количество элементов списка со значениями больше 7: " << count << std::endl;

    return 0;
}
