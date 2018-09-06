
#ifndef VTKRENDERINGOPENGL_EXPORT_H
#define VTKRENDERINGOPENGL_EXPORT_H

#ifdef VTKRENDERINGOPENGL_STATIC_DEFINE
#  define VTKRENDERINGOPENGL_EXPORT
#  define VTKRENDERINGOPENGL_NO_EXPORT
#else
#  ifndef VTKRENDERINGOPENGL_EXPORT
#    ifdef vtkRenderingOpenGL_EXPORTS
        /* We are building this library */
#      define VTKRENDERINGOPENGL_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define VTKRENDERINGOPENGL_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef VTKRENDERINGOPENGL_NO_EXPORT
#    define VTKRENDERINGOPENGL_NO_EXPORT 
#  endif
#endif

#ifndef VTKRENDERINGOPENGL_DEPRECATED
#  define VTKRENDERINGOPENGL_DEPRECATED __declspec(deprecated)
#  define VTKRENDERINGOPENGL_DEPRECATED_EXPORT VTKRENDERINGOPENGL_EXPORT __declspec(deprecated)
#  define VTKRENDERINGOPENGL_DEPRECATED_NO_EXPORT VTKRENDERINGOPENGL_NO_EXPORT __declspec(deprecated)
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKRENDERINGOPENGL_NO_DEPRECATED
#endif

#include "vtkRenderingOpenGLConfigure.h"
#if ! defined(VTK_LEGACY_SILENT) && ! defined(VTK_IN_VTK)
   /* We are using this module */
#  pragma message "vtkRenderingOpenGL module was deprecated for VTK 8.1 and will be removed in a future version. Please switch to using `OpenGL2` VTK_RENDERING_BACKEND to replace this module."
#endif


/* AutoInit dependencies.  */
#include "vtkRenderingCoreModule.h"
#include "vtkRenderingCoreModule.h"

/* AutoInit implementations.  */
#if defined(vtkRenderingOpenGL_INCLUDE)
# include vtkRenderingOpenGL_INCLUDE
#endif
#if defined(vtkRenderingOpenGL_AUTOINIT)
# include "vtkAutoInit.h"
VTK_AUTOINIT(vtkRenderingOpenGL)
#endif

#endif
