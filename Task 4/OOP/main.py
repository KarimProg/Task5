##
# File: main.py
# Author: Karim Abogharbia
# Description: This program simulates a game where you have some choices
#              of weapons and select them according to your health and energy
#               to win.
# Date: [26/8/2023]
##

# Header Files
from gru import Gru
from vector import Vector
from vctrgru_ops import *
from vctrPrint import *
from gruPrint import *
import globals as gb
import random

# instances of classes
gr = Gru
vc = Vector


while True:
    # check if someone lost
    if gr.health < 0 or gr.energy < 0:
        print("You Lost!")
        break
    elif vc.health < 0 or vc.energy < 0:
        print("You Won!")
        break

    # if condition to decide turn
    if gb.turn % 2 == 0:
        gru_print(gr, vc)

        x = 7
        while x > 6 or x < 1:
            x = int(input("Input: "))

        gru_ops(gr, vc, x)

    # Enemy's choices are made randomly
    else:
        vecchoice = int(random.uniform(0, 4))
        vctr_ops(vc, gr, vecchoice)
        vctr_print(vc, vecchoice)

    # Next turn to start
    gb.turn += 1
