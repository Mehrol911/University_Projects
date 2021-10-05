package com.company;

public class Student
{
    private int StudentID;
    private String StudentName;
    private int Age;

    public Student()
    {
    }

    public Student(int studentID, String studentName, int Age)
    {
        StudentID = studentID;
        StudentName = studentName;
        Age = Age;
    }

    public int getStudentID()
    {
        return StudentID;
    }

    public void setStudentID(int studentID)
    {
        StudentID = studentID;
    }

    public String getStudentName()
    {
        return StudentName;
    }

    public void setStudentName(String studentName)
    {
        StudentName = studentName;
    }

    public int getAge()
    {
        return Age;
    }

    public void setAge(int age)
    {
        Age = age;
    }
}
