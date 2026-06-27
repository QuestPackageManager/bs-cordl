#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "System/Runtime/Remoting/Lifetime/ILease.hpp"
#include "System/Runtime/Remoting/Lifetime/ISponsor.hpp"
#include "System/Runtime/Remoting/Lifetime/Lease.hpp"
#include "System/Runtime/Remoting/Lifetime/LeaseManager.hpp"
#include "System/Runtime/Remoting/Lifetime/LeaseSink.hpp"
#include "System/Runtime/Remoting/Lifetime/LeaseState.hpp"
#include "System/Runtime/Remoting/Lifetime/LifetimeServices.hpp"
#ifdef __cpp_modules
                    export module Lifetime;
                    #endif
                
