package com.company;

public class Student
{   // This Student class is parent class for SocieStudent and SolStudentclass
    private String studentName;
    private int studentID;
    private double english;
    private double maths;
    // default constructor
    public Student(){}
    // parametric constructor
    public Student(String studentName, int studentID, double english, double math)
    {
        this.studentName=studentName;
        this.studentID=studentID;
        this.english=english;
        this.maths=maths;
    }

    // Here we set and get name, id, maths and english.
    public String getStudentName()
    {
        return studentName;
    }

    public void setStudentName(String studentName)
    {
        this.studentName = studentName;
    }

    public int getStudentID()
    {
        return studentID;
    }

    public void setStudentID(int studentID)
    {
        this.studentID = studentID;
    }

    public double getEnglish()
    {
        return english;
    }

    public void setEnglish(double english)
    {
        this.english = english;
    }

    public double getMaths()
    {
        return maths;
    }

    public void setMaths(double maths)
    {
        this.maths = maths;
    }
    public double total_Score()
    {
        return 0;
    }
}
