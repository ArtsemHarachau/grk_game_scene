#pragma once
#include "glm.hpp"
#include "glew.h"
#include "objload.h"
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>

class SpaceShip
{
private:
	bool attackDecision = false;
	glm::vec3 spaceShipDir = glm::vec3(-0.490263f, 0.000000f, 0.871578f);
	glm::vec3 spaceShipPos = glm::vec3(0.065808f, 1.250000f, -2.189549f);


public:
	SpaceShip();
	SpaceShip(bool attackDec);


	void setAttackDecision(bool attackDec);
	bool getAttackDecision();

	void setSpaceShipDir(glm::vec3 spShipDir);
	glm::vec3 getSpaceShipDir();

	void setSpaceShipPos(glm::vec3 spShipPos);
	glm::vec3 getSpaceShipPos();
};

