#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System/Runtime/Remoting/Channels/AsyncRequest.hpp"
#include "System/Runtime/Remoting/Channels/CADSerializer.hpp"
#include "System/Runtime/Remoting/Channels/ChannelServices.hpp"
#include "System/Runtime/Remoting/Channels/CrossAppDomainChannel.hpp"
#include "System/Runtime/Remoting/Channels/CrossAppDomainData.hpp"
#include "System/Runtime/Remoting/Channels/CrossAppDomainSink.hpp"
#include "System/Runtime/Remoting/Channels/IChannel.hpp"
#include "System/Runtime/Remoting/Channels/IChannelDataStore.hpp"
#include "System/Runtime/Remoting/Channels/IChannelReceiver.hpp"
#include "System/Runtime/Remoting/Channels/IChannelSender.hpp"
#include "System/Runtime/Remoting/Channels/IClientChannelSinkProvider.hpp"
#include "System/Runtime/Remoting/Channels/ISecurableChannel.hpp"
#include "System/Runtime/Remoting/Channels/IServerChannelSinkProvider.hpp"
#include "System/Runtime/Remoting/Channels/SinkProviderData.hpp"
#ifdef __cpp_modules
export module Channels;
#endif
