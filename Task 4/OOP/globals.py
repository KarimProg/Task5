##
# File: globals.py
# Author: Karim Abogharbia
# Description: Files needed globaly
# Date: [26/8/2023]
##

turn = 0

class Villain:
    health = 100
    energy = 500
    shield = 0
    weapon = [0]

    def giveDamage(self, Edamage):
        self.energy = self.energy - Edamage

    def takeDamage(self, damageT):
        health = health - damageT * (1 - self.shield)

    def checkResources(self, rsrcs):
        if self.weapon[rsrcs] != 0:
            return 1
        else:
            return 0
