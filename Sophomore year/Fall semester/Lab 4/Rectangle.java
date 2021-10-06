package com.company;

public class Rectangle implements GeometricComparable
{ // Here rectangle class implements interface Geometric Comparable
    private double height;
    private double width;
    public static int numberOfRectangle;

    Rectangle() // Default constructor
    {
        numberOfRectangle++;
    }

    Rectangle (double h, double w) // parametric constructor
    {
        this.height = h;
        this.width = w;
        numberOfRectangle++;
    }

    Rectangle (Rectangle r) //
    {
        r.height = this.height;
        r.width = this.width;
        numberOfRectangle++;
    }
// HERE WE USE SETTERS, GETTERS
    public double getHeight() // accessor
    {
        return height;
    }

    public void setHeight(double height) //mutator
    {
        this.height = height;
    }

    public double getWidth() // accessor
    {
        return width;
    }

    public void setWidth(double width) //mutator
    {
        this.width = width;
    }

    public double getArea() // accessor
    {
        return height * width;  // calculating the area of a rectangle
    }

    static public int getNumberOfRectangle()
    {
        return numberOfRectangle;
    }

    public boolean equalTo(Object o) // parameter passing
    {
        return ((Rectangle)o).width == width && ((Rectangle)o).height == height;
    }
}