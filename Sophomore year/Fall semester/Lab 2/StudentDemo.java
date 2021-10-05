package com.company;

public class StudentDemo
{
   public static void main(String[] args)
   {
      Student student=new Student(); //creating object in a class of Student
      student.setStudentID(2010046); // Here it will set an id
      student.setStudentName("Bazarov Mekhrol"); // here it will set a student name
      student.setAge(18); // here it will set a student age

      System.out.println("Student ID: " + student.getStudentID()+"\n"); // it will get an id
      System.out.println("Student Name: " + student.getStudentName()+"\n"); // it will get a name
      System.out.println("Student Age: " + student.getAge()+"\n"); // it will get an age

   }
}
