set(vtkGUISupportQtOpenGL_LOADED 1)
set(vtkGUISupportQtOpenGL_DEPENDS "vtkCommonCore;vtkGUISupportQt;vtkInteractionStyle;vtkRenderingOpenGL")
set(vtkGUISupportQtOpenGL_LIBRARIES "vtkGUISupportQtOpenGL")
set(vtkGUISupportQtOpenGL_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/vtk-8.1")
set(vtkGUISupportQtOpenGL_LIBRARY_DIRS "")
set(vtkGUISupportQtOpenGL_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/bin")
set(vtkGUISupportQtOpenGL_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkGUISupportQtOpenGLHierarchy.txt")
set(vtkGUISupportQtOpenGL_KIT "")
set(vtkGUISupportQtOpenGL_TARGETS_FILE "")
set(vtkGUISupportQtOpenGL_EXCLUDE_FROM_WRAPPING 1)

if(NOT Qt5_DIR)
  set(Qt5_DIR "C:/Qt/Qt5.10.1/5.10.1/msvc2015/lib/cmake/Qt5")
endif()
find_package(Qt5 REQUIRED QUIET COMPONENTS OpenGL)


