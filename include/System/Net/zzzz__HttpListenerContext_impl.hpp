#pragma once
// IWYU pragma private; include "System\Net\HttpListenerContext.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpListenerContext_def.hpp"
#include "System/Net/zzzz__AuthenticationSchemes_def.hpp"
#include "System/Net/zzzz__HttpConnection_def.hpp"
#include "System/Net/zzzz__HttpListenerRequest_def.hpp"
#include "System/Net/zzzz__HttpListenerResponse_def.hpp"
#include "System/Net/zzzz__HttpListener_def.hpp"
#include "System/Security/Principal/zzzz__IPrincipal_def.hpp"
//  Writing Method size for method: ::System::Net::HttpListenerContext._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerContext::*)(::System::Net::HttpConnection*)>(&::System::Net::HttpListenerContext::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x64314f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerContext*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::HttpConnection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerContext.get_ErrorStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::HttpListenerContext::*)()>(&::System::Net::HttpListenerContext::get_ErrorStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64356c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerContext*>(), { "get_ErrorStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerContext.set_ErrorStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerContext::*)(int32_t)>(&::System::Net::HttpListenerContext::set_ErrorStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64356c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerContext*>(), { "set_ErrorStatus", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerContext.get_ErrorMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::HttpListenerContext::*)()>(&::System::Net::HttpListenerContext::get_ErrorMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64356d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerContext*>(), { "get_ErrorMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerContext.set_ErrorMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerContext::*)(::StringW)>(&::System::Net::HttpListenerContext::set_ErrorMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64356d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerContext*>(), { "set_ErrorMessage", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerContext.get_HaveError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpListenerContext::*)()>(&::System::Net::HttpListenerContext::get_HaveError)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64320c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerContext*>(), { "get_HaveError", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerContext.get_Connection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpConnection* (::System::Net::HttpListenerContext::*)()>(&::System::Net::HttpListenerContext::get_Connection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64356e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerContext*>(), { "get_Connection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerContext.get_Request
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpListenerRequest* (::System::Net::HttpListenerContext::*)()>(&::System::Net::HttpListenerContext::get_Request)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64356e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerContext*>(), { "get_Request", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerContext.get_Response
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpListenerResponse* (::System::Net::HttpListenerContext::*)()>(&::System::Net::HttpListenerContext::get_Response)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64356f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerContext*>(), { "get_Response", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerContext.ParseAuthentication
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerContext::*)(::System::Net::AuthenticationSchemes)>(&::System::Net::HttpListenerContext::ParseAuthentication)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6435264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerContext*>(), { "ParseAuthentication", {}, { ::i2c::type_of<::System::Net::AuthenticationSchemes>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerContext.ParseBasicAuthentication
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Principal::IPrincipal* (::System::Net::HttpListenerContext::*)(::StringW)>(
    &::System::Net::HttpListenerContext::ParseBasicAuthentication)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x64356f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerContext*>(), { "ParseBasicAuthentication", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Net::HttpListenerRequest*& System::Net::HttpListenerContext::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr ::System::Net::HttpListenerRequest* const& System::Net::HttpListenerContext::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr void System::Net::HttpListenerContext::__cordl_internal_set_request(::System::Net::HttpListenerRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___request = value;
}
constexpr ::System::Net::HttpListenerResponse*& System::Net::HttpListenerContext::__cordl_internal_get_response() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___response;
}
constexpr ::System::Net::HttpListenerResponse* const& System::Net::HttpListenerContext::__cordl_internal_get_response() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___response;
}
constexpr void System::Net::HttpListenerContext::__cordl_internal_set_response(::System::Net::HttpListenerResponse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___response = value;
}
constexpr ::System::Security::Principal::IPrincipal*& System::Net::HttpListenerContext::__cordl_internal_get_user() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user;
}
constexpr ::System::Security::Principal::IPrincipal* const& System::Net::HttpListenerContext::__cordl_internal_get_user() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user;
}
constexpr void System::Net::HttpListenerContext::__cordl_internal_set_user(::System::Security::Principal::IPrincipal* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___user = value;
}
constexpr ::System::Net::HttpConnection*& System::Net::HttpListenerContext::__cordl_internal_get_cnc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cnc;
}
constexpr ::System::Net::HttpConnection* const& System::Net::HttpListenerContext::__cordl_internal_get_cnc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cnc;
}
constexpr void System::Net::HttpListenerContext::__cordl_internal_set_cnc(::System::Net::HttpConnection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cnc = value;
}
constexpr ::StringW& System::Net::HttpListenerContext::__cordl_internal_get_error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr ::StringW const& System::Net::HttpListenerContext::__cordl_internal_get_error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr void System::Net::HttpListenerContext::__cordl_internal_set_error(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___error = value;
}
constexpr int32_t& System::Net::HttpListenerContext::__cordl_internal_get_err_status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___err_status;
}
constexpr int32_t const& System::Net::HttpListenerContext::__cordl_internal_get_err_status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___err_status;
}
constexpr void System::Net::HttpListenerContext::__cordl_internal_set_err_status(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___err_status = value;
}
constexpr ::System::Net::HttpListener*& System::Net::HttpListenerContext::__cordl_internal_get_Listener() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Listener;
}
constexpr ::System::Net::HttpListener* const& System::Net::HttpListenerContext::__cordl_internal_get_Listener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Listener;
}
constexpr void System::Net::HttpListenerContext::__cordl_internal_set_Listener(::System::Net::HttpListener* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Listener = value;
}
inline void System::Net::HttpListenerContext::_ctor(::System::Net::HttpConnection* cnc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerContext*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::HttpConnection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cnc);
}
inline int32_t System::Net::HttpListenerContext::get_ErrorStatus() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerContext*>(), { "get_ErrorStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::HttpListenerContext::set_ErrorStatus(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerContext*>(), { "set_ErrorStatus", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::HttpListenerContext::get_ErrorMessage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerContext*>(), { "get_ErrorMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::HttpListenerContext::set_ErrorMessage(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerContext*>(), { "set_ErrorMessage", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::HttpListenerContext::get_HaveError() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerContext*>(), { "get_HaveError", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Net::HttpConnection* System::Net::HttpListenerContext::get_Connection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerContext*>(), { "get_Connection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpConnection*>(this, ___internal_method);
}
inline ::System::Net::HttpListenerRequest* System::Net::HttpListenerContext::get_Request() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerContext*>(), { "get_Request", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListenerRequest*>(this, ___internal_method);
}
inline ::System::Net::HttpListenerResponse* System::Net::HttpListenerContext::get_Response() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerContext*>(), { "get_Response", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListenerResponse*>(this, ___internal_method);
}
inline void System::Net::HttpListenerContext::ParseAuthentication(::System::Net::AuthenticationSchemes expectedSchemes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerContext*>(), { "ParseAuthentication", {}, { ::i2c::type_of<::System::Net::AuthenticationSchemes>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expectedSchemes);
}
inline ::System::Security::Principal::IPrincipal* System::Net::HttpListenerContext::ParseBasicAuthentication(::StringW authData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerContext*>(), { "ParseBasicAuthentication", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Principal::IPrincipal*>(this, ___internal_method, authData);
}
inline ::System::Net::HttpListenerContext* System::Net::HttpListenerContext::New_ctor(::System::Net::HttpConnection* cnc) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpListenerContext*>(cnc));
}
// Ctor Parameters []
constexpr ::System::Net::HttpListenerContext::HttpListenerContext() {}
