volScalarField T_hydrogen
(
    IOobject
    (
        "T",
        runTime.timeName(),
        hydrogenArea,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    hydrogenArea
);

volVectorField U_hydrogen
(
    IOobject
    (
        "U",
        runTime.timeName(),
        hydrogenArea,
        IOobject::NO_READ,
        IOobject::AUTO_WRITE
    ),
    hydrogenArea,
    dimVelocity
);

volScalarField p_hydrogen
(
    IOobject
    (
        "p",
        runTime.timeName(),
        hydrogenArea,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    hydrogenArea
);

volScalarField rhoGas_hydrogen
(
    IOobject
    (
        "rhoGas",
        runTime.timeName(),
        hydrogenArea,
        IOobject::MUST_READ,
        IOobject::AUTO_WRITE
    ),
    hydrogenArea
);

volScalarField epsilon_filter
(
    IOobject
    (
        "epsilon",
        runTime.timeName(),
        hydrogenArea,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    hydrogenArea,
    dimensionedScalar("epsilon_filter", dimensionSet(0,0,0,0,0,0,0), hydrogenSubDict.lookup("epsilon_filter"))
);

volScalarField mu_g_hydrogen
(
    IOobject
    (
        "mu_g",
        runTime.timeName(),
        hydrogenArea,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    hydrogenArea,
    dimensionedScalar("mu_g_hydrogen", dimensionSet(1,-1,-1,0,0,0,0), 0)
);

volScalarField rhoCpEff_hydrogen
(
    IOobject
    (
        "rhoCpEff",
        runTime.timeName(),
        hydrogenArea,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    hydrogenArea,
    dimensionedScalar("rhoCpEff_hydrogen", dimensionSet(1,-1,-2,-1,0,0,0), 0)
);

volScalarField k_Eff_hydrogen
(
    IOobject
    (
        "k_Eff",
        runTime.timeName(),
        hydrogenArea,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    hydrogenArea,
    dimensionedScalar("k_Eff_hydrogen", dimensionSet(1,1,-3,-1,0,0,0), 0)
);

volScalarField Re_hydrogen
(
    IOobject
    (
        "Re",
        runTime.timeName(),
        hydrogenArea,
        IOobject::READ_IF_PRESENT,
        IOobject::AUTO_WRITE
    ),
    hydrogenArea,
    dimensionedScalar("Re_hydrogen", dimensionSet(0,0,0,0,0,0,0), 0)
);

surfaceScalarField phi_hydrogen
(
    IOobject
    (
        "phi",
        runTime.timeName(),
        hydrogenArea,
        IOobject::NO_READ,
        IOobject::NO_WRITE
    ),
    fvc::flux(U_hydrogen)
);
