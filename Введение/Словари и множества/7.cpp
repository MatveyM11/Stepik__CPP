#include <iostream>
#include <string>
#include <map>
#include <set>
 
using namespace std;
 
int main ()
{
    int n, score = 0; // score — счёт ошибок
    cin >> n;
/*
ЗДЕСЬ НЕ ТРЕБУЕТСЯ ПРОВЕРЯТЬ n < 1
 
ДАЖЕ ПРИ ПУСТОМ СЛОВАРЕ ВАСЯ ОБЯЗАН ПРОВЕРИТЬ КОЛИЧЕСТВО УДАРЕНИЙ ПОСТАВЛЕННЫХ ПЕТЕЙ!!!
*/
    map <string, set <string>> thesa; //словарь с образцом и омографами
 
//Заполняем словарь
    string term, sample; // слово и его приведённый образец
    for (; n > 0; --n) // n больше не используется, можно пожертвовать!
        {
            cin >> term;
            sample = "";
            for (auto c : term) // формируется образец слова
                sample += (char)(c | 32);
            thesa [sample].insert (term);// добавить образец и его омограф
        }
 
//Обрабатываем упражнение Пети
 
    while (cin >> term)
        {
// приведение слова в его образец и подсчёт количества ударений, поставленных Петей
            int accents = 0; // счётчик ударений
            sample = "";
            for (auto c : term)
                {// каждая заглавная буква прибавляет к счётчику единицу
                    accents += (c < 'A' || c > 'Z' ? 0 : 1);
                    sample += (char)(c | 32);
                }
            // объединённое условие ошибки Пети:
            if (thesa.find (sample) != thesa.end () ? thesa [sample].find (term) == thesa [sample].end () : accents != 1)
                score++;
        }
// Выводим количество ошибок:
    cout << score;
    return 0;
}
