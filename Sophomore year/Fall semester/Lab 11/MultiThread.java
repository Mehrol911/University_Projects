package com.company;

public class MultiThread extends Thread
{
    int number;
    public MultiThread(int number)
    {
        this.number = number;
    }
    @Override
    public void run()
    {
        System.out.println("Table of Number: " + number); // number will be inputted number
        for (int i = 1; i <= 10; i++) // it will have 10 lines of code
        {
            System.out.println(number + " * " + i + " = " + (i * number)); // i will be 1 to 10
            try
            {
                Thread.sleep(100);
            } catch (InterruptedException e)
            {
                e.printStackTrace();
            }
        }
        System.out.println("\n");
    }
}
