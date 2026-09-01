#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Utilities\IO\Pem\PemObjectGenerator.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemObjectGenerator_def.hpp"
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemObject_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::IO::Pem::PemObject* (::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator::*)()>(
    &::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator::Generate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator*>(), 0 }));
    return ___internal_method;
  }
};
inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator::Generate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::IO::Pem::PemObject*>(this, ___internal_method);
}
