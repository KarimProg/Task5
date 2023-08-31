##
# File: vector.py
# Author: Karim Abogharbia
# Description: has Vector's data such as health and energy and weapons
# Date: [26/8/2023]
##

# Header Files
from globals import Villain


class Vector(Villain):
    # Vector's weapons [damage, energy, items remaining (0 for inf)]
    weapon = [
        [8, 40, 0, "Laser Blasters"],
        [13, 56, 8, "Plasma Grenades"],
        [22, 100, 3, "Sonic Resonance Cannon"],
        [0.32, 15, 0, "Energy Net Trap"],
        [0.8, 40, 3, "Quantum Deflector"],
    ]

    # Function decreases Gru's energy and uses up one of the weapons
    # param1 'i' Vector's choice
    def giveDamage(self, i):
        self.energy = self.energy - self.weapon[i][1]
        self.weapon[i][2] -= 1

    # Function called when Gru is damaged
    # param1 'damageT' damage taken by Vector
    def takeDamage(self, damageT):
        if damageT != 20:
            self.health = self.health - damageT * (1 - self.shield)
        else:
            self.health = self.health - damageT

    # Function to check if Vector has ammo left
    # param1 'rsrcs' resource to check
    def checkResources(self, rsrcs):
        if rsrcs == 0 or rsrcs == 3:
            return 1
        elif self.weapon[rsrcs][2] != 0:
            return 1
        else:
            return 0
