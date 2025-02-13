IOdictionary metalHydrideSettings
(
    IOobject
    (
        "metalHydrideSettings",
        runTime.constant(),
        runTime,
        IOobject::MUST_READ,
        IOobject::NO_WRITE
    )
);

IOdictionary hydrideMaterialConfig
(
    IOobject
    (
        "hydrideMaterialConfig",
        runTime.constant(),
        runTime,
        IOobject::MUST_READ,
        IOobject::NO_WRITE
    )
);

// Reading Hydride Material Info from /constant folder
const wordList hydrideMaterials(hydrideMaterialConfig.toc());
const word selectedHydrideMaterial(metalHydrideSettings.lookup("material"));
const word HydrogenSettings("H2");
Info<< "\n\nSelected Hydride Material: " << selectedHydrideMaterial << "\n\n"<<endl;
const dictionary& subDict = hydrideMaterialConfig.subDict(selectedHydrideMaterial);
const dictionary& hydrogenSubDict = hydrideMaterialConfig.subDict(HydrogenSettings);


//------------------------------------------------------

dimensionedScalar deltaH_a
(
    subDict.lookup("deltaH_a")
);

dimensionedScalar deltaH_d
(
    subDict.lookup("deltaH_d")
);

dimensionedScalar deltaS_a
(
    subDict.lookup("deltaS_a")
);

dimensionedScalar deltaS_d
(
    subDict.lookup("deltaS_d")
);

dimensionedScalar M_hydrogen
(
    hydrogenSubDict.lookup("M_hydrogen")
);

dimensionedScalar cp_metal
(
    subDict.lookup("cp_metal")
);

dimensionedScalar cp_gas
(
    hydrogenSubDict.lookup("cp_gas")
);

dimensionedScalar cp_filter
(
    hydrogenSubDict.lookup("cp_filter")
);

dimensionedScalar E_a
(
    subDict.lookup("E_a")
);

dimensionedScalar E_d
(
    subDict.lookup("E_d")
);

dimensionedScalar p_ref
(
    hydrogenSubDict.lookup("p_ref")
);

dimensionedScalar T_ref
(
    hydrogenSubDict.lookup("T_ref")
);

dimensionedScalar R
(
    hydrogenSubDict.lookup("R")
);

dimensionedScalar maxHAbsorp
(
    subDict.lookup("maxHAbsorp")
);

dimensionedScalar rho_empty
(
    subDict.lookup("rho_empty")
);

dimensionedScalar rho_filter
(
    hydrogenSubDict.lookup("rho_filter")
);

dimensionedScalar M_metal
(
    subDict.lookup("M_metal")
);

dimensionedScalar k_metal
(
    subDict.lookup("k_metal")
);

dimensionedScalar d_part
(
    subDict.lookup("d_part")
);

dimensionedScalar k_hydrogen
(
    hydrogenSubDict.lookup("k_hydrogen")
);

dimensionedScalar k_filter
(
    hydrogenSubDict.lookup("k_filter")
);

dimensionedScalar d_part_filter
(
    hydrogenSubDict.lookup("d_part_filter")
);

dimensionedScalar K_perm
(
    subDict.lookup("K_perm")
);

dimensionedScalar K_perm_hydrogen
(
    hydrogenSubDict.lookup("K_perm_hydrogen")
);

dimensionedScalar p_eq_A
(
    metalHydrideSettings.lookup("p_eq_A")
);

dimensionedScalar p_eq_B
(
    metalHydrideSettings.lookup("p_eq_B")
);

dimensionedScalar absorpDesorp
(
    metalHydrideSettings.lookup("absorpDesorp")
);


Info<< "--> Dictionaries Read Successfully!" << endl;
Info<< "-------------------------" << endl;
