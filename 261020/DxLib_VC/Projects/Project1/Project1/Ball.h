#pragma once
#include "DxLib.h"

//BALLのクラス
class Ball {
public:

	//配置
	VECTOR position;

	//方向
	VECTOR velocity;

	//半径
	float radius;

	//インスタンス
	Ball();

	//更新
	void Update();

	//描画
	void Draw();

	//反射X
	void ReflectX();

	//反射Y
	void ReflectY();
};