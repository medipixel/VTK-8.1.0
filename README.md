### About this ###
* Built binrary files
   * Based on VisualStudio 2015 sp3
   * Based on Qt 5.10.1
   * OpenGL2, OpenGL support
   * include vtkDICOM submodule

### How do I get this ###
	* clone
		* $ git clone git@github.com:medipixel/VTK-8.1.0.git
	* clone submodules
	    * this module have submodules
		* $ git submodule update --init --recursive
      
### How to buid it ###
* Required
   * VisualStudio 2015
   * Qt 5.10.1
   * CMake 3.11.0-rc4
   * Git for Windows 2.14.1
       * https://git-scm.com/download/win
       * requred in downloading vtkDICOM module.

* Build
   * http://www.vtk.org/
   * How to build vtk on windows
       * http://www.vtk.org/Wiki/VTK/Configure_and_Build
   * download VTK source v8.1.0
       * source code path: VTK source code path
   * CMake install, (v3.11.0-rc4)
       * https://cmake.org/download/
       * CMake 'Add Entry' before 'Configure' (i.e: Visual Studio 2015 vc 14.0 x86, Qt 5.9)
           * VTK_RENDERING_BACKEND:STRING=OpenGL (if VTK.OpenGL project will use OpenGL, VTK.OpenGL2 project will use OpenGL2)
               * default is 'OpenGL2'
                  * VTK.OpenGL project, Because VirtualBox support only OpenGL
                  * VTK.OpenGL2, default value is OpenGL2
           * VTK_Group_Qt:BOOL=ON
               * Turn on Qt support
           * QT_QMAKE_EXECUTABLE:FILEPATH=C:/Qt/Qt5.10.1/msvc2015/bin/qmake.exe (if x64 project, use this: C:/Qt/Qt5.10.1/msvc2015_64/bin/qmake.exe)
               * Set Qmake.exe file path
           * VTK_QT_VERSION:STRING=5
               * CMake wrong print Qt version 4
           * Qt5_DIR:PATH=C:/Qt/Qt5.10.1/msvc2015/lib/cmake/Qt5 (if x64 project, use this: C:/Qt/Qt5.10.1/msvc2015_64/lib/cmake/Qt5)
               * CMake need file path of Qt5Config.cmake.
           * CMAKE_MODULE_PATH:PATH=C:/Qt/Qt5.10.1/msvc2015/lib/cmake/Qt5 (if x64 project, use this: C:/Qt/Qt5.10.1/msvc2015_64/lib/cmake/Qt5)
               * CMake need file path of Qt5Config.cmake.
           * Module_vtkDICOM:BOOL=ON
               * Will not use the dicom read module in VTK 8.0.
                   * Don't support DICOM files in Big endian format.
                   * Don't support writing of DICOM files
                   * vtkDICOM module support above 2 problems, git install required, because CMake download vtkDICOM module with it.
                       * http://dgobbi.github.io/vtk-dicom
                       * https://github.com/dgobbi/vtk-dicom
       * CMake push the button 'Configure'
           * Visual Studio 14 2015 (x64: Visual Studio 14 2015 Win64)
       * CMake push the button 'Generate'
           * generated VTK sln(visual studio solution) file
   * build VTK.sln
       * With admin privilege, launch visual studio 2015
       * Open project vtk.sln
           * build INSTALL project
           * build with 'RelWithDebInfo', to generate pdb files.
	   * fix compile error
		   * /source/Remote/vtkDICOM/Programs/dicomfind.cxx
		   * can't find symbol '_P_WAIT'
		   * add #define _P_WAIT  (0)
		   * _P_WAIT defined in process.h, but same file exist in vtk include path.
   * Merge files
       * copy %PROGRAM FILES%/vtk/cmake
       * copy %PROGRAM FILES%/vtk/share
       * merge %PROGRAM FILES%/vtk/bin [win32Debug/win32Release/win64Debug/win64Release]
       * merge %PROGRAM FILES%/vtk/lib [win32Debug/win32Release/win64Debug/win64Release]
       * merge %PROGRAM FILES%/vtk/include [win32/win64]

