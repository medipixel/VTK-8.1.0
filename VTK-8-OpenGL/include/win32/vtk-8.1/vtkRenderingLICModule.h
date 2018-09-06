
#ifndef VTKRENDERINGLIC_EXPORT_H
#define VTKRENDERINGLIC_EXPORT_H

#ifdef VTKRENDERINGLIC_STATIC_DEFINE
#  define VTKRENDERINGLIC_EXPORT
#  define VTKRENDERINGLIC_NO_EXPORT
#else
#  ifndef VTKRENDERINGLIC_EXPORT
#    ifdef vtkRenderingLIC_EXPORTS
        /* We are building this library */
#      define VTKRENDERINGLIC_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define VTKRENDERINGLIC_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef VTKRENDERINGLIC_NO_EXPORT
#    define VTKRENDERINGLIC_NO_EXPORT 
#  endif
#endif

#ifndef VTKRENDERINGLIC_DEPRECATED
#  define VTKRENDERINGLIC_DEPRECATED __declspec(deprecated)
#  define VTKRENDERINGLIC_DEPRECATED_EXPORT VTKRENDERINGLIC_EXPORT __declspec(deprecated)
#  define VTKRENDERINGLIC_DEPRECATED_NO_EXPORT VTKRENDERINGLIC_NO_EXPORT __declspec(deprecated)
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKRENDERINGLIC_NO_DEPRECATED
#endif


#if ! defined(VTK_LEGACY_SILENT) && ! defined(VTK_IN_VTK)
   /* We are using this module */
#  pragma message "vtkRenderingLIC module was deprecated for VTK 8.1 and will be removed in a future version. Please switch to using `OpenGL2` VTK_RENDERING_BACKEND to replace this module."
#endif


/* AutoInit dependencies.  */
#include "vtkRenderingOpenGLModule.h"

/* AutoInit implementations.  */
#if defined(vtkRenderingLIC_INCLUDE)
# include vtkRenderingLIC_INCLUDE
#endif
#if defined(vtkRenderingLIC_AUTOINIT)
# include "vtkAutoInit.h"
VTK_AUTOINIT(vtkRenderingLIC)
#endif

#endif
