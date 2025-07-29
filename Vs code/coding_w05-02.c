#include <stdio.h>
int main() {
    char name[30]; //ใช้ char array เพื่อเก็บค่าตัวแปรชื่อเป็นตัวอักษรหลายตัว
    int age; //ใช้ int เพื่อเก็บค่าตัวแปรอายุเป็นเลขจำนวนเต็ม
    float height; //ใช้ float เพื่อเก็บค่าตัวแปรส่วนสูงเป็นหน่วยเป็นเซนติเมตร
    char subject[30]; //ใช้ char array เพื่อเก็บค่าตัวแปรชื่อวิชาเป็นตัวอักษรหลายตัว
    float grade; //ใช้ float เพื่อเก็บค่าตัวแปรเกรดเป็นเลขทศนิยม
    char gradechar; //ใช้ char เพื่อเก็บค่าตัวแปรเกรดในรูปแบบตัวอักษร

    printf ("Enter your name , age ,height, subject, grade: "); //ให้ใส่ข้อมูลชื่อ, อายุ, ส่วนสูง, วิชา, เกรดจากผู้ใช้
    scanf ("%s %d %f %s %f", name, &age, &height, subject, &grade); //อ่านข้อมูลที่ผู้ใช้ป้อนเข้ามา

    printf ("%c is %d years old %.1f cm tall, studies %s and has a grade of %.2f.\n", name[0], age, height, subject, grade); //แสดงผลชื่อ, อายุ, ส่วนสูง, วิชา และเกรด
    printf ("In subject %s, grade is %.2f which is symbolized as %c.\n", subject, grade, (grade >= 90) ? 'A' : (grade >= 80) ? 'B' : (grade >= 70) ? 'C' : (grade >= 60) ? 'D' : 'F'); //แสดงผลวิชา, เกรด และสัญลักษณ์เกรดตามเงื่อนไข
   return 0; //คืนค่า 0 เพื่อบอกว่าโปรแกรมทำงานเสร็จแล้ว
   }