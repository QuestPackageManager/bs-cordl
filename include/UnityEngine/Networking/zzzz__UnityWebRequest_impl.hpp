#pragma once
// IWYU pragma private; include "UnityEngine/Networking/UnityWebRequest.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Networking/zzzz__CertificateHandler_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/Networking/zzzz__UploadHandler_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod::UnityWebRequest_UnityWebRequestMethod(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod::UnityWebRequest_UnityWebRequestMethod() {}
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod::Get{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod::Post{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod::Put{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod::Head{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod::Custom{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::UnityWebRequest_UnityWebRequestError(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::UnityWebRequest_UnityWebRequestError() {}
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::OK{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::OKCached{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::Unknown{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::SDKError{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::UnsupportedProtocol{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::MalformattedUrl{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::CannotResolveProxy{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::CannotResolveHost{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::CannotConnectToHost{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::AccessDenied{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::GenericHttpError{ static_cast<int32_t>(0xa) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::WriteError{ static_cast<int32_t>(0xb) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::ReadError{ static_cast<int32_t>(0xc) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::OutOfMemory{ static_cast<int32_t>(0xd) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::Timeout{ static_cast<int32_t>(0xe) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::HTTPPostError{ static_cast<int32_t>(0xf) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::SSLCannotConnect{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::Aborted{ static_cast<int32_t>(0x11) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::TooManyRedirects{ static_cast<int32_t>(0x12) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::ReceivedNoData{ static_cast<int32_t>(0x13) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::SSLNotSupported{ static_cast<int32_t>(0x14) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::FailedToSendData{ static_cast<int32_t>(0x15) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::FailedToReceiveData{ static_cast<int32_t>(0x16) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::SSLCertificateError{ static_cast<int32_t>(0x17) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::SSLCipherNotAvailable{ static_cast<int32_t>(0x18) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::SSLCACertError{ static_cast<int32_t>(0x19) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::UnrecognizedContentEncoding{ static_cast<int32_t>(0x1a) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::LoginFailed{ static_cast<int32_t>(0x1b) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::SSLShutdownFailed{ static_cast<int32_t>(0x1c) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::RedirectLimitInvalid{ static_cast<int32_t>(0x1d) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::InvalidRedirect{ static_cast<int32_t>(0x1e) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::CannotModifyRequest{ static_cast<int32_t>(0x1f) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::HeaderNameContainsInvalidCharacters{ static_cast<int32_t>(
    0x20) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::HeaderValueContainsInvalidCharacters{ static_cast<int32_t>(
    0x21) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::CannotOverrideSystemHeaders{ static_cast<int32_t>(0x22) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::AlreadySent{ static_cast<int32_t>(0x23) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::InvalidMethod{ static_cast<int32_t>(0x24) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::NotImplemented{ static_cast<int32_t>(0x25) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::NoInternetConnection{ static_cast<int32_t>(0x26) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::DataProcessingError{ static_cast<int32_t>(0x27) };
constexpr ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest_UnityWebRequestError::InsecureConnectionNotAllowed{ static_cast<int32_t>(0x28) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Networking::UnityWebRequest_Result::UnityWebRequest_Result(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::UnityWebRequest_Result::UnityWebRequest_Result() {}
constexpr ::UnityEngine::Networking::UnityWebRequest_Result UnityEngine::Networking::UnityWebRequest_Result::InProgress{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Networking::UnityWebRequest_Result UnityEngine::Networking::UnityWebRequest_Result::Success{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Networking::UnityWebRequest_Result UnityEngine::Networking::UnityWebRequest_Result::ConnectionError{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Networking::UnityWebRequest_Result UnityEngine::Networking::UnityWebRequest_Result::ProtocolError{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Networking::UnityWebRequest_Result UnityEngine::Networking::UnityWebRequest_Result::DataProcessingError{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::UnityWebRequest*)>(
    &::UnityEngine::Networking::UnityWebRequest_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e27e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest_BindingsMarshaller*>(),
                                                                                           { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::Networking::UnityWebRequest_BindingsMarshaller::ConvertToNative(::UnityEngine::Networking::UnityWebRequest* unityWebRequest) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest_BindingsMarshaller*>(),
                                                                                         { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, unityWebRequest);
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::UnityWebRequest_BindingsMarshaller::UnityWebRequest_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetWebErrorString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError)>(
    &::UnityEngine::Networking::UnityWebRequest::GetWebErrorString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e25c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                             { "GetWebErrorString", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetHTTPStatusString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t)>(&::UnityEngine::Networking::UnityWebRequest::GetHTTPStatusString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e25d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "GetHTTPStatusString", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_disposeCertificateHandlerOnDispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_disposeCertificateHandlerOnDispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e25e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_disposeCertificateHandlerOnDispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_disposeCertificateHandlerOnDispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(bool)>(
    &::UnityEngine::Networking::UnityWebRequest::set_disposeCertificateHandlerOnDispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e25e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "set_disposeCertificateHandlerOnDispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_disposeDownloadHandlerOnDispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_disposeDownloadHandlerOnDispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e25e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_disposeDownloadHandlerOnDispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_disposeDownloadHandlerOnDispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(bool)>(&::UnityEngine::Networking::UnityWebRequest::set_disposeDownloadHandlerOnDispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e25e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "set_disposeDownloadHandlerOnDispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_disposeUploadHandlerOnDispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_disposeUploadHandlerOnDispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e25ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_disposeUploadHandlerOnDispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_disposeUploadHandlerOnDispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(bool)>(&::UnityEngine::Networking::UnityWebRequest::set_disposeUploadHandlerOnDispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e25ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "set_disposeUploadHandlerOnDispose", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::Networking::UnityWebRequest::Create)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e25eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::Release)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e25ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "Release", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.InternalDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::InternalDestroy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6e25f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "InternalDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.InternalSetDefaults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::InternalSetDefaults)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e25fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "InternalSetDefaults", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e25ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::StringW, ::StringW)>(&::UnityEngine::Networking::UnityWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e26040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(
    ::StringW, ::StringW, ::UnityEngine::Networking::DownloadHandler*, ::UnityEngine::Networking::UploadHandler*)>(&::UnityEngine::Networking::UnityWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e262cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>(),
                                                                 ::i2c::type_of<::UnityEngine::Networking::UploadHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(
    ::System::Uri*, ::StringW, ::UnityEngine::Networking::DownloadHandler*, ::UnityEngine::Networking::UploadHandler*)>(&::UnityEngine::Networking::UnityWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6e264e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>(),
                                                                 ::i2c::type_of<::UnityEngine::Networking::UploadHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::Finalize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e2667c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e26738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.DisposeHandlers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::DisposeHandlers)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e266cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "DisposeHandlers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.BeginWebRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequestAsyncOperation* (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::BeginWebRequest)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e267bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "BeginWebRequest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SendWebRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequestAsyncOperation* (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::SendWebRequest)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e2685c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "SendWebRequest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Abort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::Abort)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e25f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "Abort", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)(
    ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod)>(&::UnityEngine::Networking::UnityWebRequest::SetMethod)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e268b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                             { "SetMethod", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.InternalSetMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod)>(
    &::UnityEngine::Networking::UnityWebRequest::InternalSetMethod)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6e26950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                             { "InternalSetMethod", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetCustomMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(
    &::UnityEngine::Networking::UnityWebRequest::SetCustomMethod)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6e26a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "SetCustomMethod", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.InternalSetCustomMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(&::UnityEngine::Networking::UnityWebRequest::InternalSetCustomMethod)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6e26c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "InternalSetCustomMethod", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::GetMethod)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e26cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "GetMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetCustomMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::GetCustomMethod)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e26d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "GetCustomMethod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_method
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_method)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6e26e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_method", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_method
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(&::UnityEngine::Networking::UnityWebRequest::set_method)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6e26144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "set_method", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::GetError)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e26f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "GetError", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_error
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_error)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6e26ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_error", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_url
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_url)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e27188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_url", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_url
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(&::UnityEngine::Networking::UnityWebRequest::set_url)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6e260b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "set_url", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_uri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::System::Uri*)>(&::UnityEngine::Networking::UnityWebRequest::set_uri)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6e26584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "set_uri", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::GetUrl)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e2718c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "GetUrl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(
    &::UnityEngine::Networking::UnityWebRequest::SetUrl)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6e2738c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "SetUrl", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.InternalSetUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(&::UnityEngine::Networking::UnityWebRequest::InternalSetUrl)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6e2728c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "InternalSetUrl", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_responseCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_responseCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e27138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_responseCode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_isModifiable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_isModifiable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e26a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_isModifiable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_isDone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_isDone)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e275a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_isDone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_result
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest_Result (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::get_result)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e270e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_result", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_downloadedBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::UnityEngine::Networking::UnityWebRequest::*)()>(&::UnityEngine::Networking::UnityWebRequest::get_downloadedBytes)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6e275fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_downloadedBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetRedirectLimitFromScripting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(int32_t)>(&::UnityEngine::Networking::UnityWebRequest::SetRedirectLimitFromScripting)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e27688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "SetRedirectLimitFromScripting", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_redirectLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(int32_t)>(&::UnityEngine::Networking::UnityWebRequest::set_redirectLimit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e27724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "set_redirectLimit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetResponseHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Networking::UnityWebRequest::*)(::StringW)>(&::UnityEngine::Networking::UnityWebRequest::GetResponseHeader)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6e27728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "GetResponseHeader", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetUploadHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)(
    ::UnityEngine::Networking::UploadHandler*)>(&::UnityEngine::Networking::UnityWebRequest::SetUploadHandler)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e27940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "SetUploadHandler", {}, { ::i2c::type_of<::UnityEngine::Networking::UploadHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_uploadHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UploadHandler* (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::get_uploadHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e267ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_uploadHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_uploadHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::UnityEngine::Networking::UploadHandler*)>(
    &::UnityEngine::Networking::UnityWebRequest::set_uploadHandler)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e26428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                                                           { "set_uploadHandler", {}, { ::i2c::type_of<::UnityEngine::Networking::UploadHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetDownloadHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)(
    ::UnityEngine::Networking::DownloadHandler*)>(&::UnityEngine::Networking::UnityWebRequest::SetDownloadHandler)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e279e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                                                           { "SetDownloadHandler", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_downloadHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::DownloadHandler* (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::get_downloadHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e267a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_downloadHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_downloadHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::UnityEngine::Networking::DownloadHandler*)>(
    &::UnityEngine::Networking::UnityWebRequest::set_downloadHandler)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e26368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                                                           { "set_downloadHandler", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetCertificateHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)(
    ::UnityEngine::Networking::CertificateHandler*)>(&::UnityEngine::Networking::UnityWebRequest::SetCertificateHandler)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e27a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                                                           { "SetCertificateHandler", {}, { ::i2c::type_of<::UnityEngine::Networking::CertificateHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_certificateHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::CertificateHandler* (::UnityEngine::Networking::UnityWebRequest::*)()>(
    &::UnityEngine::Networking::UnityWebRequest::get_certificateHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e267b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_certificateHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_certificateHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(::UnityEngine::Networking::CertificateHandler*)>(
    &::UnityEngine::Networking::UnityWebRequest::set_certificateHandler)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e27b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                                                           { "set_certificateHandler", {}, { ::i2c::type_of<::UnityEngine::Networking::CertificateHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetTimeoutMsec
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError (::UnityEngine::Networking::UnityWebRequest::*)(int32_t)>(
    &::UnityEngine::Networking::UnityWebRequest::SetTimeoutMsec)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6e27bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "SetTimeoutMsec", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.set_timeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Networking::UnityWebRequest::*)(int32_t)>(&::UnityEngine::Networking::UnityWebRequest::set_timeout)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6e27c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "set_timeout", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (*)(::StringW)>(&::UnityEngine::Networking::UnityWebRequest::Get)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6e27da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "Get", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetWebErrorString_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Networking::UnityWebRequest::GetWebErrorString_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e25d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "GetWebErrorString_Injected",
                                                                                                                  {},
                                                                                                                  { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(),
                                                                                                                    ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetHTTPStatusString_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Networking::UnityWebRequest::GetHTTPStatusString_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e25e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                { "GetHTTPStatusString_Injected", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Release_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Networking::UnityWebRequest::Release_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e25f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "Release_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.BeginWebRequest_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Networking::UnityWebRequest::BeginWebRequest_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e26820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "BeginWebRequest_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.Abort_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Networking::UnityWebRequest::Abort_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e26878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "Abort_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetMethod_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError (*)(
    ::System::IntPtr, ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod)>(&::UnityEngine::Networking::UnityWebRequest::SetMethod_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e2690c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                         { "SetMethod_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetCustomMethod_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Networking::UnityWebRequest::SetCustomMethod_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e26bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                { "SetCustomMethod_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetMethod_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod (*)(::System::IntPtr)>(
    &::UnityEngine::Networking::UnityWebRequest::GetMethod_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e26d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "GetMethod_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetCustomMethod_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Networking::UnityWebRequest::GetCustomMethod_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e26e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                { "GetCustomMethod_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetError_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError (*)(::System::IntPtr)>(
    &::UnityEngine::Networking::UnityWebRequest::GetError_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e26fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "GetError_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetUrl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Networking::UnityWebRequest::GetUrl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e27348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                { "GetUrl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetUrl_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Networking::UnityWebRequest::SetUrl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e274ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                { "SetUrl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_responseCode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr)>(&::UnityEngine::Networking::UnityWebRequest::get_responseCode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e27530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_responseCode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_isModifiable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Networking::UnityWebRequest::get_isModifiable_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e2756c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_isModifiable_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_result_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest_Result (*)(::System::IntPtr)>(&::UnityEngine::Networking::UnityWebRequest::get_result_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e275c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_result_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.get_downloadedBytes_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::IntPtr)>(&::UnityEngine::Networking::UnityWebRequest::get_downloadedBytes_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e2764c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_downloadedBytes_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetRedirectLimitFromScripting_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Networking::UnityWebRequest::SetRedirectLimitFromScripting_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e276e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                             { "SetRedirectLimitFromScripting_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.GetResponseHeader_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Networking::UnityWebRequest::GetResponseHeader_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e278ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                             { "GetResponseHeader_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetUploadHandler_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError (*)(::System::IntPtr, ::System::IntPtr)>(
    &::UnityEngine::Networking::UnityWebRequest::SetUploadHandler_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e279a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                             { "SetUploadHandler_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetDownloadHandler_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError (*)(::System::IntPtr, ::System::IntPtr)>(
    &::UnityEngine::Networking::UnityWebRequest::SetDownloadHandler_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e27a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                             { "SetDownloadHandler_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetCertificateHandler_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError (*)(::System::IntPtr, ::System::IntPtr)>(
    &::UnityEngine::Networking::UnityWebRequest::SetCertificateHandler_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e27af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                             { "SetCertificateHandler_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Networking::UnityWebRequest.SetTimeoutMsec_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError (*)(::System::IntPtr, int32_t)>(
    &::UnityEngine::Networking::UnityWebRequest::SetTimeoutMsec_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6e27c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                                                           { "SetTimeoutMsec_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
constexpr ::UnityEngine::Networking::DownloadHandler*& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_DownloadHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DownloadHandler;
}
constexpr ::UnityEngine::Networking::DownloadHandler* const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_DownloadHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DownloadHandler;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set_m_DownloadHandler(::UnityEngine::Networking::DownloadHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DownloadHandler = value;
}
constexpr ::UnityEngine::Networking::UploadHandler*& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_UploadHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UploadHandler;
}
constexpr ::UnityEngine::Networking::UploadHandler* const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_UploadHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UploadHandler;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set_m_UploadHandler(::UnityEngine::Networking::UploadHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UploadHandler = value;
}
constexpr ::UnityEngine::Networking::CertificateHandler*& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_CertificateHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CertificateHandler;
}
constexpr ::UnityEngine::Networking::CertificateHandler* const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_CertificateHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CertificateHandler;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set_m_CertificateHandler(::UnityEngine::Networking::CertificateHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CertificateHandler = value;
}
constexpr ::System::Uri*& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_Uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Uri;
}
constexpr ::System::Uri* const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get_m_Uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Uri;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set_m_Uri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Uri = value;
}
constexpr bool& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get__disposeCertificateHandlerOnDispose_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposeCertificateHandlerOnDispose_k__BackingField;
}
constexpr bool const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get__disposeCertificateHandlerOnDispose_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposeCertificateHandlerOnDispose_k__BackingField;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set__disposeCertificateHandlerOnDispose_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposeCertificateHandlerOnDispose_k__BackingField = value;
}
constexpr bool& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get__disposeDownloadHandlerOnDispose_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposeDownloadHandlerOnDispose_k__BackingField;
}
constexpr bool const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get__disposeDownloadHandlerOnDispose_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposeDownloadHandlerOnDispose_k__BackingField;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set__disposeDownloadHandlerOnDispose_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposeDownloadHandlerOnDispose_k__BackingField = value;
}
constexpr bool& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get__disposeUploadHandlerOnDispose_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposeUploadHandlerOnDispose_k__BackingField;
}
constexpr bool const& UnityEngine::Networking::UnityWebRequest::__cordl_internal_get__disposeUploadHandlerOnDispose_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposeUploadHandlerOnDispose_k__BackingField;
}
constexpr void UnityEngine::Networking::UnityWebRequest::__cordl_internal_set__disposeUploadHandlerOnDispose_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposeUploadHandlerOnDispose_k__BackingField = value;
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::GetWebErrorString(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError err) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                           { "GetWebErrorString", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, err);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::GetHTTPStatusString(int64_t responseCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "GetHTTPStatusString", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, responseCode);
}
inline bool UnityEngine::Networking::UnityWebRequest::get_disposeCertificateHandlerOnDispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_disposeCertificateHandlerOnDispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_disposeCertificateHandlerOnDispose(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "set_disposeCertificateHandlerOnDispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Networking::UnityWebRequest::get_disposeDownloadHandlerOnDispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_disposeDownloadHandlerOnDispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_disposeDownloadHandlerOnDispose(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "set_disposeDownloadHandlerOnDispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Networking::UnityWebRequest::get_disposeUploadHandlerOnDispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_disposeUploadHandlerOnDispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_disposeUploadHandlerOnDispose(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "set_disposeUploadHandlerOnDispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IntPtr UnityEngine::Networking::UnityWebRequest::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::InternalDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "InternalDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::InternalSetDefaults() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "InternalSetDefaults", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::_ctor(::StringW url, ::StringW method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url, method);
}
inline void UnityEngine::Networking::UnityWebRequest::_ctor(::StringW url, ::StringW method, ::UnityEngine::Networking::DownloadHandler* downloadHandler,
                                                            ::UnityEngine::Networking::UploadHandler* uploadHandler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>(),
                                                               ::i2c::type_of<::UnityEngine::Networking::UploadHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url, method, downloadHandler, uploadHandler);
}
inline void UnityEngine::Networking::UnityWebRequest::_ctor(::System::Uri* uri, ::StringW method, ::UnityEngine::Networking::DownloadHandler* downloadHandler,
                                                            ::UnityEngine::Networking::UploadHandler* uploadHandler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>(),
                                                               ::i2c::type_of<::UnityEngine::Networking::UploadHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri, method, downloadHandler, uploadHandler);
}
inline void UnityEngine::Networking::UnityWebRequest::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::DisposeHandlers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "DisposeHandlers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* UnityEngine::Networking::UnityWebRequest::BeginWebRequest() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "BeginWebRequest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>(this, ___internal_method);
}
inline ::UnityEngine::Networking::UnityWebRequestAsyncOperation* UnityEngine::Networking::UnityWebRequest::SendWebRequest() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "SendWebRequest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::Abort() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "Abort", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError
UnityEngine::Networking::UnityWebRequest::SetMethod(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod methodType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                                                         { "SetMethod", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(this, ___internal_method, methodType);
}
inline void UnityEngine::Networking::UnityWebRequest::InternalSetMethod(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod methodType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                           { "InternalSetMethod", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodType);
}
inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetCustomMethod(::StringW customMethodName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "SetCustomMethod", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(this, ___internal_method, customMethodName);
}
inline void UnityEngine::Networking::UnityWebRequest::InternalSetCustomMethod(::StringW customMethodName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "InternalSetCustomMethod", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, customMethodName);
}
inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod UnityEngine::Networking::UnityWebRequest::GetMethod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "GetMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::GetCustomMethod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "GetCustomMethod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::get_method() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_method", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_method(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "set_method", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::GetError() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "GetError", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::get_error() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_error", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::get_url() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_url", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_url(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "set_url", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Networking::UnityWebRequest::set_uri(::System::Uri* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "set_uri", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::GetUrl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "GetUrl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetUrl(::StringW url) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "SetUrl", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(this, ___internal_method, url);
}
inline void UnityEngine::Networking::UnityWebRequest::InternalSetUrl(::StringW url) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "InternalSetUrl", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url);
}
inline int64_t UnityEngine::Networking::UnityWebRequest::get_responseCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_responseCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline bool UnityEngine::Networking::UnityWebRequest::get_isModifiable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_isModifiable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Networking::UnityWebRequest::get_isDone() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_isDone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Networking::UnityWebRequest_Result UnityEngine::Networking::UnityWebRequest::get_result() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_result", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest_Result>(this, ___internal_method);
}
inline uint64_t UnityEngine::Networking::UnityWebRequest::get_downloadedBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_downloadedBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::SetRedirectLimitFromScripting(int32_t limit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "SetRedirectLimitFromScripting", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, limit);
}
inline void UnityEngine::Networking::UnityWebRequest::set_redirectLimit(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "set_redirectLimit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Networking::UnityWebRequest::GetResponseHeader(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "GetResponseHeader", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetUploadHandler(::UnityEngine::Networking::UploadHandler* uh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "SetUploadHandler", {}, { ::i2c::type_of<::UnityEngine::Networking::UploadHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(this, ___internal_method, uh);
}
inline ::UnityEngine::Networking::UploadHandler* UnityEngine::Networking::UnityWebRequest::get_uploadHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_uploadHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UploadHandler*>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_uploadHandler(::UnityEngine::Networking::UploadHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "set_uploadHandler", {}, { ::i2c::type_of<::UnityEngine::Networking::UploadHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetDownloadHandler(::UnityEngine::Networking::DownloadHandler* dh) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                                                         { "SetDownloadHandler", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(this, ___internal_method, dh);
}
inline ::UnityEngine::Networking::DownloadHandler* UnityEngine::Networking::UnityWebRequest::get_downloadHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_downloadHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::DownloadHandler*>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_downloadHandler(::UnityEngine::Networking::DownloadHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                                                         { "set_downloadHandler", {}, { ::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetCertificateHandler(::UnityEngine::Networking::CertificateHandler* ch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                                                         { "SetCertificateHandler", {}, { ::i2c::type_of<::UnityEngine::Networking::CertificateHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(this, ___internal_method, ch);
}
inline ::UnityEngine::Networking::CertificateHandler* UnityEngine::Networking::UnityWebRequest::get_certificateHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_certificateHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::CertificateHandler*>(this, ___internal_method);
}
inline void UnityEngine::Networking::UnityWebRequest::set_certificateHandler(::UnityEngine::Networking::CertificateHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                                                         { "set_certificateHandler", {}, { ::i2c::type_of<::UnityEngine::Networking::CertificateHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetTimeoutMsec(int32_t timeout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "SetTimeoutMsec", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(this, ___internal_method, timeout);
}
inline void UnityEngine::Networking::UnityWebRequest::set_timeout(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "set_timeout", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequest::Get(::StringW uri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "Get", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(nullptr, ___internal_method, uri);
}
inline void UnityEngine::Networking::UnityWebRequest::GetWebErrorString_Injected(::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError err,
                                                                                 ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "GetWebErrorString_Injected",
                                                                                                                {},
                                                                                                                { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(),
                                                                                                                  ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, err, ret);
}
inline void UnityEngine::Networking::UnityWebRequest::GetHTTPStatusString_Injected(int64_t responseCode, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                              { "GetHTTPStatusString_Injected", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, responseCode, ret);
}
inline void UnityEngine::Networking::UnityWebRequest::Release_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "Release_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::Networking::UnityWebRequest::BeginWebRequest_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "BeginWebRequest_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Networking::UnityWebRequest::Abort_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "Abort_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError
UnityEngine::Networking::UnityWebRequest::SetMethod_Injected(::System::IntPtr _unity_self, ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod methodType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                       { "SetMethod_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(nullptr, ___internal_method, _unity_self, methodType);
}
inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError
UnityEngine::Networking::UnityWebRequest::SetCustomMethod_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> customMethodName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                              { "SetCustomMethod_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(nullptr, ___internal_method, _unity_self, customMethodName);
}
inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod UnityEngine::Networking::UnityWebRequest::GetMethod_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "GetMethod_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestMethod>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Networking::UnityWebRequest::GetCustomMethod_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                              { "GetCustomMethod_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::GetError_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "GetError_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Networking::UnityWebRequest::GetUrl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                              { "GetUrl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetUrl_Injected(::System::IntPtr _unity_self,
                                                                                                                                 ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> url) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                              { "SetUrl_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(nullptr, ___internal_method, _unity_self, url);
}
inline int64_t UnityEngine::Networking::UnityWebRequest::get_responseCode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_responseCode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Networking::UnityWebRequest::get_isModifiable_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_isModifiable_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Networking::UnityWebRequest_Result UnityEngine::Networking::UnityWebRequest::get_result_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_result_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest_Result>(nullptr, ___internal_method, _unity_self);
}
inline uint64_t UnityEngine::Networking::UnityWebRequest::get_downloadedBytes_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(), { "get_downloadedBytes_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Networking::UnityWebRequest::SetRedirectLimitFromScripting_Injected(::System::IntPtr _unity_self, int32_t limit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                           { "SetRedirectLimitFromScripting_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, limit);
}
inline void UnityEngine::Networking::UnityWebRequest::GetResponseHeader_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name,
                                                                                 ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                           { "GetResponseHeader_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, name, ret);
}
inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetUploadHandler_Injected(::System::IntPtr _unity_self, ::System::IntPtr uh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                           { "SetUploadHandler_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(nullptr, ___internal_method, _unity_self, uh);
}
inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetDownloadHandler_Injected(::System::IntPtr _unity_self, ::System::IntPtr dh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                           { "SetDownloadHandler_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(nullptr, ___internal_method, _unity_self, dh);
}
inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetCertificateHandler_Injected(::System::IntPtr _unity_self, ::System::IntPtr ch) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                           { "SetCertificateHandler_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(nullptr, ___internal_method, _unity_self, ch);
}
inline ::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError UnityEngine::Networking::UnityWebRequest::SetTimeoutMsec_Injected(::System::IntPtr _unity_self, int32_t timeout) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Networking::UnityWebRequest*>(),
                                                                                         { "SetTimeoutMsec_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest_UnityWebRequestError>(nullptr, ___internal_method, _unity_self, timeout);
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequest::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::UnityWebRequest*>());
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequest::New_ctor(::StringW url, ::StringW method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::UnityWebRequest*>(url, method));
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequest::New_ctor(::StringW url, ::StringW method, ::UnityEngine::Networking::DownloadHandler* downloadHandler,
                                                                                                      ::UnityEngine::Networking::UploadHandler* uploadHandler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::UnityWebRequest*>(url, method, downloadHandler, uploadHandler));
}
inline ::UnityEngine::Networking::UnityWebRequest* UnityEngine::Networking::UnityWebRequest::New_ctor(::System::Uri* uri, ::StringW method, ::UnityEngine::Networking::DownloadHandler* downloadHandler,
                                                                                                      ::UnityEngine::Networking::UploadHandler* uploadHandler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Networking::UnityWebRequest*>(uri, method, downloadHandler, uploadHandler));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Networking::UnityWebRequest::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Networking::UnityWebRequest::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Networking::UnityWebRequest::UnityWebRequest() {}
