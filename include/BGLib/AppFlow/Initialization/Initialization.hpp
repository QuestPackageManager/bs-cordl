#ifdef __cpp_modules
module;
#endif

#pragma once
#include "BGLib/AppFlow/Initialization/AddressablesAsyncInstaller_1.hpp"
#include "BGLib/AppFlow/Initialization/AsyncInstaller.hpp"
#include "BGLib/AppFlow/Initialization/AsyncInstallerRegistry.hpp"
#include "BGLib/AppFlow/Initialization/AsyncLoader.hpp"
#include "BGLib/AppFlow/Initialization/AsyncSceneContext.hpp"
#include "BGLib/AppFlow/Initialization/AsyncSceneContextLoadersQueue.hpp"
#include "BGLib/AppFlow/Initialization/ConcurrentAsyncLoaders.hpp"
#include "BGLib/AppFlow/Initialization/CustomizableEnvironmentCommandLineArgsProvider.hpp"
#include "BGLib/AppFlow/Initialization/FeatureAsyncInstaller.hpp"
#include "BGLib/AppFlow/Initialization/IInstallerRegistry.hpp"
#include "BGLib/AppFlow/Initialization/InitializationTime.hpp"
#include "BGLib/AppFlow/Initialization/ScriptableObjectReferenceAsyncInstaller_1.hpp"
#ifdef __cpp_modules
export module Initialization;
#endif
