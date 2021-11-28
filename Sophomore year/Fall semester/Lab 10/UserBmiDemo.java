package com.company;

import java.io.IOException;
import java.sql.*;
import java.util.Scanner;

public class UserBmiDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        UserBmiDemo demo = new UserBmiDemo();
        int choice;

        while(true){
            showMenu();
            choice = sc.nextInt();
            switch (choice){
                case 1:
                    demo.printUserBmis();
                    break;
                case 2:
                    demo.addUserBmi(sc);
                    break;
                case 3:
                    demo.deleteUserBmi(sc);
                    break;
                case 4:
                    demo.updateUserBmi(sc);
                    break;
                case 5: break;
            }
        }
    }

    private static void showMenu(){
        System.out.println(" ======= MENU ======= \n [1] Print user BMIs \n [2] Add user BMI \n [3] Delete user BMI \n [4] Update user BMI \n [5] Exit \n ====================");
    }

    public void printUserBmis(){
        System.out.println("======= User BMIs =======");
        try {
            //connection with database
            Connection connection = DriverManager.getConnection(
                    "jdbc:mysql://localhost:3306/BMI_DB?autoReconnect=true&useSSL=false", "root", "Mehrol911911");

            // creating statement
            Statement statement = connection.createStatement();

            // MySQL query for getting data
            String query = "select PersonID, PersonName, Weight, Height from BMI";

            // the result which is recieved from database
            ResultSet result = statement.executeQuery(query);

            System.out.println("\n\nAll Records are:");

            int rowCount = 0;

            // iterates loop until result reaches the end
            while (result.next()) {

                // storing result
                int id = result.getInt("PersonID");
                String name = result.getString("PersonName");
                double height = result.getDouble("Height");
                double weight = result.getDouble("Weight");

                // prints all details on console
                System.out.println("\nID: " + id + "\nName: " + name + "\nHeight: " + height + " meters" + "\nWeight: "
                        + weight + " kgs");

                // counter for records
                ++rowCount;
            }
            System.out.println("\n" + rowCount + " record(s) found");
        } catch (SQLException e) {
            System.out.println(e); // catches all exceptions from MySQL queries
        }
    }

    public void addUserBmi(Scanner sc){
        System.out.println("======= Add user BMI =======");
        System.out.print("Please enter full name: ");
        String name = sc.next();
        System.out.print("Enter weight: ");
        double weight = sc.nextDouble();
        System.out.print("Enter height: ");
        double height = sc.nextDouble();

        try {
            Connection connection = DriverManager.getConnection(
                    "jdbc:mysql://localhost:3306/BMI_DB?autoReconnect=true&useSSL=false", "root", "Mehrol911911");

            // hardcoded MySQL query for inserting
            String query = "insert into bmi (PersonName, Weight, Height)" + " values (?, ?, ?)";

            PreparedStatement preparedStmt = connection.prepareStatement(query);

            // setting ? values from preparedStatement
            preparedStmt.setString(1, name);
            preparedStmt.setDouble(2, weight);
            preparedStmt.setDouble(3, height);
            preparedStmt.execute();

            System.out.println("\nRecord added successfully!");
            connection.close();
        } catch (SQLException e) {
            System.out.println(e);
        }
    }

    public void deleteUserBmi(Scanner sc){
        System.out.println("======= Delete user BMI =======");
        System.out.print("Please enter id of the record in order to delete: ");
        int id = sc.nextInt();
        try {
            Connection connection = DriverManager.getConnection(
                    "jdbc:mysql://localhost:3306/BMI_DB?autoReconnect=true&useSSL=false", "root", "Mehrol911911");

            Statement statement = connection.createStatement();

            // hardcoded MySQL query for deleting
            String query = "Delete from bmi where PersonID =" + id + ";";

            int count = statement.executeUpdate(query);

            System.out.println("\n" + count + " record removed successfully!\n\n");
            printUserBmis();

            connection.close();
        } catch (SQLException e) {
            System.out.println(e);
        }
    }

    public void updateUserBmi(Scanner sc){
        System.out.println("======= Update user BMI =======");
        System.out.print("Please enter id of the record in order to update: ");
        int id = sc.nextInt();
        System.out.print("Full name: ");
        String name = sc.next();
        System.out.print("Weight: ");
        double weight = sc.nextDouble();
        System.out.print("Height: ");
        double height = sc.nextDouble();

        try {
            Connection connection = DriverManager.getConnection(
                    "jdbc:mysql://localhost:3306/BMI_DB?autoReconnect=true&useSSL=false", "root", "Mehrol911911");

            // hardcoded MySQL query for updating
            String query = "update bmi set PersonName='" + name + "', Height='" + height + "', Weight='" + weight
                    + "' where PersonID='" + id + "';";

            Statement statement = connection.createStatement();

            int count = statement.executeUpdate(query);

            System.out.println("\nRecord updated successfully!  " + count + "\n\n");
            printUserBmis();

            connection.close();
        } catch (SQLException e) {
            System.out.println(e);
        }
    }
}