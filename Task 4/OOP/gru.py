##
# File: gru.py
# Author: Karim Abogharbia
# Description: has Gru's data such as health and energy and weapons
# Date: [26/8/2023]
##

# Header Files
from globals import Villain


class Gru(Villain):
    # Gru's weapons [damage, energy, items remaining (0 for inf)]
    weapon = [
        [11, 50, 0],
        [18, 88, 5],
        [10, 92, 3],
        [20, 120, 1],
        [0.4, 20, 0],
        [0.9, 50, 2],
    ]

    # Function decreases Gru's energy and uses up one of the weapons
    # param1 'i' User's choice
    def giveDamage(self, i):
        self.energy = self.energy - self.weapon[i][1]
        self.weapon[i][2] -= 1

    # Function called when Gru is damaged
    # param1 'damageT' damage received
    def takeDamage(self, damageT):
        self.health = self.health - damageT * (1 - self.shield)

    # Function to check if Gru has ammo left
    # param1 'rsrcs' resource to check
    def checkResources(self, rsrcs):
        if rsrcs == 0 or rsrcs == 4:
            return 1
        elif self.weapon[rsrcs][2] != 0:
            return 1
        else:
            return 0
