#include "DxLib.h"
#include "Paddle.h"
#include"ヘッダー.h"
#include "Game.h"
#include "Ball.h"









//3D設定
SetUseZBuffer3D(TRUE);
SetWriteZBuffer3D(TRUE);
//ライト
SetUseLighting(TRUE);
SetLightEnable(TRUE);
SetGlobalAmbientLight(GetColorF(1, 1, 1, 1, ));
//カメラ
SetCameraPositionAndTarget_UpVecY(VGet(0, 0, -1000), VGet(0, 0, 0));
SetDrawScreen(DX_SCREEN_BACK);

Game game;

while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0) {
	ClearDrawScreen();
	game.Update();
	game.Draw();

	ScreenFlip();
}
DxLib_End();

return 0;
