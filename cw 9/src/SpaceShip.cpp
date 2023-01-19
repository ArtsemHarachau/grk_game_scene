#include "SpaceShip.h"
#include "glm.hpp"
#include "glew.h"
#include "objload.h"
#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>


SpaceShip::SpaceShip() {

}

SpaceShip::SpaceShip(bool attackDec) {
	attackDecision = attackDec;
}


void SpaceShip::setAttackDecision(bool attackDec) {
	attackDecision = attackDec;
}


bool SpaceShip::getAttackDecision() {
	return attackDecision;
}


void SpaceShip::setSpaceShipDir(glm::vec3 spShipDir) {
	spaceShipDir = spShipDir;
}

glm::vec3 SpaceShip::getSpaceShipDir() {
	return spaceShipDir;
}

void SpaceShip::setSpaceShipPos(glm::vec3 spShipPos) {
	spaceShipPos = spShipPos;
}

glm::vec3 SpaceShip::getSpaceShipPos() {
	return spaceShipPos;
}
