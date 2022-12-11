#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//Date, time, day, month
typedef struct {
    unsigned int day;
    unsigned int month;
    unsigned int year;
} Date;
//Задаємо функцію для часу, дня та місяця
int precise_date(int year, int month) {
    if(month >= 1 && month <= 12){
        int length_of_the_month[12] = {
            31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        if (month == 2) {
            if(year % 100 == 0){
                if(year % 400 == 0){
                    return length_of_the_month[1] + 1;
                }
                else {
                    return length_of_the_month[1];
                }
            }
            //Перевіряємо високосність року
            if(year % 4 == 0){
                return length_of_the_month[1] + 1;
            }
        }
        return length_of_the_month[month-1];
    }
    return 0;
}
bool valid_date(int day, int month, int year) {
    if(year < 1 || year > 9999) {
        return false;
    }
    return month >= 1 && month <= 12 && day >= 1 && day <= precise_date(year, month);
}
Date inputDate() {
    Date d;
    int enter = 1;
    while(enter == 1){
        printf("Enter date: ");
        scanf("%d.%d.%d", &d.day, &d.month, &d.year);
        if(valid_date(d.day, d.month, d.year) == true){
            enter = 0;
        } else{
            //Повідомлення про неправильність вводу дати
            printf("Дату було введено неправильно\n");
        }
    }
    return d;
}
void show_date(Date d){
    printf("%u.%u.%u\n", d.day, d.month, d.year);
}
Date nextDay(Date d){
    Date d2;
    if(!valid_date(d.day + 1, d.month, d.year)){
        if(!valid_date(1, d.month + 1, d.year)){
            if(!valid_date(1, 1, d.year + 1)){
                printf("Дні вичерпані\n");
                return d;
            } else {
                d2.day = 1;
                d2.month = 1;
                d2.year = d.year + 1;
            }
        } else {
            d2.day = 1;
            d2.month = d.month + 1;
            d2.year = d.year;   
        }
    } else {
        d2.day = d.day + 1;
        d2.month = d.month;
        d2.year = d.year;   
    }
    return d2;
}
void den_tyzhnia(Date d){
    printf("%d-th day", (d.day + 2 * d.month + 3 * (d.month + 1) / 5 + d.year + d.year / 4 - d.year / 100 + d.year / 400 + 1) % 7);
}
int main(){
    Date d;
    d = inputDate();
    show_date(d);
    Date d;
    d = inputDate();
    Date d2 = nextDay(d);
    show_date(d2);
    den_tyzhnia(d);
}