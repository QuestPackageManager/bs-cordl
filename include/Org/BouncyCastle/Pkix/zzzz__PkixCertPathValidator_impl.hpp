#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/PkixCertPathValidator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathValidator_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathValidatorResult_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPath_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixParameters_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidator.Validate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult* (
    ::Org::BouncyCastle::Pkix::PkixCertPathValidator::*)(::Org::BouncyCastle::Pkix::PkixCertPath*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathValidator::Validate)> {
  constexpr static std::size_t size = 0x1e98;
  constexpr static std::size_t addrs = 0x25766f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathValidator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathValidator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidator.CheckCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::X509::X509Certificate*)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathValidator::CheckCertificate)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2578c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathValidator*>::get(), "CheckCertificate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathValidator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixCertPathValidator::*)()>(
    &::Org::BouncyCastle::Pkix::PkixCertPathValidator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2576158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathValidator*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult* Org::BouncyCastle::Pkix::PkixCertPathValidator::Validate(::Org::BouncyCastle::Pkix::PkixCertPath* certPath,
                                                                                                                        ::Org::BouncyCastle::Pkix::PkixParameters* paramsPkix) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathValidator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult*, false>(this, ___internal_method, certPath, paramsPkix);
}
inline void Org::BouncyCastle::Pkix::PkixCertPathValidator::CheckCertificate(::Org::BouncyCastle::X509::X509Certificate* cert) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathValidator*>::get(), "CheckCertificate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cert);
}
inline void Org::BouncyCastle::Pkix::PkixCertPathValidator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathValidator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Pkix::PkixCertPathValidator* Org::BouncyCastle::Pkix::PkixCertPathValidator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Pkix::PkixCertPathValidator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::PkixCertPathValidator::PkixCertPathValidator() {}
