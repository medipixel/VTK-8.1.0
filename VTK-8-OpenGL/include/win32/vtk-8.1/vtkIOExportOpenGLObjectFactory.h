/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkIOExportOpenGLObjectFactory.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#ifndef vtkIOExportOpenGLObjectFactory_h
#define vtkIOExportOpenGLObjectFactory_h

#include "vtkIOExportOpenGLModule.h" // For export macro
#include "vtkObjectFactory.h"

class VTKIOEXPORTOPENGL_EXPORT vtkIOExportOpenGLObjectFactory : public vtkObjectFactory
{
public:
  static vtkIOExportOpenGLObjectFactory * New();
  vtkTypeMacro(vtkIOExportOpenGLObjectFactory, vtkObjectFactory)

  const char * GetDescription() override { return "vtkIOExportOpenGL factory overrides."; }

  const char * GetVTKSourceVersion() override;

  void PrintSelf(ostream &os, vtkIndent indent) override;

protected:
  vtkIOExportOpenGLObjectFactory();

private:
  vtkIOExportOpenGLObjectFactory(const vtkIOExportOpenGLObjectFactory&) = delete;
  void operator=(const vtkIOExportOpenGLObjectFactory&) = delete;
};

#endif // vtkIOExportOpenGLObjectFactory_h
