#pragma once
// IWYU pragma private; include "System\Net\Sockets\SocketException.hpp"
#include "System/ComponentModel/zzzz__Win32Exception_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketException_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::SocketException.WSAGetLastError_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Net::Sockets::SocketException::WSAGetLastError_icall)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6369ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketException*>(), { "WSAGetLastError_icall", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SocketException::*)()>(&::System::Net::Sockets::SocketException::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6369ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SocketException::*)(int32_t, ::StringW)>(&::System::Net::Sockets::SocketException::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6369f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketException*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SocketException::*)(int32_t)>(&::System::Net::Sockets::SocketException::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x636613c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketException*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SocketException::*)(::System::Net::Sockets::SocketError)>(&::System::Net::Sockets::SocketException::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x63694d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketException*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Sockets::SocketError>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SocketException::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::Sockets::SocketException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6369f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketException.get_ErrorCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::SocketException::*)()>(&::System::Net::Sockets::SocketException::get_ErrorCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6369f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketException*>(), { ::i2c::class_of<::System::Net::Sockets::SocketException*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketException.get_Message
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Sockets::SocketException::*)()>(&::System::Net::Sockets::SocketException::get_Message)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6369f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketException*>(), { ::i2c::class_of<::System::Net::Sockets::SocketException*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketException.get_SocketErrorCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::SocketError (::System::Net::Sockets::SocketException::*)()>(
    &::System::Net::Sockets::SocketException::get_SocketErrorCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6367ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketException*>(), { "get_SocketErrorCode", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Net::EndPoint*& System::Net::Sockets::SocketException::__cordl_internal_get_m_EndPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EndPoint;
}
constexpr ::System::Net::EndPoint* const& System::Net::Sockets::SocketException::__cordl_internal_get_m_EndPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EndPoint;
}
constexpr void System::Net::Sockets::SocketException::__cordl_internal_set_m_EndPoint(::System::Net::EndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EndPoint = value;
}
inline int32_t System::Net::Sockets::SocketException::WSAGetLastError_icall() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketException*>(), { "WSAGetLastError_icall", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void System::Net::Sockets::SocketException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketException::_ctor(int32_t error, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketException*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, message);
}
inline void System::Net::Sockets::SocketException::_ctor(int32_t errorCode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketException*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorCode);
}
inline void System::Net::Sockets::SocketException::_ctor(::System::Net::Sockets::SocketError socketError) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketException*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Sockets::SocketError>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, socketError);
}
inline void System::Net::Sockets::SocketException::_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline int32_t System::Net::Sockets::SocketException::get_ErrorCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::SocketException*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Net::Sockets::SocketException::get_Message() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::SocketException*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::Sockets::SocketError System::Net::Sockets::SocketException::get_SocketErrorCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SocketException*>(), { "get_SocketErrorCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::SocketError>(this, ___internal_method);
}
inline ::System::Net::Sockets::SocketException* System::Net::Sockets::SocketException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::SocketException*>());
}
inline ::System::Net::Sockets::SocketException* System::Net::Sockets::SocketException::New_ctor(int32_t error, ::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::SocketException*>(error, message));
}
inline ::System::Net::Sockets::SocketException* System::Net::Sockets::SocketException::New_ctor(int32_t errorCode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::SocketException*>(errorCode));
}
inline ::System::Net::Sockets::SocketException* System::Net::Sockets::SocketException::New_ctor(::System::Net::Sockets::SocketError socketError) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::SocketException*>(socketError));
}
inline ::System::Net::Sockets::SocketException* System::Net::Sockets::SocketException::New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                                                ::System::Runtime::Serialization::StreamingContext streamingContext) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::SocketException*>(serializationInfo, streamingContext));
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::SocketException::SocketException() {}
