package com.company;
// U2010046
// MEKHROL BAZAROV
// lab 7
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;

public class StudentCollectionDemo
{
    public static void main(String[] args)
    {
        //creating students ArrayList
        ArrayList<Student> students = new ArrayList<>();
        // adding some information (others are fake except mine)
        students.add(new Student(2100011, "Abdulloh", 24));
        students.add(new Student(2010046, "Mekhrol", 19));  // my info
        students.add(new Student(1901009, "Abdurashid", 23));
        students.add(new Student(1800107, "Abdusomad", 21));
        students.add(new Student(1700019, "Abdurahmon", 28));

        System.out.println("Before sorting by age:");
        students.forEach(System.out::println);

        Collections.sort(students); // here it will be sorted out, we initailized compareto  in student class

        System.out.println("After sorting by age:");
        students.forEach(System.out::println);
        // forEach is a way to iterate over a collection.
    }
}