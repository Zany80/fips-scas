# scas

Assembler and linker for z80.

## Fips version

This is a fipsified version for use as a library. Can be included in fips projects, but can also be used to build a binary with `./fips build`.

## Status

Nearly done. We'd like to get relative labels working so it can compile the
KnightOS kernel, and then there are a few more bugs that need to be sorted out.
Should be usable now.

## Compiling from Source

This is a converted version using the [fips](https://floooh.github.io/fips) build system.

You can use `./fips build` to generate the executable. The output will be in build/fips-deploy/scas/
under a folder with the name of the current configuration.

To build for use on the web, first set up the Emscripten SDK with `./fips setup emscripten`, 
then run `./fips set config emsc-make-release` and `./fips build`.

To build for Windows, use a configuration such as `winXX-vscode-release`, where XX
is 32 or 64 (representing 32-bit or 64-bit builds). `vscode` is for Visual Studio Code,
but `vs2015`, `vs2013`, `vs2017`, and `vstudio` are also valid for the middle component.

For a debug build, just replace the third component of the configuration triplet with `debug` (e.g.
`./fips set config emsc-make-debug` or `fips set config win64-vstudio-debug`).

To use as a library, just use this repository as a fips import. The main function and all unneeded code will be eliminated automatically

## Help, Bugs, Feedback

If you need help with KnightOS, want to keep up with progress, chat with
developers, or ask any other questions about KnightOS, you can hang out in the
IRC channel: [#knightos on irc.freenode.net](http://webchat.freenode.net/?channels=knightos).
 
To report bugs, please create [a GitHub issue](https://github.com/KnightOS/KnightOS/issues/new) or contact us on IRC.
 
If you'd like to contribute to the project, please see the [contribution guidelines](http://www.knightos.org/contributing).
