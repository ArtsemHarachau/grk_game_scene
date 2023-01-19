#pragma once
#include "glm.hpp"
#include "glew.h"
#include "objload.h"
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>

class Laser
{

private:
	glm::vec3 laserDir;
	glm::vec3 laserPos;
	float timeSinceShootLaser;
	bool isLaserFire;
	float laserSpeed;


public:
	Laser();
	Laser(glm::vec3 dirOfLaser, glm::vec3 posOfLaser, float speedOfLaser);


	void setLaserDir(glm::vec3 dirOfLaser);
	glm::vec3 getLaserDir();

	void setLaserPos(glm::vec3 posOfLaser);
	glm::vec3 getLaserPos();

	void setLaserSpeed(float speedOfLaser);
	float getLaserSpeed();

	void setTimeSinceShootLaser(float tSinceShootLaser);
	float getTimeSinceShootLaser();

};

