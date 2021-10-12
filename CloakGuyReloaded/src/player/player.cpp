#include "player/player.h"

Player::Player()
{
	rec.x = GetScreenWidth() / 2;
	rec.y = GetScreenWidth() / 20;
	rec.width = 30;
	rec.height = 30;
	color = SKYBLUE;
}

Player::~Player()
{
}

void Player::movement()
{
	if (IsKeyDown(KEY_W))rec.y -= GetFrameTime() * 420;
	if (IsKeyDown(KEY_S))rec.y += GetFrameTime() * 420;
}

void Player::draw()
{
	DrawRectangleRec(rec, color);
}