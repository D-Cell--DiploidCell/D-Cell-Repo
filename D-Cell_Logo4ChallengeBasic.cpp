//
// ミニゲーム雛形
//

#include "appEnv.hpp"

const static float OCT_SIZE = 2;

// アプリのウインドウサイズ
enum Window {
  WIDTH  = 960,
  HEIGHT = 720
};

float Oct_Center_x = 0;
float Oct_Center_y = 0;
float Line_Grow = 1 * OCT_SIZE;
int time_lapse =3 * 60;
float logo_color = 0;
void Draw_Oct(){
	//1
	drawLine(Oct_Center_x + (150 * OCT_SIZE), Oct_Center_y,
		Oct_Center_x + (150 * OCT_SIZE) + Line_Grow, Oct_Center_y,
		5, Color(1, 1, 1),
		(M_PI / 180)*112.5, Vec2f(1, 1), Vec2f(0, 0));
	//2
	drawLine(Oct_Center_x + ((150 * OCT_SIZE) * std::cos((M_PI / 180) * 45)), Oct_Center_x + ((150 * OCT_SIZE) * std::sin((M_PI / 180) * 45)),
		(Oct_Center_x + ((150 * OCT_SIZE)) * std::cos((M_PI / 180) * 45)) + Line_Grow, Oct_Center_x + ((150 * OCT_SIZE) * std::sin((M_PI / 180) * 45)),
		5, Color(1, 1, 1),
		(M_PI / 180) * 157.5, Vec2f(1, 1), Vec2f(0, 0));
	//3
	drawLine(Oct_Center_x, Oct_Center_y + (150 * OCT_SIZE),
		Oct_Center_x + Line_Grow, Oct_Center_y + (150 * OCT_SIZE),
		5, Color(1, 1, 1),
		(M_PI / 180) * 202.5, Vec2f(1, 1), Vec2f(0, 0));

	//4
	drawLine(Oct_Center_x + ((150 * OCT_SIZE) * std::cos((M_PI / 180) * 135)), Oct_Center_x + ((150 * OCT_SIZE) * std::sin((M_PI / 180) * 135)),
		Oct_Center_x + ((150 * OCT_SIZE) * std::cos((M_PI / 180) * 135)) + Line_Grow, Oct_Center_x + ((150 * OCT_SIZE) * std::sin((M_PI / 180) * 135)),
		5, Color(1, 1, 1),
		(M_PI / 180) * 247.5, Vec2f(1, 1), Vec2f(0, 0));

	//5
	drawLine(Oct_Center_x - (150 * OCT_SIZE), Oct_Center_y,
		Oct_Center_x - (150 * OCT_SIZE) + Line_Grow, Oct_Center_y,
		5, Color(1, 1, 1),
		(M_PI / 180) * 292.5, Vec2f(1, 1), Vec2f(0, 0));

	//6
	drawLine(Oct_Center_x + ((150 * OCT_SIZE) * std::cos((M_PI / 180) * 225)), Oct_Center_x + ((150 * OCT_SIZE) * std::sin((M_PI / 180) * 225)),
		Oct_Center_x + ((150 * OCT_SIZE) * std::cos((M_PI / 180) * 225)) + Line_Grow, Oct_Center_x + ((150 * OCT_SIZE) * std::sin((M_PI / 180) * 225)),
		5, Color(1, 1, 1),
		(M_PI / 180) * 337.5, Vec2f(1, 1), Vec2f(0, 0));

	//7
	drawLine(Oct_Center_x, Oct_Center_y - (150 * OCT_SIZE),
		Oct_Center_x + Line_Grow, Oct_Center_y - (150 * OCT_SIZE),
		5, Color(1, 1, 1),
		(M_PI / 180) * 22.5, Vec2f(1, 1), Vec2f(0, 0));

	//8
	drawLine(Oct_Center_x + ((150 * OCT_SIZE) * std::cos((M_PI / 180) * 315)), Oct_Center_x + ((150 * OCT_SIZE) * std::sin((M_PI / 180) * 315)),
		Oct_Center_x + ((150 * OCT_SIZE) * std::cos((M_PI / 180) * 315)) + Line_Grow, Oct_Center_x + ((150 * OCT_SIZE) * std::sin((M_PI / 180) * 315)),
		5, Color(1, 1, 1),
		(M_PI / 180) * 67.5, Vec2f(1, 1), Vec2f(0, 0));
	};




// 
// メインプログラム
// 
int main() {
  // アプリウインドウの準備
  AppEnv app_env(Window::WIDTH, Window::HEIGHT);

  Texture D_Cell("res/D-Cellw.png");

  
  // メインループ
  while (1) {
    // ウィンドウが閉じられたらアプリを終了
    if (!app_env.isOpen()) return 0;

	
    // 描画準備
    app_env.setupDraw();
    
    //
    // ここにゲームの処理を書く
    // 
	time_lapse -= 1;
	Line_Grow += OCT_SIZE;

  if (time_lapse > 0){

	  Draw_Oct();
	}
	
	if(time_lapse < 0) {
		Line_Grow = 1 * OCT_SIZE * 180;

		
		Draw_Oct();
	}
	if (time_lapse < -30) {
		Line_Grow = 1 * OCT_SIZE * 180;
		logo_color += 0.01666666;
		
		Draw_Oct();

		drawTextureBox(Oct_Center_x - (110 * OCT_SIZE), Oct_Center_y + (30 * OCT_SIZE), OCT_SIZE * 214, OCT_SIZE * 40,
			54, 75, 214, 40,
			D_Cell, Color(logo_color, logo_color, logo_color),
			0, Vec2f(0.75, 0.75), Vec2f(0, 0));

		drawTextureBox(Oct_Center_x + (20 * OCT_SIZE), Oct_Center_y - (40 * OCT_SIZE), OCT_SIZE * 111, OCT_SIZE * 32,
			141, 223, 111, 32,
			D_Cell, Color(logo_color, logo_color, logo_color),
			0, Vec2f(0.75, 0.75), Vec2f(0, 0));

		drawTextureBox(Oct_Center_x + (80 * OCT_SIZE), Oct_Center_y - (170 * OCT_SIZE), OCT_SIZE * 115, OCT_SIZE * 34,
			114, 339, 115, 34,
			D_Cell, Color(logo_color, logo_color, logo_color),
			0, Vec2f(0.75, 0.75), Vec2f(0, 0));
		
	}
	if (time_lapse < -90) {
		Line_Grow = 1 * OCT_SIZE * 180;
		float logo_color = 1;
		Draw_Oct();

		drawTextureBox(Oct_Center_x - (110 * OCT_SIZE), Oct_Center_y +  (30 * OCT_SIZE), OCT_SIZE * 214, OCT_SIZE * 40,
			54, 75, 214, 40,
			D_Cell, Color(logo_color, logo_color, logo_color),
			0, Vec2f(0.75, 0.75), Vec2f(0, 0));

		drawTextureBox(Oct_Center_x + (20 * OCT_SIZE), Oct_Center_y - (40 * OCT_SIZE), OCT_SIZE * 111, OCT_SIZE * 32,
			141, 223, 111, 32,
			D_Cell, Color(logo_color, logo_color, logo_color),
			0, Vec2f(0.75, 0.75), Vec2f(0, 0));

		drawTextureBox(Oct_Center_x + (80 * OCT_SIZE), Oct_Center_y - (170 * OCT_SIZE), OCT_SIZE * 115, OCT_SIZE * 34,
			114, 339, 115, 34,
			D_Cell, Color(logo_color, logo_color, logo_color),
			0, Vec2f(0.75, 0.75), Vec2f(0, 0));
	}
    // 画面を更新
    app_env.update();
  }

  // アプリ終了
}
