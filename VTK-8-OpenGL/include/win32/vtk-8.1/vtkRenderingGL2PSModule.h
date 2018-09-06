
#ifndef VTKRENDERINGGL2PS_EXPORT_H
#define VTKRENDERINGGL2PS_EXPORT_H

#ifdef VTKRENDERINGGL2PS_STATIC_DEFINE
#  define VTKRENDERINGGL2PS_EXPORT
#  define VTKRENDERINGGL2PS_NO_EXPORT
#else
#  ifndef VTKRENDERINGGL2PS_EXPORT
#    ifdef vtkRenderingGL2PS_EXPORTS
        /* We are building this library */
#      define VTKRENDERINGGL2PS_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define VTKRENDERINGGL2PS_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef VTKRENDERINGGL2PS_NO_EXPORT
#    define VTKRENDERINGGL2PS_NO_EXPORT 
#  endif
#endif

#ifndef VTKRENDERINGGL2PS_DEPRECATED
#  define VTKRENDERINGGL2PS_DEPRECATED __declspec(deprecated)
#  define VTKRENDERINGGL2PS_DEPRECATED_EXPORT VTKRENDERINGGL2PS_EXPORT __declspec(deprecated)
#  define VTKRENDERINGGL2PS_DEPRECATED_NO_EXPORT VTKRENDERINGGL2PS_NO_EXPORT __declspec(deprecated)
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKRENDERINGGL2PS_NO_DEPRECATED
#endif


#if ! defined(VTK_LEGACY_SILENT) && ! defined(VTK_IN_VTK)
   /* We are using this module */
#  pragma message "vtkRenderingGL2PS module was deprecated for VTK 8.1 and will be removed in a future version. Please switch to using `OpenGL2` VTK_RENDERING_BACKEND to replace this module."
#endif


/* AutoInit dependencies.  */
#include "vtkRenderingContextOpenGLModule.h"

#endif
