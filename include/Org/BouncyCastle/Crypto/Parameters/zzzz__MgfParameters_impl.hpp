#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\MgfParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__MgfParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::MgfParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::MgfParameters::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Parameters::MgfParameters::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x34149d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::MgfParameters*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::MgfParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::MgfParameters::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Parameters::MgfParameters::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x34149f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::MgfParameters*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::MgfParameters.GetSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Parameters::MgfParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::MgfParameters::GetSeed)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3414a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::MgfParameters*>(), { "GetSeed", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Parameters::MgfParameters::__cordl_internal_get_seed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seed;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Parameters::MgfParameters::__cordl_internal_get_seed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seed;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::MgfParameters::__cordl_internal_set_seed(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___seed = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::MgfParameters::_ctor(::ArrayW<uint8_t> seed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::MgfParameters*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline void Org::BouncyCastle::Crypto::Parameters::MgfParameters::_ctor(::ArrayW<uint8_t> seed, int32_t off, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::MgfParameters*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed, off, len);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::MgfParameters::GetSeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::MgfParameters*>(), { "GetSeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::MgfParameters* Org::BouncyCastle::Crypto::Parameters::MgfParameters::New_ctor(::ArrayW<uint8_t> seed) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::MgfParameters*>(seed));
}
inline ::Org::BouncyCastle::Crypto::Parameters::MgfParameters* Org::BouncyCastle::Crypto::Parameters::MgfParameters::New_ctor(::ArrayW<uint8_t> seed, int32_t off, int32_t len) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::MgfParameters*>(seed, off, len));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationParameters"
constexpr Org::BouncyCastle::Crypto::Parameters::MgfParameters::operator ::Org::BouncyCastle::Crypto::IDerivationParameters*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationParameters*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationParameters"
constexpr ::Org::BouncyCastle::Crypto::IDerivationParameters* Org::BouncyCastle::Crypto::Parameters::MgfParameters::i___Org__BouncyCastle__Crypto__IDerivationParameters() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationParameters*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::MgfParameters::MgfParameters() {}
