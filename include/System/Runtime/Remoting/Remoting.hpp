#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System/Runtime/Remoting/ActivatedClientTypeEntry.hpp"
#include "System/Runtime/Remoting/ActivatedServiceTypeEntry.hpp"
#include "System/Runtime/Remoting/ChannelData.hpp"
#include "System/Runtime/Remoting/ChannelInfo.hpp"
#include "System/Runtime/Remoting/ClientActivatedIdentity.hpp"
#include "System/Runtime/Remoting/ClientIdentity.hpp"
#include "System/Runtime/Remoting/ConfigHandler.hpp"
#include "System/Runtime/Remoting/CustomErrorsModes.hpp"
#include "System/Runtime/Remoting/DisposerReplySink.hpp"
#include "System/Runtime/Remoting/EnvoyInfo.hpp"
#include "System/Runtime/Remoting/FormatterData.hpp"
#include "System/Runtime/Remoting/IChannelInfo.hpp"
#include "System/Runtime/Remoting/IEnvoyInfo.hpp"
#include "System/Runtime/Remoting/IRemotingTypeInfo.hpp"
#include "System/Runtime/Remoting/Identity.hpp"
#include "System/Runtime/Remoting/InternalRemotingServices.hpp"
#include "System/Runtime/Remoting/ObjRef.hpp"
#include "System/Runtime/Remoting/ProviderData.hpp"
#include "System/Runtime/Remoting/RemotingConfiguration.hpp"
#include "System/Runtime/Remoting/RemotingException.hpp"
#include "System/Runtime/Remoting/RemotingServices.hpp"
#include "System/Runtime/Remoting/ServerIdentity.hpp"
#include "System/Runtime/Remoting/SingleCallIdentity.hpp"
#include "System/Runtime/Remoting/SingletonIdentity.hpp"
#include "System/Runtime/Remoting/SoapServices.hpp"
#include "System/Runtime/Remoting/TypeEntry.hpp"
#include "System/Runtime/Remoting/TypeInfo.hpp"
#include "System/Runtime/Remoting/WellKnownClientTypeEntry.hpp"
#include "System/Runtime/Remoting/WellKnownObjectMode.hpp"
#include "System/Runtime/Remoting/WellKnownServiceTypeEntry.hpp"
#ifdef __cpp_modules
export module Remoting;
#endif
