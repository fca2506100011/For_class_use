#include "Dxlib.h"
#include "Camera.h"
#include "Collisicon.h"
#include "Polygon.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTER, int) {
	CangeWindowMode(TRUE);
	if (DxLib_Init() == -1) {
		return -1;
	}

	SetDrawScreen(DX_SCREEN_BACK);

	Polygon polygon;
	Camera camera;
	Collision collision;

	//球の位置
	Vector3 sphereCenter = { 0.0f,80.0f,0.0f };
	const float spherRedius = 25.0f;
	const float moveSpeed = 3.0f;

	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0) {

		//入力：球の位置を変更
		if (CheckHitKey(KEY_INPUT_LEFT))spherCenter.x -= moveSpeed;
		if (CheckHitKey(KEY_INPUT_RIGHT))spherCenter.x += moveSpeed;
		if (CheckHitKey(KEY_INPUT_UP))spherCenter.z += moveSpeed;
		if (CheckHitKey(KEY_INPUT_DOWN))spherCenter.z -= moveSpeed;

		//上下
		if (CheckHitKey(KEY_INPUT_R))spherCenter.y+= moveSpeed;
		if (CheckHitKey(KEY_INPUT_F))spherCenter.y -= moveSpeed;

		//当たり判定
		bool isHit = ;

		//描画
		ClsDrawScreen();

		//カメラ設定
		camera.Update();

		//三角形を描画
		polygon.Draw();

		//球を描画
		unsigned int spherColor = isHit ? GetColor(255, 50, 50) : GetColor(50, 255, 100);

		DrawSpher3D(
			VGet(sphereCenter.x, sphereCenter.y, sphereCenter.z),
			sphereRedius, 16, spherColor, spherColor, TRUE);
		)

		//状態を画面に表示
		DrawString(20, 20, isHit ? "HIT" : "NO HIT", isHit ? GetColor(255, 80, 80) : GetColor(255, 255, 255));
		DrawString(20,45,"Arrow:X/Z R/F ESC:Exit")

	}

}