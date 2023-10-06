# Assignment 06

Solved by the group Recursive Rebels.

## Exercises

PLC: 7.1, 7.2, 7.3, 7.4 and 7.5

## Run instructions

```{}
fslex --unicode CLex.fsl
fsyacc --module CPar CPar.fsy
dotnet fsi -r FsLexYacc.Runtime.dll Absyn.fs CPar.fs CLex.fs Parse.fs Interp.fs ParseAndRun.fs
```

On MacBook

```{}
mono ~/bin/fsharp/fslex.exe --unicode CLex.fsl
mono ~/bin/fsharp/fsyacc.exe --module CPar CPar.fsy
dotnet fsi -r FsLexYacc.Runtime.dll Absyn.fs CPar.fs CLex.fs Parse.fs Interp.fs ParseAndRun.fs
```

## Handin details

Handin file name:

- BPRD-06-AMDH-EMNO-MBIA.zip

Files to handin:

- exercise7.1.md
- exer7.2.i.c
- exer7.2.ii.c
- exer7.2.iii.c
- exer7.2.i.rewrite.c
- exer7.2.ii.rewrite.c
- exer7.2.iii.rewrite.c
- CLex.fsl
- CPar.fsy
- Absyn.fs
- Interp.fs
