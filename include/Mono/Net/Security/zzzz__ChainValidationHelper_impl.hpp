#pragma once
// IWYU pragma private; include "Mono/Net/Security/ChainValidationHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Net/Security/zzzz__ChainValidationHelper_def.hpp"
#include "Mono/Net/Security/zzzz__ChainValidationHelper_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "Mono/Net/Security/zzzz__MonoTlsStream_def.hpp"
#include "Mono/Security/Interface/zzzz__ICertificateValidator_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "Mono/Security/Interface/zzzz__ValidationResult_def.hpp"
#include "System/Net/Security/zzzz__LocalCertSelectionCallback_def.hpp"
#include "System/Net/Security/zzzz__SslPolicyErrors_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Net/zzzz__ServerCertValidationCallback_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__WeakReference_1_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0::*)()>(
    &::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd380c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0._GetValidationCallback_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0::*)(
    ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors)>(
    &::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0::_GetValidationCallback_b__0)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5fd3f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0*>(),
                                                { "<GetValidationCallback>b__0",
                                                  {},
                                                  { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                                                    ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(), ::i2c::type_of<::System::Net::Security::SslPolicyErrors>() } })));
    return ___internal_method;
  }
};
constexpr ::Mono::Security::Interface::MonoTlsSettings*& Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0::__cordl_internal_get_settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr ::Mono::Security::Interface::MonoTlsSettings* const& Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0::__cordl_internal_get_settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr void Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0::__cordl_internal_set_settings(::Mono::Security::Interface::MonoTlsSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___settings = value;
}
inline void Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0::_GetValidationCallback_b__0(::System::Object* s, ::System::Security::Cryptography::X509Certificates::X509Certificate* c,
                                                                                                          ::System::Security::Cryptography::X509Certificates::X509Chain* ch,
                                                                                                          ::System::Net::Security::SslPolicyErrors e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0*>(),
                                              { "<GetValidationCallback>b__0",
                                                {},
                                                { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                                                  ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(), ::i2c::type_of<::System::Net::Security::SslPolicyErrors>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s, c, ch, e);
}
inline ::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0* Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0::ChainValidationHelper___c__DisplayClass11_0() {}
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper.GetInternalValidator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Mono::Net::Security::ChainValidationHelper* (*)(::System::Net::Security::SslStream*, ::Mono::Net::Security::MobileTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*)>(
        &::Mono::Net::Security::ChainValidationHelper::GetInternalValidator)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5fd314c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper*>(),
                                                             { "GetInternalValidator",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::Security::SslStream*>(), ::i2c::type_of<::Mono::Net::Security::MobileTlsProvider*>(),
                                                                 ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Mono::Net::Security::ChainValidationHelper* (*)(::Mono::Net::Security::MobileTlsProvider*, ::by_ref<::Mono::Security::Interface::MonoTlsSettings*>,
                                                                  ::Mono::Net::Security::MonoTlsStream*)>(&::Mono::Net::Security::ChainValidationHelper::Create)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5fd34c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper*>(),
                                                             { "Create",
                                                               {},
                                                               { ::i2c::type_of<::Mono::Net::Security::MobileTlsProvider*>(), ::i2c::type_of<::by_ref<::Mono::Security::Interface::MonoTlsSettings*>>(),
                                                                 ::i2c::type_of<::Mono::Net::Security::MonoTlsStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Net::Security::ChainValidationHelper::*)(
    ::System::Net::Security::SslStream*, ::Mono::Net::Security::MobileTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*, bool, ::Mono::Net::Security::MonoTlsStream*)>(
    &::Mono::Net::Security::ChainValidationHelper::_ctor)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5fd3228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::System::Net::Security::SslStream*>(), ::i2c::type_of<::Mono::Net::Security::MobileTlsProvider*>(),
                                             ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Mono::Net::Security::MonoTlsStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper.GetValidationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ServerCertValidationCallback* (*)(::Mono::Security::Interface::MonoTlsSettings*)>(
    &::Mono::Net::Security::ChainValidationHelper::GetValidationCallback)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5fd366c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper*>(),
                                                                                           { "GetValidationCallback", {}, { ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper.DefaultSelectionCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (*)(::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*,
                                                                                         ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::ArrayW<::StringW>)>(
        &::Mono::Net::Security::ChainValidationHelper::DefaultSelectionCallback)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5fd3810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper*>(),
                                                             { "DefaultSelectionCallback",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(),
                                                                 ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper.get_Settings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Interface::MonoTlsSettings* (::Mono::Net::Security::ChainValidationHelper::*)()>(
    &::Mono::Net::Security::ChainValidationHelper::get_Settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd385c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper*>(), { "get_Settings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper.SelectClientCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Net::Security::ChainValidationHelper::*)(
    ::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::ArrayW<::StringW>,
    ::by_ref<::System::Security::Cryptography::X509Certificates::X509Certificate*>)>(&::Mono::Net::Security::ChainValidationHelper::SelectClientCertificate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fd3864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper*>(),
                                                             { "SelectClientCertificate",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(),
                                                                 ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                                 ::i2c::type_of<::by_ref<::System::Security::Cryptography::X509Certificates::X509Certificate*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper.ValidateCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Interface::ValidationResult* (
    ::Mono::Net::Security::ChainValidationHelper::*)(::StringW, bool, ::System::Security::Cryptography::X509Certificates::X509Certificate*,
                                                     ::System::Security::Cryptography::X509Certificates::X509Chain*)>(&::Mono::Net::Security::ChainValidationHelper::ValidateCertificate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5fd38ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper*>(),
                                                { "ValidateCertificate",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                                                    ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper.ValidateChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Interface::ValidationResult* (
    ::Mono::Net::Security::ChainValidationHelper::*)(::StringW, bool, ::System::Security::Cryptography::X509Certificates::X509Certificate*,
                                                     ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*,
                                                     ::System::Net::Security::SslPolicyErrors)>(&::Mono::Net::Security::ChainValidationHelper::ValidateChain)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5fd3980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper*>(),
                            { "ValidateChain",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                                ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(),
                                ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(), ::i2c::type_of<::System::Net::Security::SslPolicyErrors>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper.ValidateChain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Interface::ValidationResult* (
    ::Mono::Net::Security::ChainValidationHelper::*)(::StringW, bool, ::System::Security::Cryptography::X509Certificates::X509Certificate*,
                                                     ::by_ref<::System::Security::Cryptography::X509Certificates::X509Chain*>,
                                                     ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Net::Security::SslPolicyErrors)>(
    &::Mono::Net::Security::ChainValidationHelper::ValidateChain)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x5fd3a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper*>(),
                            { "ValidateChain",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                                ::i2c::type_of<::by_ref<::System::Security::Cryptography::X509Certificates::X509Chain*>>(),
                                ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(), ::i2c::type_of<::System::Net::Security::SslPolicyErrors>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper.InvokeCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Net::Security::ChainValidationHelper::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors)>(
    &::Mono::Net::Security::ChainValidationHelper::InvokeCallback)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5fd3e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper*>(),
                                                { "InvokeCallback",
                                                  {},
                                                  { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                                                    ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(), ::i2c::type_of<::System::Net::Security::SslPolicyErrors>() } })));
    return ___internal_method;
  }
};
constexpr ::System::WeakReference_1<::System::Net::Security::SslStream*>*& Mono::Net::Security::ChainValidationHelper::__cordl_internal_get_owner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owner;
}
constexpr ::System::WeakReference_1<::System::Net::Security::SslStream*>* const& Mono::Net::Security::ChainValidationHelper::__cordl_internal_get_owner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owner;
}
constexpr void Mono::Net::Security::ChainValidationHelper::__cordl_internal_set_owner(::System::WeakReference_1<::System::Net::Security::SslStream*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___owner = value;
}
constexpr ::Mono::Security::Interface::MonoTlsSettings*& Mono::Net::Security::ChainValidationHelper::__cordl_internal_get_settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr ::Mono::Security::Interface::MonoTlsSettings* const& Mono::Net::Security::ChainValidationHelper::__cordl_internal_get_settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr void Mono::Net::Security::ChainValidationHelper::__cordl_internal_set_settings(::Mono::Security::Interface::MonoTlsSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___settings = value;
}
constexpr ::Mono::Net::Security::MobileTlsProvider*& Mono::Net::Security::ChainValidationHelper::__cordl_internal_get_provider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___provider;
}
constexpr ::Mono::Net::Security::MobileTlsProvider* const& Mono::Net::Security::ChainValidationHelper::__cordl_internal_get_provider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___provider;
}
constexpr void Mono::Net::Security::ChainValidationHelper::__cordl_internal_set_provider(::Mono::Net::Security::MobileTlsProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___provider = value;
}
constexpr ::System::Net::ServerCertValidationCallback*& Mono::Net::Security::ChainValidationHelper::__cordl_internal_get_certValidationCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certValidationCallback;
}
constexpr ::System::Net::ServerCertValidationCallback* const& Mono::Net::Security::ChainValidationHelper::__cordl_internal_get_certValidationCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certValidationCallback;
}
constexpr void Mono::Net::Security::ChainValidationHelper::__cordl_internal_set_certValidationCallback(::System::Net::ServerCertValidationCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certValidationCallback = value;
}
constexpr ::System::Net::Security::LocalCertSelectionCallback*& Mono::Net::Security::ChainValidationHelper::__cordl_internal_get_certSelectionCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certSelectionCallback;
}
constexpr ::System::Net::Security::LocalCertSelectionCallback* const& Mono::Net::Security::ChainValidationHelper::__cordl_internal_get_certSelectionCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certSelectionCallback;
}
constexpr void Mono::Net::Security::ChainValidationHelper::__cordl_internal_set_certSelectionCallback(::System::Net::Security::LocalCertSelectionCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certSelectionCallback = value;
}
constexpr ::Mono::Net::Security::MonoTlsStream*& Mono::Net::Security::ChainValidationHelper::__cordl_internal_get_tlsStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tlsStream;
}
constexpr ::Mono::Net::Security::MonoTlsStream* const& Mono::Net::Security::ChainValidationHelper::__cordl_internal_get_tlsStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tlsStream;
}
constexpr void Mono::Net::Security::ChainValidationHelper::__cordl_internal_set_tlsStream(::Mono::Net::Security::MonoTlsStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tlsStream = value;
}
constexpr ::System::Net::HttpWebRequest*& Mono::Net::Security::ChainValidationHelper::__cordl_internal_get_request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr ::System::Net::HttpWebRequest* const& Mono::Net::Security::ChainValidationHelper::__cordl_internal_get_request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___request;
}
constexpr void Mono::Net::Security::ChainValidationHelper::__cordl_internal_set_request(::System::Net::HttpWebRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___request = value;
}
inline ::Mono::Net::Security::ChainValidationHelper* Mono::Net::Security::ChainValidationHelper::GetInternalValidator(::System::Net::Security::SslStream* owner,
                                                                                                                      ::Mono::Net::Security::MobileTlsProvider* provider,
                                                                                                                      ::Mono::Security::Interface::MonoTlsSettings* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper*>(),
                                                           { "GetInternalValidator",
                                                             {},
                                                             { ::i2c::type_of<::System::Net::Security::SslStream*>(), ::i2c::type_of<::Mono::Net::Security::MobileTlsProvider*>(),
                                                               ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::ChainValidationHelper*>(nullptr, ___internal_method, owner, provider, settings);
}
inline ::Mono::Net::Security::ChainValidationHelper* Mono::Net::Security::ChainValidationHelper::Create(::Mono::Net::Security::MobileTlsProvider* provider,
                                                                                                        ::by_ref<::Mono::Security::Interface::MonoTlsSettings*> settings,
                                                                                                        ::Mono::Net::Security::MonoTlsStream* stream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper*>(),
                                                           { "Create",
                                                             {},
                                                             { ::i2c::type_of<::Mono::Net::Security::MobileTlsProvider*>(), ::i2c::type_of<::by_ref<::Mono::Security::Interface::MonoTlsSettings*>>(),
                                                               ::i2c::type_of<::Mono::Net::Security::MonoTlsStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::ChainValidationHelper*>(nullptr, ___internal_method, provider, settings, stream);
}
inline void Mono::Net::Security::ChainValidationHelper::_ctor(::System::Net::Security::SslStream* owner, ::Mono::Net::Security::MobileTlsProvider* provider,
                                                              ::Mono::Security::Interface::MonoTlsSettings* settings, bool cloneSettings, ::Mono::Net::Security::MonoTlsStream* stream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::System::Net::Security::SslStream*>(), ::i2c::type_of<::Mono::Net::Security::MobileTlsProvider*>(),
                                           ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Mono::Net::Security::MonoTlsStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner, provider, settings, cloneSettings, stream);
}
inline ::System::Net::ServerCertValidationCallback* Mono::Net::Security::ChainValidationHelper::GetValidationCallback(::Mono::Security::Interface::MonoTlsSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper*>(),
                                                                                         { "GetValidationCallback", {}, { ::i2c::type_of<::Mono::Security::Interface::MonoTlsSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ServerCertValidationCallback*>(nullptr, ___internal_method, settings);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate*
Mono::Net::Security::ChainValidationHelper::DefaultSelectionCallback(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates,
                                                                     ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::ArrayW<::StringW> acceptableIssuers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper*>(),
                                                           { "DefaultSelectionCallback",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(),
                                                               ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*>(nullptr, ___internal_method, targetHost, localCertificates, remoteCertificate,
                                                                                                                   acceptableIssuers);
}
inline ::Mono::Security::Interface::MonoTlsSettings* Mono::Net::Security::ChainValidationHelper::get_Settings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper*>(), { "get_Settings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsSettings*>(this, ___internal_method);
}
inline bool Mono::Net::Security::ChainValidationHelper::SelectClientCertificate(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates,
                                                                                ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate,
                                                                                ::ArrayW<::StringW> acceptableIssuers,
                                                                                ::by_ref<::System::Security::Cryptography::X509Certificates::X509Certificate*> clientCertificate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper*>(),
                                                           { "SelectClientCertificate",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(),
                                                               ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(), ::i2c::type_of<::ArrayW<::StringW>>(),
                                                               ::i2c::type_of<::by_ref<::System::Security::Cryptography::X509Certificates::X509Certificate*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, targetHost, localCertificates, remoteCertificate, acceptableIssuers, clientCertificate);
}
inline ::Mono::Security::Interface::ValidationResult* Mono::Net::Security::ChainValidationHelper::ValidateCertificate(::StringW host, bool serverMode,
                                                                                                                      ::System::Security::Cryptography::X509Certificates::X509Certificate* leaf,
                                                                                                                      ::System::Security::Cryptography::X509Certificates::X509Chain* chain) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper*>(),
                                              { "ValidateCertificate",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                                                  ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::ValidationResult*>(this, ___internal_method, host, serverMode, leaf, chain);
}
inline ::Mono::Security::Interface::ValidationResult* Mono::Net::Security::ChainValidationHelper::ValidateChain(::StringW host, bool server,
                                                                                                                ::System::Security::Cryptography::X509Certificates::X509Certificate* leaf,
                                                                                                                ::System::Security::Cryptography::X509Certificates::X509Chain* chain,
                                                                                                                ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs,
                                                                                                                ::System::Net::Security::SslPolicyErrors errors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper*>(),
                          { "ValidateChain",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                              ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(),
                              ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(), ::i2c::type_of<::System::Net::Security::SslPolicyErrors>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::ValidationResult*>(this, ___internal_method, host, server, leaf, chain, certs, errors);
}
inline ::Mono::Security::Interface::ValidationResult* Mono::Net::Security::ChainValidationHelper::ValidateChain(::StringW host, bool server,
                                                                                                                ::System::Security::Cryptography::X509Certificates::X509Certificate* leaf,
                                                                                                                ::by_ref<::System::Security::Cryptography::X509Certificates::X509Chain*> chain,
                                                                                                                ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs,
                                                                                                                ::System::Net::Security::SslPolicyErrors errors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper*>(),
                          { "ValidateChain",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                              ::i2c::type_of<::by_ref<::System::Security::Cryptography::X509Certificates::X509Chain*>>(),
                              ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(), ::i2c::type_of<::System::Net::Security::SslPolicyErrors>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::ValidationResult*>(this, ___internal_method, host, server, leaf, chain, certs, errors);
}
inline bool Mono::Net::Security::ChainValidationHelper::InvokeCallback(::System::Security::Cryptography::X509Certificates::X509Certificate* leaf,
                                                                       ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::System::Net::Security::SslPolicyErrors errors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Net::Security::ChainValidationHelper*>(),
                                              { "InvokeCallback",
                                                {},
                                                { ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Certificate*>(),
                                                  ::i2c::type_of<::System::Security::Cryptography::X509Certificates::X509Chain*>(), ::i2c::type_of<::System::Net::Security::SslPolicyErrors>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, leaf, chain, errors);
}
inline ::Mono::Net::Security::ChainValidationHelper* Mono::Net::Security::ChainValidationHelper::New_ctor(::System::Net::Security::SslStream* owner, ::Mono::Net::Security::MobileTlsProvider* provider,
                                                                                                          ::Mono::Security::Interface::MonoTlsSettings* settings, bool cloneSettings,
                                                                                                          ::Mono::Net::Security::MonoTlsStream* stream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Net::Security::ChainValidationHelper*>(owner, provider, settings, cloneSettings, stream));
}
/// @brief Convert operator to "::Mono::Security::Interface::ICertificateValidator"
constexpr Mono::Net::Security::ChainValidationHelper::operator ::Mono::Security::Interface::ICertificateValidator*() noexcept {
  return static_cast<::Mono::Security::Interface::ICertificateValidator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Mono::Security::Interface::ICertificateValidator"
constexpr ::Mono::Security::Interface::ICertificateValidator* Mono::Net::Security::ChainValidationHelper::i___Mono__Security__Interface__ICertificateValidator() noexcept {
  return static_cast<::Mono::Security::Interface::ICertificateValidator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::ChainValidationHelper::ChainValidationHelper() {}
