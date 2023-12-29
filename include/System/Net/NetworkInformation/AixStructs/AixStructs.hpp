#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System/Net/NetworkInformation/AixStructs/ifconf.hpp"
#include "System/Net/NetworkInformation/AixStructs/ifreq.hpp"
#include "System/Net/NetworkInformation/AixStructs/ifreq_flags.hpp"
#include "System/Net/NetworkInformation/AixStructs/ifreq_mtu.hpp"
#include "System/Net/NetworkInformation/AixStructs/in6_addr.hpp"
#include "System/Net/NetworkInformation/AixStructs/sockaddr.hpp"
#include "System/Net/NetworkInformation/AixStructs/sockaddr_dl.hpp"
#include "System/Net/NetworkInformation/AixStructs/sockaddr_in.hpp"
#include "System/Net/NetworkInformation/AixStructs/sockaddr_in6.hpp"
#ifdef __cpp_modules
export module AixStructs;
#endif
