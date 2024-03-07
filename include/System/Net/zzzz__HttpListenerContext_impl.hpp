#pragma once
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerContext::*)(::System::Net::HttpConnection*)>(
    &::System::Net::HttpListenerContext::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2b103c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpConnection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerContext.get_ErrorStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::HttpListenerContext::*)()>(&::System::Net::HttpListenerContext::get_ErrorStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b14ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerContext*>::get(), "get_ErrorStatus",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerContext.set_ErrorStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerContext::*)(int32_t)>(&::System::Net::HttpListenerContext::set_ErrorStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b14abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerContext*>::get(), "set_ErrorStatus", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerContext.get_ErrorMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::HttpListenerContext::*)()>(&::System::Net::HttpListenerContext::get_ErrorMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b14ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerContext*>::get(), "get_ErrorMessage",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerContext.set_ErrorMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerContext::*)(::StringW)>(&::System::Net::HttpListenerContext::set_ErrorMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b14acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerContext*>::get(), "set_ErrorMessage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerContext.get_HaveError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::HttpListenerContext::*)()>(&::System::Net::HttpListenerContext::get_HaveError)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b11070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerContext*>::get(), "get_HaveError",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerContext.get_Connection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpConnection* (::System::Net::HttpListenerContext::*)()>(
    &::System::Net::HttpListenerContext::get_Connection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b14ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerContext*>::get(), "get_Connection",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerContext.get_Request
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpListenerRequest* (::System::Net::HttpListenerContext::*)()>(
    &::System::Net::HttpListenerContext::get_Request)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b14adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerContext*>::get(), "get_Request",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerContext.get_Response
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpListenerResponse* (::System::Net::HttpListenerContext::*)()>(
    &::System::Net::HttpListenerContext::get_Response)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b14ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerContext*>::get(), "get_Response",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerContext.ParseAuthentication
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpListenerContext::*)(::System::Net::AuthenticationSchemes)>(
    &::System::Net::HttpListenerContext::ParseAuthentication)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2b14564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerContext*>::get(), "ParseAuthentication", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::AuthenticationSchemes>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerContext.ParseBasicAuthentication
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Principal::IPrincipal* (::System::Net::HttpListenerContext::*)(::StringW)>(
    &::System::Net::HttpListenerContext::ParseBasicAuthentication)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2b14aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerContext*>::get(), "ParseBasicAuthentication",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Net::HttpListenerRequest*& System::Net::HttpListenerContext::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListenerRequest*> const& System::Net::HttpListenerContext::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr void System::Net::HttpListenerContext::__cordl_internal_set_request(::System::Net::HttpListenerRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::HttpListenerResponse*& System::Net::HttpListenerContext::__cordl_internal_get_response() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___response;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListenerResponse*> const& System::Net::HttpListenerContext::__cordl_internal_get_response() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___response;
}
constexpr void System::Net::HttpListenerContext::__cordl_internal_set_response(::System::Net::HttpListenerResponse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___response)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Principal::IPrincipal*& System::Net::HttpListenerContext::__cordl_internal_get_user() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Principal::IPrincipal*> const& System::Net::HttpListenerContext::__cordl_internal_get_user() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user;
}
constexpr void System::Net::HttpListenerContext::__cordl_internal_set_user(::System::Security::Principal::IPrincipal* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___user)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::HttpConnection*& System::Net::HttpListenerContext::__cordl_internal_get_cnc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cnc;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpConnection*> const& System::Net::HttpListenerContext::__cordl_internal_get_cnc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cnc;
}
constexpr void System::Net::HttpListenerContext::__cordl_internal_set_cnc(::System::Net::HttpConnection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cnc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___error)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::System::Net::HttpListener*> const& System::Net::HttpListenerContext::__cordl_internal_get_Listener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Listener;
}
constexpr void System::Net::HttpListenerContext::__cordl_internal_set_Listener(::System::Net::HttpListener* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Listener)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::HttpListenerContext* System::Net::HttpListenerContext::New_ctor(::System::Net::HttpConnection* cnc) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::HttpListenerContext*>(cnc));
}
inline void System::Net::HttpListenerContext::_ctor(::System::Net::HttpConnection* cnc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpConnection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cnc);
}
inline int32_t System::Net::HttpListenerContext::get_ErrorStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerContext*>::get(), "get_ErrorStatus",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Net::HttpListenerContext::set_ErrorStatus(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerContext*>::get(), "set_ErrorStatus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW System::Net::HttpListenerContext::get_ErrorMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerContext*>::get(), "get_ErrorMessage",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Net::HttpListenerContext::set_ErrorMessage(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerContext*>::get(), "set_ErrorMessage", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::HttpListenerContext::get_HaveError() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerContext*>::get(), "get_HaveError",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Net::HttpConnection* System::Net::HttpListenerContext::get_Connection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerContext*>::get(), "get_Connection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpConnection*, false>(this, ___internal_method);
}
inline ::System::Net::HttpListenerRequest* System::Net::HttpListenerContext::get_Request() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerContext*>::get(), "get_Request",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListenerRequest*, false>(this, ___internal_method);
}
inline ::System::Net::HttpListenerResponse* System::Net::HttpListenerContext::get_Response() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerContext*>::get(), "get_Response",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListenerResponse*, false>(this, ___internal_method);
}
inline void System::Net::HttpListenerContext::ParseAuthentication(::System::Net::AuthenticationSchemes expectedSchemes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerContext*>::get(), "ParseAuthentication", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::AuthenticationSchemes>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expectedSchemes);
}
inline ::System::Security::Principal::IPrincipal* System::Net::HttpListenerContext::ParseBasicAuthentication(::StringW authData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpListenerContext*>::get(), "ParseBasicAuthentication",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Principal::IPrincipal*, false>(this, ___internal_method, authData);
}
// Ctor Parameters []
constexpr ::System::Net::HttpListenerContext::HttpListenerContext() {}
