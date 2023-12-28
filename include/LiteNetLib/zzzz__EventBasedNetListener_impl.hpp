#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__EventBasedNetListener_def.hpp"
#include "LiteNetLib/zzzz__DisconnectInfo_def.hpp"
#include "LiteNetLib/zzzz__EventBasedNetListener_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
#include "LiteNetLib/zzzz__INetEventListener_def.hpp"
#include "LiteNetLib/zzzz__ConnectionRequest_def.hpp"
#include "LiteNetLib/zzzz__NetPacketReader_def.hpp"
#include "LiteNetLib/zzzz__IDeliveryEventListener_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "LiteNetLib/zzzz__UnconnectedMessageType_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnPeerConnected._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnPeerConnected::*)(::System::Object*, void*)>(
    &::LiteNetLib::__EventBasedNetListener__OnPeerConnected::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x21f95d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnPeerConnected.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnPeerConnected::*)(::LiteNetLib::NetPeer*)>(
    &::LiteNetLib::__EventBasedNetListener__OnPeerConnected::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21f9700;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnPeerConnected.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::LiteNetLib::__EventBasedNetListener__OnPeerConnected::*)(::LiteNetLib::NetPeer*, ::System::AsyncCallback*, ::System::Object*)>(
        &::LiteNetLib::__EventBasedNetListener__OnPeerConnected::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21f9714;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnPeerConnected.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnPeerConnected::*)(::System::IAsyncResult*)>(
    &::LiteNetLib::__EventBasedNetListener__OnPeerConnected::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21f9734;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get(), 15));
    return ___internal_method;
  }
};
inline ::LiteNetLib::__EventBasedNetListener__OnPeerConnected* LiteNetLib::__EventBasedNetListener__OnPeerConnected::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>(object, method));
}
inline void LiteNetLib::__EventBasedNetListener__OnPeerConnected::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::__EventBasedNetListener__OnPeerConnected::Invoke(::LiteNetLib::NetPeer* peer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get(), "Invoke",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer);
}
inline ::System::IAsyncResult* LiteNetLib::__EventBasedNetListener__OnPeerConnected::BeginInvoke(::LiteNetLib::NetPeer* peer, ::System::AsyncCallback* callback, ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, peer, callback, object);
}
inline void LiteNetLib::__EventBasedNetListener__OnPeerConnected::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get(), "EndInvoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::LiteNetLib::__EventBasedNetListener__OnPeerConnected::__EventBasedNetListener__OnPeerConnected() {}
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::*)(::System::Object*, void*)>(
    &::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x21f9740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::*)(
    ::LiteNetLib::NetPeer*, ::LiteNetLib::DisconnectInfo)>(&::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21f9870;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::*)(::LiteNetLib::NetPeer*, ::LiteNetLib::DisconnectInfo, ::System::AsyncCallback*, ::System::Object*)>(
    &::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x21f9884;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::*)(::System::IAsyncResult*)>(
    &::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21f9918;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get(), 15));
    return ___internal_method;
  }
};
inline ::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected* LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>(object, method));
}
inline void LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::Invoke(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectInfo disconnectInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, disconnectInfo);
}
inline ::System::IAsyncResult* LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::BeginInvoke(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectInfo disconnectInfo,
                                                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectInfo>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, peer, disconnectInfo, callback, object);
}
inline void LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get(), "EndInvoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected::__EventBasedNetListener__OnPeerDisconnected() {}
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkError._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkError::*)(::System::Object*, void*)>(
    &::LiteNetLib::__EventBasedNetListener__OnNetworkError::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x21f9924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkError.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkError::*)(
    ::System::Net::IPEndPoint*, ::System::Net::Sockets::SocketError)>(&::LiteNetLib::__EventBasedNetListener__OnNetworkError::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21f9a54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkError.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::LiteNetLib::__EventBasedNetListener__OnNetworkError::*)(::System::Net::IPEndPoint*, ::System::Net::Sockets::SocketError, ::System::AsyncCallback*, ::System::Object*)>(
    &::LiteNetLib::__EventBasedNetListener__OnNetworkError::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x21f9a68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkError.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkError::*)(::System::IAsyncResult*)>(
    &::LiteNetLib::__EventBasedNetListener__OnNetworkError::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21f9afc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get(), 15));
    return ___internal_method;
  }
};
inline ::LiteNetLib::__EventBasedNetListener__OnNetworkError* LiteNetLib::__EventBasedNetListener__OnNetworkError::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>(object, method));
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkError::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkError::Invoke(::System::Net::IPEndPoint* endPoint, ::System::Net::Sockets::SocketError socketError) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endPoint, socketError);
}
inline ::System::IAsyncResult* LiteNetLib::__EventBasedNetListener__OnNetworkError::BeginInvoke(::System::Net::IPEndPoint* endPoint, ::System::Net::Sockets::SocketError socketError,
                                                                                                ::System::AsyncCallback* callback, ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, endPoint, socketError, callback, object);
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkError::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get(), "EndInvoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::LiteNetLib::__EventBasedNetListener__OnNetworkError::__EventBasedNetListener__OnNetworkError() {}
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkReceive._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkReceive::*)(::System::Object*, void*)>(
    &::LiteNetLib::__EventBasedNetListener__OnNetworkReceive::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x21f9b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkReceive.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkReceive::*)(
    ::LiteNetLib::NetPeer*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::DeliveryMethod)>(&::LiteNetLib::__EventBasedNetListener__OnNetworkReceive::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21f9c38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkReceive.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::LiteNetLib::__EventBasedNetListener__OnNetworkReceive::*)(::LiteNetLib::NetPeer*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::DeliveryMethod, ::System::AsyncCallback*, ::System::Object*)>(
    &::LiteNetLib::__EventBasedNetListener__OnNetworkReceive::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x21f9c4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkReceive.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkReceive::*)(::System::IAsyncResult*)>(
    &::LiteNetLib::__EventBasedNetListener__OnNetworkReceive::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21f9ce4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get(), 15));
    return ___internal_method;
  }
};
inline ::LiteNetLib::__EventBasedNetListener__OnNetworkReceive* LiteNetLib::__EventBasedNetListener__OnNetworkReceive::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>(object, method));
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkReceive::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkReceive::Invoke(::LiteNetLib::NetPeer* peer, ::LiteNetLib::NetPacketReader* reader, ::LiteNetLib::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, reader, deliveryMethod);
}
inline ::System::IAsyncResult* LiteNetLib::__EventBasedNetListener__OnNetworkReceive::BeginInvoke(::LiteNetLib::NetPeer* peer, ::LiteNetLib::NetPacketReader* reader,
                                                                                                  ::LiteNetLib::DeliveryMethod deliveryMethod, ::System::AsyncCallback* callback,
                                                                                                  ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, peer, reader, deliveryMethod, callback, object);
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkReceive::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get(), "EndInvoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::LiteNetLib::__EventBasedNetListener__OnNetworkReceive::__EventBasedNetListener__OnNetworkReceive() {}
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::*)(::System::Object*, void*)>(
    &::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x21f9cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::*)(
    ::System::Net::IPEndPoint*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::UnconnectedMessageType)>(&::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21f9e20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::*)(::System::Net::IPEndPoint*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::UnconnectedMessageType, ::System::AsyncCallback*,
                                                                           ::System::Object*)>(&::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x21f9e34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::*)(::System::IAsyncResult*)>(
    &::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21f9ecc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get(), 15));
    return ___internal_method;
  }
};
inline ::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected* LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>(object, method));
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::Invoke(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPacketReader* reader,
                                                                                     ::LiteNetLib::UnconnectedMessageType messageType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::UnconnectedMessageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, remoteEndPoint, reader, messageType);
}
inline ::System::IAsyncResult* LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::BeginInvoke(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPacketReader* reader,
                                                                                                             ::LiteNetLib::UnconnectedMessageType messageType, ::System::AsyncCallback* callback,
                                                                                                             ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::UnconnectedMessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, remoteEndPoint, reader, messageType, callback, object);
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get(), "EndInvoke",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected::__EventBasedNetListener__OnNetworkReceiveUnconnected() {}
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::*)(::System::Object*, void*)>(
    &::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x21f9ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::*)(::LiteNetLib::NetPeer*, int32_t)>(
    &::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21fa008;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::*)(::LiteNetLib::NetPeer*, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x21fa01c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::*)(::System::IAsyncResult*)>(
    &::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21fa0b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate* LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>(object, method));
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::Invoke(::LiteNetLib::NetPeer* peer, int32_t latency) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, latency);
}
inline ::System::IAsyncResult* LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::BeginInvoke(::LiteNetLib::NetPeer* peer, int32_t latency, ::System::AsyncCallback* callback,
                                                                                                        ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, peer, latency, callback, object);
}
inline void LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get(), "EndInvoke",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate::__EventBasedNetListener__OnNetworkLatencyUpdate() {}
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnConnectionRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnConnectionRequest::*)(::System::Object*, void*)>(
    &::LiteNetLib::__EventBasedNetListener__OnConnectionRequest::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x21fa0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnConnectionRequest.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnConnectionRequest::*)(::LiteNetLib::ConnectionRequest*)>(
    &::LiteNetLib::__EventBasedNetListener__OnConnectionRequest::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21fa1e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnConnectionRequest.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::LiteNetLib::__EventBasedNetListener__OnConnectionRequest::*)(::LiteNetLib::ConnectionRequest*, ::System::AsyncCallback*, ::System::Object*)>(
        &::LiteNetLib::__EventBasedNetListener__OnConnectionRequest::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21fa1fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnConnectionRequest.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnConnectionRequest::*)(::System::IAsyncResult*)>(
    &::LiteNetLib::__EventBasedNetListener__OnConnectionRequest::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21fa21c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get(), 15));
    return ___internal_method;
  }
};
inline ::LiteNetLib::__EventBasedNetListener__OnConnectionRequest* LiteNetLib::__EventBasedNetListener__OnConnectionRequest::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>(object, method));
}
inline void LiteNetLib::__EventBasedNetListener__OnConnectionRequest::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::__EventBasedNetListener__OnConnectionRequest::Invoke(::LiteNetLib::ConnectionRequest* request) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request);
}
inline ::System::IAsyncResult* LiteNetLib::__EventBasedNetListener__OnConnectionRequest::BeginInvoke(::LiteNetLib::ConnectionRequest* request, ::System::AsyncCallback* callback,
                                                                                                     ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, request, callback, object);
}
inline void LiteNetLib::__EventBasedNetListener__OnConnectionRequest::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get(), "EndInvoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::LiteNetLib::__EventBasedNetListener__OnConnectionRequest::__EventBasedNetListener__OnConnectionRequest() {}
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::*)(::System::Object*, void*)>(
    &::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x21fa228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::*)(::LiteNetLib::NetPeer*, ::System::Object*)>(
    &::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21fa358;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::*)(::LiteNetLib::NetPeer*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*)>(
        &::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21fa36c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::*)(::System::IAsyncResult*)>(
    &::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21fa394;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get(), 15));
    return ___internal_method;
  }
};
inline ::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent* LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>(object, method));
}
inline void LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::Invoke(::LiteNetLib::NetPeer* peer, ::System::Object* userData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, userData);
}
inline ::System::IAsyncResult* LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::BeginInvoke(::LiteNetLib::NetPeer* peer, ::System::Object* userData, ::System::AsyncCallback* callback,
                                                                                                 ::System::Object* object) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get(), "BeginInvoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, peer, userData, callback, object);
}
inline void LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::EndInvoke(::System::IAsyncResult* result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get(), "EndInvoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent::__EventBasedNetListener__OnDeliveryEvent() {}
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_PeerConnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnPeerConnected*)>(
    &::LiteNetLib::EventBasedNetListener::add_PeerConnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f8aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_PeerConnectedEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_PeerConnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnPeerConnected*)>(
    &::LiteNetLib::EventBasedNetListener::remove_PeerConnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f8b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_PeerConnectedEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_PeerDisconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*)>(
    &::LiteNetLib::EventBasedNetListener::add_PeerDisconnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f8c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_PeerDisconnectedEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_PeerDisconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*)>(
    &::LiteNetLib::EventBasedNetListener::remove_PeerDisconnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f8cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_PeerDisconnectedEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_NetworkErrorEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnNetworkError*)>(
    &::LiteNetLib::EventBasedNetListener::add_NetworkErrorEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f8d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_NetworkErrorEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_NetworkErrorEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnNetworkError*)>(
    &::LiteNetLib::EventBasedNetListener::remove_NetworkErrorEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f8df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_NetworkErrorEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_NetworkReceiveEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*)>(
    &::LiteNetLib::EventBasedNetListener::add_NetworkReceiveEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f8e94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_NetworkReceiveEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_NetworkReceiveEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*)>(
    &::LiteNetLib::EventBasedNetListener::remove_NetworkReceiveEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f8f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_NetworkReceiveEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_NetworkReceiveUnconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*)>(
    &::LiteNetLib::EventBasedNetListener::add_NetworkReceiveUnconnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f8fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_NetworkReceiveUnconnectedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_NetworkReceiveUnconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*)>(
    &::LiteNetLib::EventBasedNetListener::remove_NetworkReceiveUnconnectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f9068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_NetworkReceiveUnconnectedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_NetworkLatencyUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*)>(
    &::LiteNetLib::EventBasedNetListener::add_NetworkLatencyUpdateEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f9104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_NetworkLatencyUpdateEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_NetworkLatencyUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*)>(
    &::LiteNetLib::EventBasedNetListener::remove_NetworkLatencyUpdateEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f91a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_NetworkLatencyUpdateEvent", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_ConnectionRequestEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*)>(
    &::LiteNetLib::EventBasedNetListener::add_ConnectionRequestEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f923c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_ConnectionRequestEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_ConnectionRequestEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*)>(
    &::LiteNetLib::EventBasedNetListener::remove_ConnectionRequestEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f92d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_ConnectionRequestEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.add_DeliveryEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*)>(
    &::LiteNetLib::EventBasedNetListener::add_DeliveryEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f9374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_DeliveryEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.remove_DeliveryEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*)>(
    &::LiteNetLib::EventBasedNetListener::remove_DeliveryEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21f9410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_DeliveryEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearPeerConnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::ClearPeerConnectedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f94ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                               "ClearPeerConnectedEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearPeerDisconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::ClearPeerDisconnectedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f94b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                               "ClearPeerDisconnectedEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearNetworkErrorEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::ClearNetworkErrorEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f94bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                               "ClearNetworkErrorEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearNetworkReceiveEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::ClearNetworkReceiveEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f94c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                               "ClearNetworkReceiveEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearNetworkReceiveUnconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(
    &::LiteNetLib::EventBasedNetListener::ClearNetworkReceiveUnconnectedEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f94cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                               "ClearNetworkReceiveUnconnectedEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearNetworkLatencyUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(
    &::LiteNetLib::EventBasedNetListener::ClearNetworkLatencyUpdateEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f94d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                               "ClearNetworkLatencyUpdateEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearConnectionRequestEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::ClearConnectionRequestEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f94dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                               "ClearConnectionRequestEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.ClearDeliveryEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::ClearDeliveryEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f94e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                               "ClearDeliveryEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnPeerConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::NetPeer*)>(
    &::LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnPeerConnected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21f94ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "LiteNetLib.INetEventListener.OnPeerConnected",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnPeerDisconnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::NetPeer*, ::LiteNetLib::DisconnectInfo)>(
    &::LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnPeerDisconnected)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21f9508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "LiteNetLib.INetEventListener.OnPeerDisconnected", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnNetworkError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::System::Net::IPEndPoint*, ::System::Net::Sockets::SocketError)>(
    &::LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkError)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21f9524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "LiteNetLib.INetEventListener.OnNetworkError", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnNetworkReceive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(
    ::LiteNetLib::NetPeer*, ::LiteNetLib::NetPacketReader*, ::LiteNetLib::DeliveryMethod)>(&::LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkReceive)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21f9540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "LiteNetLib.INetEventListener.OnNetworkReceive", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
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
  constexpr static std::size_t addrs = 0x21f955c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
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
  constexpr static std::size_t addrs = 0x21f9578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                               "LiteNetLib.INetEventListener.OnNetworkLatencyUpdate", std::vector<Il2CppClass*>{},
                                                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.LiteNetLib_INetEventListener_OnConnectionRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::ConnectionRequest*)>(
    &::LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnConnectionRequest)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21f9594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "LiteNetLib.INetEventListener.OnConnectionRequest",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener.LiteNetLib_IDeliveryEventListener_OnMessageDelivered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)(::LiteNetLib::NetPeer*, ::System::Object*)>(
    &::LiteNetLib::EventBasedNetListener::LiteNetLib_IDeliveryEventListener_OnMessageDelivered)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21f95b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                               "LiteNetLib.IDeliveryEventListener.OnMessageDelivered", std::vector<Il2CppClass*>{},
                                                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::EventBasedNetListener._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::EventBasedNetListener::*)()>(&::LiteNetLib::EventBasedNetListener::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f95cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::INetEventListener"
constexpr LiteNetLib::EventBasedNetListener::operator ::LiteNetLib::INetEventListener*() noexcept {
  return static_cast<::LiteNetLib::INetEventListener*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::IDeliveryEventListener"
constexpr LiteNetLib::EventBasedNetListener::operator ::LiteNetLib::IDeliveryEventListener*() noexcept {
  return static_cast<::LiteNetLib::IDeliveryEventListener*>(static_cast<void*>(this));
}
constexpr ::LiteNetLib::__EventBasedNetListener__OnPeerConnected*& LiteNetLib::EventBasedNetListener::__get_PeerConnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PeerConnectedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*> const& LiteNetLib::EventBasedNetListener::__get_PeerConnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PeerConnectedEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__set_PeerConnectedEvent(::LiteNetLib::__EventBasedNetListener__OnPeerConnected* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PeerConnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*& LiteNetLib::EventBasedNetListener::__get_PeerDisconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PeerDisconnectedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*> const& LiteNetLib::EventBasedNetListener::__get_PeerDisconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PeerDisconnectedEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__set_PeerDisconnectedEvent(::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PeerDisconnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::__EventBasedNetListener__OnNetworkError*& LiteNetLib::EventBasedNetListener::__get_NetworkErrorEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetworkErrorEvent;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnNetworkError*> const& LiteNetLib::EventBasedNetListener::__get_NetworkErrorEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetworkErrorEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__set_NetworkErrorEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkError* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NetworkErrorEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*& LiteNetLib::EventBasedNetListener::__get_NetworkReceiveEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetworkReceiveEvent;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*> const& LiteNetLib::EventBasedNetListener::__get_NetworkReceiveEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetworkReceiveEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__set_NetworkReceiveEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkReceive* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NetworkReceiveEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*& LiteNetLib::EventBasedNetListener::__get_NetworkReceiveUnconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetworkReceiveUnconnectedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*> const&
LiteNetLib::EventBasedNetListener::__get_NetworkReceiveUnconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetworkReceiveUnconnectedEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__set_NetworkReceiveUnconnectedEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NetworkReceiveUnconnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*& LiteNetLib::EventBasedNetListener::__get_NetworkLatencyUpdateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetworkLatencyUpdateEvent;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*> const& LiteNetLib::EventBasedNetListener::__get_NetworkLatencyUpdateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetworkLatencyUpdateEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__set_NetworkLatencyUpdateEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NetworkLatencyUpdateEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*& LiteNetLib::EventBasedNetListener::__get_ConnectionRequestEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionRequestEvent;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*> const& LiteNetLib::EventBasedNetListener::__get_ConnectionRequestEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ConnectionRequestEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__set_ConnectionRequestEvent(::LiteNetLib::__EventBasedNetListener__OnConnectionRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ConnectionRequestEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*& LiteNetLib::EventBasedNetListener::__get_DeliveryEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeliveryEvent;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*> const& LiteNetLib::EventBasedNetListener::__get_DeliveryEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DeliveryEvent;
}
constexpr void LiteNetLib::EventBasedNetListener::__set_DeliveryEvent(::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DeliveryEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void LiteNetLib::EventBasedNetListener::add_PeerConnectedEvent(::LiteNetLib::__EventBasedNetListener__OnPeerConnected* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_PeerConnectedEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_PeerConnectedEvent(::LiteNetLib::__EventBasedNetListener__OnPeerConnected* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_PeerConnectedEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnPeerConnected*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::add_PeerDisconnectedEvent(::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_PeerDisconnectedEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_PeerDisconnectedEvent(::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_PeerDisconnectedEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnPeerDisconnected*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::add_NetworkErrorEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkError* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_NetworkErrorEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_NetworkErrorEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkError* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_NetworkErrorEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkError*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::add_NetworkReceiveEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkReceive* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_NetworkReceiveEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_NetworkReceiveEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkReceive* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_NetworkReceiveEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkReceive*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::add_NetworkReceiveUnconnectedEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_NetworkReceiveUnconnectedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_NetworkReceiveUnconnectedEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_NetworkReceiveUnconnectedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkReceiveUnconnected*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::add_NetworkLatencyUpdateEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_NetworkLatencyUpdateEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_NetworkLatencyUpdateEvent(::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_NetworkLatencyUpdateEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnNetworkLatencyUpdate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::add_ConnectionRequestEvent(::LiteNetLib::__EventBasedNetListener__OnConnectionRequest* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_ConnectionRequestEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_ConnectionRequestEvent(::LiteNetLib::__EventBasedNetListener__OnConnectionRequest* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_ConnectionRequestEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnConnectionRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::add_DeliveryEvent(::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "add_DeliveryEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::remove_DeliveryEvent(::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "remove_DeliveryEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__EventBasedNetListener__OnDeliveryEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void LiteNetLib::EventBasedNetListener::ClearPeerConnectedEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                             "ClearPeerConnectedEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::ClearPeerDisconnectedEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                             "ClearPeerDisconnectedEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::ClearNetworkErrorEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                             "ClearNetworkErrorEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::ClearNetworkReceiveEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                             "ClearNetworkReceiveEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::ClearNetworkReceiveUnconnectedEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                             "ClearNetworkReceiveUnconnectedEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::ClearNetworkLatencyUpdateEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                             "ClearNetworkLatencyUpdateEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::ClearConnectionRequestEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                             "ClearConnectionRequestEvent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::ClearDeliveryEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "ClearDeliveryEvent",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnPeerConnected(::LiteNetLib::NetPeer* peer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "LiteNetLib.INetEventListener.OnPeerConnected",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnPeerDisconnected(::LiteNetLib::NetPeer* peer, ::LiteNetLib::DisconnectInfo disconnectInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "LiteNetLib.INetEventListener.OnPeerDisconnected", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DisconnectInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, disconnectInfo);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkError(::System::Net::IPEndPoint* endPoint, ::System::Net::Sockets::SocketError socketErrorCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "LiteNetLib.INetEventListener.OnNetworkError", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endPoint, socketErrorCode);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkReceive(::LiteNetLib::NetPeer* peer, ::LiteNetLib::NetPacketReader* reader,
                                                                                             ::LiteNetLib::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "LiteNetLib.INetEventListener.OnNetworkReceive", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, reader, deliveryMethod);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(::System::Net::IPEndPoint* remoteEndPoint, ::LiteNetLib::NetPacketReader* reader,
                                                                                                        ::LiteNetLib::UnconnectedMessageType messageType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "LiteNetLib.INetEventListener.OnNetworkReceiveUnconnected", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacketReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::UnconnectedMessageType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, remoteEndPoint, reader, messageType);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(::LiteNetLib::NetPeer* peer, int32_t latency) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                             "LiteNetLib.INetEventListener.OnNetworkLatencyUpdate", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                                                               ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, latency);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_INetEventListener_OnConnectionRequest(::LiteNetLib::ConnectionRequest* request) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), "LiteNetLib.INetEventListener.OnConnectionRequest",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request);
}
inline void LiteNetLib::EventBasedNetListener::LiteNetLib_IDeliveryEventListener_OnMessageDelivered(::LiteNetLib::NetPeer* peer, ::System::Object* userData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(),
                                                                             "LiteNetLib.IDeliveryEventListener.OnMessageDelivered", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get(),
                                                                                                               ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer, userData);
}
inline ::LiteNetLib::EventBasedNetListener* LiteNetLib::EventBasedNetListener::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::EventBasedNetListener*>());
}
inline void LiteNetLib::EventBasedNetListener::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::EventBasedNetListener*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::LiteNetLib::EventBasedNetListener::EventBasedNetListener() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
