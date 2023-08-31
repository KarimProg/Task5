##
# File: vctrgru_ops.py
# Author: Karim Abogharbia
# Description: This file has all actions of Gru and Vector
# Date: [26/8/2023]
##

# Header file
import globals as gb



# This function controls what the user's input does
# param1 'gr' instance of class Gru
# param2 'vc' instance of class Vector
# param3 'x' user's input
def gru_ops(gr, vc, x):
    if gr.checkResources(gr, x - 1) == 1:
        if x == 5 or x == 6:
            gr.shield = gr.weapon[x - 1][0]
            gr.giveDamage(gr, x - 1)

        elif x >= 1 and x <= 4:
            if x == 3:
                gr.shield = 0.2
                gr.giveDamage(gr, x - 1)
                vc.takeDamage(vc, gr.weapon[x - 1][0])

            else:
                gr.giveDamage(gr, x - 1)
                vc.takeDamage(vc, gr.weapon[x - 1][0])

        else:
            print("\nWrong input!\n")
            gb.turn -= 1
    else:
        print("\nYou are out of those!\n")
        gb.turn -= 1
    vc.shield = 0


# This function controls what the enemy's choice does
# param1 'vc' instance of class Vector
# param2 'gr' instance of class Gru
# param3 'vecchoice' Vector's choice
def vctr_ops(vc, gr, vecchoice):
    if vc.checkResources(vc, vecchoice) == 1:
        if vecchoice == 3 or vecchoice == 4:
            vc.shield = vc.weapon[vecchoice][0]
            vc.giveDamage(vc, vecchoice)
        else:
            vc.giveDamage(vc, vecchoice)
            gr.takeDamage(gr, vc.weapon[vecchoice][0])
    else:
        gb.turn -= 1
    gr.shield = 0
