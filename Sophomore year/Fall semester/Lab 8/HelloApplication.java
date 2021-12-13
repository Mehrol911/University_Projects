package com.example.javafxdemo;
// U2010046
// MEKHROL BAZAROV
// Section: 002
import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.fxml.FXMLLoader;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.PasswordField;
import javafx.scene.control.TextField;
import javafx.scene.layout.GridPane;
import javafx.scene.layout.HBox;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;
import javafx.scene.text.FontWeight;
import javafx.scene.text.Text;
import javafx.stage.Stage;

import java.io.IOException;

public class HelloApplication extends Application {
    @Override
    public void start(Stage stage) throws IOException {
        FXMLLoader fxmlLoader = new FXMLLoader(HelloApplication.class.getResource("hello-view.fxml"));

        stage.setTitle("Hello!"); // this is a title name


        GridPane grid = new GridPane();
        grid.setAlignment(Pos.CENTER);
        grid.setHgap(10);
        grid.setVgap(10);
/***
        Text scenetitle = new Text("Welcome U2010046");
        scenetitle.setFont(Font.font("Tahoma", FontWeight.NORMAL, 20)); // here we give font size to the title
        grid.add(scenetitle, 0, 0, 2, 1); // this is the scene of the title
***/
        Label userName = new Label("User Name:");
        grid.add(userName, 0, 1);

        TextField userTextField = new TextField();
        grid.add(userTextField, 1, 1);

        Label pw = new Label("Password:");
        grid.add(pw, 0, 2);

        PasswordField pwBox = new PasswordField();
        grid.add(pwBox, 1, 2);
        grid.setPadding(new Insets(25, 25, 25, 25)); // here we set the padding in the center

        Button btn = new Button("Submit"); // creating a button named Submit
        Button clearBtn = new Button("Clear"); // creating a button named Clear
        HBox hbBtn = new HBox(10);
        hbBtn.setAlignment(Pos.BOTTOM_RIGHT);
        hbBtn.getChildren().add(btn);
        hbBtn.getChildren().add(clearBtn);

        btn.setOnAction(new EventHandler<ActionEvent>() {

            @Override
            public void handle(ActionEvent e) {
                System.out.println(userTextField.getText() + " " + pwBox.getText());
            }
        });

        clearBtn.setOnAction(new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent e) {
                userTextField.clear();
                pwBox.clear();

            }
        });

        grid.add(hbBtn, 1, 4);

        Scene scene = new Scene(grid, 300, 275); // 300 is the horizontal length of the scene, another is vertical

        stage.setScene(scene);
        stage.show();
    }

    public static void main(String[] args) {
        launch();
    }
}
