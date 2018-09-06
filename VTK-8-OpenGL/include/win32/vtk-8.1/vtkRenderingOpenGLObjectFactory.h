/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkRenderingOpenGLObjectFactory.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#ifndef vtkRenderingOpenGLObjectFactory_h
#define vtkRenderingOpenGLObjectFactory_h

#include "vtkRenderingOpenGLModule.h" // For export macro
#include "vtkObjectFactory.h"

class VTKRENDERINGOPENGL_EXPORT vtkRenderingOpenGLObjectFactory : public vtkObjectFactory
{
public:
  static vtkRenderingOpenGLObjectFactory * New();
  vtkTypeMacro(vtkRenderingOpenGLObjectFactory, vtkObjectFactory)

  const char * GetDescription() override { return "vtkRenderingOpenGL factory overrides."; }

  const char * GetVTKSourceVersion() override;

  void PrintSelf(ostream &os, vtkIndent indent) override;

protected:
  vtkRenderingOpenGLObjectFactory();

private:
  vtkRenderingOpenGLObjectFactory(const vtkRenderingOpenGLObjectFactory&) = delete;
  void operator=(const vtkRenderingOpenGLObjectFactory&) = delete;
};

#endif // vtkRenderingOpenGLObjectFactory_h
