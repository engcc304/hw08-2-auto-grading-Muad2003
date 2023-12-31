/*
    ผู้ใช้กรอกค่า "คะแนนดิบ" เข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชา Programming ซึ่งมีเกณฑ์การให้คะแนนคือ F อยู่ในช่วงคะแนนน้อยกว่า 50 , D อยู่ในช่วงระหว่าง 50 ถึง 55 , D+ อยู่ในช่วงระหว่าง 55 ถึง 60 , C อยู่ในช่วงระหว่าง 60 ถึง 65 , C+ อยู่ในช่วงระหว่าง 65 ถึง 70 , B อยู่ในช่วงระหว่าง 70 ถึง 75 , B+ อยู่ในช่วงระหว่าง 75 ถึง 80 , A อยู่ในช่วงคะแนนมากกว่า 80 ขึ้นไป
    (กำหนดให้ข้อนี้ใช้คำสั่ง for แทนคำสั่งเงื่อนไขได้เท่านั้น)
    
    Test case:
        enter score :
            80
    Output:
        A !

    Test case:
        enter score :
            55
    Output:
        D+ !

    Test case:
        enter score :
            64
    Output:
        C !

    Test case:
        enter score :
            44
    Output:
        F !
*/

#include<stdio.h>

int main() {
    
    int input ;
    printf ( "enter score :\n" ) ;
    scanf ( "%d", &input ) ;
    printf ( "Output:\n" ) ;

    for ( input ; 80 <= input ; input ) {
        printf ( "A !" ) ;
        break ;
    }
    
    for ( input ; input <= 79 && input >= 70 ; input ) {
        printf ( "B+ !" ) ;
        break ;
    }

    for ( input ; input <= 74 && input >= 70 ; input ) {
        printf ( "B !" ) ;
        break ;
    }

    for ( input ; input <= 69 && input >= 65 ; input ) {
        printf ( "C+ !" ) ;
        break ;
    }

    for ( input ; input <= 64 && input >= 60 ; input ) {
        printf ( "C !" ) ;
        break ;
    }

    for ( input ; input <= 59 && input >= 55 ; input ) {
        printf ( "D+ !" ) ;
        break ;
    }

    for ( input ; input <= 54 && input >= 50 ; input ) {
        printf ( "D !" ) ;
        break ;
    }

    for ( input ; input <= 49 ; input ) {
        printf ( "F !" ) ;
        break ;
    }
    return 0 ;
}