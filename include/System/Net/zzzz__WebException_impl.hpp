#pragma once
// IWYU pragma private; include "System/Net/WebException.hpp"
#include "System/Net/zzzz__WebExceptionInternalStatus_impl.hpp"
#include "System/Net/zzzz__WebExceptionStatus_impl.hpp"
#include "System/zzzz__InvalidOperationException_impl.hpp"
#include "System/Net/zzzz__WebException_def.hpp"
#include "System/Net/zzzz__WebExceptionInternalStatus_def.hpp"
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Net::WebException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebException::*)()>(&::System::Net::WebException::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6409e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebException::*)(::StringW)>(&::System::Net::WebException::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6408b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebException::*)(::StringW, ::System::Exception*)>(&::System::Net::WebException::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6403910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebException::*)(::StringW, ::System::Net::WebExceptionStatus)>(&::System::Net::WebException::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6402d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebExceptionStatus>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebException::*)(::StringW, ::System::Net::WebExceptionStatus, ::System::Net::WebExceptionInternalStatus,
                                                                                             ::System::Exception*)>(&::System::Net::WebException::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6409e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(), { ".ctor",
                                                                               {},
                                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebExceptionStatus>(),
                                                                                 ::i2c::type_of<::System::Net::WebExceptionInternalStatus>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebException::*)(::StringW, ::System::Exception*, ::System::Net::WebExceptionStatus, ::System::Net::WebResponse*)>(
    &::System::Net::WebException::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64038fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(), { ".ctor",
                                                                                            {},
                                                                                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>(),
                                                                                              ::i2c::type_of<::System::Net::WebExceptionStatus>(), ::i2c::type_of<::System::Net::WebResponse*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebException::*)(::StringW, ::StringW, ::System::Exception*, ::System::Net::WebExceptionStatus,
                                                                                             ::System::Net::WebResponse*)>(&::System::Net::WebException::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6409e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(), { ".ctor",
                                                                                            {},
                                                                                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>(),
                                                                                              ::i2c::type_of<::System::Net::WebExceptionStatus>(), ::i2c::type_of<::System::Net::WebResponse*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebException::*)(::StringW, ::System::Exception*, ::System::Net::WebExceptionStatus, ::System::Net::WebResponse*,
                                                                                             ::System::Net::WebExceptionInternalStatus)>(&::System::Net::WebException::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6409e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Net::WebExceptionStatus>(),
                                                                 ::i2c::type_of<::System::Net::WebResponse*>(), ::i2c::type_of<::System::Net::WebExceptionInternalStatus>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebException::*)(::StringW, ::StringW, ::System::Exception*, ::System::Net::WebExceptionStatus, ::System::Net::WebResponse*,
                                                                                             ::System::Net::WebExceptionInternalStatus)>(&::System::Net::WebException::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6409f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Net::WebExceptionStatus>(),
                                             ::i2c::type_of<::System::Net::WebResponse*>(), ::i2c::type_of<::System::Net::WebExceptionInternalStatus>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Net::WebException::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x640a078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebException.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Net::WebException::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x640a088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(),
                                                { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebException.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Net::WebException::GetObjectData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x640a094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(), { ::i2c::class_of<::System::Net::WebException*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebException.get_Status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebExceptionStatus (::System::Net::WebException::*)()>(&::System::Net::WebException::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x640a09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(), { "get_Status", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebException.get_Response
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebResponse* (::System::Net::WebException::*)()>(&::System::Net::WebException::get_Response)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x640a0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(), { "get_Response", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebExceptionStatus& System::Net::WebException::__cordl_internal_get_m_Status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Status;
}
constexpr ::System::Net::WebExceptionStatus const& System::Net::WebException::__cordl_internal_get_m_Status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Status;
}
constexpr void System::Net::WebException::__cordl_internal_set_m_Status(::System::Net::WebExceptionStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Status = value;
}
constexpr ::System::Net::WebResponse*& System::Net::WebException::__cordl_internal_get_m_Response() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Response;
}
constexpr ::System::Net::WebResponse* const& System::Net::WebException::__cordl_internal_get_m_Response() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Response;
}
constexpr void System::Net::WebException::__cordl_internal_set_m_Response(::System::Net::WebResponse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Response = value;
}
constexpr ::System::Net::WebExceptionInternalStatus& System::Net::WebException::__cordl_internal_get_m_InternalStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalStatus;
}
constexpr ::System::Net::WebExceptionInternalStatus const& System::Net::WebException::__cordl_internal_get_m_InternalStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalStatus;
}
constexpr void System::Net::WebException::__cordl_internal_set_m_InternalStatus(::System::Net::WebExceptionInternalStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InternalStatus = value;
}
inline void System::Net::WebException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void System::Net::WebException::_ctor(::StringW message, ::System::Exception* innerException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerException);
}
inline void System::Net::WebException::_ctor(::StringW message, ::System::Net::WebExceptionStatus status) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebExceptionStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, status);
}
inline void System::Net::WebException::_ctor(::StringW message, ::System::Net::WebExceptionStatus status, ::System::Net::WebExceptionInternalStatus internalStatus,
                                             ::System::Exception* innerException) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(), { ".ctor",
                                                                                          {},
                                                                                          { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebExceptionStatus>(),
                                                                                            ::i2c::type_of<::System::Net::WebExceptionInternalStatus>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, status, internalStatus, innerException);
}
inline void System::Net::WebException::_ctor(::StringW message, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(), { ".ctor",
                                                                                          {},
                                                                                          { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>(),
                                                                                            ::i2c::type_of<::System::Net::WebExceptionStatus>(), ::i2c::type_of<::System::Net::WebResponse*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerException, status, response);
}
inline void System::Net::WebException::_ctor(::StringW message, ::StringW data, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(), { ".ctor",
                                                                                          {},
                                                                                          { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>(),
                                                                                            ::i2c::type_of<::System::Net::WebExceptionStatus>(), ::i2c::type_of<::System::Net::WebResponse*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, data, innerException, status, response);
}
inline void System::Net::WebException::_ctor(::StringW message, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response,
                                             ::System::Net::WebExceptionInternalStatus internalStatus) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(), { ".ctor",
                                                                             {},
                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Net::WebExceptionStatus>(),
                                                                               ::i2c::type_of<::System::Net::WebResponse*>(), ::i2c::type_of<::System::Net::WebExceptionInternalStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, innerException, status, response, internalStatus);
}
inline void System::Net::WebException::_ctor(::StringW message, ::StringW data, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status, ::System::Net::WebResponse* response,
                                             ::System::Net::WebExceptionInternalStatus internalStatus) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Net::WebExceptionStatus>(),
                                                  ::i2c::type_of<::System::Net::WebResponse*>(), ::i2c::type_of<::System::Net::WebExceptionInternalStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, data, innerException, status, response, internalStatus);
}
inline void System::Net::WebException::_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::WebException::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                                                ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(),
                                              { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::WebException::GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::WebException*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline ::System::Net::WebExceptionStatus System::Net::WebException::get_Status() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(), { "get_Status", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebExceptionStatus>(this, ___internal_method);
}
inline ::System::Net::WebResponse* System::Net::WebException::get_Response() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebException*>(), { "get_Response", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebResponse*>(this, ___internal_method);
}
inline ::System::Net::WebException* System::Net::WebException::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebException*>());
}
inline ::System::Net::WebException* System::Net::WebException::New_ctor(::StringW message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebException*>(message));
}
inline ::System::Net::WebException* System::Net::WebException::New_ctor(::StringW message, ::System::Exception* innerException) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebException*>(message, innerException));
}
inline ::System::Net::WebException* System::Net::WebException::New_ctor(::StringW message, ::System::Net::WebExceptionStatus status) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebException*>(message, status));
}
inline ::System::Net::WebException* System::Net::WebException::New_ctor(::StringW message, ::System::Net::WebExceptionStatus status, ::System::Net::WebExceptionInternalStatus internalStatus,
                                                                        ::System::Exception* innerException) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebException*>(message, status, internalStatus, innerException));
}
inline ::System::Net::WebException* System::Net::WebException::New_ctor(::StringW message, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status,
                                                                        ::System::Net::WebResponse* response) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebException*>(message, innerException, status, response));
}
inline ::System::Net::WebException* System::Net::WebException::New_ctor(::StringW message, ::StringW data, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status,
                                                                        ::System::Net::WebResponse* response) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebException*>(message, data, innerException, status, response));
}
inline ::System::Net::WebException* System::Net::WebException::New_ctor(::StringW message, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status,
                                                                        ::System::Net::WebResponse* response, ::System::Net::WebExceptionInternalStatus internalStatus) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebException*>(message, innerException, status, response, internalStatus));
}
inline ::System::Net::WebException* System::Net::WebException::New_ctor(::StringW message, ::StringW data, ::System::Exception* innerException, ::System::Net::WebExceptionStatus status,
                                                                        ::System::Net::WebResponse* response, ::System::Net::WebExceptionInternalStatus internalStatus) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebException*>(message, data, innerException, status, response, internalStatus));
}
inline ::System::Net::WebException* System::Net::WebException::New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                        ::System::Runtime::Serialization::StreamingContext streamingContext) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebException*>(serializationInfo, streamingContext));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Net::WebException::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Net::WebException::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::WebException::WebException() {}
