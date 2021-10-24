package com.company;
//U2010046
//MEKHROL BAZAROV
import java.util.Scanner;
public class ExceptionDemo
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in); //Input
        System.out.println("\nName: "); // output name
        String name = scanner.nextLine(); //input
        System.out.println("\nID: "); // output id
        int id = scanner.nextInt(); // input
        System.out.println("\nAge: "); // output age
        int age = scanner.nextInt();
        try {
            if (age >= 1 && age <= 100)
            {
                System.out.println("\nCORRECT AGE: ");
            } else {
                throw new AgeOutOfRange("Incorrect age!");
            }

        } catch (AgeOutOfRange e)
        {
            e.printStackTrace();
        }
    }
}
