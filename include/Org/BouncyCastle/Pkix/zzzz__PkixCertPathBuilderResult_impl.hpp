#pragma once
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathValidatorResult_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathBuilderResult_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixPolicyNode_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__TrustAnchor_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPath_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::*)(
    ::Org::BouncyCastle::Pkix::PkixCertPath*, ::Org::BouncyCastle::Pkix::TrustAnchor*, ::Org::BouncyCastle::Pkix::PkixPolicyNode*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x10eb440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult.get_CertPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Pkix::PkixCertPath* (::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::*)()>(
    &::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::get_CertPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10f425c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>::get(),
                                                                               "get_CertPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::*)()>(
    &::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::ToString)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x10f4264;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Pkix::PkixCertPath*& Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::__get_certPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certPath;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Pkix::PkixCertPath*> const& Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::__get_certPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certPath;
}
constexpr void Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::__set_certPath(::Org::BouncyCastle::Pkix::PkixCertPath* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::New_ctor(::Org::BouncyCastle::Pkix::PkixCertPath* certPath,
                                                                                                                          ::Org::BouncyCastle::Pkix::TrustAnchor* trustAnchor,
                                                                                                                          ::Org::BouncyCastle::Pkix::PkixPolicyNode* policyTree,
                                                                                                                          ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* subjectPublicKey) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>(certPath, trustAnchor, policyTree, subjectPublicKey));
}
inline void Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::_ctor(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, ::Org::BouncyCastle::Pkix::TrustAnchor* trustAnchor,
                                                                      ::Org::BouncyCastle::Pkix::PkixPolicyNode* policyTree, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* subjectPublicKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixCertPath*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::TrustAnchor*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixPolicyNode*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certPath, trustAnchor, policyTree, subjectPublicKey);
}
inline ::Org::BouncyCastle::Pkix::PkixCertPath* Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::get_CertPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>::get(),
                                                                             "get_CertPath", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixCertPath*, false>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::PkixCertPathBuilderResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
