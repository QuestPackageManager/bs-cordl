#pragma once
#include "System/Net/zzzz__HttpStatusCode_impl.hpp"
#include "System/Net/zzzz__WebResponse_impl.hpp"
#include "System/Net/zzzz__HttpWebResponse_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Net/zzzz__WebResponseStream_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "System/Net/zzzz__CookieCollection_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Net/zzzz__CookieContainer_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::System::Net::HttpWebResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29d1cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Net::HttpWebResponse::*)(::System::Uri*, ::StringW, ::System::Net::HttpStatusCode, ::System::Net::WebHeaderCollection*)>(&::System::Net::HttpWebResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x29d1cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Net::HttpWebResponse::*)(::System::Uri*, ::StringW, ::System::Net::WebResponseStream*, ::System::Net::CookieContainer*)>(&::System::Net::HttpWebResponse::_ctor)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x29d1514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebResponseStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebResponse::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::HttpWebResponse::_ctor)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x29d1fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.get_Headers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::HttpWebResponse::*)()>(
    &::System::Net::HttpWebResponse::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29d233c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.get_ResponseUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::get_ResponseUri)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29d2344;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.get_StatusCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpStatusCode (::System::Net::HttpWebResponse::*)()>(
    &::System::Net::HttpWebResponse::get_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29d23e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.get_StatusDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::get_StatusDescription)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x29d23e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.GetResponseStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::GetResponseStream)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x29d2400;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Net::HttpWebResponse::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
        &::System::Net::HttpWebResponse::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29d249c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebResponse::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::HttpWebResponse::GetObjectData)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x29d24a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::Close)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x29d2668;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29d2698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(),
                                                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebResponse::*)(bool)>(&::System::Net::HttpWebResponse::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x29d26a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.CheckDisposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::CheckDisposed)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x29d235c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), "CheckDisposed",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpWebResponse.FillCookies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HttpWebResponse::*)()>(&::System::Net::HttpWebResponse::FillCookies)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x29d1d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), "FillCookies",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Net::HttpWebResponse::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Net::HttpWebResponse::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Uri*& System::Net::HttpWebResponse::__get_uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& System::Net::HttpWebResponse::__get_uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uri;
}
constexpr void System::Net::HttpWebResponse::__set_uri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___uri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::WebHeaderCollection*& System::Net::HttpWebResponse::__get_webHeaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___webHeaders;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> const& System::Net::HttpWebResponse::__get_webHeaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___webHeaders;
}
constexpr void System::Net::HttpWebResponse::__set_webHeaders(::System::Net::WebHeaderCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___webHeaders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::CookieCollection*& System::Net::HttpWebResponse::__get_cookieCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cookieCollection;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::CookieCollection*> const& System::Net::HttpWebResponse::__get_cookieCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cookieCollection;
}
constexpr void System::Net::HttpWebResponse::__set_cookieCollection(::System::Net::CookieCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cookieCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::HttpWebResponse::__get_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr ::StringW const& System::Net::HttpWebResponse::__get_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___method;
}
constexpr void System::Net::HttpWebResponse::__set_method(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___method)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Version*& System::Net::HttpWebResponse::__get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::cordl_internals::to_const_pointer<::System::Version*> const& System::Net::HttpWebResponse::__get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void System::Net::HttpWebResponse::__set_version(::System::Version* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::HttpStatusCode& System::Net::HttpWebResponse::__get_statusCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusCode;
}
constexpr ::System::Net::HttpStatusCode const& System::Net::HttpWebResponse::__get_statusCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusCode;
}
constexpr void System::Net::HttpWebResponse::__set_statusCode(::System::Net::HttpStatusCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___statusCode = value;
}
constexpr ::StringW& System::Net::HttpWebResponse::__get_statusDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusDescription;
}
constexpr ::StringW const& System::Net::HttpWebResponse::__get_statusDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___statusDescription;
}
constexpr void System::Net::HttpWebResponse::__set_statusDescription(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___statusDescription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Net::HttpWebResponse::__get_contentLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentLength;
}
constexpr int64_t const& System::Net::HttpWebResponse::__get_contentLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentLength;
}
constexpr void System::Net::HttpWebResponse::__set_contentLength(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentLength = value;
}
constexpr ::StringW& System::Net::HttpWebResponse::__get_contentType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentType;
}
constexpr ::StringW const& System::Net::HttpWebResponse::__get_contentType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentType;
}
constexpr void System::Net::HttpWebResponse::__set_contentType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___contentType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::CookieContainer*& System::Net::HttpWebResponse::__get_cookie_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cookie_container;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::CookieContainer*> const& System::Net::HttpWebResponse::__get_cookie_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cookie_container;
}
constexpr void System::Net::HttpWebResponse::__set_cookie_container(::System::Net::CookieContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cookie_container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::HttpWebResponse::__get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& System::Net::HttpWebResponse::__get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void System::Net::HttpWebResponse::__set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr ::System::IO::Stream*& System::Net::HttpWebResponse::__get_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& System::Net::HttpWebResponse::__get_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr void System::Net::HttpWebResponse::__set_stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::HttpWebResponse* System::Net::HttpWebResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::HttpWebResponse*>());
}
inline void System::Net::HttpWebResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::HttpWebResponse* System::Net::HttpWebResponse::New_ctor(::System::Uri* uri, ::StringW method, ::System::Net::HttpStatusCode status, ::System::Net::WebHeaderCollection* headers) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::HttpWebResponse*>(uri, method, status, headers));
}
inline void System::Net::HttpWebResponse::_ctor(::System::Uri* uri, ::StringW method, ::System::Net::HttpStatusCode status, ::System::Net::WebHeaderCollection* headers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebHeaderCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uri, method, status, headers);
}
inline ::System::Net::HttpWebResponse* System::Net::HttpWebResponse::New_ctor(::System::Uri* uri, ::StringW method, ::System::Net::WebResponseStream* stream,
                                                                              ::System::Net::CookieContainer* container) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::HttpWebResponse*>(uri, method, stream, container));
}
inline void System::Net::HttpWebResponse::_ctor(::System::Uri* uri, ::StringW method, ::System::Net::WebResponseStream* stream, ::System::Net::CookieContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebResponseStream*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uri, method, stream, container);
}
inline ::System::Net::HttpWebResponse* System::Net::HttpWebResponse::New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                              ::System::Runtime::Serialization::StreamingContext streamingContext) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::HttpWebResponse*>(serializationInfo, streamingContext));
}
inline void System::Net::HttpWebResponse::_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationInfo, streamingContext);
}
inline ::System::Net::WebHeaderCollection* System::Net::HttpWebResponse::get_Headers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), "get_Headers",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*, false>(this, ___internal_method);
}
inline ::System::Uri* System::Net::HttpWebResponse::get_ResponseUri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), "get_ResponseUri",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline ::System::Net::HttpStatusCode System::Net::HttpWebResponse::get_StatusCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), "get_StatusCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpStatusCode, false>(this, ___internal_method);
}
inline ::StringW System::Net::HttpWebResponse::get_StatusDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), "get_StatusDescription",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::IO::Stream* System::Net::HttpWebResponse::GetResponseStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), "GetResponseStream",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline void System::Net::HttpWebResponse::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                                                   ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::HttpWebResponse::GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), "GetObjectData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::HttpWebResponse::Close() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), "Close",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::HttpWebResponse::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(),
                                                                             "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::HttpWebResponse::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), "Dispose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::Net::HttpWebResponse::CheckDisposed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), "CheckDisposed",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::HttpWebResponse::FillCookies() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HttpWebResponse*>::get(), "FillCookies",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::HttpWebResponse::HttpWebResponse() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
