/*=============================================================================

  Library: CTK

  Copyright (c) German Cancer Research Center,
    Division of Medical and Biological Informatics

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

=============================================================================*/


#ifndef CTKEXAMPLEDICOMAPPPLUGIN_P_H
#define CTKEXAMPLEDICOMAPPPLUGIN_P_H

#include <ctkPluginActivator.h>

class ctkExampleDicomAppLogic;

class ctkExampleDicomAppPlugin :
  public QObject, public ctkPluginActivator
{
  Q_OBJECT
  Q_INTERFACES(ctkPluginActivator)
#ifdef HAVE_QT5
  Q_PLUGIN_METADATA(IID "org_commontk_example_dicomapp")
#endif

public:

  ctkExampleDicomAppPlugin();
  virtual ~ctkExampleDicomAppPlugin();

  virtual void start(ctkPluginContext* context);
  virtual void stop(ctkPluginContext* context);

  static ctkPluginContext* getPluginContext();

private:

  static ctkPluginContext* Context;

  QObject* AppLogic;

}; // ctkExampleDicomAppPlugin

#endif // CTKEXAMPLEDICOMAPPPLUGIN_P_H
