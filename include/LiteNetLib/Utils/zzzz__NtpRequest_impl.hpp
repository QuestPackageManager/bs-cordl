#pragma once
// IWYU pragma private; include "LiteNetLib\Utils\NtpRequest.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NtpRequest::*)(::System::Net::IPEndPoint*, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*)>(
    &::LiteNetLib::Utils::NtpRequest::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x58ad72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpRequest*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpRequest.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::Utils::NtpRequest* (*)(::System::Net::IPEndPoint*, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*)>(
    &::LiteNetLib::Utils::NtpRequest::Create)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58ad810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpRequest*>(),
                                                { "Create", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpRequest.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::Utils::NtpRequest* (*)(::System::Net::IPAddress*, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*)>(
    &::LiteNetLib::Utils::NtpRequest::Create)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58ad87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpRequest*>(),
                                                { "Create", {}, { ::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpRequest.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::Utils::NtpRequest* (*)(::StringW, int32_t, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*)>(
    &::LiteNetLib::Utils::NtpRequest::Create)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58ad8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpRequest*>(),
                                                { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpRequest.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::Utils::NtpRequest* (*)(::StringW, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*)>(
    &::LiteNetLib::Utils::NtpRequest::Create)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58ad968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpRequest*>(),
                                                             { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpRequest.Send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NtpRequest::*)()>(&::LiteNetLib::Utils::NtpRequest::Send)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x58ad9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpRequest*>(), { "Send", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpRequest.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NtpRequest::*)()>(&::LiteNetLib::Utils::NtpRequest::Close)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58adaa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpRequest*>(), { "Close", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpRequest.LiteNetLib_INetSocketListener_OnMessageReceived
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NtpRequest::*)(::ArrayW<uint8_t>, int32_t, ::System::Net::Sockets::SocketError, ::System::Net::IPEndPoint*)>(
    &::LiteNetLib::Utils::NtpRequest::LiteNetLib_INetSocketListener_OnMessageReceived)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x58adac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpRequest*>(), { "LiteNetLib.INetSocketListener.OnMessageReceived",
                                                                                   {},
                                                                                   { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                     ::i2c::type_of<::System::Net::Sockets::SocketError>(), ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
    return ___internal_method;
  }
};
constexpr ::LiteNetLib::NetSocket*& LiteNetLib::Utils::NtpRequest::__cordl_internal_get__socket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____socket;
}
constexpr ::LiteNetLib::NetSocket* const& LiteNetLib::Utils::NtpRequest::__cordl_internal_get__socket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____socket;
}
constexpr void LiteNetLib::Utils::NtpRequest::__cordl_internal_set__socket(::LiteNetLib::NetSocket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____socket = value;
}
constexpr ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*& LiteNetLib::Utils::NtpRequest::__cordl_internal_get__onRequestComplete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onRequestComplete;
}
constexpr ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* const& LiteNetLib::Utils::NtpRequest::__cordl_internal_get__onRequestComplete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onRequestComplete;
}
constexpr void LiteNetLib::Utils::NtpRequest::__cordl_internal_set__onRequestComplete(::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onRequestComplete = value;
}
constexpr ::System::Net::IPEndPoint*& LiteNetLib::Utils::NtpRequest::__cordl_internal_get__ntpEndPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ntpEndPoint;
}
constexpr ::System::Net::IPEndPoint* const& LiteNetLib::Utils::NtpRequest::__cordl_internal_get__ntpEndPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ntpEndPoint;
}
constexpr void LiteNetLib::Utils::NtpRequest::__cordl_internal_set__ntpEndPoint(::System::Net::IPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ntpEndPoint = value;
}
inline void LiteNetLib::Utils::NtpRequest::_ctor(::System::Net::IPEndPoint* endPoint, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* onRequestComplete) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpRequest*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endPoint, onRequestComplete);
}
inline ::LiteNetLib::Utils::NtpRequest* LiteNetLib::Utils::NtpRequest::Create(::System::Net::IPEndPoint* endPoint, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* onRequestComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpRequest*>(),
                                              { "Create", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NtpRequest*>(nullptr, ___internal_method, endPoint, onRequestComplete);
}
inline ::LiteNetLib::Utils::NtpRequest* LiteNetLib::Utils::NtpRequest::Create(::System::Net::IPAddress* ipAddress, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* onRequestComplete) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpRequest*>(),
                                                           { "Create", {}, { ::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NtpRequest*>(nullptr, ___internal_method, ipAddress, onRequestComplete);
}
inline ::LiteNetLib::Utils::NtpRequest* LiteNetLib::Utils::NtpRequest::Create(::StringW ntpServerAddress, int32_t port, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* onRequestComplete) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpRequest*>(),
                                              { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NtpRequest*>(nullptr, ___internal_method, ntpServerAddress, port, onRequestComplete);
}
inline ::LiteNetLib::Utils::NtpRequest* LiteNetLib::Utils::NtpRequest::Create(::StringW ntpServerAddress, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* onRequestComplete) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpRequest*>(),
                                                           { "Create", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::LiteNetLib::Utils::NtpPacket*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NtpRequest*>(nullptr, ___internal_method, ntpServerAddress, onRequestComplete);
}
inline void LiteNetLib::Utils::NtpRequest::Send() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpRequest*>(), { "Send", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NtpRequest::Close() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpRequest*>(), { "Close", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NtpRequest::LiteNetLib_INetSocketListener_OnMessageReceived(::ArrayW<uint8_t> data, int32_t length, ::System::Net::Sockets::SocketError errorCode,
                                                                                           ::System::Net::IPEndPoint* remoteEndPoint) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpRequest*>(),
                                                                                         { "LiteNetLib.INetSocketListener.OnMessageReceived",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::System::Net::Sockets::SocketError>(), ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, length, errorCode, remoteEndPoint);
}
inline ::LiteNetLib::Utils::NtpRequest* LiteNetLib::Utils::NtpRequest::New_ctor(::System::Net::IPEndPoint* endPoint, ::System::Action_1<::LiteNetLib::Utils::NtpPacket*>* onRequestComplete) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NtpRequest*>(endPoint, onRequestComplete));
}
/// @brief Convert operator to "::LiteNetLib::INetSocketListener"
constexpr LiteNetLib::Utils::NtpRequest::operator ::LiteNetLib::INetSocketListener*() noexcept {
  return static_cast<::LiteNetLib::INetSocketListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::INetSocketListener"
constexpr ::LiteNetLib::INetSocketListener* LiteNetLib::Utils::NtpRequest::i___LiteNetLib__INetSocketListener() noexcept {
  return static_cast<::LiteNetLib::INetSocketListener*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::NtpRequest::NtpRequest() {}
