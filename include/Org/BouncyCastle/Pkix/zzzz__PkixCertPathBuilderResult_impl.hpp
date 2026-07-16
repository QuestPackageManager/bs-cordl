#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/PkixCertPathBuilderResult.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathValidatorResult_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathBuilderResult_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPath_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixPolicyNode_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__TrustAnchor_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::*)(
    ::Org::BouncyCastle::Pkix::PkixCertPath*, ::Org::BouncyCastle::Pkix::TrustAnchor*, ::Org::BouncyCastle::Pkix::PkixPolicyNode*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x35bcf44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixPolicyNode*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult.get_CertPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Pkix::PkixCertPath* (::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::*)()>(
    &::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::get_CertPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35c5a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>(), { "get_CertPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::*)()>(&::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::ToString)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x35c5a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Pkix::PkixCertPath*& Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::__cordl_internal_get_certPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certPath;
}
constexpr ::Org::BouncyCastle::Pkix::PkixCertPath* const& Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::__cordl_internal_get_certPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certPath;
}
constexpr void Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::__cordl_internal_set_certPath(::Org::BouncyCastle::Pkix::PkixCertPath* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___certPath = value;
}
inline void Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::_ctor(::Org::BouncyCastle::Pkix::PkixCertPath* certPath, ::Org::BouncyCastle::Pkix::TrustAnchor* trustAnchor,
                                                                      ::Org::BouncyCastle::Pkix::PkixPolicyNode* policyTree, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* subjectPublicKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixCertPath*>(), ::i2c::type_of<::Org::BouncyCastle::Pkix::TrustAnchor*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Pkix::PkixPolicyNode*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, certPath, trustAnchor, policyTree, subjectPublicKey);
}
inline ::Org::BouncyCastle::Pkix::PkixCertPath* Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::get_CertPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>(), { "get_CertPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixCertPath*>(this, ___internal_method);
}
inline ::StringW Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::New_ctor(::Org::BouncyCastle::Pkix::PkixCertPath* certPath,
                                                                                                                          ::Org::BouncyCastle::Pkix::TrustAnchor* trustAnchor,
                                                                                                                          ::Org::BouncyCastle::Pkix::PkixPolicyNode* policyTree,
                                                                                                                          ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* subjectPublicKey) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*>(certPath, trustAnchor, policyTree, subjectPublicKey));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult::PkixCertPathBuilderResult() {}
