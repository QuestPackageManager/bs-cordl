#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Pkix\PkixNameConstraintValidatorException.hpp"
#include "System/zzzz__Exception_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixNameConstraintValidatorException_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException::*)(::StringW)>(
    &::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x35de3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException::_ctor(::StringW msg) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline ::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException* Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException::New_ctor(::StringW msg) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException*>(msg));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::PkixNameConstraintValidatorException::PkixNameConstraintValidatorException() {}
