#pragma once
// IWYU pragma private; include "System/Net/FtpWebResponse.hpp"
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "System/Net/zzzz__FtpStatusCode_impl.hpp"
#include "System/Net/zzzz__WebResponse_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/Net/zzzz__FtpWebResponse_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__FtpStatusCode_def.hpp"
#include "System/Net/zzzz__FtpWebResponse_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::FtpWebResponse_EmptyStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebResponse_EmptyStream::*)()>(&::System::Net::FtpWebResponse_EmptyStream::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x449e268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse_EmptyStream*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Net::FtpWebResponse_EmptyStream::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse_EmptyStream*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::FtpWebResponse_EmptyStream* System::Net::FtpWebResponse_EmptyStream::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::FtpWebResponse_EmptyStream*>());
}
// Ctor Parameters []
constexpr ::System::Net::FtpWebResponse_EmptyStream::FtpWebResponse_EmptyStream() {}
//  Writing Method size for method: ::System::Net::FtpWebResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebResponse::*)(
    ::System::IO::Stream*, int64_t, ::System::Uri*, ::System::Net::FtpStatusCode, ::StringW, ::System::DateTime, ::StringW, ::StringW, ::StringW)>(&::System::Net::FtpWebResponse::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x449da6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpStatusCode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.UpdateStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebResponse::*)(::System::Net::FtpStatusCode, ::StringW, ::StringW)>(
    &::System::Net::FtpWebResponse::UpdateStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x449c36c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), "UpdateStatus", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpStatusCode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.GetResponseStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::FtpWebResponse::*)()>(&::System::Net::FtpWebResponse::GetResponseStream)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x449e208;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.SetResponseStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebResponse::*)(::System::IO::Stream*)>(&::System::Net::FtpWebResponse::SetResponseStream)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x449d9d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), "SetResponseStream", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebResponse::*)()>(&::System::Net::FtpWebResponse::Close)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x449e304;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.get_Headers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::FtpWebResponse::*)()>(
    &::System::Net::FtpWebResponse::get_Headers)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x449e3f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.get_ResponseUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::FtpWebResponse::*)()>(&::System::Net::FtpWebResponse::get_ResponseUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x449e504;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.get_StatusCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::FtpStatusCode (::System::Net::FtpWebResponse::*)()>(&::System::Net::FtpWebResponse::get_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x449e50c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), "get_StatusCode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::Net::FtpWebResponse::__cordl_internal_get__responseStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____responseStream;
}
constexpr ::System::IO::Stream* const& System::Net::FtpWebResponse::__cordl_internal_get__responseStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____responseStream;
}
constexpr void System::Net::FtpWebResponse::__cordl_internal_set__responseStream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____responseStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Net::FtpWebResponse::__cordl_internal_get__contentLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentLength;
}
constexpr int64_t const& System::Net::FtpWebResponse::__cordl_internal_get__contentLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentLength;
}
constexpr void System::Net::FtpWebResponse::__cordl_internal_set__contentLength(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contentLength = value;
}
constexpr ::System::Uri*& System::Net::FtpWebResponse::__cordl_internal_get__responseUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____responseUri;
}
constexpr ::System::Uri* const& System::Net::FtpWebResponse::__cordl_internal_get__responseUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____responseUri;
}
constexpr void System::Net::FtpWebResponse::__cordl_internal_set__responseUri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____responseUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::FtpStatusCode& System::Net::FtpWebResponse::__cordl_internal_get__statusCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____statusCode;
}
constexpr ::System::Net::FtpStatusCode const& System::Net::FtpWebResponse::__cordl_internal_get__statusCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____statusCode;
}
constexpr void System::Net::FtpWebResponse::__cordl_internal_set__statusCode(::System::Net::FtpStatusCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____statusCode = value;
}
constexpr ::StringW& System::Net::FtpWebResponse::__cordl_internal_get__statusLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____statusLine;
}
constexpr ::StringW const& System::Net::FtpWebResponse::__cordl_internal_get__statusLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____statusLine;
}
constexpr void System::Net::FtpWebResponse::__cordl_internal_set__statusLine(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____statusLine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::WebHeaderCollection*& System::Net::FtpWebResponse::__cordl_internal_get__ftpRequestHeaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ftpRequestHeaders;
}
constexpr ::System::Net::WebHeaderCollection* const& System::Net::FtpWebResponse::__cordl_internal_get__ftpRequestHeaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ftpRequestHeaders;
}
constexpr void System::Net::FtpWebResponse::__cordl_internal_set__ftpRequestHeaders(::System::Net::WebHeaderCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ftpRequestHeaders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& System::Net::FtpWebResponse::__cordl_internal_get__lastModified() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastModified;
}
constexpr ::System::DateTime const& System::Net::FtpWebResponse::__cordl_internal_get__lastModified() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastModified;
}
constexpr void System::Net::FtpWebResponse::__cordl_internal_set__lastModified(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastModified = value;
}
constexpr ::StringW& System::Net::FtpWebResponse::__cordl_internal_get__bannerMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bannerMessage;
}
constexpr ::StringW const& System::Net::FtpWebResponse::__cordl_internal_get__bannerMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bannerMessage;
}
constexpr void System::Net::FtpWebResponse::__cordl_internal_set__bannerMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bannerMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::FtpWebResponse::__cordl_internal_get__welcomeMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____welcomeMessage;
}
constexpr ::StringW const& System::Net::FtpWebResponse::__cordl_internal_get__welcomeMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____welcomeMessage;
}
constexpr void System::Net::FtpWebResponse::__cordl_internal_set__welcomeMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____welcomeMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::FtpWebResponse::__cordl_internal_get__exitMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exitMessage;
}
constexpr ::StringW const& System::Net::FtpWebResponse::__cordl_internal_get__exitMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exitMessage;
}
constexpr void System::Net::FtpWebResponse::__cordl_internal_set__exitMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exitMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Net::FtpWebResponse::_ctor(::System::IO::Stream* responseStream, int64_t contentLength, ::System::Uri* responseUri, ::System::Net::FtpStatusCode statusCode, ::StringW statusLine,
                                               ::System::DateTime lastModified, ::StringW bannerMessage, ::StringW welcomeMessage, ::StringW exitMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpStatusCode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, responseStream, contentLength, responseUri, statusCode, statusLine, lastModified, bannerMessage, welcomeMessage,
                                                          exitMessage);
}
inline void System::Net::FtpWebResponse::UpdateStatus(::System::Net::FtpStatusCode statusCode, ::StringW statusLine, ::StringW exitMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), "UpdateStatus", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpStatusCode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, statusCode, statusLine, exitMessage);
}
inline ::System::IO::Stream* System::Net::FtpWebResponse::GetResponseStream() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline void System::Net::FtpWebResponse::SetResponseStream(::System::IO::Stream* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), "SetResponseStream", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream);
}
inline void System::Net::FtpWebResponse::Close() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::WebHeaderCollection* System::Net::FtpWebResponse::get_Headers() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*, false>(this, ___internal_method);
}
inline ::System::Uri* System::Net::FtpWebResponse::get_ResponseUri() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline ::System::Net::FtpStatusCode System::Net::FtpWebResponse::get_StatusCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), "get_StatusCode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::FtpStatusCode, false>(this, ___internal_method);
}
inline ::System::Net::FtpWebResponse* System::Net::FtpWebResponse::New_ctor(::System::IO::Stream* responseStream, int64_t contentLength, ::System::Uri* responseUri,
                                                                            ::System::Net::FtpStatusCode statusCode, ::StringW statusLine, ::System::DateTime lastModified, ::StringW bannerMessage,
                                                                            ::StringW welcomeMessage, ::StringW exitMessage) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::System::Net::FtpWebResponse*>(responseStream, contentLength, responseUri, statusCode, statusLine, lastModified, bannerMessage, welcomeMessage, exitMessage));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Net::FtpWebResponse::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::FtpWebResponse::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::FtpWebResponse::FtpWebResponse() {}
