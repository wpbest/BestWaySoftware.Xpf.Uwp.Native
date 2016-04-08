# BestWaySoftware.Xpf.Uwp.Native
Example of a Windows 10 UWP Native C++ Nuget Package

This is a simple example of a Native C++ nuget package for Windows 10 UWP
BestWaySoftware.Xpf.Uwp.Native is a C++ Windows 10 UWP DLL library
Test.BestWaySoftware.Xpf.Uwp.Native is a C++ Windows 10 UWP test application

Build the BestWaySoftware.Xpf.Uwp.Native library with the solution BestWaySoftware.Xpf.Uwp.Native.sln
Use the batch/command script CleanBuildAll.cmd to clean and build all configurations and platforms

Use the batch/command script to create the nuget package
CreateNativeNuGet.cmd

The nuget.exe nuget packaging tool must be installed
Use download-nuget.cmd to install the nuget packaging tool

Increment the nuget package version by editing text file NuGetPackageVersion.txt

Run the CreateNativeNuGet.cmd batch/command file to create the nuget package

Copy the new nuget packages into the NugetRepository subdirectory

Load the Test.BestWaySoftware.Xpf.Uwp.Native application with the solution Test.BestWaySoftware.Xpf.Uwp.Native.sln

Install the latest nuget package with the Visual Studio Nuget Package Manager

Click on Tools -> Nuget Package Manager -> Manage Nuget Packages for Solutions...

Select the Package source by clicking on the gear icon in the upper right corner

Select the Local Package source and unselect the others.

Depending on the defined version created, Click the Select on Updates or Browse headings to select the new nuget package created.

Install or Update the nuget package

Build the application with the nuget package installed
