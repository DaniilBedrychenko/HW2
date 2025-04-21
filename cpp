#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU-UA");


    // Завдання 1
    double a, b, X;
    cout << "Введіть a: ";
    cin >> a;
    cout << "Введіть b: ";
    cin >> b;

    if (a > b) {
        X = b - 5 * a;
    }
    else if (a == b) {
        X = (5 - b) / a;
    }
    else {
        X = (a - 5) / b;
    }
    cout << "X = " << X << endl;





    // Завдання 2
    double slope;
    cout << "Введіть коефіцієнт нахилу прямої (slope): ";
    cin >> slope;
    if (slope == 0) {
        cout << "Пряма паралельна осі абсцис" << endl;
    }
    else if (slope == 1) {
        cout << "Пряма паралельна осі ординат" << endl;
    }
    else {
        cout << "Пряма не паралельна жодній з осей" << endl;
    }






    // Завдання 3
    int quantity;
    double price;
    cout << "Введіть кількість товару: ";
    cin >> quantity;
    cout << "Введіть вартість за штуку: ";
    cin >> price;
    double total = quantity * price;
    double discount = 0;
    if (total >= 300) {
        discount = 0.07 * total;
    }
    else if (total >= 200) {
        discount = 0.05 * total;
    }
    else if (total >= 100) {
        discount = 0.03 * total;
    }
    cout << "Сума знижки: " << discount << endl;

    // Завдання 4
    double number;
    cout << "Введіть число: ";
    cin >> number;
    if (number == (int)number) {
        cout << "Число не має десяткової частини." << endl;
    }
    else {
        cout << "Число має десяткову частину." << endl;
    }

    // Завдання 5
    int day;
    cout << "Введіть номер дня тижня (1-7): ";
    cin >> day;
    if (day == 1) {
        cout << "Понеділок" << endl;
    }
    else if (day == 2) {
        cout << "Вівторок" << endl;
    }
    else if (day == 3) {
        cout << "Середа" << endl;
    }
    else if (day == 4) {
        cout << "Четвер" << endl;
    }
    else if (day == 5) {
        cout << "П'ятниця" << endl;
    }
    else if (day == 6) {
        cout << "Субота" << endl;
    }
    else if (day == 7) {
        cout << "Неділя" << endl;
    }
    else {
        cout << "Невірний номер дня" << endl;
    }





    // Завдання 6
    double x, y;
    cout << "Введіть координати точки (x y): ";
    cin >> x >> y;
    if (x == 0 && y == 0) {
        cout << "Точка в початку координат" << endl;
    }
    else if (x == 0) {
        cout << "Точка на осі ординат" << endl;
    }
    else if (y == 0) {
        cout << "Точка на осі абсцис" << endl;
    }
    else if (x > 0 && y > 0) {
        cout << "Точка в першій чверті" << endl;
    }
    else if (x < 0 && y > 0) {
        cout << "Точка в другій чверті" << endl;
    }
    else if (x < 0 && y < 0) {
        cout << "Точка в третій чверті" << endl;
    }
    else {
        cout << "Точка в четвертій чверті" << endl;
    }





    // Завдання 7
    int choice;
    double amount;
    cout << "Виберіть валюту для конвертації (1 - Євро, 2 - Долари, 3 - Рублі): ";
    cin >> choice;
    cout << "Введіть суму в гривнях: ";
    cin >> amount;
    if (choice == 1) {
        cout << "Сума в Євро: " << amount / 30.0 << endl;
    }
    else if (choice == 2) {
        cout << "Сума в Доларах: " << amount / 27.0 << endl;
    }
    else if (choice == 3) {
        cout << "Сума в Рублі: " << amount * 0.45 << endl;
    }
    else {
        cout << "Невірний вибір" << endl;
    }

    // Завдання 8
    int dayInput, monthInput, yearInput;
    cout << "Введіть дату (день місяць рік): ";
    cin >> dayInput >> monthInput >> yearInput;
    bool valid = true;
    if (monthInput < 1 || monthInput > 12) {
        valid = false;
    }
    else if (dayInput < 1 || (monthInput == 2 && dayInput > 28) || (monthInput != 2 && dayInput > 30)) {
        valid = false;
    }
    if (valid) {
        cout << "Дата коректна" << endl;
    }
    else {
        cout << "Дата некоректна" << endl;
    }




    // Завдання 9
    int ticket;
    cout << "Введіть номер квитка (6 цифр): ";
    cin >> ticket;
    int firstHalf = ticket / 1000;
    int secondHalf = ticket % 1000;
    int sum1 = firstHalf / 100 + (firstHalf / 10) % 10 + firstHalf % 10;
    int sum2 = secondHalf / 100 + (secondHalf / 10) % 10 + secondHalf % 10;
    if (sum1 == sum2) {
        cout << "Щасливий квиток!" << endl;
    }
    else {
        cout << "Нещасливий квиток." << endl;
    }





    // Завдання 10
    int age;
    cout << "Введіть вік: ";
    cin >> age;
    if (age >= 60) {
        cout << "Пора на пенсію!" << endl;
    }
    else {
        cout << "Ще не пора на пенсію." << endl;
    }



    // Завдання 11
    int card;
    cout << "Введіть порядковий номер карти (0-35): ";
    cin >> card;
    int suit = card / 9;
    int rank = card % 9;

    cout << "Масть: ";
    if (suit == 0) cout << "Черви";
    else if (suit == 1) cout << "Бубни";
    else if (suit == 2) cout << "Крести";
    else cout << "Піки";

    cout << ", Гідність: ";
    if (rank == 0) cout << "2";
    else if (rank == 1) cout << "3";
    else if (rank == 2) cout << "4";
    else if (rank == 3) cout << "5";
    else if (rank == 4) cout << "6";
    else if (rank == 5) cout << "7";
    else if (rank == 6) cout << "8";
    else if (rank == 7) cout << "9";
    else if (rank == 8) cout << "10";
    cout << endl;





    // Завдання 12
    int hour, minute;
    cout << "Введіть час (години хвилини): ";
    cin >> hour >> minute;
    if (hour < 6) {
        cout << "Доброї ночі!" << endl;
    }
    else if (hour < 12) {
        cout << "Доброго ранку!" << endl;
    }
    else if (hour < 18) {
        cout << "Добрий день!" << endl;
    }
    else {
        cout << "Добрий вечір!" << endl;
    }



    // Завдання 13
    double height, weight;
    cout << "Введіть ріст та вагу: ";
    cin >> height >> weight;
    double idealWeight = height - 110;
    if (weight > idealWeight) {
        cout << "Треба скинути " << weight - idealWeight << " кг." << endl;
    }
    else if (weight < idealWeight) {
        cout << "Треба набрати " << idealWeight - weight << " кг." << endl;
    }
    else {
        cout << "Вага ідеальна!" << endl;
    }





    // Завдання 14
    int day1, month1, year1;
    cout << "Введіть день, місяць, рік: ";
    cin >> day1 >> month1 >> year1;
    day1++;
    if (day1 > 30) {
        day1 = 1;
        month1++;
        if (month1 > 12) {
            month1 = 1;
            year1++;
        }
    }
    cout << "Наступна дата: " << day1 << "/" << month1 << "/" << year1 << endl;






    // Завдання 15
    int number5;
    cout << "Введіть п'ятизначне число: ";
    cin >> number5;
    bool isPrime = true;
    int digits[] = { number5 / 10000, (number5 / 1000) % 10, (number5 / 100) % 10, (number5 / 10) % 10, number5 % 10 };
    for (int i = 0; i < 5; i++) {
        if (digits[i] != 2 && digits[i] != 3 && digits[i] != 5 && digits[i] != 7) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        cout << "Число складається лише з простих цифр." << endl;
    }
    else {
        cout << "Число не складається з простих цифр." << endl;
    }


    // Завдання 16
    int year2;
    cout << "Введіть рік: ";
    cin >> year2;
    if ((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0)) {
        cout << "Рік високосний." << endl;
    }
    else {
        cout << "Рік не високосний." << endl;
    }

    return 0;
}
