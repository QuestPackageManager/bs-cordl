#pragma once
// IWYU pragma private; include "Mono/Net/Security/Private/CallbackHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Net/Security/Private/zzzz__CallbackHelpers_def.hpp"
#include "Mono/Net/Security/Private/zzzz__CallbackHelpers_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoLocalCertificateSelectionCallback_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoRemoteCertificateValidationCallback_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoSslPolicyErrors_def.hpp"
#include "System/Net/Security/zzzz__LocalCertSelectionCallback_def.hpp"
#include "System/Net/Security/zzzz__RemoteCertificateValidationCallback_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Chain_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0::*)()>(
    &::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c6b4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0._PublicToMono_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0::*)(
    ::StringW, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::Mono::Security::Interface::MonoSslPolicyErrors)>(
    &::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0::_PublicToMono_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c6b4f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0*>::get(), "<PublicToMono>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Chain*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoSslPolicyErrors>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Security::RemoteCertificateValidationCallback*& Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Security::RemoteCertificateValidationCallback*> const&
Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr void Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0::__cordl_internal_set_callback(::System::Net::Security::RemoteCertificateValidationCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0* Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0*>());
}
inline void Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0::_PublicToMono_b__0(::StringW h, ::System::Security::Cryptography::X509Certificates::X509Certificate* c,
                                                                                                      ::System::Security::Cryptography::X509Certificates::X509Chain* ch,
                                                                                                      ::Mono::Security::Interface::MonoSslPolicyErrors e) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0*>::get(), "<PublicToMono>b__0",
                                 std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Chain*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoSslPolicyErrors>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, h, c, ch, e);
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass0_0::__CallbackHelpers____c__DisplayClass0_0() {}
//  Writing Method size for method: ::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0::*)()>(
    &::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c6b4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0._MonoToInternal_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (
    ::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0::*)(::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*,
                                                                                ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0::_MonoToInternal_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2c6b51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0*>::get(), "<MonoToInternal>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*& Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0::__cordl_internal_get_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*> const&
Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0::__cordl_internal_get_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___callback;
}
constexpr void Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0::__cordl_internal_set_callback(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0* Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0*>());
}
inline void Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate*
Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0::_MonoToInternal_b__0(::StringW t, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* lc,
                                                                                            ::System::Security::Cryptography::X509Certificates::X509Certificate* rc,
                                                                                            ::ArrayW<::StringW, ::Array<::StringW>*> ai) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0*>::get(), "<MonoToInternal>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*, false>(this, ___internal_method, t, lc, rc, ai);
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::Private::__CallbackHelpers____c__DisplayClass6_0::__CallbackHelpers____c__DisplayClass6_0() {}
//  Writing Method size for method: ::Mono::Net::Security::Private::CallbackHelpers.PublicToMono
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback* (*)(::System::Net::Security::RemoteCertificateValidationCallback*)>(
        &::Mono::Net::Security::Private::CallbackHelpers::PublicToMono)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2c6b438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::Private::CallbackHelpers*>::get(), "PublicToMono", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::RemoteCertificateValidationCallback*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::Private::CallbackHelpers.MonoToInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Net::Security::LocalCertSelectionCallback* (*)(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*)>(&::Mono::Net::Security::Private::CallbackHelpers::MonoToInternal)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2c65b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::Private::CallbackHelpers*>::get(), "MonoToInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*>::get() })));
    return ___internal_method;
  }
};
inline ::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*
Mono::Net::Security::Private::CallbackHelpers::PublicToMono(::System::Net::Security::RemoteCertificateValidationCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::Private::CallbackHelpers*>::get(), "PublicToMono", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Security::RemoteCertificateValidationCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoRemoteCertificateValidationCallback*, false>(nullptr, ___internal_method, callback);
}
inline ::System::Net::Security::LocalCertSelectionCallback*
Mono::Net::Security::Private::CallbackHelpers::MonoToInternal(::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::Private::CallbackHelpers*>::get(), "MonoToInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Security::LocalCertSelectionCallback*, false>(nullptr, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::Mono::Net::Security::Private::CallbackHelpers::CallbackHelpers() {}
