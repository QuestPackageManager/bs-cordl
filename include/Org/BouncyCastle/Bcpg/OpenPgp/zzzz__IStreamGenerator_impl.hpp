#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\OpenPgp\IStreamGenerator.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__IStreamGenerator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator::Close)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*>(), 0 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator::Close() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
