##
# File: gruPrint.py
# Author: Karim Abogharbia
# Description: Prints choices for player and stats
# Date: [26/8/2023]
##


# param1 'gr' instance of class Gru
# param2 'vc' instance of class Vector
def gru_print(gr, vc):
    print(f"Your health: {gr.health}")
    print(f"Your energy: {gr.energy}")
    print(f"Vector health: {vc.health}")
    print(f"Vector energy: {vc.energy}")
    print("What will Gru use?")
    print(f"1. Freeze Gun dmg= {gr.weapon[0][0]}, enrg= {gr.weapon[0][1]}, rmnng= inf")
    print(
        f"2. Electric Prod dmg= {gr.weapon[1][0]}, enrg= {gr.weapon[1][1]}, rmnng= {gr.weapon[1][2]}"
    )
    print(
        f"3. Mega Magnet dmg= {gr.weapon[2][0]}, enrg= {gr.weapon[2][1]}, rmnng= {gr.weapon[2][2]}"
    )
    print(
        f"4. Kalman Missle dmg= {gr.weapon[3][0]}, enrg= {gr.weapon[3][1]}, rmnng= {gr.weapon[3][2]}"
    )
    print(
        f"5. Energy-Projected Barrier Gun armr= {gr.weapon[4][0] * 100}%, enrg= {gr.weapon[4][1]}, rmnng= inf"
    )
    print(
        f"6. Selective Permeability Shield armr= {gr.weapon[5][0] * 100}%, enrg= {gr.weapon[5][1]}, rmnng= {gr.weapon[5][2]}"
    )
