#pragma once
#include "LiteNetLib/zzzz__ConnectionState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/zzzz__BaseChannel_def.hpp"
#include "LiteNetLib/zzzz__ConnectRequestResult_def.hpp"
#include "LiteNetLib/zzzz__ConnectionState_def.hpp"
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
#include "LiteNetLib/zzzz__DisconnectResult_def.hpp"
#include "LiteNetLib/zzzz__NetConnectAcceptPacket_def.hpp"
#include "LiteNetLib/zzzz__NetConnectRequestPacket_def.hpp"
#include "LiteNetLib/zzzz__NetManager_def.hpp"
#include "LiteNetLib/zzzz__NetPacketPool_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/zzzz__NetStatistics_def.hpp"
#include "LiteNetLib/zzzz__ShutdownResult_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::LiteNetLib::__NetPeer__IncomingFragments._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__NetPeer__IncomingFragments::*)()>(&::LiteNetLib::__NetPeer__IncomingFragments::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e87d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NetPeer__IncomingFragments*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*>& LiteNetLib::__NetPeer__IncomingFragments::__cordl_internal_get_Fragments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Fragments;
}
constexpr ::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> const& LiteNetLib::__NetPeer__IncomingFragments::__cordl_internal_get_Fragments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Fragments;
}
constexpr void LiteNetLib::__NetPeer__IncomingFragments::__cordl_internal_set_Fragments(::ArrayW<::LiteNetLib::NetPacket*, ::Array<::LiteNetLib::NetPacket*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Fragments)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& LiteNetLib::__NetPeer__IncomingFragments::__cordl_internal_get_ReceivedCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReceivedCount;
}
constexpr int32_t const& LiteNetLib::__NetPeer__IncomingFragments::__cordl_internal_get_ReceivedCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReceivedCount;
}
constexpr void LiteNetLib::__NetPeer__IncomingFragments::__cordl_internal_set_ReceivedCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ReceivedCount = value;
}
constexpr int32_t& LiteNetLib::__NetPeer__IncomingFragments::__cordl_internal_get_TotalSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TotalSize;
}
constexpr int32_t const& LiteNetLib::__NetPeer__IncomingFragments::__cordl_internal_get_TotalSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TotalSize;
}
constexpr void LiteNetLib::__NetPeer__IncomingFragments::__cordl_internal_set_TotalSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TotalSize = value;
}
constexpr uint8_t& LiteNetLib::__NetPeer__IncomingFragments::__cordl_internal_get_ChannelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ChannelId;
}
constexpr uint8_t const& LiteNetLib::__NetPeer__IncomingFragments::__cordl_internal_get_ChannelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ChannelId;
}
constexpr void LiteNetLib::__NetPeer__IncomingFragments::__cordl_internal_set_ChannelId(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ChannelId = value;
}
inline ::LiteNetLib::__NetPeer__IncomingFragments* LiteNetLib::__NetPeer__IncomingFragments::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::__NetPeer__IncomingFragments*>());
}
inline void LiteNetLib::__NetPeer__IncomingFragments::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NetPeer__IncomingFragments*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::LiteNetLib::__NetPeer__IncomingFragments::__NetPeer__IncomingFragments() {}
//  Writing Method size for method: ::LiteNetLib::NetPeer.get_ConnectionNum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::get_ConnectionNum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e7558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "get_ConnectionNum",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.set_ConnectionNum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)(uint8_t)>(&::LiteNetLib::NetPeer::set_ConnectionNum)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x24e7560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "set_ConnectionNum", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.get_ConnectionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::ConnectionState (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::get_ConnectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e75ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "get_ConnectionState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.get_ConnectTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::get_ConnectTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e75b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "get_ConnectTime",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.get_Ping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::get_Ping)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24e75bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "get_Ping",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.get_Mtu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::get_Mtu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e75d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "get_Mtu",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.get_RemoteTimeDelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::get_RemoteTimeDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e75d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "get_RemoteTimeDelta",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.get_RemoteUtcTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::get_RemoteUtcTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24e75e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "get_RemoteUtcTime",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.get_TimeSinceLastPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::get_TimeSinceLastPacket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e7670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "get_TimeSinceLastPacket",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.get_ResendDelay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::get_ResendDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e7678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "get_ResendDelay",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::NetManager*, ::System::Net::IPEndPoint*, int32_t)>(
    &::LiteNetLib::NetPeer::_ctor)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x24e353c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.SetMtu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)(int32_t)>(&::LiteNetLib::NetPeer::SetMtu)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x24e7680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "SetMtu", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.GetPacketsCountInReliableQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::NetPeer::*)(uint8_t, bool)>(&::LiteNetLib::NetPeer::GetPacketsCountInReliableQueue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x24e772c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "GetPacketsCountInReliableQueue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.CreateChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::BaseChannel* (::LiteNetLib::NetPeer::*)(uint8_t)>(&::LiteNetLib::NetPeer::CreateChannel)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x24e77dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "CreateChannel", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::NetManager*, ::System::Net::IPEndPoint*, int32_t, uint8_t, ::LiteNetLib::Utils::NetDataWriter*)>(&::LiteNetLib::NetPeer::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x24e654c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetManager*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::NetManager*, ::System::Net::IPEndPoint*, int32_t, int64_t, uint8_t)>(
    &::LiteNetLib::NetPeer::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x24e3878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetManager*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Reject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)(int64_t, uint8_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::LiteNetLib::NetPeer::Reject)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24e385c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Reject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.ProcessConnectAccept
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetPeer::*)(::LiteNetLib::NetConnectAcceptPacket*)>(
    &::LiteNetLib::NetPeer::ProcessConnectAccept)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x24e42ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "ProcessConnectAccept", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetConnectAcceptPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.GetMaxSinglePacketSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::NetPeer::*)(::LiteNetLib::DeliveryMethod)>(&::LiteNetLib::NetPeer::GetMaxSinglePacketSize)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x24e7b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "GetMaxSinglePacketSize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.SendWithDeliveryEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::LiteNetLib::NetPeer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, uint8_t, ::LiteNetLib::DeliveryMethod, ::System::Object*)>(&::LiteNetLib::NetPeer::SendWithDeliveryEvent)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x24e7bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "SendWithDeliveryEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.SendWithDeliveryEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, uint8_t, ::LiteNetLib::DeliveryMethod, ::System::Object*)>(&::LiteNetLib::NetPeer::SendWithDeliveryEvent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x24e8130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "SendWithDeliveryEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.SendWithDeliveryEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::Utils::NetDataWriter*, uint8_t, ::LiteNetLib::DeliveryMethod, ::System::Object*)>(&::LiteNetLib::NetPeer::SendWithDeliveryEvent)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x24e8194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "SendWithDeliveryEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::LiteNetLib::DeliveryMethod)>(
    &::LiteNetLib::NetPeer::Send)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24e8220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::Utils::NetDataWriter*, ::LiteNetLib::DeliveryMethod)>(
    &::LiteNetLib::NetPeer::Send)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x24e8248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::LiteNetLib::NetPeer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::LiteNetLib::DeliveryMethod)>(&::LiteNetLib::NetPeer::Send)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24e8278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, uint8_t, ::LiteNetLib::DeliveryMethod)>(
    &::LiteNetLib::NetPeer::Send)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24e8288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::Utils::NetDataWriter*, uint8_t, ::LiteNetLib::DeliveryMethod)>(
    &::LiteNetLib::NetPeer::Send)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x24e82b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::LiteNetLib::NetPeer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, uint8_t, ::LiteNetLib::DeliveryMethod)>(&::LiteNetLib::NetPeer::Send)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e4d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.SendInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, uint8_t, ::LiteNetLib::DeliveryMethod, ::System::Object*)>(&::LiteNetLib::NetPeer::SendInternal)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x24e7c78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "SendInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::LiteNetLib::NetPeer::Disconnect)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x24e82e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Disconnect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::LiteNetLib::NetPeer::Disconnect)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x24e8304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Disconnect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::LiteNetLib::NetPeer::Disconnect)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x24e8328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Disconnect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::Disconnect)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x24e8370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Disconnect",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.ProcessDisconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::DisconnectResult (::LiteNetLib::NetPeer::*)(::LiteNetLib::NetPacket*)>(
    &::LiteNetLib::NetPeer::ProcessDisconnect)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x24e411c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "ProcessDisconnect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Shutdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::LiteNetLib::ShutdownResult (::LiteNetLib::NetPeer::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, bool)>(&::LiteNetLib::NetPeer::Shutdown)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x24e1e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Shutdown", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.UpdateRoundTripTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)(int32_t)>(&::LiteNetLib::NetPeer::UpdateRoundTripTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24e83b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "UpdateRoundTripTime", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.AddReliablePacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::DeliveryMethod, ::LiteNetLib::NetPacket*)>(
    &::LiteNetLib::NetPeer::AddReliablePacket)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x24e83f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "AddReliablePacket", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.ProcessMtuPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::NetPeer::ProcessMtuPacket)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x24e87d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "ProcessMtuPacket", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.UpdateMtuLogic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)(int32_t)>(&::LiteNetLib::NetPeer::UpdateMtuLogic)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x24e8bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "UpdateMtuLogic", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.ProcessConnectRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::ConnectRequestResult (::LiteNetLib::NetPeer::*)(::LiteNetLib::NetConnectRequestPacket*)>(
    &::LiteNetLib::NetPeer::ProcessConnectRequest)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x24e3bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "ProcessConnectRequest", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetConnectRequestPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.ProcessPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::NetPeer::ProcessPacket)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x24e4350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "ProcessPacket", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.SendMerged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::SendMerged)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x24e8e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "SendMerged",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.SendUserData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::NetPeer::SendUserData)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x24e8ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "SendUserData", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::Flush)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x24e5db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Flush",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)(int32_t)>(&::LiteNetLib::NetPeer::Update)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x24e2864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.RecycleAndDeliver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::NetPeer::RecycleAndDeliver)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x24e8fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "RecycleAndDeliver", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__rtt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rtt;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__rtt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rtt;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__rtt(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rtt = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__avgRtt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avgRtt;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__avgRtt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avgRtt;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__avgRtt(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avgRtt = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__rttCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rttCount;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__rttCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rttCount;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__rttCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rttCount = value;
}
constexpr double_t& LiteNetLib::NetPeer::__cordl_internal_get__resendDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resendDelay;
}
constexpr double_t const& LiteNetLib::NetPeer::__cordl_internal_get__resendDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resendDelay;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__resendDelay(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resendDelay = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__pingSendTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pingSendTimer;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__pingSendTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pingSendTimer;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__pingSendTimer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pingSendTimer = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__rttResetTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rttResetTimer;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__rttResetTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rttResetTimer;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__rttResetTimer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rttResetTimer = value;
}
constexpr ::System::Diagnostics::Stopwatch*& LiteNetLib::NetPeer::__cordl_internal_get__pingTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pingTimer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> const& LiteNetLib::NetPeer::__cordl_internal_get__pingTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pingTimer;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__pingTimer(::System::Diagnostics::Stopwatch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pingTimer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__timeSinceLastPacket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeSinceLastPacket;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__timeSinceLastPacket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeSinceLastPacket;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__timeSinceLastPacket(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeSinceLastPacket = value;
}
constexpr int64_t& LiteNetLib::NetPeer::__cordl_internal_get__remoteDelta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteDelta;
}
constexpr int64_t const& LiteNetLib::NetPeer::__cordl_internal_get__remoteDelta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteDelta;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__remoteDelta(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____remoteDelta = value;
}
constexpr ::LiteNetLib::NetPacketPool*& LiteNetLib::NetPeer::__cordl_internal_get__packetPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetPool;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacketPool*> const& LiteNetLib::NetPeer::__cordl_internal_get__packetPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetPool;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__packetPool(::LiteNetLib::NetPacketPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____packetPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& LiteNetLib::NetPeer::__cordl_internal_get__flushLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flushLock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& LiteNetLib::NetPeer::__cordl_internal_get__flushLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flushLock;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__flushLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____flushLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& LiteNetLib::NetPeer::__cordl_internal_get__sendLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendLock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& LiteNetLib::NetPeer::__cordl_internal_get__sendLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendLock;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__sendLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sendLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& LiteNetLib::NetPeer::__cordl_internal_get__shutdownLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shutdownLock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& LiteNetLib::NetPeer::__cordl_internal_get__shutdownLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shutdownLock;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__shutdownLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shutdownLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::NetPeer*& LiteNetLib::NetPeer::__cordl_internal_get_NextPeer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NextPeer;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPeer*> const& LiteNetLib::NetPeer::__cordl_internal_get_NextPeer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NextPeer;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set_NextPeer(::LiteNetLib::NetPeer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NextPeer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::NetPeer*& LiteNetLib::NetPeer::__cordl_internal_get_PrevPeer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrevPeer;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPeer*> const& LiteNetLib::NetPeer::__cordl_internal_get_PrevPeer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrevPeer;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set_PrevPeer(::LiteNetLib::NetPeer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PrevPeer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>*& LiteNetLib::NetPeer::__cordl_internal_get__unreliableChannel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unreliableChannel;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>*> const& LiteNetLib::NetPeer::__cordl_internal_get__unreliableChannel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unreliableChannel;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__unreliableChannel(::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unreliableChannel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::LiteNetLib::BaseChannel*, ::Array<::LiteNetLib::BaseChannel*>*>& LiteNetLib::NetPeer::__cordl_internal_get__channels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____channels;
}
constexpr ::ArrayW<::LiteNetLib::BaseChannel*, ::Array<::LiteNetLib::BaseChannel*>*> const& LiteNetLib::NetPeer::__cordl_internal_get__channels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____channels;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__channels(::ArrayW<::LiteNetLib::BaseChannel*, ::Array<::LiteNetLib::BaseChannel*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____channels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::BaseChannel*& LiteNetLib::NetPeer::__cordl_internal_get__headChannel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headChannel;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::BaseChannel*> const& LiteNetLib::NetPeer::__cordl_internal_get__headChannel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headChannel;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__headChannel(::LiteNetLib::BaseChannel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headChannel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__mtu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mtu;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__mtu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mtu;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__mtu(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mtu = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__mtuIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mtuIdx;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__mtuIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mtuIdx;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__mtuIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mtuIdx = value;
}
constexpr bool& LiteNetLib::NetPeer::__cordl_internal_get__finishMtu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finishMtu;
}
constexpr bool const& LiteNetLib::NetPeer::__cordl_internal_get__finishMtu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finishMtu;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__finishMtu(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____finishMtu = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__mtuCheckTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mtuCheckTimer;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__mtuCheckTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mtuCheckTimer;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__mtuCheckTimer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mtuCheckTimer = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__mtuCheckAttempts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mtuCheckAttempts;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__mtuCheckAttempts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mtuCheckAttempts;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__mtuCheckAttempts(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mtuCheckAttempts = value;
}
constexpr ::System::Object*& LiteNetLib::NetPeer::__cordl_internal_get__mtuMutex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mtuMutex;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& LiteNetLib::NetPeer::__cordl_internal_get__mtuMutex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mtuMutex;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__mtuMutex(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mtuMutex)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint16_t& LiteNetLib::NetPeer::__cordl_internal_get__fragmentId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fragmentId;
}
constexpr uint16_t const& LiteNetLib::NetPeer::__cordl_internal_get__fragmentId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fragmentId;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__fragmentId(uint16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fragmentId = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint16_t, ::LiteNetLib::__NetPeer__IncomingFragments*>*& LiteNetLib::NetPeer::__cordl_internal_get__holdedFragments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____holdedFragments;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint16_t, ::LiteNetLib::__NetPeer__IncomingFragments*>*> const&
LiteNetLib::NetPeer::__cordl_internal_get__holdedFragments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____holdedFragments;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__holdedFragments(::System::Collections::Generic::Dictionary_2<uint16_t, ::LiteNetLib::__NetPeer__IncomingFragments*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____holdedFragments)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<uint16_t, uint16_t>*& LiteNetLib::NetPeer::__cordl_internal_get__deliveredFramgnets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deliveredFramgnets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint16_t, uint16_t>*> const& LiteNetLib::NetPeer::__cordl_internal_get__deliveredFramgnets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deliveredFramgnets;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__deliveredFramgnets(::System::Collections::Generic::Dictionary_2<uint16_t, uint16_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____deliveredFramgnets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::NetPacket*& LiteNetLib::NetPeer::__cordl_internal_get__mergeData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mergeData;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> const& LiteNetLib::NetPeer::__cordl_internal_get__mergeData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mergeData;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__mergeData(::LiteNetLib::NetPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mergeData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__mergePos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mergePos;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__mergePos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mergePos;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__mergePos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mergePos = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__mergeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mergeCount;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__mergeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mergeCount;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__mergeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mergeCount = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__connectAttempts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectAttempts;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__connectAttempts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectAttempts;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__connectAttempts(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectAttempts = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__connectTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectTimer;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__connectTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectTimer;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__connectTimer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectTimer = value;
}
constexpr int64_t& LiteNetLib::NetPeer::__cordl_internal_get__connectTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectTime;
}
constexpr int64_t const& LiteNetLib::NetPeer::__cordl_internal_get__connectTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectTime;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__connectTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectTime = value;
}
constexpr uint8_t& LiteNetLib::NetPeer::__cordl_internal_get__connectNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectNum;
}
constexpr uint8_t const& LiteNetLib::NetPeer::__cordl_internal_get__connectNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectNum;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__connectNum(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectNum = value;
}
constexpr ::LiteNetLib::ConnectionState& LiteNetLib::NetPeer::__cordl_internal_get__connectionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionState;
}
constexpr ::LiteNetLib::ConnectionState const& LiteNetLib::NetPeer::__cordl_internal_get__connectionState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionState;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__connectionState(::LiteNetLib::ConnectionState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionState = value;
}
constexpr ::LiteNetLib::NetPacket*& LiteNetLib::NetPeer::__cordl_internal_get__shutdownPacket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shutdownPacket;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> const& LiteNetLib::NetPeer::__cordl_internal_get__shutdownPacket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shutdownPacket;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__shutdownPacket(::LiteNetLib::NetPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shutdownPacket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__shutdownTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shutdownTimer;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__shutdownTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shutdownTimer;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__shutdownTimer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shutdownTimer = value;
}
constexpr ::LiteNetLib::NetPacket*& LiteNetLib::NetPeer::__cordl_internal_get__pingPacket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pingPacket;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> const& LiteNetLib::NetPeer::__cordl_internal_get__pingPacket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pingPacket;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__pingPacket(::LiteNetLib::NetPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pingPacket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::NetPacket*& LiteNetLib::NetPeer::__cordl_internal_get__pongPacket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pongPacket;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> const& LiteNetLib::NetPeer::__cordl_internal_get__pongPacket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pongPacket;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__pongPacket(::LiteNetLib::NetPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pongPacket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::NetPacket*& LiteNetLib::NetPeer::__cordl_internal_get__connectRequestPacket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectRequestPacket;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> const& LiteNetLib::NetPeer::__cordl_internal_get__connectRequestPacket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectRequestPacket;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__connectRequestPacket(::LiteNetLib::NetPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectRequestPacket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::NetPacket*& LiteNetLib::NetPeer::__cordl_internal_get__connectAcceptPacket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectAcceptPacket;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacket*> const& LiteNetLib::NetPeer::__cordl_internal_get__connectAcceptPacket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectAcceptPacket;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__connectAcceptPacket(::LiteNetLib::NetPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectAcceptPacket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::IPEndPoint*& LiteNetLib::NetPeer::__cordl_internal_get_EndPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndPoint;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& LiteNetLib::NetPeer::__cordl_internal_get_EndPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndPoint;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set_EndPoint(::System::Net::IPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___EndPoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::NetManager*& LiteNetLib::NetPeer::__cordl_internal_get_NetManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetManager;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetManager*> const& LiteNetLib::NetPeer::__cordl_internal_get_NetManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetManager;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set_NetManager(::LiteNetLib::NetManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NetManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get_Id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get_Id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set_Id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Id = value;
}
constexpr ::System::Object*& LiteNetLib::NetPeer::__cordl_internal_get_Tag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Tag;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& LiteNetLib::NetPeer::__cordl_internal_get_Tag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Tag;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set_Tag(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Tag)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::NetStatistics*& LiteNetLib::NetPeer::__cordl_internal_get_Statistics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Statistics;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetStatistics*> const& LiteNetLib::NetPeer::__cordl_internal_get_Statistics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Statistics;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set_Statistics(::LiteNetLib::NetStatistics* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Statistics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline uint8_t LiteNetLib::NetPeer::get_ConnectionNum() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "get_ConnectionNum",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline void LiteNetLib::NetPeer::set_ConnectionNum(uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "set_ConnectionNum", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::LiteNetLib::ConnectionState LiteNetLib::NetPeer::get_ConnectionState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "get_ConnectionState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::ConnectionState, false>(this, ___internal_method);
}
inline int64_t LiteNetLib::NetPeer::get_ConnectTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "get_ConnectTime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int32_t LiteNetLib::NetPeer::get_Ping() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "get_Ping",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t LiteNetLib::NetPeer::get_Mtu() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "get_Mtu",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int64_t LiteNetLib::NetPeer::get_RemoteTimeDelta() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "get_RemoteTimeDelta",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::System::DateTime LiteNetLib::NetPeer::get_RemoteUtcTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "get_RemoteUtcTime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline int32_t LiteNetLib::NetPeer::get_TimeSinceLastPacket() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "get_TimeSinceLastPacket",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline double_t LiteNetLib::NetPeer::get_ResendDelay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "get_ResendDelay",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline ::LiteNetLib::NetPeer* LiteNetLib::NetPeer::New_ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::NetPeer*>(netManager, remoteEndPoint, id));
}
inline void LiteNetLib::NetPeer::_ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetManager*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, netManager, remoteEndPoint, id);
}
inline void LiteNetLib::NetPeer::SetMtu(int32_t mtuIdx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "SetMtu", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mtuIdx);
}
inline int32_t LiteNetLib::NetPeer::GetPacketsCountInReliableQueue(uint8_t channelNumber, bool ordered) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "GetPacketsCountInReliableQueue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, channelNumber, ordered);
}
inline ::LiteNetLib::BaseChannel* LiteNetLib::NetPeer::CreateChannel(uint8_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "CreateChannel", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::BaseChannel*, false>(this, ___internal_method, idx);
}
inline ::LiteNetLib::NetPeer* LiteNetLib::NetPeer::New_ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id, uint8_t connectNum,
                                                            ::LiteNetLib::Utils::NetDataWriter* connectData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::NetPeer*>(netManager, remoteEndPoint, id, connectNum, connectData));
}
inline void LiteNetLib::NetPeer::_ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id, uint8_t connectNum,
                                       ::LiteNetLib::Utils::NetDataWriter* connectData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, netManager, remoteEndPoint, id, connectNum, connectData);
}
inline ::LiteNetLib::NetPeer* LiteNetLib::NetPeer::New_ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id, int64_t connectId, uint8_t connectNum) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::NetPeer*>(netManager, remoteEndPoint, id, connectId, connectNum));
}
inline void LiteNetLib::NetPeer::_ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id, int64_t connectId, uint8_t connectNum) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetManager*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, netManager, remoteEndPoint, id, connectId, connectNum);
}
inline void LiteNetLib::NetPeer::Reject(int64_t connectionId, uint8_t connectionNumber, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Reject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectionId, connectionNumber, data, start, length);
}
inline bool LiteNetLib::NetPeer::ProcessConnectAccept(::LiteNetLib::NetConnectAcceptPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "ProcessConnectAccept", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetConnectAcceptPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, packet);
}
inline int32_t LiteNetLib::NetPeer::GetMaxSinglePacketSize(::LiteNetLib::DeliveryMethod options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "GetMaxSinglePacketSize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, options);
}
inline void LiteNetLib::NetPeer::SendWithDeliveryEvent(::ArrayW<uint8_t, ::Array<uint8_t>*> data, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod, ::System::Object* userData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "SendWithDeliveryEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, channelNumber, deliveryMethod, userData);
}
inline void LiteNetLib::NetPeer::SendWithDeliveryEvent(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod,
                                                       ::System::Object* userData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "SendWithDeliveryEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, start, length, channelNumber, deliveryMethod, userData);
}
inline void LiteNetLib::NetPeer::SendWithDeliveryEvent(::LiteNetLib::Utils::NetDataWriter* dataWriter, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod, ::System::Object* userData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "SendWithDeliveryEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataWriter, channelNumber, deliveryMethod, userData);
}
inline void LiteNetLib::NetPeer::Send(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::LiteNetLib::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, deliveryMethod);
}
inline void LiteNetLib::NetPeer::Send(::LiteNetLib::Utils::NetDataWriter* dataWriter, ::LiteNetLib::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataWriter, deliveryMethod);
}
inline void LiteNetLib::NetPeer::Send(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, ::LiteNetLib::DeliveryMethod options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, start, length, options);
}
inline void LiteNetLib::NetPeer::Send(::ArrayW<uint8_t, ::Array<uint8_t>*> data, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, channelNumber, deliveryMethod);
}
inline void LiteNetLib::NetPeer::Send(::LiteNetLib::Utils::NetDataWriter* dataWriter, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataWriter, channelNumber, deliveryMethod);
}
inline void LiteNetLib::NetPeer::Send(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, start, length, channelNumber, deliveryMethod);
}
inline void LiteNetLib::NetPeer::SendInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod,
                                              ::System::Object* userData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "SendInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, start, length, channelNumber, deliveryMethod, userData);
}
inline void LiteNetLib::NetPeer::Disconnect(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Disconnect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void LiteNetLib::NetPeer::Disconnect(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Disconnect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void LiteNetLib::NetPeer::Disconnect(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Disconnect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, start, count);
}
inline void LiteNetLib::NetPeer::Disconnect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Disconnect",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::LiteNetLib::DisconnectResult LiteNetLib::NetPeer::ProcessDisconnect(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "ProcessDisconnect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::DisconnectResult, false>(this, ___internal_method, packet);
}
inline ::LiteNetLib::ShutdownResult LiteNetLib::NetPeer::Shutdown(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, bool force) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Shutdown", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::ShutdownResult, false>(this, ___internal_method, data, start, length, force);
}
inline void LiteNetLib::NetPeer::UpdateRoundTripTime(int32_t roundTripTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "UpdateRoundTripTime", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roundTripTime);
}
inline void LiteNetLib::NetPeer::AddReliablePacket(::LiteNetLib::DeliveryMethod method, ::LiteNetLib::NetPacket* p) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "AddReliablePacket", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, method, p);
}
inline void LiteNetLib::NetPeer::ProcessMtuPacket(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "ProcessMtuPacket", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet);
}
inline void LiteNetLib::NetPeer::UpdateMtuLogic(int32_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "UpdateMtuLogic", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deltaTime);
}
inline ::LiteNetLib::ConnectRequestResult LiteNetLib::NetPeer::ProcessConnectRequest(::LiteNetLib::NetConnectRequestPacket* connRequest) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "ProcessConnectRequest", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetConnectRequestPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::ConnectRequestResult, false>(this, ___internal_method, connRequest);
}
inline void LiteNetLib::NetPeer::ProcessPacket(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "ProcessPacket", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet);
}
inline void LiteNetLib::NetPeer::SendMerged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "SendMerged",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::NetPeer::SendUserData(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "SendUserData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet);
}
inline void LiteNetLib::NetPeer::Flush() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Flush",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::NetPeer::Update(int32_t deltaTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "Update", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deltaTime);
}
inline void LiteNetLib::NetPeer::RecycleAndDeliver(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetPeer*>::get(), "RecycleAndDeliver", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet);
}
// Ctor Parameters []
constexpr ::LiteNetLib::NetPeer::NetPeer() {}
