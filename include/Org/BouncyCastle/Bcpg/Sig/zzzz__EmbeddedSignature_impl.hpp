#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/Sig/EmbeddedSignature.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/zzzz__EmbeddedSignature_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature::*)(bool, bool, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x369216c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature::_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critical, isLongLength, data);
}
inline ::Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature* Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature::New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature*>(critical, isLongLength, data));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::Sig::EmbeddedSignature::EmbeddedSignature() {}
