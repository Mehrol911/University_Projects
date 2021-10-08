class Author
{
    private String name;
    private String email;
    private char gender;
    Author()
    {

    }
    Author(String name, String email, char gender)
    {
        this.name =name; this.email=email;this.gender=gender;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public char getGender() {
        return gender;
    }

    public void setGender(char gender) {
        this.gender = gender;
    }

    // get and set methods
    public void printAuthor(){ System.out.println("Author's name: " + this.name + "Email: " + this.email + "Gender: " + this.gender );}

}
class Book
{
    private String name;
    private Author author ;
    private double price;
    private int qtyInStock;
    Book(){}
    Book(String name, Author author, double price, int qtyInStock)
    {
        this.name = name; this.author=author; this.price=price; this.qtyInStock= qtyInStock;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public Author getAuthor() {
        return author;
    }

    public void setAuthor(Author author) {
        this.author = author;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public int getQtyInStock() {
        return qtyInStock;
    }

    public void setQtyInStock(int qtyInStock) {
        this.qtyInStock = qtyInStock;
    }

    public void printBook()
    {
        System.out.println("Book's Name: " + this.name + "Price: " + this.price + " Quantity: " + this.qtyInStock);
        author.printAuthor();
    }
}

public class Main
{
    public static void main(String[] args) {
        Author aut = new Author("John Peter ", "j@gmail.com ",'m');
        Book bok = new Book("Intro to java ", aut, 120.5 , 20);
        bok.printBook();

    }
}