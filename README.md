# lab5
android:background="@drawable/bg"


<uses-permission android:name="android.permission.SET_WALLPAPER"/>



package com.example.wallpaper;

import android.app.WallpaperManager;
import android.graphics.Bitmap;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.widget.Button;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;
import androidx.core.content.ContextCompat;

import java.io.IOException;

public class MainActivity extends AppCompatActivity {
    private Button changewallpaper;
    private Drawable drawable;
    private WallpaperManager wpm;
    private int id = 1;
    private final Handler handler = new Handler(Looper.getMainLooper());
    private boolean isRunning = false;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Initialize WallpaperManager
        wpm = WallpaperManager.getInstance(this);

        // Initialize Button
        changewallpaper = findViewById(R.id.btn_click);

        // Set Button OnClickListener
        changewallpaper.setOnClickListener(view -> {
            if (!isRunning) {
                isRunning = true;
                startWallpaperChangeTask();
            } else {
                Toast.makeText(MainActivity.this, "Wallpaper changing is already running", Toast.LENGTH_SHORT).show();
            }
        });
    }

    private void startWallpaperChangeTask() {
        handler.postDelayed(new Runnable() {
            @Override
            public void run() {
                try {
                    // Select drawable based on ID
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

                    // Ensure drawable is a BitmapDrawable
                    if (drawable instanceof BitmapDrawable) {
                        Bitmap wallpaper = ((BitmapDrawable) drawable).getBitmap();
                        wpm.setBitmap(wallpaper); // Set wallpaper
                    } else {
                        Toast.makeText(MainActivity.this, "Drawable is not a valid image", Toast.LENGTH_SHORT).show();
                    }
                } catch (IOException e) {
                    e.printStackTrace();
                    Toast.makeText(MainActivity.this, "Failed to set wallpaper", Toast.LENGTH_SHORT).show();
                }

                // Schedule the next wallpaper change
                handler.postDelayed(this, 3000); // 30 seconds
            }
        }, 0); // Initial delay of 0 seconds
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        // Stop the handler when activity is destroyed
        isRunning = false;
        handler.removeCallbacksAndMessages(null);
    }
}
