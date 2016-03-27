# BestWaySoftware.Xpf.Uwp.Native
Example of a Windows 10 UWP Native C++ Nuget Package

This is a simple example of a Native C++ nuget package for Windows 10 UWP
BestWaySoftware.Xpf.Uwp.Native is a C++ Windows 10 UWP DLL library
Test.BestWaySoftware.Xpf.Uwp.Native is a C++ Windows 10 UWP test application

Build the BestWaySoftware.Xpf.Uwp.Native library with the solution BestWaySoftware.Xpf.Uwp.Native.sln
Use the batch/command script to create the nuget package
CreateNativeNuGet.cmd

The nuget.exe nuget packaging tool must be installed
Use download-nuget.cmd to install the nuget packaging tool

Load the Test.BestWaySoftware.Xpf.Uwp.Native application with the solution Test.BestWaySoftware.Xpf.Uwp.Native.sln

Install the nuget package with the Visual Studio Nuget Package Manager

Build the application with the nuget package installed

Nuget Package Contents
├───build
│   └───native
│       ├───include
│       │   └BestWaySoftware.Xpf.Uwp.Native.h
│       ├───win10-arm
│       │   ├BestWaySoftware.Xpf.Uwp.Native.dll
│       │   ├BestWaySoftware.Xpf.Uwp.Native.lib
│       │   ├BestWaySoftware.Xpf.Uwp.Native.pdb
│       │   └BestWaySoftware_Xpf_Uwp_Native.pri
│       ├───win10-x64
│       │   ├BestWaySoftware.Xpf.Uwp.Native.dll
│       │   ├BestWaySoftware.Xpf.Uwp.Native.lib
│       │   ├BestWaySoftware.Xpf.Uwp.Native.pdb
│       │   └BestWaySoftware_Xpf_Uwp_Native.pri
│       ├───win10-x86
│       │   ├BestWaySoftware.Xpf.Uwp.Native.dll
│       │   ├BestWaySoftware.Xpf.Uwp.Native.lib
│       │   ├BestWaySoftware.Xpf.Uwp.Native.pdb
│       │   └BestWaySoftware_Xpf_Uwp_Native.pri
│       └BestWaySoftware.Xpf.Uwp.Native.targets
├───runtimes
│   ├───win10-arm
│   │   └───native
│   │       ├BestWaySoftware.Xpf.Uwp.Native.dll
│   │       ├BestWaySoftware.Xpf.Uwp.Native.lib
│   │       ├BestWaySoftware.Xpf.Uwp.Native.pdb
│   │       └BestWaySoftware_Xpf_Uwp_Native.pri
│   ├───win10-x64
│   │   └───native
│   │       ├BestWaySoftware.Xpf.Uwp.Native.dll
│   │       ├BestWaySoftware.Xpf.Uwp.Native.lib
│   │       ├BestWaySoftware.Xpf.Uwp.Native.pdb
│   │       └BestWaySoftware_Xpf_Uwp_Native.pri
│   └───win10-x86
│       └───native
│   │       ├BestWaySoftware.Xpf.Uwp.Native.dll
│   │       ├BestWaySoftware.Xpf.Uwp.Native.lib
│   │       ├BestWaySoftware.Xpf.Uwp.Native.pdb
│   │       └BestWaySoftware_Xpf_Uwp_Native.pri
└BestWaySoftware.Xpf.Uwp.Native.nuspec

