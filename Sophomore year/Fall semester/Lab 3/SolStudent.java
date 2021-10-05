package com.company;

class SolStudent extends Student
{
    private double computerProgramming;
    private double intro_to_Eco;
    public SolStudent(){}
    public SolStudent(String studentName, int studentID, double english, double maths, double computerProgramming, double intro_to_Eco)
    {
        // this super method uses to pass arguments to parent class
        super(studentName, studentID, english, maths);
        this.computerProgramming=computerProgramming;
        this.intro_to_Eco=intro_to_Eco;
    }
    // here we set and computerProgramming and intro to eco
    // we don`t have to set and get student name, id, english and math

    public double getComputerProgramming()
    {
        return computerProgramming;
    }

    public void setComputerProgramming(double computerProgramming)
    {
        this.computerProgramming = computerProgramming;
    }

    public double getIntro_to_Eco()
    {
        return intro_to_Eco;
    }

    public void setIntro_to_Eco(double intro_to_Eco)
    {
        this.intro_to_Eco = intro_to_Eco;
    }
    public double total_Score()
    {
        return computerProgramming+intro_to_Eco+getEnglish()+getMaths();
    }

}
