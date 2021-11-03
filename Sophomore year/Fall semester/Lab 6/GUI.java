package com.company;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;
// U2010046 MEKHROL BAZAROV
// SECTION 002
public class GUI {

    public static void main(String[] args)
    {
        JFrame window = new JFrame();
        //settings window sizes
        window.setSize(new Dimension(950, 150));

        //setting window title
        window.setName("Lab 7");

        //setting a layout
        window.setLayout(new GridBagLayout());

        //adding components
        addButton(window);
        addCheckBox(window);
        addRadioButton(window);
        addTextField(window);
        addComboBox(window);

        //making window visible
        window.setVisible(true);
    }
    public static void addButton(JFrame window) // Adding button to the window
    {
        //creating new instance of Jbutton class with name
        JButton button = new JButton("U2010046 button");
        //setting button listener
        button.addActionListener(new ActionListener()
        {
            //for example this method will be called when button is pressed
            @Override
            public void actionPerformed(ActionEvent e)
            {
                System.out.println("Button clicked !");
            }
        });

        //adding button object to window frame
        window.add(button);
    }

    public static void addCheckBox(JFrame window)  // Adding checkbox to the window
    {
        //checkbox
        JCheckBox checkBox = new JCheckBox("Java is Amazing !");
        //adding listener
        checkBox.addItemListener(new ItemListener()
        {
            public void itemStateChanged(ItemEvent e)
            {
                System.out.println("Checkbox status: "
                        + (e.getStateChange()==1?"checked":"unchecked"));
            }
        });

        window.add(checkBox);
    }

    public static void addRadioButton(JFrame window) // Adding Radiobutton to the window
    {
        JRadioButton radioButton1 = new JRadioButton("Java");
        radioButton1.setSelected(true);
        JRadioButton radioButton2 = new JRadioButton("C++");
        JRadioButton radioButton3 = new JRadioButton("Python");

        radioButton1.addActionListener(new ActionListener()
        {
            @Override
            public void actionPerformed(ActionEvent e)
            {
                System.out.println("Java selected");
            }
        });
        radioButton2.addActionListener(new ActionListener()
        {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.out.println("C++ selected");
            }
        });
        radioButton3.addActionListener(new ActionListener()
        {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.out.println("Python selected");
            }
        });

        ButtonGroup buttonGroup = new ButtonGroup();
        buttonGroup.add(radioButton1);
        buttonGroup.add(radioButton2);
        buttonGroup.add(radioButton3);

        window.add(radioButton1);
        window.add(radioButton2);
        window.add(radioButton3);
    }

    public static void addTextField(JFrame window) // Adding TextField to the window
    {
        JTextField textField = new JTextField("Type something and press enter");
        textField.addActionListener(new ActionListener()
        {
            @Override
            public void actionPerformed(ActionEvent e)
            {
                System.out.println("You typed: " + textField.getText());
            }
        });

        window.add(textField);
    }


    public static void addComboBox(JFrame window) // Adding ComboBox to the window
    {
        JComboBox<String> comboBox = new JComboBox<>();
        comboBox.addItem("Manchester United");
        comboBox.addItem("Juventus");
        comboBox.addItem("Real Madrid");

        comboBox.addActionListener(new ActionListener()
        {
            @Override
            public void actionPerformed(ActionEvent e)
            {
                System.out.println("You selected: " + comboBox.getSelectedItem() +  " from ComboBox");
            }
        });

        window.add(comboBox);
    }
}
