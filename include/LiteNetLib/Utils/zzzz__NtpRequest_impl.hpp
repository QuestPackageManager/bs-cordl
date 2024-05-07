#pragma once
// IWYU pragma private; include "LiteNetLib/Utils/NtpRequest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/Utils/zzzz__NtpRequest_def.hpp"
#include "LiteNetLib/Utils/zzzz__NtpPacket_def.hpp"
#include "LiteNetLib/zzzz__INetSocketListener_def.hpp"
#include "LiteNetLib/zzzz__NetSocket_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::LiteNetLib::Utils::NtpRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::LiteNetLib::Utils::NtpRequest::*)(::System::Net::IPEndPoint*, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*)>(&::LiteNetLib::Utils::NtpRequest::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x25f1ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpRequest.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::LiteNetLib::Utils::NtpRequest* (*)(::System::Net::IPEndPoint*, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*)>(&::LiteNetLib::Utils::NtpRequest::Create)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25f1c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpRequest*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpRequest.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::LiteNetLib::Utils::NtpRequest* (*)(::System::Net::IPAddress*, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*)>(&::LiteNetLib::Utils::NtpRequest::Create)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x25f1d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpRequest*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpRequest.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::Utils::NtpRequest* (*)(::StringW, int32_t, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*)>(
    &::LiteNetLib::Utils::NtpRequest::Create)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25f1d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpRequest*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpRequest.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::Utils::NtpRequest* (*)(::StringW, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*)>(
    &::LiteNetLib::Utils::NtpRequest::Create)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25f1df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpRequest*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpRequest.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NtpRequest::*)()>(&::LiteNetLib::Utils::NtpRequest::Send)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x25f1e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpRequest*>::get(), "Send",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpRequest.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NtpRequest::*)()>(&::LiteNetLib::Utils::NtpRequest::Close)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25f1f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpRequest*>::get(), "Close",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpRequest.LiteNetLib_INetSocketListener_OnMessageReceived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::LiteNetLib::Utils::NtpRequest::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::System::Net::Sockets::SocketError, ::System::Net::IPEndPoint*)>(
        &::LiteNetLib::Utils::NtpRequest::LiteNetLib_INetSocketListener_OnMessageReceived)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x25f1f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpRequest*>::get(), "LiteNetLib.INetSocketListener.OnMessageReceived", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::INetSocketListener"
constexpr LiteNetLib::Utils::NtpRequest::operator ::LiteNetLib::INetSocketListener*() noexcept {
  return static_cast<::LiteNetLib::INetSocketListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::INetSocketListener"
constexpr ::LiteNetLib::INetSocketListener* LiteNetLib::Utils::NtpRequest::i___LiteNetLib__INetSocketListener() noexcept {
  return static_cast<::LiteNetLib::INetSocketListener*>(static_cast<void*>(this));
}
constexpr ::LiteNetLib::NetSocket*& LiteNetLib::Utils::NtpRequest::__cordl_internal_get__socket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____socket;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetSocket*> const& LiteNetLib::Utils::NtpRequest::__cordl_internal_get__socket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____socket;
}
constexpr void LiteNetLib::Utils::NtpRequest::__cordl_internal_set__socket(::LiteNetLib::NetSocket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____socket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*& LiteNetLib::Utils::NtpRequest::__cordl_internal_get__onRequestComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onRequestComplete;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*> const& LiteNetLib::Utils::NtpRequest::__cordl_internal_get__onRequestComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onRequestComplete;
}
constexpr void LiteNetLib::Utils::NtpRequest::__cordl_internal_set__onRequestComplete(::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onRequestComplete)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::IPEndPoint*& LiteNetLib::Utils::NtpRequest::__cordl_internal_get__ntpEndPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ntpEndPoint;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& LiteNetLib::Utils::NtpRequest::__cordl_internal_get__ntpEndPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ntpEndPoint;
}
constexpr void LiteNetLib::Utils::NtpRequest::__cordl_internal_set__ntpEndPoint(::System::Net::IPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ntpEndPoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::LiteNetLib::Utils::NtpRequest* LiteNetLib::Utils::NtpRequest::New_ctor(::System::Net::IPEndPoint* endPoint, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* onRequestComplete) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::Utils::NtpRequest*>(endPoint, onRequestComplete));
}
inline void LiteNetLib::Utils::NtpRequest::_ctor(::System::Net::IPEndPoint* endPoint, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* onRequestComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, endPoint, onRequestComplete);
}
inline ::LiteNetLib::Utils::NtpRequest* LiteNetLib::Utils::NtpRequest::Create(::System::Net::IPEndPoint* endPoint, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* onRequestComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpRequest*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NtpRequest*, false>(nullptr, ___internal_method, endPoint, onRequestComplete);
}
inline ::LiteNetLib::Utils::NtpRequest* LiteNetLib::Utils::NtpRequest::Create(::System::Net::IPAddress* ipAddress, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* onRequestComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpRequest*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NtpRequest*, false>(nullptr, ___internal_method, ipAddress, onRequestComplete);
}
inline ::LiteNetLib::Utils::NtpRequest* LiteNetLib::Utils::NtpRequest::Create(::StringW ntpServerAddress, int32_t port, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* onRequestComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpRequest*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NtpRequest*, false>(nullptr, ___internal_method, ntpServerAddress, port, onRequestComplete);
}
inline ::LiteNetLib::Utils::NtpRequest* LiteNetLib::Utils::NtpRequest::Create(::StringW ntpServerAddress, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* onRequestComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpRequest*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NtpRequest*, false>(nullptr, ___internal_method, ntpServerAddress, onRequestComplete);
}
inline void LiteNetLib::Utils::NtpRequest::Send() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpRequest*>::get(), "Send",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NtpRequest::Close() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpRequest*>::get(), "Close",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NtpRequest::LiteNetLib_INetSocketListener_OnMessageReceived(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t length, ::System::Net::Sockets::SocketError errorCode,
                                                                                           ::System::Net::IPEndPoint* remoteEndPoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpRequest*>::get(), "LiteNetLib.INetSocketListener.OnMessageReceived", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, length, errorCode, remoteEndPoint);
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::NtpRequest::NtpRequest() {}
