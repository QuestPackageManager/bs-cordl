#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/PkixAttrCertPathValidator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixAttrCertPathValidator_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathValidatorResult_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPath_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator.Validate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult* (
    ::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator::*)(::Org::BouncyCastle::Pkix::PkixCertPath*, ::Org::BouncyCastle::Pkix::PkixParameters*)>(
    &::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator::Validate)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x35bd6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator::*)()>(&::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x35bcda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult* Org::BouncyCastle::Pkix::PkixAttrCertPathValidator::Validate(::Org::BouncyCastle::Pkix::PkixCertPath* certPath,
                                                                                                                            ::Org::BouncyCastle::Pkix::PkixParameters* pkixParams) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult*>(this, ___internal_method, certPath, pkixParams);
}
inline void Org::BouncyCastle::Pkix::PkixAttrCertPathValidator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator* Org::BouncyCastle::Pkix::PkixAttrCertPathValidator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator::PkixAttrCertPathValidator() {}
