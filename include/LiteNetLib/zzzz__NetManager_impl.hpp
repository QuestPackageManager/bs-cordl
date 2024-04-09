#pragma once
#include "System/Threading/zzzz__ThreadPriority_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__NetManager_def.hpp"
#include "LiteNetLib/Layers/zzzz__PacketLayerBase_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/zzzz__ConnectionRequest_def.hpp"
#include "LiteNetLib/zzzz__ConnectionState_def.hpp"
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
#include "LiteNetLib/zzzz__DisconnectReason_def.hpp"
#include "LiteNetLib/zzzz__IDeliveryEventListener_def.hpp"
#include "LiteNetLib/zzzz__INetEventListener_def.hpp"
#include "LiteNetLib/zzzz__INetSocketListener_def.hpp"
#include "LiteNetLib/zzzz__NatPunchModule_def.hpp"
#include "LiteNetLib/zzzz__NetConnectRequestPacket_def.hpp"
#include "LiteNetLib/zzzz__NetEvent_def.hpp"
#include "LiteNetLib/zzzz__NetManager_def.hpp"
#include "LiteNetLib/zzzz__NetPacketPool_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/zzzz__NetSocket_def.hpp"
#include "LiteNetLib/zzzz__NetStatistics_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLockSlim_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::LiteNetLib::__NetManager__IPEndPointComparer.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::__NetManager__IPEndPointComparer::*)(::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*)>(
    &::LiteNetLib::__NetManager__IPEndPointComparer::Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x24e6ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NetManager__IPEndPointComparer*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__NetManager__IPEndPointComparer.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::__NetManager__IPEndPointComparer::*)(::System::Net::IPEndPoint*)>(
    &::LiteNetLib::__NetManager__IPEndPointComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24e6d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NetManager__IPEndPointComparer*>::get(), "GetHashCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__NetManager__IPEndPointComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__NetManager__IPEndPointComparer::*)()>(&::LiteNetLib::__NetManager__IPEndPointComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e151c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NetManager__IPEndPointComparer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::Net::IPEndPoint*>"
constexpr LiteNetLib::__NetManager__IPEndPointComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::System::Net::IPEndPoint*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Net::IPEndPoint*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::Net::IPEndPoint*>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Net::IPEndPoint*>*
LiteNetLib::__NetManager__IPEndPointComparer::i___System__Collections__Generic__IEqualityComparer_1___System__Net__IPEndPoint__() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<::System::Net::IPEndPoint*>*>(static_cast<void*>(this));
}
inline bool LiteNetLib::__NetManager__IPEndPointComparer::Equals(::System::Net::IPEndPoint* x, ::System::Net::IPEndPoint* y) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NetManager__IPEndPointComparer*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
inline int32_t LiteNetLib::__NetManager__IPEndPointComparer::GetHashCode(::System::Net::IPEndPoint* obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NetManager__IPEndPointComparer*>::get(), "GetHashCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
inline ::LiteNetLib::__NetManager__IPEndPointComparer* LiteNetLib::__NetManager__IPEndPointComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::__NetManager__IPEndPointComparer*>());
}
inline void LiteNetLib::__NetManager__IPEndPointComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NetManager__IPEndPointComparer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::LiteNetLib::__NetManager__IPEndPointComparer::__NetManager__IPEndPointComparer() {}
//  Writing Method size for method: ::LiteNetLib::__NetManager__NetPeerEnumerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__NetManager__NetPeerEnumerator::*)(::LiteNetLib::NetPeer*)>(
    &::LiteNetLib::__NetManager__NetPeerEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e6c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NetManager__NetPeerEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__NetManager__NetPeerEnumerator.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__NetManager__NetPeerEnumerator::*)()>(&::LiteNetLib::__NetManager__NetPeerEnumerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24e6d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NetManager__NetPeerEnumerator>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__NetManager__NetPeerEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::__NetManager__NetPeerEnumerator::*)()>(
    &::LiteNetLib::__NetManager__NetPeerEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24e6d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NetManager__NetPeerEnumerator>::get(), "MoveNext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__NetManager__NetPeerEnumerator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__NetManager__NetPeerEnumerator::*)()>(&::LiteNetLib::__NetManager__NetPeerEnumerator::Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x24e6d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NetManager__NetPeerEnumerator>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__NetManager__NetPeerEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPeer* (::LiteNetLib::__NetManager__NetPeerEnumerator::*)()>(
    &::LiteNetLib::__NetManager__NetPeerEnumerator::get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e6dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NetManager__NetPeerEnumerator>::get(),
                                                                               "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__NetManager__NetPeerEnumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::LiteNetLib::__NetManager__NetPeerEnumerator::*)()>(
    &::LiteNetLib::__NetManager__NetPeerEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e6dd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NetManager__NetPeerEnumerator>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::LiteNetLib::NetPeer*>"
constexpr LiteNetLib::__NetManager__NetPeerEnumerator::operator ::System::Collections::Generic::IEnumerator_1<::LiteNetLib::NetPeer*>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::LiteNetLib::NetPeer*>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::LiteNetLib::NetPeer*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::LiteNetLib::NetPeer*>*
LiteNetLib::__NetManager__NetPeerEnumerator::i___System__Collections__Generic__IEnumerator_1___LiteNetLib__NetPeer__() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::LiteNetLib::NetPeer*>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr LiteNetLib::__NetManager__NetPeerEnumerator::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* LiteNetLib::__NetManager__NetPeerEnumerator::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr LiteNetLib::__NetManager__NetPeerEnumerator::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* LiteNetLib::__NetManager__NetPeerEnumerator::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void LiteNetLib::__NetManager__NetPeerEnumerator::_ctor(::LiteNetLib::NetPeer* p) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NetManager__NetPeerEnumerator>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p);
}
inline void LiteNetLib::__NetManager__NetPeerEnumerator::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NetManager__NetPeerEnumerator>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool LiteNetLib::__NetManager__NetPeerEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NetManager__NetPeerEnumerator>::get(), "MoveNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void LiteNetLib::__NetManager__NetPeerEnumerator::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NetManager__NetPeerEnumerator>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::LiteNetLib::NetPeer* LiteNetLib::__NetManager__NetPeerEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NetManager__NetPeerEnumerator>::get(),
                                                                             "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPeer*, false>(this, ___internal_method);
}
inline ::System::Object* LiteNetLib::__NetManager__NetPeerEnumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NetManager__NetPeerEnumerator>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_initialPeer", ty: "::LiteNetLib::NetPeer*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_p", ty: "::LiteNetLib::NetPeer*", modifiers: "",
// def_value: Some("nullptr") }]
constexpr ::LiteNetLib::__NetManager__NetPeerEnumerator::__NetManager__NetPeerEnumerator(::LiteNetLib::NetPeer* _initialPeer, ::LiteNetLib::NetPeer* _p) noexcept {
  this->_initialPeer = _initialPeer;
  this->_p = _p;
}
// Ctor Parameters []
constexpr ::LiteNetLib::__NetManager__NetPeerEnumerator::__NetManager__NetPeerEnumerator() {}
//  Writing Method size for method: ::LiteNetLib::NetManager.get_IsRunning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetManager::*)()>(&::LiteNetLib::NetManager::get_IsRunning)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x24e0a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "get_IsRunning",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.get_LocalPort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::NetManager::*)()>(&::LiteNetLib::NetManager::get_LocalPort)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24e0a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "get_LocalPort",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.get_FirstPeer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPeer* (::LiteNetLib::NetManager::*)()>(&::LiteNetLib::NetManager::get_FirstPeer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24e0a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "get_FirstPeer",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.get_ChannelsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::LiteNetLib::NetManager::*)()>(&::LiteNetLib::NetManager::get_ChannelsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e0aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "get_ChannelsCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.set_ChannelsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(uint8_t)>(&::LiteNetLib::NetManager::set_ChannelsCount)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x24e0ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "set_ChannelsCount", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.get_ConnectedPeerList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>* (::LiteNetLib::NetManager::*)()>(
    &::LiteNetLib::NetManager::get_ConnectedPeerList)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24e0b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "get_ConnectedPeerList",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.GetPeerById
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPeer* (::LiteNetLib::NetManager::*)(int32_t)>(&::LiteNetLib::NetManager::GetPeerById)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x24e0c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "GetPeerById", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.get_ConnectedPeersCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::NetManager::*)()>(&::LiteNetLib::NetManager::get_ConnectedPeersCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x24e0c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "get_ConnectedPeersCount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.TryGetPeer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetManager::*)(::System::Net::IPEndPoint*, ByRef<::LiteNetLib::NetPeer*>)>(
    &::LiteNetLib::NetManager::TryGetPeer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x24e0ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "TryGetPeer", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::LiteNetLib::NetPeer*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.AddPeer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(::LiteNetLib::NetPeer*)>(&::LiteNetLib::NetManager::AddPeer)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x24e0d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "AddPeer", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.RemovePeer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(::LiteNetLib::NetPeer*)>(&::LiteNetLib::NetManager::RemovePeer)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x24e0e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "RemovePeer", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.RemovePeerInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(::LiteNetLib::NetPeer*)>(&::LiteNetLib::NetManager::RemovePeerInternal)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x24e0ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "RemovePeerInternal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(::LiteNetLib::INetEventListener*, ::LiteNetLib::Layers::PacketLayerBase*)>(
    &::LiteNetLib::NetManager::_ctor)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x24e1084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::INetEventListener*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Layers::PacketLayerBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.ConnectionLatencyUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(::LiteNetLib::NetPeer*, int32_t)>(
    &::LiteNetLib::NetManager::ConnectionLatencyUpdated)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x24e1524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "ConnectionLatencyUpdated", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.MessageDelivered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(::LiteNetLib::NetPeer*, ::System::Object*)>(
    &::LiteNetLib::NetManager::MessageDelivered)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x24e18a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "MessageDelivered", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.SendRawAndRecycle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::NetManager::*)(::LiteNetLib::NetPacket*, ::System::Net::IPEndPoint*)>(
    &::LiteNetLib::NetManager::SendRawAndRecycle)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x24e18ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendRawAndRecycle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.SendRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::NetManager::*)(::LiteNetLib::NetPacket*, ::System::Net::IPEndPoint*)>(
    &::LiteNetLib::NetManager::SendRaw)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24e1ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendRaw", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.SendRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::LiteNetLib::NetManager::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::IPEndPoint*)>(&::LiteNetLib::NetManager::SendRaw)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x24e1940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendRaw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.DisconnectPeerForce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(
    ::LiteNetLib::NetPeer*, ::LiteNetLib::DisconnectReason, ::System::Net::Sockets::SocketError, ::LiteNetLib::NetPacket*)>(&::LiteNetLib::NetManager::DisconnectPeerForce)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x24e1d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "DisconnectPeerForce", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectReason>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.DisconnectPeer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(
    ::LiteNetLib::NetPeer*, ::LiteNetLib::DisconnectReason, ::System::Net::Sockets::SocketError, bool, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::LiteNetLib::NetPacket*)>(
    &::LiteNetLib::NetManager::DisconnectPeer)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x24e1d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "DisconnectPeer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectReason>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.CreateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(
    ::LiteNetLib::__NetEvent__EType, ::LiteNetLib::NetPeer*, ::System::Net::IPEndPoint*, ::System::Net::Sockets::SocketError, int32_t, ::LiteNetLib::DisconnectReason, ::LiteNetLib::ConnectionRequest*,
    ::LiteNetLib::DeliveryMethod, ::LiteNetLib::NetPacket*, ::System::Object*)>(&::LiteNetLib::NetManager::CreateEvent)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x24e1564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "CreateEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__NetEvent__EType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectReason>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.ProcessEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(::LiteNetLib::NetEvent*)>(&::LiteNetLib::NetManager::ProcessEvent)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x24e20f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "ProcessEvent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.RecycleEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(::LiteNetLib::NetEvent*)>(&::LiteNetLib::NetManager::RecycleEvent)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x24e0854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "RecycleEvent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.UpdateLogic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)()>(&::LiteNetLib::NetManager::UpdateLogic)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x24e25d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "UpdateLogic",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.LiteNetLib_INetSocketListener_OnMessageReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::System::Net::Sockets::SocketError, ::System::Net::IPEndPoint*)>(&::LiteNetLib::NetManager::LiteNetLib_INetSocketListener_OnMessageReceived)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x24e2ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "LiteNetLib.INetSocketListener.OnMessageReceived", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.OnConnectionSolved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPeer* (
    ::LiteNetLib::NetManager::*)(::LiteNetLib::ConnectionRequest*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::LiteNetLib::NetManager::OnConnectionSolved)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x24dc7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "OnConnectionSolved", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.GetNextPeerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::NetManager::*)()>(&::LiteNetLib::NetManager::GetNextPeerId)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x24e340c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "GetNextPeerId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.ProcessConnectRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::LiteNetLib::NetManager::*)(::System::Net::IPEndPoint*, ::LiteNetLib::NetPeer*, ::LiteNetLib::NetConnectRequestPacket*)>(&::LiteNetLib::NetManager::ProcessConnectRequest)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x24e38e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "ProcessConnectRequest", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetConnectRequestPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.DataReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::System::Net::IPEndPoint*)>(
    &::LiteNetLib::NetManager::DataReceived)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x24e2d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "DataReceived", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.CreateReceiveEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(::LiteNetLib::NetPacket*, ::LiteNetLib::DeliveryMethod, ::LiteNetLib::NetPeer*)>(
    &::LiteNetLib::NetManager::CreateReceiveEvent)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x24e48c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "CreateReceiveEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.SendToAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(::LiteNetLib::Utils::NetDataWriter*, ::LiteNetLib::DeliveryMethod)>(
    &::LiteNetLib::NetManager::SendToAll)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24e4b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.SendToAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::LiteNetLib::DeliveryMethod)>(
    &::LiteNetLib::NetManager::SendToAll)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x24e4b84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.SendToAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::LiteNetLib::NetManager::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::LiteNetLib::DeliveryMethod)>(&::LiteNetLib::NetManager::SendToAll)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24e4b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.SendToAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(::LiteNetLib::Utils::NetDataWriter*, uint8_t, ::LiteNetLib::DeliveryMethod)>(
    &::LiteNetLib::NetManager::SendToAll)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24e4cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.SendToAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, uint8_t, ::LiteNetLib::DeliveryMethod)>(
    &::LiteNetLib::NetManager::SendToAll)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x24e4ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.SendToAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::LiteNetLib::NetManager::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, uint8_t, ::LiteNetLib::DeliveryMethod)>(&::LiteNetLib::NetManager::SendToAll)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x24e4ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.SendToAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::LiteNetLib::NetManager::*)(::LiteNetLib::Utils::NetDataWriter*, ::LiteNetLib::DeliveryMethod, ::LiteNetLib::NetPeer*)>(&::LiteNetLib::NetManager::SendToAll)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x24e4d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.SendToAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::LiteNetLib::NetManager::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::LiteNetLib::DeliveryMethod, ::LiteNetLib::NetPeer*)>(&::LiteNetLib::NetManager::SendToAll)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24e4e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.SendToAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::LiteNetLib::DeliveryMethod, ::LiteNetLib::NetPeer*)>(&::LiteNetLib::NetManager::SendToAll)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24e4e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.SendToAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::LiteNetLib::NetManager::*)(::LiteNetLib::Utils::NetDataWriter*, uint8_t, ::LiteNetLib::DeliveryMethod, ::LiteNetLib::NetPeer*)>(&::LiteNetLib::NetManager::SendToAll)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x24e4e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.SendToAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::LiteNetLib::NetManager::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, uint8_t, ::LiteNetLib::DeliveryMethod, ::LiteNetLib::NetPeer*)>(&::LiteNetLib::NetManager::SendToAll)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24e4ecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.SendToAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, uint8_t, ::LiteNetLib::DeliveryMethod, ::LiteNetLib::NetPeer*)>(&::LiteNetLib::NetManager::SendToAll)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x24e4d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetManager::*)()>(&::LiteNetLib::NetManager::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e4ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetManager::*)(::System::Net::IPAddress*, ::System::Net::IPAddress*, int32_t)>(
    &::LiteNetLib::NetManager::Start)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x24e4f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "Start", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetManager::*)(::StringW, ::StringW, int32_t)>(&::LiteNetLib::NetManager::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24e54bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "Start", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetManager::*)(int32_t)>(&::LiteNetLib::NetManager::Start)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x24e4efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "Start", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.SendUnconnectedMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetManager::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Net::IPEndPoint*)>(
    &::LiteNetLib::NetManager::SendUnconnectedMessage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24e5704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendUnconnectedMessage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.SendUnconnectedMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetManager::*)(::LiteNetLib::Utils::NetDataWriter*, ::System::Net::IPEndPoint*)>(
    &::LiteNetLib::NetManager::SendUnconnectedMessage)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24e5778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendUnconnectedMessage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.SendUnconnectedMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::LiteNetLib::NetManager::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::IPEndPoint*)>(&::LiteNetLib::NetManager::SendUnconnectedMessage)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x24e5724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendUnconnectedMessage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.SendBroadcast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetManager::*)(::LiteNetLib::Utils::NetDataWriter*, int32_t)>(
    &::LiteNetLib::NetManager::SendBroadcast)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24e5878;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendBroadcast", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.SendBroadcast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetManager::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::LiteNetLib::NetManager::SendBroadcast)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24e5a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendBroadcast", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.SendBroadcast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetManager::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, int32_t)>(
    &::LiteNetLib::NetManager::SendBroadcast)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x24e58a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendBroadcast", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)()>(&::LiteNetLib::NetManager::Flush)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24e5d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "Flush",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.PollEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)()>(&::LiteNetLib::NetManager::PollEvents)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x24e6004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "PollEvents",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPeer* (::LiteNetLib::NetManager::*)(::StringW, int32_t, ::StringW)>(
    &::LiteNetLib::NetManager::Connect)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x24e6164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPeer* (::LiteNetLib::NetManager::*)(::StringW, int32_t, ::LiteNetLib::Utils::NetDataWriter*)>(
    &::LiteNetLib::NetManager::Connect)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x24e620c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPeer* (::LiteNetLib::NetManager::*)(::System::Net::IPEndPoint*, ::StringW)>(
    &::LiteNetLib::NetManager::Connect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x24e651c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::LiteNetLib::NetPeer* (::LiteNetLib::NetManager::*)(::System::Net::IPEndPoint*, ::LiteNetLib::Utils::NetDataWriter*)>(&::LiteNetLib::NetManager::Connect)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x24e6354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.Stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)()>(&::LiteNetLib::NetManager::Stop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e665c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "Stop",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.Stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(bool)>(&::LiteNetLib::NetManager::Stop)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x24e6664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "Stop", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.GetPeersCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::NetManager::*)(::LiteNetLib::ConnectionState)>(&::LiteNetLib::NetManager::GetPeersCount)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x24e69c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "GetPeersCount", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.GetPeersNonAlloc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::LiteNetLib::NetManager::*)(::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>*, ::LiteNetLib::ConnectionState)>(&::LiteNetLib::NetManager::GetPeersNonAlloc)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x24e0b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "GetPeersNonAlloc", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.DisconnectAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)()>(&::LiteNetLib::NetManager::DisconnectAll)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24e6a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "DisconnectAll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.DisconnectAll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::LiteNetLib::NetManager::DisconnectAll)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24e6a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "DisconnectAll", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.DisconnectPeerForce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(::LiteNetLib::NetPeer*)>(&::LiteNetLib::NetManager::DisconnectPeerForce)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x24e6ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "DisconnectPeerForce", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.DisconnectPeer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(::LiteNetLib::NetPeer*)>(&::LiteNetLib::NetManager::DisconnectPeer)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x24e6b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "DisconnectPeer", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.DisconnectPeer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(::LiteNetLib::NetPeer*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::LiteNetLib::NetManager::DisconnectPeer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24e6b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "DisconnectPeer", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.DisconnectPeer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(::LiteNetLib::NetPeer*, ::LiteNetLib::Utils::NetDataWriter*)>(
    &::LiteNetLib::NetManager::DisconnectPeer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24e6bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "DisconnectPeer", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.DisconnectPeer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetManager::*)(::LiteNetLib::NetPeer*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::LiteNetLib::NetManager::DisconnectPeer)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x24e6b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "DisconnectPeer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::__NetManager__NetPeerEnumerator (::LiteNetLib::NetManager::*)()>(
    &::LiteNetLib::NetManager::GetEnumerator)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24e6be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "GetEnumerator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.System_Collections_Generic_IEnumerable_LiteNetLib_NetPeer__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::LiteNetLib::NetPeer*>* (::LiteNetLib::NetManager::*)()>(
    &::LiteNetLib::NetManager::System_Collections_Generic_IEnumerable_LiteNetLib_NetPeer__GetEnumerator)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24e6c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(),
                                    "System.Collections.Generic.IEnumerable<LiteNetLib.NetPeer>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetManager.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::LiteNetLib::NetManager::*)()>(
    &::LiteNetLib::NetManager::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24e6c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "System.Collections.IEnumerable.GetEnumerator",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::INetSocketListener"
constexpr LiteNetLib::NetManager::operator ::LiteNetLib::INetSocketListener*() noexcept {
  return static_cast<::LiteNetLib::INetSocketListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::INetSocketListener"
constexpr ::LiteNetLib::INetSocketListener* LiteNetLib::NetManager::i___LiteNetLib__INetSocketListener() noexcept {
  return static_cast<::LiteNetLib::INetSocketListener*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::LiteNetLib::NetPeer*>"
constexpr LiteNetLib::NetManager::operator ::System::Collections::Generic::IEnumerable_1<::LiteNetLib::NetPeer*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::LiteNetLib::NetPeer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::LiteNetLib::NetPeer*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::LiteNetLib::NetPeer*>* LiteNetLib::NetManager::i___System__Collections__Generic__IEnumerable_1___LiteNetLib__NetPeer__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::LiteNetLib::NetPeer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr LiteNetLib::NetManager::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* LiteNetLib::NetManager::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
constexpr ::LiteNetLib::NetSocket*& LiteNetLib::NetManager::__cordl_internal_get__socket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____socket;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetSocket*> const& LiteNetLib::NetManager::__cordl_internal_get__socket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____socket;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set__socket(::LiteNetLib::NetSocket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____socket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Thread*& LiteNetLib::NetManager::__cordl_internal_get__logicThread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logicThread;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& LiteNetLib::NetManager::__cordl_internal_get__logicThread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logicThread;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set__logicThread(::System::Threading::Thread* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____logicThread)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NetEvent*>*& LiteNetLib::NetManager::__cordl_internal_get__netEventsQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netEventsQueue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::LiteNetLib::NetEvent*>*> const& LiteNetLib::NetManager::__cordl_internal_get__netEventsQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netEventsQueue;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set__netEventsQueue(::System::Collections::Generic::Queue_1<::LiteNetLib::NetEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____netEventsQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Stack_1<::LiteNetLib::NetEvent*>*& LiteNetLib::NetManager::__cordl_internal_get__netEventsPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netEventsPool;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::LiteNetLib::NetEvent*>*> const& LiteNetLib::NetManager::__cordl_internal_get__netEventsPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netEventsPool;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set__netEventsPool(::System::Collections::Generic::Stack_1<::LiteNetLib::NetEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____netEventsPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::INetEventListener*& LiteNetLib::NetManager::__cordl_internal_get__netEventListener() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netEventListener;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::INetEventListener*> const& LiteNetLib::NetManager::__cordl_internal_get__netEventListener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netEventListener;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set__netEventListener(::LiteNetLib::INetEventListener* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____netEventListener)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::IDeliveryEventListener*& LiteNetLib::NetManager::__cordl_internal_get__deliveryEventListener() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deliveryEventListener;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::IDeliveryEventListener*> const& LiteNetLib::NetManager::__cordl_internal_get__deliveryEventListener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deliveryEventListener;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set__deliveryEventListener(::LiteNetLib::IDeliveryEventListener* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____deliveryEventListener)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::NetPeer*>*& LiteNetLib::NetManager::__cordl_internal_get__peersDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____peersDict;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::NetPeer*>*> const&
LiteNetLib::NetManager::__cordl_internal_get__peersDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____peersDict;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set__peersDict(::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::NetPeer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____peersDict)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::ConnectionRequest*>*& LiteNetLib::NetManager::__cordl_internal_get__requestsDict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestsDict;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::ConnectionRequest*>*> const&
LiteNetLib::NetManager::__cordl_internal_get__requestsDict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestsDict;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set__requestsDict(::System::Collections::Generic::Dictionary_2<::System::Net::IPEndPoint*, ::LiteNetLib::ConnectionRequest*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____requestsDict)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::ReaderWriterLockSlim*& LiteNetLib::NetManager::__cordl_internal_get__peersLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____peersLock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterLockSlim*> const& LiteNetLib::NetManager::__cordl_internal_get__peersLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____peersLock;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set__peersLock(::System::Threading::ReaderWriterLockSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____peersLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::NetPeer*& LiteNetLib::NetManager::__cordl_internal_get__headPeer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPeer;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPeer*> const& LiteNetLib::NetManager::__cordl_internal_get__headPeer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headPeer;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set__headPeer(::LiteNetLib::NetPeer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headPeer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& LiteNetLib::NetManager::__cordl_internal_get__connectedPeersCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPeersCount;
}
constexpr int32_t const& LiteNetLib::NetManager::__cordl_internal_get__connectedPeersCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPeersCount;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set__connectedPeersCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectedPeersCount = value;
}
constexpr ::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>*& LiteNetLib::NetManager::__cordl_internal_get__connectedPeerListCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPeerListCache;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>*> const& LiteNetLib::NetManager::__cordl_internal_get__connectedPeerListCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPeerListCache;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set__connectedPeerListCache(::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPeerListCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::LiteNetLib::NetPeer*, ::Array<::LiteNetLib::NetPeer*>*>& LiteNetLib::NetManager::__cordl_internal_get__peersArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____peersArray;
}
constexpr ::ArrayW<::LiteNetLib::NetPeer*, ::Array<::LiteNetLib::NetPeer*>*> const& LiteNetLib::NetManager::__cordl_internal_get__peersArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____peersArray;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set__peersArray(::ArrayW<::LiteNetLib::NetPeer*, ::Array<::LiteNetLib::NetPeer*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____peersArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::Layers::PacketLayerBase*& LiteNetLib::NetManager::__cordl_internal_get__extraPacketLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extraPacketLayer;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Layers::PacketLayerBase*> const& LiteNetLib::NetManager::__cordl_internal_get__extraPacketLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extraPacketLayer;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set__extraPacketLayer(::LiteNetLib::Layers::PacketLayerBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____extraPacketLayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& LiteNetLib::NetManager::__cordl_internal_get__lastPeerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPeerId;
}
constexpr int32_t const& LiteNetLib::NetManager::__cordl_internal_get__lastPeerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPeerId;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set__lastPeerId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastPeerId = value;
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>*& LiteNetLib::NetManager::__cordl_internal_get__peerIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____peerIds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<int32_t>*> const& LiteNetLib::NetManager::__cordl_internal_get__peerIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____peerIds;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set__peerIds(::System::Collections::Generic::Queue_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____peerIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint8_t& LiteNetLib::NetManager::__cordl_internal_get__channelsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____channelsCount;
}
constexpr uint8_t const& LiteNetLib::NetManager::__cordl_internal_get__channelsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____channelsCount;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set__channelsCount(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____channelsCount = value;
}
constexpr ::LiteNetLib::NetPacketPool*& LiteNetLib::NetManager::__cordl_internal_get_NetPacketPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetPacketPool;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetPacketPool*> const& LiteNetLib::NetManager::__cordl_internal_get_NetPacketPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetPacketPool;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_NetPacketPool(::LiteNetLib::NetPacketPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NetPacketPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& LiteNetLib::NetManager::__cordl_internal_get_UnconnectedMessagesEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnconnectedMessagesEnabled;
}
constexpr bool const& LiteNetLib::NetManager::__cordl_internal_get_UnconnectedMessagesEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnconnectedMessagesEnabled;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_UnconnectedMessagesEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UnconnectedMessagesEnabled = value;
}
constexpr bool& LiteNetLib::NetManager::__cordl_internal_get_NatPunchEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NatPunchEnabled;
}
constexpr bool const& LiteNetLib::NetManager::__cordl_internal_get_NatPunchEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NatPunchEnabled;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_NatPunchEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NatPunchEnabled = value;
}
constexpr int32_t& LiteNetLib::NetManager::__cordl_internal_get_UpdateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UpdateTime;
}
constexpr int32_t const& LiteNetLib::NetManager::__cordl_internal_get_UpdateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UpdateTime;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_UpdateTime(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UpdateTime = value;
}
constexpr int32_t& LiteNetLib::NetManager::__cordl_internal_get_PingInterval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PingInterval;
}
constexpr int32_t const& LiteNetLib::NetManager::__cordl_internal_get_PingInterval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PingInterval;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_PingInterval(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PingInterval = value;
}
constexpr int32_t& LiteNetLib::NetManager::__cordl_internal_get_DisconnectTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisconnectTimeout;
}
constexpr int32_t const& LiteNetLib::NetManager::__cordl_internal_get_DisconnectTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisconnectTimeout;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_DisconnectTimeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DisconnectTimeout = value;
}
constexpr bool& LiteNetLib::NetManager::__cordl_internal_get_SimulatePacketLoss() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SimulatePacketLoss;
}
constexpr bool const& LiteNetLib::NetManager::__cordl_internal_get_SimulatePacketLoss() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SimulatePacketLoss;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_SimulatePacketLoss(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SimulatePacketLoss = value;
}
constexpr bool& LiteNetLib::NetManager::__cordl_internal_get_SimulateLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SimulateLatency;
}
constexpr bool const& LiteNetLib::NetManager::__cordl_internal_get_SimulateLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SimulateLatency;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_SimulateLatency(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SimulateLatency = value;
}
constexpr int32_t& LiteNetLib::NetManager::__cordl_internal_get_SimulationPacketLossChance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SimulationPacketLossChance;
}
constexpr int32_t const& LiteNetLib::NetManager::__cordl_internal_get_SimulationPacketLossChance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SimulationPacketLossChance;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_SimulationPacketLossChance(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SimulationPacketLossChance = value;
}
constexpr int32_t& LiteNetLib::NetManager::__cordl_internal_get_SimulationMinLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SimulationMinLatency;
}
constexpr int32_t const& LiteNetLib::NetManager::__cordl_internal_get_SimulationMinLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SimulationMinLatency;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_SimulationMinLatency(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SimulationMinLatency = value;
}
constexpr int32_t& LiteNetLib::NetManager::__cordl_internal_get_SimulationMaxLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SimulationMaxLatency;
}
constexpr int32_t const& LiteNetLib::NetManager::__cordl_internal_get_SimulationMaxLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SimulationMaxLatency;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_SimulationMaxLatency(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SimulationMaxLatency = value;
}
constexpr bool& LiteNetLib::NetManager::__cordl_internal_get_UnsyncedEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnsyncedEvents;
}
constexpr bool const& LiteNetLib::NetManager::__cordl_internal_get_UnsyncedEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnsyncedEvents;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_UnsyncedEvents(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UnsyncedEvents = value;
}
constexpr bool& LiteNetLib::NetManager::__cordl_internal_get_UnsyncedDeliveryEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnsyncedDeliveryEvent;
}
constexpr bool const& LiteNetLib::NetManager::__cordl_internal_get_UnsyncedDeliveryEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UnsyncedDeliveryEvent;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_UnsyncedDeliveryEvent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UnsyncedDeliveryEvent = value;
}
constexpr bool& LiteNetLib::NetManager::__cordl_internal_get_BroadcastReceiveEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BroadcastReceiveEnabled;
}
constexpr bool const& LiteNetLib::NetManager::__cordl_internal_get_BroadcastReceiveEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BroadcastReceiveEnabled;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_BroadcastReceiveEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BroadcastReceiveEnabled = value;
}
constexpr int32_t& LiteNetLib::NetManager::__cordl_internal_get_ReconnectDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReconnectDelay;
}
constexpr int32_t const& LiteNetLib::NetManager::__cordl_internal_get_ReconnectDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReconnectDelay;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_ReconnectDelay(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ReconnectDelay = value;
}
constexpr int32_t& LiteNetLib::NetManager::__cordl_internal_get_MaxConnectAttempts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxConnectAttempts;
}
constexpr int32_t const& LiteNetLib::NetManager::__cordl_internal_get_MaxConnectAttempts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxConnectAttempts;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_MaxConnectAttempts(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MaxConnectAttempts = value;
}
constexpr bool& LiteNetLib::NetManager::__cordl_internal_get_ReuseAddress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReuseAddress;
}
constexpr bool const& LiteNetLib::NetManager::__cordl_internal_get_ReuseAddress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReuseAddress;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_ReuseAddress(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ReuseAddress = value;
}
constexpr ::LiteNetLib::NetStatistics*& LiteNetLib::NetManager::__cordl_internal_get_Statistics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Statistics;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetStatistics*> const& LiteNetLib::NetManager::__cordl_internal_get_Statistics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Statistics;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_Statistics(::LiteNetLib::NetStatistics* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Statistics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& LiteNetLib::NetManager::__cordl_internal_get_EnableStatistics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EnableStatistics;
}
constexpr bool const& LiteNetLib::NetManager::__cordl_internal_get_EnableStatistics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EnableStatistics;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_EnableStatistics(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EnableStatistics = value;
}
constexpr ::LiteNetLib::NatPunchModule*& LiteNetLib::NetManager::__cordl_internal_get_NatPunchModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NatPunchModule;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NatPunchModule*> const& LiteNetLib::NetManager::__cordl_internal_get_NatPunchModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NatPunchModule;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_NatPunchModule(::LiteNetLib::NatPunchModule* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NatPunchModule)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& LiteNetLib::NetManager::__cordl_internal_get_AutoRecycle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AutoRecycle;
}
constexpr bool const& LiteNetLib::NetManager::__cordl_internal_get_AutoRecycle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AutoRecycle;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_AutoRecycle(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AutoRecycle = value;
}
constexpr bool& LiteNetLib::NetManager::__cordl_internal_get_IPv6Enabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IPv6Enabled;
}
constexpr bool const& LiteNetLib::NetManager::__cordl_internal_get_IPv6Enabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IPv6Enabled;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_IPv6Enabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IPv6Enabled = value;
}
constexpr ::System::Threading::ThreadPriority& LiteNetLib::NetManager::__cordl_internal_get_ThreadPriority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ThreadPriority;
}
constexpr ::System::Threading::ThreadPriority const& LiteNetLib::NetManager::__cordl_internal_get_ThreadPriority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ThreadPriority;
}
constexpr void LiteNetLib::NetManager::__cordl_internal_set_ThreadPriority(::System::Threading::ThreadPriority value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ThreadPriority = value;
}
inline bool LiteNetLib::NetManager::get_IsRunning() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "get_IsRunning",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t LiteNetLib::NetManager::get_LocalPort() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "get_LocalPort",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::LiteNetLib::NetPeer* LiteNetLib::NetManager::get_FirstPeer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "get_FirstPeer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPeer*, false>(this, ___internal_method);
}
inline uint8_t LiteNetLib::NetManager::get_ChannelsCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "get_ChannelsCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline void LiteNetLib::NetManager::set_ChannelsCount(uint8_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "set_ChannelsCount", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>* LiteNetLib::NetManager::get_ConnectedPeerList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "get_ConnectedPeerList",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>*, false>(this, ___internal_method);
}
inline ::LiteNetLib::NetPeer* LiteNetLib::NetManager::GetPeerById(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "GetPeerById", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPeer*, false>(this, ___internal_method, id);
}
inline int32_t LiteNetLib::NetManager::get_ConnectedPeersCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "get_ConnectedPeersCount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool LiteNetLib::NetManager::TryGetPeer(::System::Net::IPEndPoint* endPoint, ByRef<::LiteNetLib::NetPeer*> peer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "TryGetPeer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::LiteNetLib::NetPeer*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, endPoint, peer);
}
inline void LiteNetLib::NetManager::AddPeer(::LiteNetLib::NetPeer* peer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "AddPeer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer);
}
inline void LiteNetLib::NetManager::RemovePeer(::LiteNetLib::NetPeer* peer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "RemovePeer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer);
}
inline void LiteNetLib::NetManager::RemovePeerInternal(::LiteNetLib::NetPeer* peer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "RemovePeerInternal", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer);
}
/// @param extraPacketLayer: ::LiteNetLib::Layers::PacketLayerBase* (default: nullptr)
inline ::LiteNetLib::NetManager* LiteNetLib::NetManager::New_ctor(::LiteNetLib::INetEventListener* listener, ::LiteNetLib::Layers::PacketLayerBase* extraPacketLayer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::NetManager*>(listener, extraPacketLayer));
}
/// @param extraPacketLayer: ::LiteNetLib::Layers::PacketLayerBase* (default: nullptr)
inline void LiteNetLib::NetManager::_ctor(::LiteNetLib::INetEventListener* listener, ::LiteNetLib::Layers::PacketLayerBase* extraPacketLayer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::INetEventListener*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Layers::PacketLayerBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listener, extraPacketLayer);
}
inline void LiteNetLib::NetManager::ConnectionLatencyUpdated(::LiteNetLib::NetPeer* fromPeer, int32_t latency) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "ConnectionLatencyUpdated", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fromPeer, latency);
}
inline void LiteNetLib::NetManager::MessageDelivered(::LiteNetLib::NetPeer* fromPeer, ::System::Object* userData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "MessageDelivered", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fromPeer, userData);
}
inline int32_t LiteNetLib::NetManager::SendRawAndRecycle(::LiteNetLib::NetPacket* packet, ::System::Net::IPEndPoint* remoteEndPoint) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendRawAndRecycle", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, packet, remoteEndPoint);
}
inline int32_t LiteNetLib::NetManager::SendRaw(::LiteNetLib::NetPacket* packet, ::System::Net::IPEndPoint* remoteEndPoint) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendRaw", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, packet, remoteEndPoint);
}
inline int32_t LiteNetLib::NetManager::SendRaw(::ArrayW<uint8_t, ::Array<uint8_t>*> message, int32_t start, int32_t length, ::System::Net::IPEndPoint* remoteEndPoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendRaw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, message, start, length, remoteEndPoint);
}
inline void LiteNetLib::NetManager::DisconnectPeerForce(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectReason reason, ::System::Net::Sockets::SocketError socketErrorCode,
                                                        ::LiteNetLib::NetPacket* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "DisconnectPeerForce", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectReason>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, reason, socketErrorCode, eventData);
}
inline void LiteNetLib::NetManager::DisconnectPeer(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectReason reason, ::System::Net::Sockets::SocketError socketErrorCode, bool force,
                                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t count, ::LiteNetLib::NetPacket* eventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "DisconnectPeer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectReason>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, reason, socketErrorCode, force, data, start, count, eventData);
}
/// @param peer: ::LiteNetLib::NetPeer* (default: nullptr)
/// @param remoteEndPoint: ::System::Net::IPEndPoint* (default: nullptr)
/// @param errorCode: ::System::Net::Sockets::SocketError (default: static_cast<int32_t>(0x0))
/// @param latency: int32_t (default: static_cast<int32_t>(0x0))
/// @param disconnectReason: ::LiteNetLib::DisconnectReason (default: static_cast<int32_t>(0x0))
/// @param connectionRequest: ::LiteNetLib::ConnectionRequest* (default: nullptr)
/// @param deliveryMethod: ::LiteNetLib::DeliveryMethod (default: static_cast<uint8_t>(0x4u))
/// @param readerSource: ::LiteNetLib::NetPacket* (default: nullptr)
/// @param userData: ::System::Object* (default: nullptr)
inline void LiteNetLib::NetManager::CreateEvent(::LiteNetLib::__NetEvent__EType type, ::LiteNetLib::NetPeer* peer, ::System::Net::IPEndPoint* remoteEndPoint,
                                                ::System::Net::Sockets::SocketError errorCode, int32_t latency, ::LiteNetLib::DisconnectReason disconnectReason,
                                                ::LiteNetLib::ConnectionRequest* connectionRequest, ::LiteNetLib::DeliveryMethod deliveryMethod, ::LiteNetLib::NetPacket* readerSource,
                                                ::System::Object* userData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "CreateEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__NetEvent__EType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectReason>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, peer, remoteEndPoint, errorCode, latency, disconnectReason, connectionRequest, deliveryMethod, readerSource,
                                                          userData);
}
inline void LiteNetLib::NetManager::ProcessEvent(::LiteNetLib::NetEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "ProcessEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void LiteNetLib::NetManager::RecycleEvent(::LiteNetLib::NetEvent* evt) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "RecycleEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void LiteNetLib::NetManager::UpdateLogic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "UpdateLogic",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::NetManager::LiteNetLib_INetSocketListener_OnMessageReceived(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length, ::System::Net::Sockets::SocketError errorCode,
                                                                                    ::System::Net::IPEndPoint* remoteEndPoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "LiteNetLib.INetSocketListener.OnMessageReceived", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, length, errorCode, remoteEndPoint);
}
inline ::LiteNetLib::NetPeer* LiteNetLib::NetManager::OnConnectionSolved(::LiteNetLib::ConnectionRequest* request, ::ArrayW<uint8_t, ::Array<uint8_t>*> rejectData, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "OnConnectionSolved", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPeer*, false>(this, ___internal_method, request, rejectData, start, length);
}
inline int32_t LiteNetLib::NetManager::GetNextPeerId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "GetNextPeerId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void LiteNetLib::NetManager::ProcessConnectRequest(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPeer* netPeer, ::LiteNetLib::NetConnectRequestPacket* connRequest) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "ProcessConnectRequest", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetConnectRequestPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, remoteEndPoint, netPeer, connRequest);
}
inline void LiteNetLib::NetManager::DataReceived(::ArrayW<uint8_t, ::Array<uint8_t>*> reusableBuffer, int32_t count, ::System::Net::IPEndPoint* remoteEndPoint) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "DataReceived", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reusableBuffer, count, remoteEndPoint);
}
inline void LiteNetLib::NetManager::CreateReceiveEvent(::LiteNetLib::NetPacket* packet, ::LiteNetLib::DeliveryMethod method, ::LiteNetLib::NetPeer* fromPeer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "CreateReceiveEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, method, fromPeer);
}
inline void LiteNetLib::NetManager::SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::LiteNetLib::DeliveryMethod options) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, options);
}
inline void LiteNetLib::NetManager::SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::LiteNetLib::DeliveryMethod options) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, options);
}
inline void LiteNetLib::NetManager::SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, ::LiteNetLib::DeliveryMethod options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, start, length, options);
}
inline void LiteNetLib::NetManager::SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod options) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, channelNumber, options);
}
inline void LiteNetLib::NetManager::SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod options) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, channelNumber, options);
}
inline void LiteNetLib::NetManager::SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, start, length, channelNumber, options);
}
inline void LiteNetLib::NetManager::SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, ::LiteNetLib::DeliveryMethod options, ::LiteNetLib::NetPeer* excludePeer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, options, excludePeer);
}
inline void LiteNetLib::NetManager::SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::LiteNetLib::DeliveryMethod options, ::LiteNetLib::NetPeer* excludePeer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, options, excludePeer);
}
inline void LiteNetLib::NetManager::SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, ::LiteNetLib::DeliveryMethod options, ::LiteNetLib::NetPeer* excludePeer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, start, length, options, excludePeer);
}
inline void LiteNetLib::NetManager::SendToAll(::LiteNetLib::Utils::NetDataWriter* writer, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod options, ::LiteNetLib::NetPeer* excludePeer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, channelNumber, options, excludePeer);
}
inline void LiteNetLib::NetManager::SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod options, ::LiteNetLib::NetPeer* excludePeer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, channelNumber, options, excludePeer);
}
inline void LiteNetLib::NetManager::SendToAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod options,
                                              ::LiteNetLib::NetPeer* excludePeer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendToAll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, start, length, channelNumber, options, excludePeer);
}
inline bool LiteNetLib::NetManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool LiteNetLib::NetManager::Start(::System::Net::IPAddress* addressIPv4, ::System::Net::IPAddress* addressIPv6, int32_t port) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "Start", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, addressIPv4, addressIPv6, port);
}
inline bool LiteNetLib::NetManager::Start(::StringW addressIPv4, ::StringW addressIPv6, int32_t port) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "Start", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, addressIPv4, addressIPv6, port);
}
inline bool LiteNetLib::NetManager::Start(int32_t port) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "Start", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, port);
}
inline bool LiteNetLib::NetManager::SendUnconnectedMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> message, ::System::Net::IPEndPoint* remoteEndPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendUnconnectedMessage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, message, remoteEndPoint);
}
inline bool LiteNetLib::NetManager::SendUnconnectedMessage(::LiteNetLib::Utils::NetDataWriter* writer, ::System::Net::IPEndPoint* remoteEndPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendUnconnectedMessage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, writer, remoteEndPoint);
}
inline bool LiteNetLib::NetManager::SendUnconnectedMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> message, int32_t start, int32_t length, ::System::Net::IPEndPoint* remoteEndPoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendUnconnectedMessage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, message, start, length, remoteEndPoint);
}
inline bool LiteNetLib::NetManager::SendBroadcast(::LiteNetLib::Utils::NetDataWriter* writer, int32_t port) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendBroadcast", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, writer, port);
}
inline bool LiteNetLib::NetManager::SendBroadcast(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t port) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendBroadcast", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data, port);
}
inline bool LiteNetLib::NetManager::SendBroadcast(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t length, int32_t port) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "SendBroadcast", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data, start, length, port);
}
inline void LiteNetLib::NetManager::Flush() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "Flush",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::NetManager::PollEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "PollEvents",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::LiteNetLib::NetPeer* LiteNetLib::NetManager::Connect(::StringW address, int32_t port, ::StringW key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPeer*, false>(this, ___internal_method, address, port, key);
}
inline ::LiteNetLib::NetPeer* LiteNetLib::NetManager::Connect(::StringW address, int32_t port, ::LiteNetLib::Utils::NetDataWriter* connectionData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPeer*, false>(this, ___internal_method, address, port, connectionData);
}
inline ::LiteNetLib::NetPeer* LiteNetLib::NetManager::Connect(::System::Net::IPEndPoint* target, ::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPeer*, false>(this, ___internal_method, target, key);
}
inline ::LiteNetLib::NetPeer* LiteNetLib::NetManager::Connect(::System::Net::IPEndPoint* target, ::LiteNetLib::Utils::NetDataWriter* connectionData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPeer*, false>(this, ___internal_method, target, connectionData);
}
inline void LiteNetLib::NetManager::Stop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "Stop",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::NetManager::Stop(bool sendDisconnectMessages) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "Stop", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sendDisconnectMessages);
}
inline int32_t LiteNetLib::NetManager::GetPeersCount(::LiteNetLib::ConnectionState peerState) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "GetPeersCount", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionState>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, peerState);
}
inline void LiteNetLib::NetManager::GetPeersNonAlloc(::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>* peers, ::LiteNetLib::ConnectionState peerState) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "GetPeersNonAlloc", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::LiteNetLib::NetPeer*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peers, peerState);
}
inline void LiteNetLib::NetManager::DisconnectAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "DisconnectAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::NetManager::DisconnectAll(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "DisconnectAll", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, start, count);
}
inline void LiteNetLib::NetManager::DisconnectPeerForce(::LiteNetLib::NetPeer* peer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "DisconnectPeerForce", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer);
}
inline void LiteNetLib::NetManager::DisconnectPeer(::LiteNetLib::NetPeer* peer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "DisconnectPeer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer);
}
inline void LiteNetLib::NetManager::DisconnectPeer(::LiteNetLib::NetPeer* peer, ::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "DisconnectPeer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, data);
}
inline void LiteNetLib::NetManager::DisconnectPeer(::LiteNetLib::NetPeer* peer, ::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "DisconnectPeer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, writer);
}
inline void LiteNetLib::NetManager::DisconnectPeer(::LiteNetLib::NetPeer* peer, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t start, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "DisconnectPeer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, data, start, count);
}
inline ::LiteNetLib::__NetManager__NetPeerEnumerator LiteNetLib::NetManager::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::__NetManager__NetPeerEnumerator, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::LiteNetLib::NetPeer*>* LiteNetLib::NetManager::System_Collections_Generic_IEnumerable_LiteNetLib_NetPeer__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "System.Collections.Generic.IEnumerable<LiteNetLib.NetPeer>.GetEnumerator",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::LiteNetLib::NetPeer*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* LiteNetLib::NetManager::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetManager*>::get(), "System.Collections.IEnumerable.GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::LiteNetLib::NetManager::NetManager() {}
