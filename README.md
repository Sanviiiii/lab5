# lab5
android:background="@drawable/bg"


<uses-permission android:name="android.permission.SET_WALLPAPER"/>



package com.example.wallpaper;
import android.os.Bundle;
import android.app.WallpaperManager;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import
        android.graphics.drawable.AnimationDrawable;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;
import java.io.IOException;
import java.util.Timer;
import java.util.TimerTask;
import androidx.activity.EdgeToEdge;
import androidx.appcompat.app.AppCompatActivity;
public class MainActivity extends AppCompatActivity {
    Button changewallpaper;
    Timer mytimer;
    Drawable drawable;
    WallpaperManager wpm;
    int id=1;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        EdgeToEdge.enable(this);
        setContentView(R.layout.activity_main);
        mytimer = new Timer ();
        wpm = WallpaperManager.getInstance(this);
        changewallpaper = findViewById(R.id.btn_click);
        changewallpaper.setOnClickListener(new View.OnClickListener()
        {

            @Override public void onClick(View view) {
                setWallpaper();
            }
        });
    }
    private void setWallpaper()
    {
        mytimer.schedule(new TimerTask()
        {
            @Override
            public void run() {
                if(id==1) {
                    drawable =
                            getResources().getDrawable(R.drawable.one);
                    id = 2;
                }
                else if(id==2) {
                    drawable =
                            getResources().getDrawable(R.drawable.two); id=3;
                }
                else if(id==3) {
                    drawable =
                            getResources().getDrawable(R.drawable.three);
                    id=4;
                }
                else if(id==4) {
                    drawable =
                            getResources().getDrawable(R.drawable.four); id=5;
                }
                else if(id==5) {
                    drawable =
                            getResources().getDrawable(R.drawable.five); id=1;
                }
                Bitmap wallpaper =
                        ((BitmapDrawable)drawable).getBitmap();
                try {
                    wpm.setBitmap(wallpaper);
                }

                catch (IOException e)
                { e.printStackTrace();
                }
            }
        },0,30000);
    }
}
