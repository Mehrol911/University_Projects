package com.company;

public class Student
{
    private int StudentID;
    private String StudentName;
    private int Age;

    public Student() // constructor without parametrs
    {

    }
    public Student(int StudentID, String StudentName, int Age) //constructor with parametrs
    {
        this.StudentID=StudentID;
        this.StudentName=StudentName;
        this.Age=Age;
    }
// Setters and getters - mutators and accessor
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
