#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\RC5Parameters.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RC5Parameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RC5Parameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::RC5Parameters::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Parameters::RC5Parameters::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x34154a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RC5Parameters*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RC5Parameters.get_Rounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Parameters::RC5Parameters::*)()>(&::Org::BouncyCastle::Crypto::Parameters::RC5Parameters::get_Rounds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3415530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RC5Parameters*>(), { "get_Rounds", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Parameters::RC5Parameters::__cordl_internal_get_rounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rounds;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Parameters::RC5Parameters::__cordl_internal_get_rounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rounds;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::RC5Parameters::__cordl_internal_set_rounds(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rounds = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::RC5Parameters::_ctor(::ArrayW<uint8_t> key, int32_t rounds) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RC5Parameters*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, rounds);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::RC5Parameters::get_Rounds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RC5Parameters*>(), { "get_Rounds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::RC5Parameters* Org::BouncyCastle::Crypto::Parameters::RC5Parameters::New_ctor(::ArrayW<uint8_t> key, int32_t rounds) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::RC5Parameters*>(key, rounds));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::RC5Parameters::RC5Parameters() {}
