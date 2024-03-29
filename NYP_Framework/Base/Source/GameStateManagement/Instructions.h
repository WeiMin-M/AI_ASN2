#pragma once

#include "Scene.h"
#include "Mtx44.h"
#include "Mesh.h"
#include "MatrixStack.h"
#include "../FPSCamera.h"
#include "../SpriteEntity.h"

class SceneManager;

class TextEntity;
class CInstructions : public Scene
{
public:
	CInstructions();
	~CInstructions();

	virtual void Init();
	virtual void Update(double dt);
	virtual void Render();
	virtual void Exit();

private:
	FPSCamera camera;
	SpriteEntity* MenuStateBG;
	SpriteEntity* Logo;

	TextEntity* textObj[6];
	bool showLoading;
	float sound;
	float logoypos;
	string left, right, up, down;
};