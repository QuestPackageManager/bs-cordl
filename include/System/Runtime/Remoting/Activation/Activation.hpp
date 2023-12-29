#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System/Runtime/Remoting/Activation/ActivationServices.hpp"
#include "System/Runtime/Remoting/Activation/AppDomainLevelActivator.hpp"
#include "System/Runtime/Remoting/Activation/ConstructionLevelActivator.hpp"
#include "System/Runtime/Remoting/Activation/ContextLevelActivator.hpp"
#include "System/Runtime/Remoting/Activation/IActivator.hpp"
#include "System/Runtime/Remoting/Activation/IConstructionCallMessage.hpp"
#include "System/Runtime/Remoting/Activation/IConstructionReturnMessage.hpp"
#include "System/Runtime/Remoting/Activation/RemoteActivationAttribute.hpp"
#include "System/Runtime/Remoting/Activation/RemoteActivator.hpp"
#ifdef __cpp_modules
export module Activation;
#endif
