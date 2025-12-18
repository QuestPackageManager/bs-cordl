#pragma once
// IWYU pragma private; include "System/Net/Http/HttpClientHandler.hpp"
#include "System/Net/Http/zzzz__ClientCertificateOption_impl.hpp"
#include "System/Net/Http/zzzz__HttpMessageHandler_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/zzzz__HttpClientHandler_def.hpp"
#include "System/Net/Http/zzzz__ClientCertificateOption_def.hpp"
#include "System/Net/Http/zzzz__HttpClientHandler_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Net/Http/zzzz__IMonoHttpClientHandler_def.hpp"
#include "System/Net/Security/zzzz__LocalCertificateSelectionCallback_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpClientHandler___c::*)()>(&::System::Net::Http::HttpClientHandler___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f2245c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler___c._set_ClientCertificateOptions_b__23_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (
    ::System::Net::Http::HttpClientHandler___c::*)(::System::Object*, ::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*,
                                                   ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::System::Net::Http::HttpClientHandler___c::_set_ClientCertificateOptions_b__23_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f22460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler___c*>::get(), "<set_ClientCertificateOptions>b__23_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::Http::HttpClientHandler___c::setStaticF___9(::System::Net::Http::HttpClientHandler___c* value) {
  ::cordl_internals::setStaticField<::System::Net::Http::HttpClientHandler___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler___c*>::get>(
      std::forward<::System::Net::Http::HttpClientHandler___c*>(value));
}
inline ::System::Net::Http::HttpClientHandler___c* System::Net::Http::HttpClientHandler___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Net::Http::HttpClientHandler___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler___c*>::get>();
}
inline void System::Net::Http::HttpClientHandler___c::setStaticF___9__23_1(::System::Net::Security::LocalCertificateSelectionCallback* value) {
  ::cordl_internals::setStaticField<::System::Net::Security::LocalCertificateSelectionCallback*, "<>9__23_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler___c*>::get>(
      std::forward<::System::Net::Security::LocalCertificateSelectionCallback*>(value));
}
inline ::System::Net::Security::LocalCertificateSelectionCallback* System::Net::Http::HttpClientHandler___c::getStaticF___9__23_1() {
  return ::cordl_internals::getStaticField<::System::Net::Security::LocalCertificateSelectionCallback*, "<>9__23_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler___c*>::get>();
}
inline void System::Net::Http::HttpClientHandler___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* System::Net::Http::HttpClientHandler___c::_set_ClientCertificateOptions_b__23_1(
    ::System::Object* sender, ::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates,
    ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::ArrayW<::StringW, ::Array<::StringW>*> acceptableIssuers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler___c*>::get(), "<set_ClientCertificateOptions>b__23_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*, false>(this, ___internal_method, sender, targetHost, localCertificates,
                                                                                                                          remoteCertificate, acceptableIssuers);
}
inline ::System::Net::Http::HttpClientHandler___c* System::Net::Http::HttpClientHandler___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Http::HttpClientHandler___c*>());
}
// Ctor Parameters []
constexpr ::System::Net::Http::HttpClientHandler___c::HttpClientHandler___c() {}
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler.CreateDefaultHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::IMonoHttpClientHandler* (*)()>(&::System::Net::Http::HttpClientHandler::CreateDefaultHandler)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f21874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(),
                                                                               "CreateDefaultHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpClientHandler::*)()>(&::System::Net::Http::HttpClientHandler::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f21a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpClientHandler::*)(::System::Net::Http::IMonoHttpClientHandler*)>(
    &::System::Net::Http::HttpClientHandler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f21ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::IMonoHttpClientHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpClientHandler::*)(bool)>(&::System::Net::Http::HttpClientHandler::Dispose)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5f21d5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler.ThrowForModifiedManagedSslOptionsIfStarted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpClientHandler::*)()>(
    &::System::Net::Http::HttpClientHandler::ThrowForModifiedManagedSslOptionsIfStarted)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5f21e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(), "ThrowForModifiedManagedSslOptionsIfStarted",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler.get_ClientCertificateOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Http::ClientCertificateOption (::System::Net::Http::HttpClientHandler::*)()>(
    &::System::Net::Http::HttpClientHandler::get_ClientCertificateOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f21f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(),
                                                                               "get_ClientCertificateOptions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler.set_ClientCertificateOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpClientHandler::*)(::System::Net::Http::ClientCertificateOption)>(
    &::System::Net::Http::HttpClientHandler::set_ClientCertificateOptions)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5f21ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(), "set_ClientCertificateOptions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::ClientCertificateOption>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler.get_ClientCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509CertificateCollection* (
    ::System::Net::Http::HttpClientHandler::*)()>(&::System::Net::Http::HttpClientHandler::get_ClientCertificates)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5f21f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(),
                                                                               "get_ClientCertificates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler.set_UseProxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpClientHandler::*)(bool)>(&::System::Net::Http::HttpClientHandler::set_UseProxy)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5f2210c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(), "set_UseProxy",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler.set_AllowAutoRedirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpClientHandler::*)(bool)>(
    &::System::Net::Http::HttpClientHandler::set_AllowAutoRedirect)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5f221c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(), "set_AllowAutoRedirect",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler.SetWebRequestTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Http::HttpClientHandler::*)(::System::TimeSpan)>(
    &::System::Net::Http::HttpClientHandler::SetWebRequestTimeout)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5f2227c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(), "SetWebRequestTimeout",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler.SendAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* (
    ::System::Net::Http::HttpClientHandler::*)(::System::Net::Http::HttpRequestMessage*, ::System::Threading::CancellationToken)>(&::System::Net::Http::HttpClientHandler::SendAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f22334;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::HttpClientHandler._set_ClientCertificateOptions_b__23_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (
    ::System::Net::Http::HttpClientHandler::*)(::System::Object*, ::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*,
                                               ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::System::Net::Http::HttpClientHandler::_set_ClientCertificateOptions_b__23_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f223f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(), "<set_ClientCertificateOptions>b__23_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Http::IMonoHttpClientHandler*& System::Net::Http::HttpClientHandler::__cordl_internal_get__delegatingHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delegatingHandler;
}
constexpr ::System::Net::Http::IMonoHttpClientHandler* const& System::Net::Http::HttpClientHandler::__cordl_internal_get__delegatingHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delegatingHandler;
}
constexpr void System::Net::Http::HttpClientHandler::__cordl_internal_set__delegatingHandler(::System::Net::Http::IMonoHttpClientHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____delegatingHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Http::ClientCertificateOption& System::Net::Http::HttpClientHandler::__cordl_internal_get__clientCertificateOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientCertificateOptions;
}
constexpr ::System::Net::Http::ClientCertificateOption const& System::Net::Http::HttpClientHandler::__cordl_internal_get__clientCertificateOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientCertificateOptions;
}
constexpr void System::Net::Http::HttpClientHandler::__cordl_internal_set__clientCertificateOptions(::System::Net::Http::ClientCertificateOption value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clientCertificateOptions = value;
}
inline ::System::Net::Http::IMonoHttpClientHandler* System::Net::Http::HttpClientHandler::CreateDefaultHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(),
                                                                             "CreateDefaultHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::IMonoHttpClientHandler*, false>(nullptr, ___internal_method);
}
inline void System::Net::Http::HttpClientHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Http::HttpClientHandler::_ctor(::System::Net::Http::IMonoHttpClientHandler* handler) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::IMonoHttpClientHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handler);
}
inline void System::Net::Http::HttpClientHandler::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::Net::Http::HttpClientHandler::ThrowForModifiedManagedSslOptionsIfStarted() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(), "ThrowForModifiedManagedSslOptionsIfStarted",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::Http::ClientCertificateOption System::Net::Http::HttpClientHandler::get_ClientCertificateOptions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(),
                                                                             "get_ClientCertificateOptions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::ClientCertificateOption, false>(this, ___internal_method);
}
inline void System::Net::Http::HttpClientHandler::set_ClientCertificateOptions(::System::Net::Http::ClientCertificateOption value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(), "set_ClientCertificateOptions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::ClientCertificateOption>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* System::Net::Http::HttpClientHandler::get_ClientCertificates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(),
                                                                             "get_ClientCertificates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, false>(this, ___internal_method);
}
inline void System::Net::Http::HttpClientHandler::set_UseProxy(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(), "set_UseProxy",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Http::HttpClientHandler::set_AllowAutoRedirect(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(), "set_AllowAutoRedirect",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Http::HttpClientHandler::SetWebRequestTimeout(::System::TimeSpan timeout) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(), "SetWebRequestTimeout",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeout);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>* System::Net::Http::HttpClientHandler::SendAsync(::System::Net::Http::HttpRequestMessage* request,
                                                                                                                                      ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::Http::HttpResponseMessage*>*, false>(this, ___internal_method, request, cancellationToken);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* System::Net::Http::HttpClientHandler::_set_ClientCertificateOptions_b__23_0(
    ::System::Object* sender, ::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates,
    ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::ArrayW<::StringW, ::Array<::StringW>*> acceptableIssuers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::HttpClientHandler*>::get(), "<set_ClientCertificateOptions>b__23_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*, false>(this, ___internal_method, sender, targetHost, localCertificates,
                                                                                                                          remoteCertificate, acceptableIssuers);
}
inline ::System::Net::Http::HttpClientHandler* System::Net::Http::HttpClientHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Http::HttpClientHandler*>());
}
inline ::System::Net::Http::HttpClientHandler* System::Net::Http::HttpClientHandler::New_ctor(::System::Net::Http::IMonoHttpClientHandler* handler) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Http::HttpClientHandler*>(handler));
}
// Ctor Parameters []
constexpr ::System::Net::Http::HttpClientHandler::HttpClientHandler() {}
