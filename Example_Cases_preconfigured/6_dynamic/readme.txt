OpenFOAM Version: 8

These cases simulate the cyclical absoprtion and desorption processes of Hydralloy C5 and LaNi5 (see Fig. 11).

1. After the selected reaction time for the absorption or desorption reaction has elapsed, adjust 
the boundary conditions (0-folder; pressure and temperature) so that they are correct for the subsequent reaction.
2. Adjust the value for "T_inf" in constant/metalHydrideSettings to the boundary condition set up in the 0-folder.
3. Adjust the simulation time and step size in system/controlDict.