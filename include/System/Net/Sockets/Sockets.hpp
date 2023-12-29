#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System/Net/Sockets/AddressFamily.hpp"
#include "System/Net/Sockets/IOControlCode.hpp"
#include "System/Net/Sockets/IPPacketInformation.hpp"
#include "System/Net/Sockets/IPProtectionLevel.hpp"
#include "System/Net/Sockets/LingerOption.hpp"
#include "System/Net/Sockets/MulticastOption.hpp"
#include "System/Net/Sockets/NetworkStream.hpp"
#include "System/Net/Sockets/ProtocolType.hpp"
#include "System/Net/Sockets/SafeSocketHandle.hpp"
#include "System/Net/Sockets/SelectMode.hpp"
#include "System/Net/Sockets/SendPacketsElement.hpp"
#include "System/Net/Sockets/Socket.hpp"
#include "System/Net/Sockets/SocketAsyncEventArgs.hpp"
#include "System/Net/Sockets/SocketAsyncOperation.hpp"
#include "System/Net/Sockets/SocketAsyncResult.hpp"
#include "System/Net/Sockets/SocketError.hpp"
#include "System/Net/Sockets/SocketException.hpp"
#include "System/Net/Sockets/SocketFlags.hpp"
#include "System/Net/Sockets/SocketOperation.hpp"
#include "System/Net/Sockets/SocketOptionLevel.hpp"
#include "System/Net/Sockets/SocketOptionName.hpp"
#include "System/Net/Sockets/SocketShutdown.hpp"
#include "System/Net/Sockets/SocketType.hpp"
#include "System/Net/Sockets/TcpClient.hpp"
#include "System/Net/Sockets/TcpListener.hpp"
#include "System/Net/Sockets/TransmitFileOptions.hpp"
#ifdef __cpp_modules
export module Sockets;
#endif
