package com.company;
public class Student implements Comparable<Student> // creating with comparable interface
{
    int studentId;
    String studentName;
    int studentAge;

    public Student() // with no parametr
    {

    }

    public Student(int studentId, String studentName, int studentAge) // with parametrsized constructor
    {
        this.studentId = studentId;
        this.studentName = studentName;
        this.studentAge = studentAge;
    }
// setters and getters
    public int getStudentId()
    {
        return studentId;
    }

    public void setStudentId(int studentId)
    {
        this.studentId = studentId;
    }

    public String getStudentName()
    {
        return studentName;
    }

    public void setStudentName(String studentName)
    {
        this.studentName = studentName;
    }

    public int getStudentAge()
    {
        return studentAge;
    }

    public void setStudentAge(int studentAge)
    {
        this.studentAge = studentAge;
    }


    @Override
    public int compareTo(Student o)
    {
        //it is the logic of comparing
        if (this.studentAge > o.getStudentAge())  return 1;
        if (this.studentAge < o.getStudentAge()) return -1;
        return 0;
    }

    @Override
    public String toString()
    {
        return "studentId='" + studentId + '\'' +
                ", studentName='" + studentName + '\'' +
                ", studentAge=" + studentAge ;
    }
}
