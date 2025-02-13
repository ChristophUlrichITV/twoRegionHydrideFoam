/*  loop over faces of patch (both patches have same number of faces
    -> only one loop needed)
*/
forAll (metalToHydrogenPatch, facei)
{
    // get cell IDs of cells adjacent to patch
    label IDCellMetal = patchCellsMetalToHydrogenPatch[facei];

    rhoGas_hydrogen.boundaryFieldRef()[hydrogenToMetalPatchID][facei] =
		  rhoGas[IDCellMetal];
}


if (myDebugControl == 1)
{
    Info<< "--> rhoGas_toHydrogen Coupling Successful!" << endl;
    Info<< "-------------------------" << endl;
}
