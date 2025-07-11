#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/PrincipalUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/X509/zzzz__PrincipalUtilities_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509Name_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Crl_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::X509::PrincipalUtilities.GetIssuerX509Principal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::X509::PrincipalUtilities::GetIssuerX509Principal)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x25ef050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::PrincipalUtilities*>::get(), "GetIssuerX509Principal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::PrincipalUtilities.GetSubjectX509Principal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::X509::PrincipalUtilities::GetSubjectX509Principal)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x25ef164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::PrincipalUtilities*>::get(), "GetSubjectX509Principal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::PrincipalUtilities.GetIssuerX509Principal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::X509Name* (*)(::Org::BouncyCastle::X509::X509Crl*)>(
    &::Org::BouncyCastle::X509::PrincipalUtilities::GetIssuerX509Principal)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x25ef278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::PrincipalUtilities*>::get(), "GetIssuerX509Principal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::X509::PrincipalUtilities._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::X509::PrincipalUtilities::*)()>(&::Org::BouncyCastle::X509::PrincipalUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ef38c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::PrincipalUtilities*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::X509::PrincipalUtilities::GetIssuerX509Principal(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::PrincipalUtilities*>::get(), "GetIssuerX509Principal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*, false>(nullptr, ___internal_method, cert);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::X509::PrincipalUtilities::GetSubjectX509Principal(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::PrincipalUtilities*>::get(), "GetSubjectX509Principal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*, false>(nullptr, ___internal_method, cert);
}
inline ::Org::BouncyCastle::Asn1::X509::X509Name* Org::BouncyCastle::X509::PrincipalUtilities::GetIssuerX509Principal(::Org::BouncyCastle::X509::X509Crl* crl) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::PrincipalUtilities*>::get(), "GetIssuerX509Principal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Crl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::X509Name*, false>(nullptr, ___internal_method, crl);
}
inline void Org::BouncyCastle::X509::PrincipalUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::X509::PrincipalUtilities*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::PrincipalUtilities* Org::BouncyCastle::X509::PrincipalUtilities::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::X509::PrincipalUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::X509::PrincipalUtilities::PrincipalUtilities() {}
