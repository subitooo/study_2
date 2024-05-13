#include <iostream>
// Создайте класс, описывающий указанный в вашем варианте реальный объект.
// Не забывайте про принципы абстракции и инкапсуляции.
// Продемонстрируйте использование вашего класса.
// Прямоугольник, расчет площади, периметра и длины диагонали.

class Rectangle {
    float m_a;
    float m_b;
    float m_perimetr;


public:
    Rectangle(float a, float b) 
    {
        m_a = a;
        m_b = b;
    }

    void setA(float a) 
    {
        m_a = a;

    }

    void setB(float b) 
    {
        m_b = b;
    }

    float Ploshad() 
    {
        return m_a * m_b;
    }

    float Perimetr() 
    {
        return 2 * (m_a + m_b);
    }

    float Diagonal() 
    {
        return sqrt(m_a * m_a + m_b * m_b);
    }


};


int main() {

    setlocale(LC_ALL, "Russian");

    Rectangle r1(15.f, 7.f);

    std::cout << r1.Ploshad() << std::endl;
    std::cout << r1.Perimetr() << std::endl;
    std::cout << r1.Diagonal() << std::endl;

    return 0;
}
