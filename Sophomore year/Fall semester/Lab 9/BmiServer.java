package com.company;
import java.io.*;
import java.net.*;
import java.util.*;
import java.awt.*;
import javax.swing.*;

// U2010046
// MEKHROL BAZAROV
// 002

public class BmiServer extends JFrame
{
    // Text area for displaying contents
    private JTextArea jta = new JTextArea();

    public static void main(String[] args) {
        new BmiServer();
    }

    public BmiServer()
    {
        // Place text area on the frame
        setLayout(new BorderLayout());
        add(new JScrollPane(jta), BorderLayout.CENTER);

        setTitle("BMI Calculator");
        setSize(300, 300);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true); // It is necessary to show the frame here!

        try
        {
            // Create a server socket
            ServerSocket serverSocket = new ServerSocket(8000);
            jta.append("Server started at " + new Date() + '\n');

            // Listen for a connection request
            Socket socket = serverSocket.accept();

            // Create data input and output streams
            DataInputStream inputFromClient = new DataInputStream(
                    socket.getInputStream());
            DataOutputStream outputToClient = new DataOutputStream(
                    socket.getOutputStream());

            while (true)
            {
                // Receive weight and mass from user
                double weight = inputFromClient.readDouble();
                System.out.println(weight);
                double height = inputFromClient.readDouble();
                System.out.println(height);

                // Compute BMI
                double bmi= weight/(height*height);

                // Send BMI info back to the client
                outputToClient.writeDouble(bmi);

                jta.append("Weight received from client: " + weight + '\n');
                jta.append("Height received from client: " + height + '\n');
                jta.append("BMI info: " + bmi + '\n');
            }
        }
        catch(IOException ex) {
            System.err.println(ex);
        }
    }
}
