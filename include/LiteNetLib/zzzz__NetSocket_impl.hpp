#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__NetSocket_def.hpp"
#include "LiteNetLib/zzzz__INetSocketListener_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Threading/zzzz__ThreadPriority_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::LiteNetLib::NetSocket.get_LocalPort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::NetSocket::*)()>(&::LiteNetLib::NetSocket::get_LocalPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229a7c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), "get_LocalPort",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.set_LocalPort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetSocket::*)(int32_t)>(&::LiteNetLib::NetSocket::set_LocalPort)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229a7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), "set_LocalPort", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.get_Ttl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::LiteNetLib::NetSocket::*)()>(&::LiteNetLib::NetSocket::get_Ttl)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x229a7d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), "get_Ttl",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.set_Ttl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetSocket::*)(int16_t)>(&::LiteNetLib::NetSocket::set_Ttl)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22911c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), "set_Ttl", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetSocket::*)(::LiteNetLib::INetSocketListener*)>(&::LiteNetLib::NetSocket::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2292ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::INetSocketListener*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.IsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetSocket::*)()>(&::LiteNetLib::NetSocket::IsActive)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x229a8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), "IsActive",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.ReceiveLogic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetSocket::*)(::System::Object*)>(&::LiteNetLib::NetSocket::ReceiveLogic)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x229a8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), "ReceiveLogic", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.Bind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::LiteNetLib::NetSocket::*)(::System::Net::IPAddress*, ::System::Net::IPAddress*, int32_t, bool, bool, ::System::Threading::ThreadPriority)>(&::LiteNetLib::NetSocket::Bind)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x229672c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), "Bind", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadPriority>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.BindSocket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetSocket::*)(::System::Net::Sockets::Socket*, ::System::Net::IPEndPoint*, bool)>(
    &::LiteNetLib::NetSocket::BindSocket)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x229ae44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), "BindSocket", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.SendBroadcast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::NetSocket::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, int32_t)>(
    &::LiteNetLib::NetSocket::SendBroadcast)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x22970f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), "SendBroadcast", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.SendTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::NetSocket::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::IPEndPoint*, ByRef<::System::Net::Sockets::SocketError>)>(&::LiteNetLib::NetSocket::SendTo)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x22911e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), "SendTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetSocket.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NetSocket::*)(bool)>(&::LiteNetLib::NetSocket::Close)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2297f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), "Close", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket*& LiteNetLib::NetSocket::__cordl_internal_get__udpSocketv4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____udpSocketv4;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& LiteNetLib::NetSocket::__cordl_internal_get__udpSocketv4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____udpSocketv4;
}
constexpr void LiteNetLib::NetSocket::__cordl_internal_set__udpSocketv4(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____udpSocketv4)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Sockets::Socket*& LiteNetLib::NetSocket::__cordl_internal_get__udpSocketv6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____udpSocketv6;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& LiteNetLib::NetSocket::__cordl_internal_get__udpSocketv6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____udpSocketv6;
}
constexpr void LiteNetLib::NetSocket::__cordl_internal_set__udpSocketv6(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____udpSocketv6)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Thread*& LiteNetLib::NetSocket::__cordl_internal_get__threadv4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____threadv4;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& LiteNetLib::NetSocket::__cordl_internal_get__threadv4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____threadv4;
}
constexpr void LiteNetLib::NetSocket::__cordl_internal_set__threadv4(::System::Threading::Thread* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____threadv4)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Thread*& LiteNetLib::NetSocket::__cordl_internal_get__threadv6() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____threadv6;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& LiteNetLib::NetSocket::__cordl_internal_get__threadv6() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____threadv6;
}
constexpr void LiteNetLib::NetSocket::__cordl_internal_set__threadv6(::System::Threading::Thread* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____threadv6)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::INetSocketListener*& LiteNetLib::NetSocket::__cordl_internal_get__listener() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listener;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::INetSocketListener*> const& LiteNetLib::NetSocket::__cordl_internal_get__listener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listener;
}
constexpr void LiteNetLib::NetSocket::__cordl_internal_set__listener(::LiteNetLib::INetSocketListener* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____listener)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& LiteNetLib::NetSocket::__cordl_internal_get__LocalPort_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LocalPort_k__BackingField;
}
constexpr int32_t const& LiteNetLib::NetSocket::__cordl_internal_get__LocalPort_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LocalPort_k__BackingField;
}
constexpr void LiteNetLib::NetSocket::__cordl_internal_set__LocalPort_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LocalPort_k__BackingField = value;
}
constexpr bool& LiteNetLib::NetSocket::__cordl_internal_get_IsRunning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsRunning;
}
constexpr bool const& LiteNetLib::NetSocket::__cordl_internal_get_IsRunning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsRunning;
}
constexpr void LiteNetLib::NetSocket::__cordl_internal_set_IsRunning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsRunning = value;
}
inline void LiteNetLib::NetSocket::setStaticF_MulticastAddressV6(::System::Net::IPAddress* value) {
  ::cordl_internals::setStaticField<::System::Net::IPAddress*, "MulticastAddressV6", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get>(
      std::forward<::System::Net::IPAddress*>(value));
}
inline ::System::Net::IPAddress* LiteNetLib::NetSocket::getStaticF_MulticastAddressV6() {
  return ::cordl_internals::getStaticField<::System::Net::IPAddress*, "MulticastAddressV6", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get>();
}
inline void LiteNetLib::NetSocket::setStaticF_IPv6Support(bool value) {
  ::cordl_internals::setStaticField<bool, "IPv6Support", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get>(std::forward<bool>(value));
}
inline bool LiteNetLib::NetSocket::getStaticF_IPv6Support() {
  return ::cordl_internals::getStaticField<bool, "IPv6Support", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get>();
}
inline int32_t LiteNetLib::NetSocket::get_LocalPort() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), "get_LocalPort",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void LiteNetLib::NetSocket::set_LocalPort(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), "set_LocalPort", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int16_t LiteNetLib::NetSocket::get_Ttl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), "get_Ttl",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(this, ___internal_method);
}
inline void LiteNetLib::NetSocket::set_Ttl(int16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), "set_Ttl", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::LiteNetLib::NetSocket* LiteNetLib::NetSocket::New_ctor(::LiteNetLib::INetSocketListener* listener) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::NetSocket*>(listener));
}
inline void LiteNetLib::NetSocket::_ctor(::LiteNetLib::INetSocketListener* listener) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::INetSocketListener*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listener);
}
inline bool LiteNetLib::NetSocket::IsActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), "IsActive",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void LiteNetLib::NetSocket::ReceiveLogic(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), "ReceiveLogic", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
/// @param priority: ::System::Threading::ThreadPriority (default: static_cast<int32_t>(0x2))
inline bool LiteNetLib::NetSocket::Bind(::System::Net::IPAddress* addressIPv4, ::System::Net::IPAddress* addressIPv6, int32_t port, bool reuseAddress, bool ipv6,
                                        ::System::Threading::ThreadPriority priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), "Bind", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadPriority>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, addressIPv4, addressIPv6, port, reuseAddress, ipv6, priority);
}
inline bool LiteNetLib::NetSocket::BindSocket(::System::Net::Sockets::Socket* socket, ::System::Net::IPEndPoint* ep, bool reuseAddress) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), "BindSocket", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, socket, ep, reuseAddress);
}
inline bool LiteNetLib::NetSocket::SendBroadcast(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t size, int32_t port) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), "SendBroadcast", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, data, offset, size, port);
}
inline int32_t LiteNetLib::NetSocket::SendTo(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t size, ::System::Net::IPEndPoint* remoteEndPoint,
                                             ByRef<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), "SendTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Net::Sockets::SocketError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, data, offset, size, remoteEndPoint, errorCode);
}
inline void LiteNetLib::NetSocket::Close(bool suspend) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NetSocket*>::get(), "Close", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, suspend);
}
// Ctor Parameters []
constexpr ::LiteNetLib::NetSocket::NetSocket() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
