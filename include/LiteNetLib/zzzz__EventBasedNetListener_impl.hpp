#pragma once
// IWYU pragma private; include "LiteNetLib/EventBasedNetListener.hpp"
#include "LiteNetLib/zzzz__IDeliveryEventListener_impl.hpp"
#include "LiteNetLib/zzzz__INetEventListener_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__EventBasedNetListener_def.hpp"
#include "LiteNetLib/zzzz__ConnectionRequest_def.hpp"
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
#include "LiteNetLib/zzzz__DisconnectInfo_def.hpp"
#include "LiteNetLib/zzzz__EventBasedNetListener_def.hpp"
#include "LiteNetLib/zzzz__NetPacketReader_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/zzzz__UnconnectedMessageType_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnPeerConnected._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnPeerConnected::*)(::System::Object*, ::System::IntPtr)>(
    &::LiteNetLib::EventBasedNetListener_OnPeerConnected::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3aad670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnPeerConnected*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnPeerConnected.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnPeerConnected::*)(::LiteNetLib::NetPeer*)>(
    &::LiteNetLib::EventBasedNetListener_OnPeerConnected::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3aad770;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnPeerConnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnPeerConnected*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnPeerConnected.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::LiteNetLib::EventBasedNetListener_OnPeerConnected::*)(::LiteNetLib::NetPeer*, ::System::AsyncCallback*, ::System::Object*)>(&::LiteNetLib::EventBasedNetListener_OnPeerConnected::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3aad784;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnPeerConnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnPeerConnected*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnPeerConnected.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnPeerConnected::*)(::System::IAsyncResult*)>(
    &::LiteNetLib::EventBasedNetListener_OnPeerConnected::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3aad7a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnPeerConnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnPeerConnected*>::get(), 15));
    return ___internal_method;
  }
};
inline void LiteNetLib::EventBasedNetListener_OnPeerConnected::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnPeerConnected*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::EventBasedNetListener_OnPeerConnected::Invoke(::LiteNetLib::NetPeer* peer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnPeerConnected*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer);
}
inline ::System::IAsyncResult* LiteNetLib::EventBasedNetListener_OnPeerConnected::BeginInvoke(::LiteNetLib::NetPeer* peer, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnPeerConnected*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, peer, callback, object);
}
inline void LiteNetLib::EventBasedNetListener_OnPeerConnected::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnPeerConnected*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::LiteNetLib::EventBasedNetListener_OnPeerConnected* LiteNetLib::EventBasedNetListener_OnPeerConnected::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::EventBasedNetListener_OnPeerConnected*>(object, method));
}
// Ctor Parameters []
constexpr ::LiteNetLib::EventBasedNetListener_OnPeerConnected::EventBasedNetListener_OnPeerConnected() {}
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnPeerDisconnected._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnPeerDisconnected::*)(::System::Object*, ::System::IntPtr)>(
    &::LiteNetLib::EventBasedNetListener_OnPeerDisconnected::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3aad7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnPeerDisconnected*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnPeerDisconnected.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnPeerDisconnected::*)(
    ::LiteNetLib::NetPeer*, ::LiteNetLib::DisconnectInfo)>(&::LiteNetLib::EventBasedNetListener_OnPeerDisconnected::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3aad8b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnPeerDisconnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnPeerDisconnected*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnPeerDisconnected.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::LiteNetLib::EventBasedNetListener_OnPeerDisconnected::*)(::LiteNetLib::NetPeer*, ::LiteNetLib::DisconnectInfo, ::System::AsyncCallback*, ::System::Object*)>(
        &::LiteNetLib::EventBasedNetListener_OnPeerDisconnected::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3aad8c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnPeerDisconnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnPeerDisconnected*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnPeerDisconnected.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnPeerDisconnected::*)(::System::IAsyncResult*)>(
    &::LiteNetLib::EventBasedNetListener_OnPeerDisconnected::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3aad95c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnPeerDisconnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnPeerDisconnected*>::get(), 15));
    return ___internal_method;
  }
};
inline void LiteNetLib::EventBasedNetListener_OnPeerDisconnected::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnPeerDisconnected*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::EventBasedNetListener_OnPeerDisconnected::Invoke(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectInfo disconnectInfo) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnPeerDisconnected*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, disconnectInfo);
}
inline ::System::IAsyncResult* LiteNetLib::EventBasedNetListener_OnPeerDisconnected::BeginInvoke(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectInfo disconnectInfo,
                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnPeerDisconnected*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, peer, disconnectInfo, callback, object);
}
inline void LiteNetLib::EventBasedNetListener_OnPeerDisconnected::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnPeerDisconnected*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::LiteNetLib::EventBasedNetListener_OnPeerDisconnected* LiteNetLib::EventBasedNetListener_OnPeerDisconnected::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::EventBasedNetListener_OnPeerDisconnected*>(object, method));
}
// Ctor Parameters []
constexpr ::LiteNetLib::EventBasedNetListener_OnPeerDisconnected::EventBasedNetListener_OnPeerDisconnected() {}
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnNetworkError._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnNetworkError::*)(::System::Object*, ::System::IntPtr)>(
    &::LiteNetLib::EventBasedNetListener_OnNetworkError::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3aad968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkError*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnNetworkError.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnNetworkError::*)(
    ::System::Net::IPEndPoint*, ::System::Net::Sockets::SocketError)>(&::LiteNetLib::EventBasedNetListener_OnNetworkError::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3aada6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkError*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkError*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnNetworkError.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::LiteNetLib::EventBasedNetListener_OnNetworkError::*)(::System::Net::IPEndPoint*, ::System::Net::Sockets::SocketError, ::System::AsyncCallback*, ::System::Object*)>(
    &::LiteNetLib::EventBasedNetListener_OnNetworkError::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3aada80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkError*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkError*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnNetworkError.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnNetworkError::*)(::System::IAsyncResult*)>(
    &::LiteNetLib::EventBasedNetListener_OnNetworkError::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3aadb14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkError*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkError*>::get(), 15));
    return ___internal_method;
  }
};
inline void LiteNetLib::EventBasedNetListener_OnNetworkError::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkError*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::EventBasedNetListener_OnNetworkError::Invoke(::System::Net::IPEndPoint* endPoint, ::System::Net::Sockets::SocketError socketError) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkError*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endPoint, socketError);
}
inline ::System::IAsyncResult* LiteNetLib::EventBasedNetListener_OnNetworkError::BeginInvoke(::System::Net::IPEndPoint* endPoint, ::System::Net::Sockets::SocketError socketError,
                                                                                             ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkError*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, endPoint, socketError, callback, object);
}
inline void LiteNetLib::EventBasedNetListener_OnNetworkError::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkError*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::LiteNetLib::EventBasedNetListener_OnNetworkError* LiteNetLib::EventBasedNetListener_OnNetworkError::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::EventBasedNetListener_OnNetworkError*>(object, method));
}
// Ctor Parameters []
constexpr ::LiteNetLib::EventBasedNetListener_OnNetworkError::EventBasedNetListener_OnNetworkError() {}
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnNetworkReceive._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnNetworkReceive::*)(::System::Object*, ::System::IntPtr)>(
    &::LiteNetLib::EventBasedNetListener_OnNetworkReceive::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3aadb20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkReceive*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnNetworkReceive.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnNetworkReceive::*)(
    ::LiteNetLib::NetPeer*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::DeliveryMethod)>(&::LiteNetLib::EventBasedNetListener_OnNetworkReceive::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3aadc24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkReceive*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkReceive*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnNetworkReceive.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::LiteNetLib::EventBasedNetListener_OnNetworkReceive::*)(::LiteNetLib::NetPeer*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::DeliveryMethod, ::System::AsyncCallback*, ::System::Object*)>(
    &::LiteNetLib::EventBasedNetListener_OnNetworkReceive::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3aadc38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkReceive*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkReceive*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnNetworkReceive.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnNetworkReceive::*)(::System::IAsyncResult*)>(
    &::LiteNetLib::EventBasedNetListener_OnNetworkReceive::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3aadcd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkReceive*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkReceive*>::get(), 15));
    return ___internal_method;
  }
};
inline void LiteNetLib::EventBasedNetListener_OnNetworkReceive::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkReceive*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::EventBasedNetListener_OnNetworkReceive::Invoke(::LiteNetLib::NetPeer* peer, ::LiteNetLib::NetPacketReader* reader, ::LiteNetLib::DeliveryMethod deliveryMethod) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkReceive*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, reader, deliveryMethod);
}
inline ::System::IAsyncResult* LiteNetLib::EventBasedNetListener_OnNetworkReceive::BeginInvoke(::LiteNetLib::NetPeer* peer, ::LiteNetLib::NetPacketReader* reader,
                                                                                               ::LiteNetLib::DeliveryMethod deliveryMethod, ::System::AsyncCallback* callback,
                                                                                               ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkReceive*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, peer, reader, deliveryMethod, callback, object);
}
inline void LiteNetLib::EventBasedNetListener_OnNetworkReceive::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkReceive*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::LiteNetLib::EventBasedNetListener_OnNetworkReceive* LiteNetLib::EventBasedNetListener_OnNetworkReceive::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::EventBasedNetListener_OnNetworkReceive*>(object, method));
}
// Ctor Parameters []
constexpr ::LiteNetLib::EventBasedNetListener_OnNetworkReceive::EventBasedNetListener_OnNetworkReceive() {}
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected::*)(::System::Object*, ::System::IntPtr)>(
    &::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3aadcdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected::*)(
    ::System::Net::IPEndPoint*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::UnconnectedMessageType)>(&::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3aadde0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected::*)(::System::Net::IPEndPoint*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::UnconnectedMessageType, ::System::AsyncCallback*,
                                                                        ::System::Object*)>(&::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3aaddf4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected::*)(::System::IAsyncResult*)>(
    &::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3aade8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected*>::get(), 15));
    return ___internal_method;
  }
};
inline void LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected::Invoke(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPacketReader* reader,
                                                                                  ::LiteNetLib::UnconnectedMessageType messageType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, remoteEndPoint, reader, messageType);
}
inline ::System::IAsyncResult* LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected::BeginInvoke(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPacketReader* reader,
                                                                                                          ::LiteNetLib::UnconnectedMessageType messageType, ::System::AsyncCallback* callback,
                                                                                                          ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, remoteEndPoint, reader, messageType, callback, object);
}
inline void LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected* LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected*>(object, method));
}
// Ctor Parameters []
constexpr ::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected::EventBasedNetListener_OnNetworkReceiveUnconnected() {}
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate::*)(::System::Object*, ::System::IntPtr)>(
    &::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3aade98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate::*)(::LiteNetLib::NetPeer*, int32_t)>(
    &::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3aadf9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate::*)(::LiteNetLib::NetPeer*, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3aadfb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate::*)(::System::IAsyncResult*)>(
    &::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3aae044;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate*>::get(), 15));
    return ___internal_method;
  }
};
inline void LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate::Invoke(::LiteNetLib::NetPeer* peer, int32_t latency) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, latency);
}
inline ::System::IAsyncResult* LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate::BeginInvoke(::LiteNetLib::NetPeer* peer, int32_t latency, ::System::AsyncCallback* callback,
                                                                                                     ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, peer, latency, callback, object);
}
inline void LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate* LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate*>(object, method));
}
// Ctor Parameters []
constexpr ::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate::EventBasedNetListener_OnNetworkLatencyUpdate() {}
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnConnectionRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnConnectionRequest::*)(::System::Object*, ::System::IntPtr)>(
    &::LiteNetLib::EventBasedNetListener_OnConnectionRequest::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3aae050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnConnectionRequest*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnConnectionRequest.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnConnectionRequest::*)(::LiteNetLib::ConnectionRequest*)>(
    &::LiteNetLib::EventBasedNetListener_OnConnectionRequest::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3aae150;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnConnectionRequest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnConnectionRequest*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnConnectionRequest.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::LiteNetLib::EventBasedNetListener_OnConnectionRequest::*)(::LiteNetLib::ConnectionRequest*, ::System::AsyncCallback*, ::System::Object*)>(
        &::LiteNetLib::EventBasedNetListener_OnConnectionRequest::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3aae164;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnConnectionRequest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnConnectionRequest*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnConnectionRequest.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnConnectionRequest::*)(::System::IAsyncResult*)>(
    &::LiteNetLib::EventBasedNetListener_OnConnectionRequest::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3aae184;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnConnectionRequest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnConnectionRequest*>::get(), 15));
    return ___internal_method;
  }
};
inline void LiteNetLib::EventBasedNetListener_OnConnectionRequest::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnConnectionRequest*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::EventBasedNetListener_OnConnectionRequest::Invoke(::LiteNetLib::ConnectionRequest* request) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnConnectionRequest*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request);
}
inline ::System::IAsyncResult* LiteNetLib::EventBasedNetListener_OnConnectionRequest::BeginInvoke(::LiteNetLib::ConnectionRequest* request, ::System::AsyncCallback* callback,
                                                                                                  ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnConnectionRequest*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, request, callback, object);
}
inline void LiteNetLib::EventBasedNetListener_OnConnectionRequest::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnConnectionRequest*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::LiteNetLib::EventBasedNetListener_OnConnectionRequest* LiteNetLib::EventBasedNetListener_OnConnectionRequest::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::EventBasedNetListener_OnConnectionRequest*>(object, method));
}
// Ctor Parameters []
constexpr ::LiteNetLib::EventBasedNetListener_OnConnectionRequest::EventBasedNetListener_OnConnectionRequest() {}
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnDeliveryEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnDeliveryEvent::*)(::System::Object*, ::System::IntPtr)>(
    &::LiteNetLib::EventBasedNetListener_OnDeliveryEvent::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3aae190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnDeliveryEvent*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnDeliveryEvent.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnDeliveryEvent::*)(::LiteNetLib::NetPeer*, ::System::Object*)>(
    &::LiteNetLib::EventBasedNetListener_OnDeliveryEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3aae294;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnDeliveryEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnDeliveryEvent*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnDeliveryEvent.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::LiteNetLib::EventBasedNetListener_OnDeliveryEvent::*)(::LiteNetLib::NetPeer*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*)>(
        &::LiteNetLib::EventBasedNetListener_OnDeliveryEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3aae2a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnDeliveryEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnDeliveryEvent*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener_OnDeliveryEvent.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener_OnDeliveryEvent::*)(::System::IAsyncResult*)>(
    &::LiteNetLib::EventBasedNetListener_OnDeliveryEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3aae2d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnDeliveryEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnDeliveryEvent*>::get(), 15));
    return ___internal_method;
  }
};
inline void LiteNetLib::EventBasedNetListener_OnDeliveryEvent::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnDeliveryEvent*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::EventBasedNetListener_OnDeliveryEvent::Invoke(::LiteNetLib::NetPeer* peer, ::System::Object* userData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnDeliveryEvent*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, userData);
}
inline ::System::IAsyncResult* LiteNetLib::EventBasedNetListener_OnDeliveryEvent::BeginInvoke(::LiteNetLib::NetPeer* peer, ::System::Object* userData, ::System::AsyncCallback* callback,
                                                                                              ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnDeliveryEvent*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, peer, userData, callback, object);
}
inline void LiteNetLib::EventBasedNetListener_OnDeliveryEvent::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener_OnDeliveryEvent*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::LiteNetLib::EventBasedNetListener_OnDeliveryEvent* LiteNetLib::EventBasedNetListener_OnDeliveryEvent::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::EventBasedNetListener_OnDeliveryEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::LiteNetLib::EventBasedNetListener_OnDeliveryEvent::EventBasedNetListener_OnDeliveryEvent() {}
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_PeerConnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::EventBasedNetListener_OnPeerConnected*)>(
    &::LiteNetLib::EventBasedNetListener::add_PeerConnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3aacb88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_PeerConnectedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnPeerConnected*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_PeerConnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::EventBasedNetListener_OnPeerConnected*)>(
    &::LiteNetLib::EventBasedNetListener::remove_PeerConnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3aacc24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_PeerConnectedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnPeerConnected*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_PeerDisconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::EventBasedNetListener_OnPeerDisconnected*)>(
    &::LiteNetLib::EventBasedNetListener::add_PeerDisconnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3aaccc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_PeerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnPeerDisconnected*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_PeerDisconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::EventBasedNetListener_OnPeerDisconnected*)>(
    &::LiteNetLib::EventBasedNetListener::remove_PeerDisconnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3aacd5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_PeerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnPeerDisconnected*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_NetworkErrorEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::EventBasedNetListener_OnNetworkError*)>(
    &::LiteNetLib::EventBasedNetListener::add_NetworkErrorEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3aacdf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_NetworkErrorEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnNetworkError*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_NetworkErrorEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::EventBasedNetListener_OnNetworkError*)>(
    &::LiteNetLib::EventBasedNetListener::remove_NetworkErrorEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3aace94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_NetworkErrorEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnNetworkError*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_NetworkReceiveEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::EventBasedNetListener_OnNetworkReceive*)>(
    &::LiteNetLib::EventBasedNetListener::add_NetworkReceiveEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3aacf30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_NetworkReceiveEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnNetworkReceive*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_NetworkReceiveEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::EventBasedNetListener_OnNetworkReceive*)>(
    &::LiteNetLib::EventBasedNetListener::remove_NetworkReceiveEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3aacfcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_NetworkReceiveEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnNetworkReceive*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_NetworkReceiveUnconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected*)>(
    &::LiteNetLib::EventBasedNetListener::add_NetworkReceiveUnconnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3aad068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_NetworkReceiveUnconnectedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_NetworkReceiveUnconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected*)>(
    &::LiteNetLib::EventBasedNetListener::remove_NetworkReceiveUnconnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3aad104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_NetworkReceiveUnconnectedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_NetworkLatencyUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate*)>(
    &::LiteNetLib::EventBasedNetListener::add_NetworkLatencyUpdateEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3aad1a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_NetworkLatencyUpdateEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_NetworkLatencyUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate*)>(
    &::LiteNetLib::EventBasedNetListener::remove_NetworkLatencyUpdateEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3aad23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_NetworkLatencyUpdateEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_ConnectionRequestEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::EventBasedNetListener_OnConnectionRequest*)>(
    &::LiteNetLib::EventBasedNetListener::add_ConnectionRequestEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3aad2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_ConnectionRequestEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnConnectionRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_ConnectionRequestEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::EventBasedNetListener_OnConnectionRequest*)>(
    &::LiteNetLib::EventBasedNetListener::remove_ConnectionRequestEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3aad374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_ConnectionRequestEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnConnectionRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_DeliveryEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::EventBasedNetListener_OnDeliveryEvent*)>(
    &::LiteNetLib::EventBasedNetListener::add_DeliveryEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3aad410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_DeliveryEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnDeliveryEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_DeliveryEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::EventBasedNetListener_OnDeliveryEvent*)>(
    &::LiteNetLib::EventBasedNetListener::remove_DeliveryEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3aad4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_DeliveryEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnDeliveryEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearPeerConnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::ClearPeerConnectedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3aad548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                               "ClearPeerConnectedEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearPeerDisconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::ClearPeerDisconnectedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3aad550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                               "ClearPeerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearNetworkErrorEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::ClearNetworkErrorEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3aad558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                               "ClearNetworkErrorEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearNetworkReceiveEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::ClearNetworkReceiveEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3aad560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                               "ClearNetworkReceiveEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearNetworkReceiveUnconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(
    &::LiteNetLib::EventBasedNetListener::ClearNetworkReceiveUnconnectedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3aad568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "ClearNetworkReceiveUnconnectedEvent",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearNetworkLatencyUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(
    &::LiteNetLib::EventBasedNetListener::ClearNetworkLatencyUpdateEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3aad570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                               "ClearNetworkLatencyUpdateEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearConnectionRequestEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::ClearConnectionRequestEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3aad578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                               "ClearConnectionRequestEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearDeliveryEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::ClearDeliveryEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3aad580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                               "ClearDeliveryEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnPeerConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::NetPeer*)>(
    &::LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnPeerConnected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3aad588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "LiteNetLib.INetEventListener.OnPeerConnected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnPeerDisconnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::NetPeer*, ::LiteNetLib::DisconnectInfo)>(
    &::LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnPeerDisconnected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3aad5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "LiteNetLib.INetEventListener.OnPeerDisconnected",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnNetworkError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::System::Net::IPEndPoint*, ::System::Net::Sockets::SocketError)>(
    &::LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkError)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3aad5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "LiteNetLib.INetEventListener.OnNetworkError", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnNetworkReceive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(
    ::LiteNetLib::NetPeer*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::DeliveryMethod)>(&::LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkReceive)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3aad5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "LiteNetLib.INetEventListener.OnNetworkReceive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::System::Net::IPEndPoint*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::UnconnectedMessageType)>(
        &::LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3aad5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                 "LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::UnconnectedMessageType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnNetworkLatencyUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::NetPeer*, int32_t)>(
    &::LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkLatencyUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3aad614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                               "LiteNetLib.INetEventListener.OnNetworkLatencyUpdate", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnConnectionRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::ConnectionRequest*)>(
    &::LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnConnectionRequest)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3aad630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "LiteNetLib.INetEventListener.OnConnectionRequest",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.LiteNetLib_IDeliveryEventListener_OnMessageDelivered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::NetPeer*, ::System::Object*)>(
    &::LiteNetLib::EventBasedNetListener::LiteNetLib_IDeliveryEventListener_OnMessageDelivered)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3aad64c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                               "LiteNetLib.IDeliveryEventListener.OnMessageDelivered", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3aad668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::LiteNetLib::EventBasedNetListener_OnPeerConnected*& LiteNetLib::EventBasedNetListener::__cordl_internal_get_PeerConnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PeerConnectedEvent;
}
constexpr ::LiteNetLib::EventBasedNetListener_OnPeerConnected* const& LiteNetLib::EventBasedNetListener::__cordl_internal_get_PeerConnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PeerConnectedEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__cordl_internal_set_PeerConnectedEvent(::LiteNetLib::EventBasedNetListener_OnPeerConnected* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PeerConnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::EventBasedNetListener_OnPeerDisconnected*& LiteNetLib::EventBasedNetListener::__cordl_internal_get_PeerDisconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PeerDisconnectedEvent;
}
constexpr ::LiteNetLib::EventBasedNetListener_OnPeerDisconnected* const& LiteNetLib::EventBasedNetListener::__cordl_internal_get_PeerDisconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PeerDisconnectedEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__cordl_internal_set_PeerDisconnectedEvent(::LiteNetLib::EventBasedNetListener_OnPeerDisconnected* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PeerDisconnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::EventBasedNetListener_OnNetworkError*& LiteNetLib::EventBasedNetListener::__cordl_internal_get_NetworkErrorEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetworkErrorEvent;
}
constexpr ::LiteNetLib::EventBasedNetListener_OnNetworkError* const& LiteNetLib::EventBasedNetListener::__cordl_internal_get_NetworkErrorEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetworkErrorEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__cordl_internal_set_NetworkErrorEvent(::LiteNetLib::EventBasedNetListener_OnNetworkError* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NetworkErrorEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::EventBasedNetListener_OnNetworkReceive*& LiteNetLib::EventBasedNetListener::__cordl_internal_get_NetworkReceiveEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetworkReceiveEvent;
}
constexpr ::LiteNetLib::EventBasedNetListener_OnNetworkReceive* const& LiteNetLib::EventBasedNetListener::__cordl_internal_get_NetworkReceiveEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetworkReceiveEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__cordl_internal_set_NetworkReceiveEvent(::LiteNetLib::EventBasedNetListener_OnNetworkReceive* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NetworkReceiveEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected*& LiteNetLib::EventBasedNetListener::__cordl_internal_get_NetworkReceiveUnconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetworkReceiveUnconnectedEvent;
}
constexpr ::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected* const& LiteNetLib::EventBasedNetListener::__cordl_internal_get_NetworkReceiveUnconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetworkReceiveUnconnectedEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__cordl_internal_set_NetworkReceiveUnconnectedEvent(::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NetworkReceiveUnconnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate*& LiteNetLib::EventBasedNetListener::__cordl_internal_get_NetworkLatencyUpdateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetworkLatencyUpdateEvent;
}
constexpr ::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate* const& LiteNetLib::EventBasedNetListener::__cordl_internal_get_NetworkLatencyUpdateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetworkLatencyUpdateEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__cordl_internal_set_NetworkLatencyUpdateEvent(::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NetworkLatencyUpdateEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::EventBasedNetListener_OnConnectionRequest*& LiteNetLib::EventBasedNetListener::__cordl_internal_get_ConnectionRequestEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionRequestEvent;
}
constexpr ::LiteNetLib::EventBasedNetListener_OnConnectionRequest* const& LiteNetLib::EventBasedNetListener::__cordl_internal_get_ConnectionRequestEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionRequestEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__cordl_internal_set_ConnectionRequestEvent(::LiteNetLib::EventBasedNetListener_OnConnectionRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ConnectionRequestEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::EventBasedNetListener_OnDeliveryEvent*& LiteNetLib::EventBasedNetListener::__cordl_internal_get_DeliveryEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeliveryEvent;
}
constexpr ::LiteNetLib::EventBasedNetListener_OnDeliveryEvent* const& LiteNetLib::EventBasedNetListener::__cordl_internal_get_DeliveryEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeliveryEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__cordl_internal_set_DeliveryEvent(::LiteNetLib::EventBasedNetListener_OnDeliveryEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DeliveryEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void LiteNetLib::EventBasedNetListener::add_PeerConnectedEvent(::LiteNetLib::EventBasedNetListener_OnPeerConnected* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_PeerConnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnPeerConnected*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_PeerConnectedEvent(::LiteNetLib::EventBasedNetListener_OnPeerConnected* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_PeerConnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnPeerConnected*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::add_PeerDisconnectedEvent(::LiteNetLib::EventBasedNetListener_OnPeerDisconnected* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_PeerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnPeerDisconnected*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_PeerDisconnectedEvent(::LiteNetLib::EventBasedNetListener_OnPeerDisconnected* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_PeerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnPeerDisconnected*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::add_NetworkErrorEvent(::LiteNetLib::EventBasedNetListener_OnNetworkError* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_NetworkErrorEvent", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnNetworkError*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_NetworkErrorEvent(::LiteNetLib::EventBasedNetListener_OnNetworkError* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_NetworkErrorEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnNetworkError*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::add_NetworkReceiveEvent(::LiteNetLib::EventBasedNetListener_OnNetworkReceive* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_NetworkReceiveEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnNetworkReceive*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_NetworkReceiveEvent(::LiteNetLib::EventBasedNetListener_OnNetworkReceive* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_NetworkReceiveEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnNetworkReceive*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::add_NetworkReceiveUnconnectedEvent(::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_NetworkReceiveUnconnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_NetworkReceiveUnconnectedEvent(::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_NetworkReceiveUnconnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnNetworkReceiveUnconnected*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::add_NetworkLatencyUpdateEvent(::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_NetworkLatencyUpdateEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_NetworkLatencyUpdateEvent(::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_NetworkLatencyUpdateEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnNetworkLatencyUpdate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::add_ConnectionRequestEvent(::LiteNetLib::EventBasedNetListener_OnConnectionRequest* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_ConnectionRequestEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnConnectionRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_ConnectionRequestEvent(::LiteNetLib::EventBasedNetListener_OnConnectionRequest* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_ConnectionRequestEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnConnectionRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::add_DeliveryEvent(::LiteNetLib::EventBasedNetListener_OnDeliveryEvent* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_DeliveryEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnDeliveryEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_DeliveryEvent(::LiteNetLib::EventBasedNetListener_OnDeliveryEvent* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_DeliveryEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::EventBasedNetListener_OnDeliveryEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::ClearPeerConnectedEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                             "ClearPeerConnectedEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::ClearPeerDisconnectedEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                             "ClearPeerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::ClearNetworkErrorEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                             "ClearNetworkErrorEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::ClearNetworkReceiveEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                             "ClearNetworkReceiveEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::ClearNetworkReceiveUnconnectedEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "ClearNetworkReceiveUnconnectedEvent",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::ClearNetworkLatencyUpdateEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                             "ClearNetworkLatencyUpdateEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::ClearConnectionRequestEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                             "ClearConnectionRequestEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::ClearDeliveryEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "ClearDeliveryEvent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnPeerConnected(::LiteNetLib::NetPeer* peer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "LiteNetLib.INetEventListener.OnPeerConnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnPeerDisconnected(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectInfo disconnectInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "LiteNetLib.INetEventListener.OnPeerDisconnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, disconnectInfo);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkError(::System::Net::IPEndPoint* endPoint, ::System::Net::Sockets::SocketError socketErrorCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "LiteNetLib.INetEventListener.OnNetworkError", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endPoint, socketErrorCode);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkReceive(::LiteNetLib::NetPeer* peer, ::LiteNetLib::NetPacketReader* reader,
                                                                                             ::LiteNetLib::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "LiteNetLib.INetEventListener.OnNetworkReceive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, reader, deliveryMethod);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPacketReader* reader,
                                                                                                        ::LiteNetLib::UnconnectedMessageType messageType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                               "LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::UnconnectedMessageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, remoteEndPoint, reader, messageType);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(::LiteNetLib::NetPeer* peer, int32_t latency) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                             "LiteNetLib.INetEventListener.OnNetworkLatencyUpdate", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, latency);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnConnectionRequest(::LiteNetLib::ConnectionRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "LiteNetLib.INetEventListener.OnConnectionRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_IDeliveryEventListener_OnMessageDelivered(::LiteNetLib::NetPeer* peer, ::System::Object* userData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                             "LiteNetLib.IDeliveryEventListener.OnMessageDelivered", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, userData);
}
inline void LiteNetLib::EventBasedNetListener::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::LiteNetLib::EventBasedNetListener* LiteNetLib::EventBasedNetListener::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::EventBasedNetListener*>());
}
/// @brief Convert operator to "::LiteNetLib::INetEventListener"
constexpr LiteNetLib::EventBasedNetListener::operator ::LiteNetLib::INetEventListener*() noexcept {
  return static_cast<::LiteNetLib::INetEventListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::INetEventListener"
constexpr ::LiteNetLib::INetEventListener* LiteNetLib::EventBasedNetListener::i___LiteNetLib__INetEventListener() noexcept {
  return static_cast<::LiteNetLib::INetEventListener*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::IDeliveryEventListener"
constexpr LiteNetLib::EventBasedNetListener::operator ::LiteNetLib::IDeliveryEventListener*() noexcept {
  return static_cast<::LiteNetLib::IDeliveryEventListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::IDeliveryEventListener"
constexpr ::LiteNetLib::IDeliveryEventListener* LiteNetLib::EventBasedNetListener::i___LiteNetLib__IDeliveryEventListener() noexcept {
  return static_cast<::LiteNetLib::IDeliveryEventListener*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::LiteNetLib::EventBasedNetListener::EventBasedNetListener() {}
