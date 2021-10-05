package com.company;

class SocieStudent extends Student
{
    private double oop1;
    private double intro_to_IT;
    public SocieStudent(){}
    public SocieStudent(String studentName, int studentID, double english, double maths, double oop1, double intro_to_IT)
    {
        // this super method uses to pass arguments to parent class
        super(studentName, studentID, english, maths);
        this.oop1=oop1;
        this.intro_to_IT=intro_to_IT;
    }
    // here we set and oop1 and intro to it
    // we don`t have to set and get student name, id, english and math
    public double getOop1()
    {
        return oop1;
    }

    public void setOop1(double oop1)
    {
        this.oop1 = oop1;
    }

    public double getIntro_to_IT()
    {
        return intro_to_IT;
    }

    public void setIntro_to_IT(double intro_to_IT)
    {
        this.intro_to_IT = intro_to_IT;
    }
    public double total_Score()
    {
        return oop1+intro_to_IT+getEnglish()+getMaths();
    }
}
