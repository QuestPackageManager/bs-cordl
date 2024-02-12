#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Net_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetworkingPeer_def.hpp"
#include "Oculus/Platform/Models/zzzz__PingResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Packet_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__SendPolicy_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Net.ReadPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Packet* (*)()>(&::Oculus::Platform::Net::ReadPacket)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x27240a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "ReadPacket",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Net.SendPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Oculus::Platform::SendPolicy)>(
    &::Oculus::Platform::Net::SendPacket)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2724210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "SendPacket", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::SendPolicy>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Net.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t)>(&::Oculus::Platform::Net::Connect)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2724338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Net.Accept
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t)>(&::Oculus::Platform::Net::Accept)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27243fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "Accept", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Net.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t)>(&::Oculus::Platform::Net::Close)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27244c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "Close", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Net.IsConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t)>(&::Oculus::Platform::Net::IsConnected)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2724584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "IsConnected", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Net.SendPacketToCurrentRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Oculus::Platform::SendPolicy)>(
    &::Oculus::Platform::Net::SendPacketToCurrentRoom)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x272464c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "SendPacketToCurrentRoom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::SendPolicy>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Net.AcceptForCurrentRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Oculus::Platform::Net::AcceptForCurrentRoom)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x272476c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "AcceptForCurrentRoom",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Net.CloseForCurrentRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Oculus::Platform::Net::CloseForCurrentRoom)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x272482c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "CloseForCurrentRoom",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Net.Ping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PingResult*>* (*)(uint64_t)>(
    &::Oculus::Platform::Net::Ping)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x27248e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "Ping", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Net.SetConnectionStateChangedCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::NetworkingPeer*>*)>(
    &::Oculus::Platform::Net::SetConnectionStateChangedCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2724a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "SetConnectionStateChangedCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::NetworkingPeer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Net.SetPeerConnectRequestCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::NetworkingPeer*>*)>(
    &::Oculus::Platform::Net::SetPeerConnectRequestCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2724abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "SetPeerConnectRequestCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::NetworkingPeer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Net.SetPingResultNotificationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::PingResult*>*)>(
    &::Oculus::Platform::Net::SetPingResultNotificationCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2724b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "SetPingResultNotificationCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::PingResult*>*>::get() })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Packet* Oculus::Platform::Net::ReadPacket() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "ReadPacket",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Packet*, false>(nullptr, ___internal_method);
}
inline bool Oculus::Platform::Net::SendPacket(uint64_t userID, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, ::Oculus::Platform::SendPolicy policy) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "SendPacket", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::SendPolicy>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, userID, bytes, policy);
}
inline void Oculus::Platform::Net::Connect(uint64_t userID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userID);
}
inline void Oculus::Platform::Net::Accept(uint64_t userID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "Accept", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userID);
}
inline void Oculus::Platform::Net::Close(uint64_t userID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "Close", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userID);
}
inline bool Oculus::Platform::Net::IsConnected(uint64_t userID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "IsConnected", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, userID);
}
inline bool Oculus::Platform::Net::SendPacketToCurrentRoom(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, ::Oculus::Platform::SendPolicy policy) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "SendPacketToCurrentRoom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::SendPolicy>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bytes, policy);
}
inline bool Oculus::Platform::Net::AcceptForCurrentRoom() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "AcceptForCurrentRoom",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Oculus::Platform::Net::CloseForCurrentRoom() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "CloseForCurrentRoom",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PingResult*>* Oculus::Platform::Net::Ping(uint64_t userID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "Ping", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PingResult*>*, false>(nullptr, ___internal_method, userID);
}
inline void Oculus::Platform::Net::SetConnectionStateChangedCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::NetworkingPeer*>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "SetConnectionStateChangedCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::NetworkingPeer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
inline void Oculus::Platform::Net::SetPeerConnectRequestCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::NetworkingPeer*>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "SetPeerConnectRequestCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::NetworkingPeer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
inline void Oculus::Platform::Net::SetPingResultNotificationCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::PingResult*>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Net*>::get(), "SetPingResultNotificationCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::PingResult*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Net::Net() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
