import java.util.Scanner;
//U2010046
//Mekhrol Bazarov
//Section 002
//Lab 1
public class BodyMassIndexCalculator
{
    public static void main(String[] args)
    {
        boolean a=true; // if we write false the program won`t work

        double weight; // declare weight in kilograms or pounds
        double height; // declare height in meters or inches

        double BMIC1; //Body Mass Index Calculator 1 st one
        double BMIC2; //Body Mass Index Calculator 2 nd one

        Scanner scanner=new Scanner(System.in); //Taking object from scanner class
        while (a)
        {
            System.out.println("Meausure your Body-Mass-Index.");
            System.out.println("\nChoose one of 2 options"+
                    "\n1=>Kilograms and meters" +
                    "\n2=>Pounds and inches."+
                    "\n0=>Exit,");
            int option=1;
            option=scanner.nextInt();
            switch (option) // We are using switch in order to choose one of the cases
            {
                case 0:
                    a=false; // here it will exit the program
                    break;
                case 1: // Finding BMI with kilograms and meters
                    System.out.println("Write your weight(kg)");
                    weight=scanner.nextDouble(); // inputing weight from user
                    System.out.println("Write your height(m):");
                    height=scanner.nextDouble(); // inputing height from user

                    BMIC1=weight/(height*height); // formula to find Body mass index with kilograms and meters
                    System.out.println("Your BMI equal to "+BMIC1+".");
                    break;
                case 2: // Finding BMI with pounds and inches
                    System.out.println("Write your weight(lb):"); // print the weight
                    weight=scanner.nextDouble();// inputing weight from user

                    System.out.println("Write your height(in):"); // print the height
                    height=scanner.nextDouble();// inputing height from user

                    BMIC2=(weight/(height*height))*703; // formula to find Body mass index with pounds and inches
                    System.out.println("Your BMI equal to "+BMIC2+".");
                    break;
                default:
                    break;
            }
        }
        System.out.println("HAVE A GOOD DAY!"); // If you choose the case 0 it will exit the program and this message will printed in console
    }
}