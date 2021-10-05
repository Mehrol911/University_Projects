package com.company;
/* Name: Mekhrol Bazarov
Section: 002
ID:      U2010046
*/
public class InheritanceDemo
{
    public static void main(String[] args)
    { // grades are out of 4.5
        /* we can assign SocieStudent class to Student class because SocieStudent class extended Student class.
        and same with Solstudent class*/

        Student socieStudent = new SocieStudent("Mekhrol", 2010046, 4.5, 4.5, 4.5, 4.5 );
        Student solStudent = new SolStudent("Azamat", 2011034, 4.0, 4.0, 3.5, 2.5);
        // there is no such student in sol I just made it.

        System.out.println("Socie Student name "+socieStudent.getStudentName()+"'s total score is: "+socieStudent.total_Score());
        System.out.println("Sol Student name "+solStudent.getStudentName()+"'s total score is: "+solStudent.total_Score());
    }
}
