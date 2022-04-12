#include <iostream>
#include <string>
#include <set>
#include <map>
 
using namespace std;
 
int main ()
{
  int n; // число записей в англо-латинском словаре
// ВВОД
  try { // можно обойтись и без try-throw-catch, но тогда программа может работать вхолостую!
    if (!cin) throw (0); // необязательно
    cin >> n;
    if (n < 1) throw (0);
   }
   catch (int) {
    cout << 0; // если словарь пуст, выводим 0
    return 0;
   }
   map <string, set <string>> Lat_Eng; // латино-английский словарь
   string Term, Trans;
// ВВОД ПО СЛОВАМ И ЗАПОЛНЕНИЕ СЛОВАРЯ
    for (int i = 0; i < n; ++i)
        {
            cin >> Term >> Trans; // считываем слово и дефис
            while (cin && ('\n' != cin.peek ()))
                {
                    cin >> Trans; // считываем перевод…
                    // запятая в конце слова не нужна:
                    if (',' == Trans [Trans.length () - 1]) Trans.pop_back ();
                    // добавляем пару в латино-английский словарь:
                    Lat_Eng [Trans].insert (", " + Term);
                }
        }
// ВЫВОД РЕЗУЛЬТАТОВ
    cout << Lat_Eng.size () << endl; // выводим число записей в латино-английском словаре
    for (auto article : Lat_Eng)
        {
            string Junk = " "; // начинаем с пробела!
            for (auto tr : article.second) Junk += tr; // собираем все переводы в одну строку,
            Junk [1] = '-'; // исправляем первую запятую на дефис
            cout << (article.first + Junk + '\n'); // выводим словарную запись
        }
    
    return 0;
}
 
