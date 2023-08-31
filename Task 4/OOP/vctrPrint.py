##
# File: gru.py
# Author: Karim Abogharbia
# Description: has Gru's data such as health and energy and weapons
# Date: [26/8/2023]
##


# This function prints Vector's actions
# param1 'vc' instance of class Vector
# param2 'vecchoice' enemy's random choice
def vctr_print(vc, vecchoice):
    if vecchoice < 3:
        print(f"Vector used {vc.weapon[vecchoice][3]}, dmg= {vc.weapon[vecchoice][0]}")
    else:
        print(
            f"Vector used {vc.weapon[vecchoice][3]}, armr={vc.weapon[vecchoice][0] * 100}%"
        )
