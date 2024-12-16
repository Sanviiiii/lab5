# lab5
android:background="@drawable/bg"


<uses-permission android:name="android.permission.SET_WALLPAPER"/>


Chat gpt code for wall paper


package com.example.wallpaper;

import android.app.WallpaperManager;
import android.graphics.Bitmap;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.os.Bundle;
import android.widget.Button;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;
import androidx.core.content.ContextCompat;

import java.io.IOException;
import java.util.Timer;
import java.util.TimerTask;

public class MainActivity extends AppCompatActivity {

    Button changewallpaper;
    Timer mytimer;
    Drawable drawable;
    WallpaperManager wpm;
    int id = 1;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        mytimer = new Timer();
        wpm = WallpaperManager.getInstance(this);
        changewallpaper = findViewById(R.id.btn_click);

        changewallpaper.setOnClickListener(view -> setWallpaper());
    }

    private void setWallpaper() {
        mytimer.schedule(new TimerTask() {
            @Override
            public void run() {
                runOnUiThread(() -> {
                    try {
                        switch (id) {
                            case 1:
                                drawable = ContextCompat.getDrawable(MainActivity.this, R.drawable.one);
                                id = 2;
                                break;
                            case 2:
                                drawable = ContextCompat.getDrawable(MainActivity.this, R.drawable.two);
                                id = 3;
                                break;
                            case 3:
                                drawable = ContextCompat.getDrawable(MainActivity.this, R.drawable.three);
                                id = 4;
                                break;
                            case 4:
                                drawable = ContextCompat.getDrawable(MainActivity.this, R.drawable.four);
                                id = 5;
                                break;
                            case 5:
                                drawable = ContextCompat.getDrawable(MainActivity.this, R.drawable.five);
                                id = 1;
                                break;
                        }

                        if (drawable != null) {
                            Bitmap wallpaper = ((BitmapDrawable) drawable).getBitmap();
                            wpm.setBitmap(wallpaper);
                        } else {
                            Toast.makeText(MainActivity.this, "Drawable not found!", Toast.LENGTH_SHORT).show();
                        }
                    } catch (Exception e) {
                        e.printStackTrace();
                        Toast.makeText(MainActivity.this, "Error setting wallpaper: " + e.getMessage(), Toast.LENGTH_SHORT).show();
                    }
                });
            }
        }, 0, 3000); // Run immediately and repeat every 3 seconds
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        if (mytimer != null) {
            mytimer.cancel();
        }
    }
}
