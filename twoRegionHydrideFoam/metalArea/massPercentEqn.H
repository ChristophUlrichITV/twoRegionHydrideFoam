/*
	Calculate the amount of hydrogen absorbed / desorbed wt.-% (massPercentAbsorp) and the conversion.
	If LaNi5 is simulated, calculate the ratio of H to M atoms.
*/
massPercentAbsorp = ((rhoMetal - rho_empty)/rho_empty)*100;

// calculate conversion depending on starting load of metal hydride
forAll(conversion, i)
{
    // Absoprtion
    if (absorpDesorp.value() == 1)
    {
      conversion[i] = (massPercentAbsorp[i]-massPercentAbsorp0[i])/(maxHAbsorp.value());
    }
    // Desorption
    else
    {
      conversion[i] = 1+(massPercentAbsorp[i]-massPercentAbsorp0[i])/(maxHAbsorp.value());
    }
}

// In case of LaNi5, also calculate HMRatio
if (selectedHydrideMaterial == "LaNi5")
{
    HMRatio = (2*(rhoMetal-rho_empty)/M_hydrogen)/(rho_empty/M_metal);
}


if (myDebugControl == 1)
{
    Info<< "--> massPercentEqn works!" << endl;
    Info<< "min(massPercentAbsorp) = " << Foam::min(massPercentAbsorp)  << endl;
    Info<< "max(massPercentAbsorp) = " << Foam::max(massPercentAbsorp)  << endl;
    Info<< "-------------------------" << endl;
}
