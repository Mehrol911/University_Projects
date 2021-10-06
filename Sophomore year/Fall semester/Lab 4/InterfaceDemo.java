package com.company;
// U2010046
// Lab 4: Section 002
// MEKHROL BAZAROV
public class InterfaceDemo
{
    public static void main(String[] args)
    {
        Rectangle rec1 = new Rectangle ();
        System.out.println ( "Rectangle object number "+Rectangle.getNumberOfRectangle());

        Rectangle rec2 = new Rectangle (10.4, 20.2);
        System.out.println ( "Rectangle object number "+Rectangle.getNumberOfRectangle());

        Rectangle rec3 = new Rectangle (rec1);
        System.out.println ( "Rectangle object number "+Rectangle.getNumberOfRectangle());

        System.out.println ( "Rectangle object rec1 and rec2 are equal " + rec1.equalTo(rec2));
        System.out.println ( "Rectangle object rec1 and rec3 are equal " + rec1.equalTo(rec3));


    }
}

