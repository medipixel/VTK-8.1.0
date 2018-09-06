set(vtkRenderingOpenGL_LOADED 1)
set(vtkRenderingOpenGL_DEPENDS "vtkCommonCore;vtkCommonDataModel;vtkCommonExecutionModel;vtkCommonMath;vtkCommonSystem;vtkCommonTransforms;vtkFiltersCore;vtkIOImage;vtkImagingCore;vtkImagingHybrid;vtkParseOGLExt;vtkRenderingCore;vtkRenderingCore;vtkUtilitiesEncodeString;vtksys")
set(vtkRenderingOpenGL_LIBRARIES "vtkRenderingOpenGL")
set(vtkRenderingOpenGL_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/vtk-8.1")
set(vtkRenderingOpenGL_LIBRARY_DIRS "")
set(vtkRenderingOpenGL_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/bin")
set(vtkRenderingOpenGL_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkRenderingOpenGLHierarchy.txt")
set(vtkRenderingOpenGL_KIT "vtkOpenGL")
set(vtkRenderingOpenGL_TARGETS_FILE "")
set(vtkRenderingOpenGL_IMPLEMENTS "vtkRenderingCore")


