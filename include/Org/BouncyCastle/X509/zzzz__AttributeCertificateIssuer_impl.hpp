#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__AttributeCertificateIssuer_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AttCertIssuer_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralNames_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Selector_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::AttributeCertificateIssuer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::AttributeCertificateIssuer::*)(::Org::BouncyCastle::Asn1::X509::AttCertIssuer*)>(
    &::Org::BouncyCastle::X509::AttributeCertificateIssuer::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x11a2f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::AttributeCertificateIssuer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::AttributeCertificateIssuer::*)(::Org::BouncyCastle::Asn1::X509::X509Name*)>(
    &::Org::BouncyCastle::X509::AttributeCertificateIssuer::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x11a2fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::AttributeCertificateIssuer.GetNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (
    ::Org::BouncyCastle::X509::AttributeCertificateIssuer::*)()>(&::Org::BouncyCastle::X509::AttributeCertificateIssuer::GetNames)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x11a3080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get(),
                                                                               "GetNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::AttributeCertificateIssuer.GetPrincipals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509Name*, ::Array<::Org::BouncyCastle::Asn1::X509::X509Name*>*> (
    ::Org::BouncyCastle::X509::AttributeCertificateIssuer::*)()>(&::Org::BouncyCastle::X509::AttributeCertificateIssuer::GetPrincipals)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x11a327c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get(),
                                                                               "GetPrincipals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::AttributeCertificateIssuer.MatchesDN
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::X509::AttributeCertificateIssuer::*)(
    ::Org::BouncyCastle::Asn1::X509::X509Name*, ::Org::BouncyCastle::Asn1::X509::GeneralNames*)>(&::Org::BouncyCastle::X509::AttributeCertificateIssuer::MatchesDN)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x11a343c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get(), "MatchesDN", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralNames*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::AttributeCertificateIssuer.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Org::BouncyCastle::X509::AttributeCertificateIssuer::*)()>(
    &::Org::BouncyCastle::X509::AttributeCertificateIssuer::Clone)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x11a35bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get(),
                                                                               "Clone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::AttributeCertificateIssuer.Match
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::X509::AttributeCertificateIssuer::*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::X509::AttributeCertificateIssuer::Match)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x11a363c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get(), "Match", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::AttributeCertificateIssuer.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::X509::AttributeCertificateIssuer::*)(::System::Object*)>(
    &::Org::BouncyCastle::X509::AttributeCertificateIssuer::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x11a37c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::AttributeCertificateIssuer.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::X509::AttributeCertificateIssuer::*)()>(
    &::Org::BouncyCastle::X509::AttributeCertificateIssuer::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x11a3870;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::AttributeCertificateIssuer.Match
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::X509::AttributeCertificateIssuer::*)(::System::Object*)>(
    &::Org::BouncyCastle::X509::AttributeCertificateIssuer::Match)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x11a388c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get(), "Match",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509Selector"
constexpr Org::BouncyCastle::X509::AttributeCertificateIssuer::operator ::Org::BouncyCastle::X509::Store::IX509Selector*() noexcept {
  return static_cast<::Org::BouncyCastle::X509::Store::IX509Selector*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::X509::Store::IX509Selector"
constexpr ::Org::BouncyCastle::X509::Store::IX509Selector* Org::BouncyCastle::X509::AttributeCertificateIssuer::i___Org__BouncyCastle__X509__Store__IX509Selector() noexcept {
  return static_cast<::Org::BouncyCastle::X509::Store::IX509Selector*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr Org::BouncyCastle::X509::AttributeCertificateIssuer::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* Org::BouncyCastle::X509::AttributeCertificateIssuer::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& Org::BouncyCastle::X509::AttributeCertificateIssuer::__cordl_internal_get_form() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___form;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& Org::BouncyCastle::X509::AttributeCertificateIssuer::__cordl_internal_get_form() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___form;
}
constexpr void Org::BouncyCastle::X509::AttributeCertificateIssuer::__cordl_internal_set_form(::Org::BouncyCastle::Asn1::Asn1Encodable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___form)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::X509::AttributeCertificateIssuer* Org::BouncyCastle::X509::AttributeCertificateIssuer::New_ctor(::Org::BouncyCastle::Asn1::X509::AttCertIssuer* issuer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>(issuer));
}
inline void Org::BouncyCastle::X509::AttributeCertificateIssuer::_ctor(::Org::BouncyCastle::Asn1::X509::AttCertIssuer* issuer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AttCertIssuer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, issuer);
}
inline ::Org::BouncyCastle::X509::AttributeCertificateIssuer* Org::BouncyCastle::X509::AttributeCertificateIssuer::New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* principal) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>(principal));
}
inline void Org::BouncyCastle::X509::AttributeCertificateIssuer::_ctor(::Org::BouncyCastle::Asn1::X509::X509Name* principal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, principal);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> Org::BouncyCastle::X509::AttributeCertificateIssuer::GetNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get(),
                                                                             "GetNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Asn1::X509::X509Name*, ::Array<::Org::BouncyCastle::Asn1::X509::X509Name*>*> Org::BouncyCastle::X509::AttributeCertificateIssuer::GetPrincipals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get(),
                                                                             "GetPrincipals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Asn1::X509::X509Name*, ::Array<::Org::BouncyCastle::Asn1::X509::X509Name*>*>, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::X509::AttributeCertificateIssuer::MatchesDN(::Org::BouncyCastle::Asn1::X509::X509Name* subject, ::Org::BouncyCastle::Asn1::X509::GeneralNames* targets) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get(), "MatchesDN", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509Name*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralNames*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, subject, targets);
}
inline ::System::Object* Org::BouncyCastle::X509::AttributeCertificateIssuer::Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get(),
                                                                             "Clone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::X509::AttributeCertificateIssuer::Match(::Org::BouncyCastle::X509::X509Certificate* x509Cert) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get(), "Match", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x509Cert);
}
inline bool Org::BouncyCastle::X509::AttributeCertificateIssuer::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::X509::AttributeCertificateIssuer::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::X509::AttributeCertificateIssuer::Match(::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::AttributeCertificateIssuer*>::get(), "Match",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::AttributeCertificateIssuer::AttributeCertificateIssuer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
