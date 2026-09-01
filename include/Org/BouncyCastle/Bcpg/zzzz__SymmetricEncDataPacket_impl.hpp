#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\SymmetricEncDataPacket.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricEncDataPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SymmetricEncDataPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::SymmetricEncDataPacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::SymmetricEncDataPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369b758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SymmetricEncDataPacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Bcpg::SymmetricEncDataPacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SymmetricEncDataPacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgIn);
}
inline ::Org::BouncyCastle::Bcpg::SymmetricEncDataPacket* Org::BouncyCastle::Bcpg::SymmetricEncDataPacket::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::SymmetricEncDataPacket*>(bcpgIn));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::SymmetricEncDataPacket::SymmetricEncDataPacket() {}
