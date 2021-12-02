package com.company;
//U2010046
import java.util.*;
public class PrintTableDemo
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        System.out.flush();
        System.out.println("Default values 5 and 10");
        System.out.println("Enter 1st number: ");
        int numberTable1 = input.nextInt();
        System.out.println("Enter 2nd number: ");
        int numberTable2 = input.nextInt();

        MultiThread threadTable1 = new MultiThread(numberTable1);
        threadTable1.run(); // for the table 1
        MultiThread threadTable2 = new MultiThread(numberTable2);
        threadTable2.run(); // for the table 2


    }
}
