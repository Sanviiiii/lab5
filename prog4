Activity_Main.XML
<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:orientation="vertical"
    tools:context=".Signup">

    <TextView
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:layout_marginStart="95dp"
        android:layout_marginEnd="90dp"
        android:text="Signup Activity"
        android:textColor="@color/black"
        android:textSize="30dp"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="1.0"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.092" />

    <EditText
        android:id="@+id/username"
        android:layout_width="398dp"
        android:layout_height="100dp"
        android:hint="Username : "
        android:textAlignment="textStart"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.461"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.313" />

    <EditText
        android:id="@+id/password"
        android:layout_width="389dp"
        android:layout_height="85dp"
        android:hint="Password : "
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.272"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent" />

    <Button
        android:id="@+id/signup"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:layout_marginLeft="150dp"
        android:text="Sign Up"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.116"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.651" />


</androidx.constraintlayout.widget.ConstraintLayout>

Activity_Signin.XML
<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:orientation="vertical"
    tools:context=".Signin">

    <TextView
        android:layout_width="match_parent"
        android:layout_height="wrap_content"
        android:layout_marginStart="95dp"
        android:layout_marginEnd="90dp"
        android:text="Login Activity"
        android:textColor="@color/black"
        android:textSize="30dp"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="1.0"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.121" />

    <EditText
        android:id="@+id/username"
        android:layout_width="match_parent"
        android:layout_height="89dp"
        android:hint="Username : "
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="1.0"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.272" />

    <EditText
        android:id="@+id/password"
        android:layout_width="match_parent"
        android:layout_height="102dp"
        android:hint="Password : "
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.0"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.481" />

    <Button
        android:id="@+id/login"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:layout_marginLeft="150dp"
        android:text="Login"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.021"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.641" />

</androidx.constraintlayout.widget.ConstraintLayout>

Activity_Welcome.XML
<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".Welcome">

    <TextView
        android:id="@+id/textView"
        android:layout_width="182dp"
        android:layout_height="165dp"
        android:text="WELCOME TO HOME PAGE"
        android:textAlignment="center"
        android:textColor="#D32F2F"
        android:textSize="34sp"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintHorizontal_bias="0.498"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.439" />
</androidx.constraintlayout.widget.ConstraintLayout>






Signup.JAVA
package com.example.signup;
import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.Button;
import android.widget.EditText;
import android.content.Intent;
import android.view.View;
import android.widget.Toast;
import java.util.regex.Pattern;

public class Signup extends AppCompatActivity {
    EditText username, pwd;
    Button signup;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        username = (EditText) findViewById(R.id.username);
        pwd = (EditText) findViewById(R.id.password);
        signup = (Button) findViewById(R.id.signup);
        signup.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String email = username.getText().toString();
                String userpwd = pwd.getText().toString();
                if (email.matches("")) {
                    Toast.makeText(Signup.this, "Username cannot be empty", Toast.LENGTH_LONG).show();
                    return;
                }
                if (!isvalidPassword(userpwd)) {
                    Toast.makeText(Signup.this, "Invalid Password", Toast.LENGTH_LONG).show();
                    return;
                }
                Intent intent = new Intent(Signup.this, Signin.class);
                intent.putExtra("email", email);
                intent.putExtra("userpwd", userpwd);
                startActivity(intent);
            }
        });
    }
    Pattern lowercase = Pattern.compile("^.*[a-z].*$");
    Pattern uppercase = Pattern.compile("^.*[A-Z].*$");
    Pattern number = Pattern.compile("^.*[0-9].*$");
    Pattern special = Pattern.compile("^.*[@#$%^&*(){},.;/].*$");

    private boolean isvalidPassword(String userpwd) {
        if (userpwd.length() < 8) {
         return false;
        }
       if(!lowercase.matcher(userpwd).matches()){
           return false;
       }
       if(!uppercase.matcher(userpwd).matches()){
           return false;
       }
       if(!number.matcher(userpwd).matches()){
           return false;
       }
       if(!special.matcher(userpwd).matches()){
           return false;
       }
        return true;
    }
}
Signin.JAVA
package com.example.signup;
import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import android.content.Intent;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

public class Signin extends AppCompatActivity {
   EditText eusername, epwd;
    Button login;
    int count=0;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_signin);
        eusername = (EditText) findViewById(R.id.username);
        epwd = (EditText)findViewById(R.id.password);
        login = (Button)findViewById(R.id.login);
        String regemail=getIntent().getStringExtra("email");
        String regpwd=getIntent().getStringExtra("userpwd");
        login.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String newemail=eusername.getText().toString();
                String newpwd=epwd.getText().toString();
                if(regemail.equals(newemail) && regpwd.equals(newpwd)){
                    Toast.makeText(Signin.this, "Login Successful", Toast.LENGTH_LONG).show();
                    Intent intent=new Intent(Signin.this,Welcome.class);
                    startActivity(intent);
                    eusername.setText("");
                    epwd.setText("");
                }
                else{
                    count++;
                    Toast.makeText(Signin.this, "Login Failed "+count, Toast.LENGTH_LONG).show();
                    if(count==3)
                    {
                        login.setEnabled(false);
                        Toast.makeText(Signin.this, "Login Failed "+count, Toast.LENGTH_LONG).show();
                    }
                }
             }); 
}
}






Welcome.JAVA
package com.example.signup;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;

public class Welcome extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_welcome);
    }
}




