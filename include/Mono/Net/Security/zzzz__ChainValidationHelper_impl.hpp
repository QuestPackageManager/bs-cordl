#pragma once
// IWYU pragma private; include "Mono/Net/Security/ChainValidationHelper.hpp"
#include "Mono/Security/Interface/zzzz__ICertificateValidator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Net/Security/zzzz__ChainValidationHelper_def.hpp"
#include "Mono/Net/Security/zzzz__ChainValidationHelper_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "Mono/Net/Security/zzzz__MonoTlsStream_def.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0::*)()>(
    &::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4112f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0._GetValidationCallback_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0::*)(
    ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors)>(
    &::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0::_GetValidationCallback_b__0)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x411365c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0*>::get(), "<GetValidationCallback>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Chain*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslPolicyErrors>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0::_GetValidationCallback_b__0(::System::Object* s, ::System::Security::Cryptography::X509Certificates::X509Certificate* c,
                                                                                                          ::System::Security::Cryptography::X509Certificates::X509Chain* ch,
                                                                                                          ::System::Net::Security::SslPolicyErrors e) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0*>::get(), "<GetValidationCallback>b__0",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Chain*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslPolicyErrors>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, s, c, ch, e);
}
inline ::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0* Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0*>());
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::ChainValidationHelper___c__DisplayClass11_0::ChainValidationHelper___c__DisplayClass11_0() {}
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper.GetInternalValidator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Net::Security::ChainValidationHelper* (*)(::System::Net::Security::SslStream*, ::Mono::Net::Security::MobileTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*)>(
        &::Mono::Net::Security::ChainValidationHelper::GetInternalValidator)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x41128e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper*>::get(), "GetInternalValidator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslStream*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileTlsProvider*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoTlsSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Net::Security::ChainValidationHelper* (*)(::Mono::Net::Security::MobileTlsProvider*, ::ByRef<::Mono::Security::Interface::MonoTlsSettings*>,
                                                                  ::Mono::Net::Security::MonoTlsStream*)>(&::Mono::Net::Security::ChainValidationHelper::Create)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4112c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileTlsProvider*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Mono::Security::Interface::MonoTlsSettings*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MonoTlsStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::ChainValidationHelper::*)(
    ::System::Net::Security::SslStream*, ::Mono::Net::Security::MobileTlsProvider*, ::Mono::Security::Interface::MonoTlsSettings*, bool, ::Mono::Net::Security::MonoTlsStream*)>(
    &::Mono::Net::Security::ChainValidationHelper::_ctor)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x41129c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslStream*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileTlsProvider*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MonoTlsStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper.GetValidationCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ServerCertValidationCallback* (*)(::Mono::Security::Interface::MonoTlsSettings*)>(
    &::Mono::Net::Security::ChainValidationHelper::GetValidationCallback)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x4112dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper*>::get(), "GetValidationCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoTlsSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper.DefaultSelectionCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Security::Cryptography::X509Certificates::X509Certificate* (*)(::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*,
                                                                             ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::Mono::Net::Security::ChainValidationHelper::DefaultSelectionCallback)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4112f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper*>::get(), "DefaultSelectionCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper.get_Settings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::MonoTlsSettings* (::Mono::Net::Security::ChainValidationHelper::*)()>(
    &::Mono::Net::Security::ChainValidationHelper::get_Settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4112fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper*>::get(),
                                                                               "get_Settings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper.SelectClientCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::ChainValidationHelper::*)(
    ::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Security::Cryptography::X509Certificates::X509Certificate*,
    ::ArrayW<::StringW, ::Array<::StringW>*>, ::ByRef<::System::Security::Cryptography::X509Certificates::X509Certificate*>)>(&::Mono::Net::Security::ChainValidationHelper::SelectClientCertificate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4112fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper*>::get(), "SelectClientCertificate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Security::Cryptography::X509Certificates::X509Certificate*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper.ValidateCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::ValidationResult* (
    ::Mono::Net::Security::ChainValidationHelper::*)(::StringW, bool, ::System::Security::Cryptography::X509Certificates::X509Certificate*,
                                                     ::System::Security::Cryptography::X509Certificates::X509Chain*)>(&::Mono::Net::Security::ChainValidationHelper::ValidateCertificate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x4112ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper*>::get(), "ValidateCertificate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Chain*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper.ValidateChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::ValidationResult* (
    ::Mono::Net::Security::ChainValidationHelper::*)(::StringW, bool, ::System::Security::Cryptography::X509Certificates::X509Certificate*,
                                                     ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*,
                                                     ::System::Net::Security::SslPolicyErrors)>(&::Mono::Net::Security::ChainValidationHelper::ValidateChain)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x41130cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper*>::get(), "ValidateChain", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Chain*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslPolicyErrors>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper.ValidateChain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::ValidationResult* (
    ::Mono::Net::Security::ChainValidationHelper::*)(::StringW, bool, ::System::Security::Cryptography::X509Certificates::X509Certificate*,
                                                     ::ByRef<::System::Security::Cryptography::X509Certificates::X509Chain*>,
                                                     ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::System::Net::Security::SslPolicyErrors)>(
    &::Mono::Net::Security::ChainValidationHelper::ValidateChain)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x4113198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper*>::get(), "ValidateChain", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Security::Cryptography::X509Certificates::X509Chain*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslPolicyErrors>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::ChainValidationHelper.InvokeCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::ChainValidationHelper::*)(
    ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors)>(
    &::Mono::Net::Security::ChainValidationHelper::InvokeCallback)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x41135a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper*>::get(), "InvokeCallback", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Chain*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslPolicyErrors>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___owner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___provider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certValidationCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certSelectionCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tlsStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Mono::Net::Security::ChainValidationHelper* Mono::Net::Security::ChainValidationHelper::GetInternalValidator(::System::Net::Security::SslStream* owner,
                                                                                                                      ::Mono::Net::Security::MobileTlsProvider* provider,
                                                                                                                      ::Mono::Security::Interface::MonoTlsSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper*>::get(), "GetInternalValidator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslStream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileTlsProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoTlsSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::ChainValidationHelper*, false>(nullptr, ___internal_method, owner, provider, settings);
}
inline ::Mono::Net::Security::ChainValidationHelper* Mono::Net::Security::ChainValidationHelper::Create(::Mono::Net::Security::MobileTlsProvider* provider,
                                                                                                        ::ByRef<::Mono::Security::Interface::MonoTlsSettings*> settings,
                                                                                                        ::Mono::Net::Security::MonoTlsStream* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileTlsProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Mono::Security::Interface::MonoTlsSettings*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MonoTlsStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Net::Security::ChainValidationHelper*, false>(nullptr, ___internal_method, provider, settings, stream);
}
inline void Mono::Net::Security::ChainValidationHelper::_ctor(::System::Net::Security::SslStream* owner, ::Mono::Net::Security::MobileTlsProvider* provider,
                                                              ::Mono::Security::Interface::MonoTlsSettings* settings, bool cloneSettings, ::Mono::Net::Security::MonoTlsStream* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslStream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileTlsProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoTlsSettings*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MonoTlsStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner, provider, settings, cloneSettings, stream);
}
inline ::System::Net::ServerCertValidationCallback* Mono::Net::Security::ChainValidationHelper::GetValidationCallback(::Mono::Security::Interface::MonoTlsSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper*>::get(), "GetValidationCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoTlsSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ServerCertValidationCallback*, false>(nullptr, ___internal_method, settings);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate*
Mono::Net::Security::ChainValidationHelper::DefaultSelectionCallback(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates,
                                                                     ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate,
                                                                     ::ArrayW<::StringW, ::Array<::StringW>*> acceptableIssuers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper*>::get(), "DefaultSelectionCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*, false>(nullptr, ___internal_method, targetHost, localCertificates, remoteCertificate,
                                                                                                                          acceptableIssuers);
}
inline ::Mono::Security::Interface::MonoTlsSettings* Mono::Net::Security::ChainValidationHelper::get_Settings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper*>::get(),
                                                                             "get_Settings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsSettings*, false>(this, ___internal_method);
}
inline bool Mono::Net::Security::ChainValidationHelper::SelectClientCertificate(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates,
                                                                                ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate,
                                                                                ::ArrayW<::StringW, ::Array<::StringW>*> acceptableIssuers,
                                                                                ::ByRef<::System::Security::Cryptography::X509Certificates::X509Certificate*> clientCertificate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper*>::get(), "SelectClientCertificate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Security::Cryptography::X509Certificates::X509Certificate*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, targetHost, localCertificates, remoteCertificate, acceptableIssuers, clientCertificate);
}
inline ::Mono::Security::Interface::ValidationResult* Mono::Net::Security::ChainValidationHelper::ValidateCertificate(::StringW host, bool serverMode,
                                                                                                                      ::System::Security::Cryptography::X509Certificates::X509Certificate* leaf,
                                                                                                                      ::System::Security::Cryptography::X509Certificates::X509Chain* chain) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper*>::get(), "ValidateCertificate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Chain*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::ValidationResult*, false>(this, ___internal_method, host, serverMode, leaf, chain);
}
inline ::Mono::Security::Interface::ValidationResult* Mono::Net::Security::ChainValidationHelper::ValidateChain(::StringW host, bool server,
                                                                                                                ::System::Security::Cryptography::X509Certificates::X509Certificate* leaf,
                                                                                                                ::System::Security::Cryptography::X509Certificates::X509Chain* chain,
                                                                                                                ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs,
                                                                                                                ::System::Net::Security::SslPolicyErrors errors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper*>::get(), "ValidateChain", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Chain*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslPolicyErrors>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::ValidationResult*, false>(this, ___internal_method, host, server, leaf, chain, certs, errors);
}
inline ::Mono::Security::Interface::ValidationResult* Mono::Net::Security::ChainValidationHelper::ValidateChain(::StringW host, bool server,
                                                                                                                ::System::Security::Cryptography::X509Certificates::X509Certificate* leaf,
                                                                                                                ::ByRef<::System::Security::Cryptography::X509Certificates::X509Chain*> chain,
                                                                                                                ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs,
                                                                                                                ::System::Net::Security::SslPolicyErrors errors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper*>::get(), "ValidateChain", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Security::Cryptography::X509Certificates::X509Chain*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslPolicyErrors>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::ValidationResult*, false>(this, ___internal_method, host, server, leaf, chain, certs, errors);
}
inline bool Mono::Net::Security::ChainValidationHelper::InvokeCallback(::System::Security::Cryptography::X509Certificates::X509Certificate* leaf,
                                                                       ::System::Security::Cryptography::X509Certificates::X509Chain* chain, ::System::Net::Security::SslPolicyErrors errors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::ChainValidationHelper*>::get(), "InvokeCallback", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Chain*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::SslPolicyErrors>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, leaf, chain, errors);
}
inline ::Mono::Net::Security::ChainValidationHelper* Mono::Net::Security::ChainValidationHelper::New_ctor(::System::Net::Security::SslStream* owner, ::Mono::Net::Security::MobileTlsProvider* provider,
                                                                                                          ::Mono::Security::Interface::MonoTlsSettings* settings, bool cloneSettings,
                                                                                                          ::Mono::Net::Security::MonoTlsStream* stream) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Net::Security::ChainValidationHelper*>(owner, provider, settings, cloneSettings, stream));
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
