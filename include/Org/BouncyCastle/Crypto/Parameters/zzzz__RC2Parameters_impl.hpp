#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\RC2Parameters.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RC2Parameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RC2Parameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::RC2Parameters::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Parameters::RC2Parameters::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x34153dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RC2Parameters*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RC2Parameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::RC2Parameters::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Parameters::RC2Parameters::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3415444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RC2Parameters*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RC2Parameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::RC2Parameters::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Parameters::RC2Parameters::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x341541c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RC2Parameters*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RC2Parameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::RC2Parameters::*)(::ArrayW<uint8_t>, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Parameters::RC2Parameters::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3415478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RC2Parameters*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::RC2Parameters.get_EffectiveKeyBits
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Parameters::RC2Parameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::RC2Parameters::get_EffectiveKeyBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34154a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RC2Parameters*>(), { "get_EffectiveKeyBits", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Parameters::RC2Parameters::__cordl_internal_get_bits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bits;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Parameters::RC2Parameters::__cordl_internal_get_bits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bits;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::RC2Parameters::__cordl_internal_set_bits(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bits = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::RC2Parameters::_ctor(::ArrayW<uint8_t> key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RC2Parameters*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void Org::BouncyCastle::Crypto::Parameters::RC2Parameters::_ctor(::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RC2Parameters*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, keyOff, keyLen);
}
inline void Org::BouncyCastle::Crypto::Parameters::RC2Parameters::_ctor(::ArrayW<uint8_t> key, int32_t bits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RC2Parameters*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, bits);
}
inline void Org::BouncyCastle::Crypto::Parameters::RC2Parameters::_ctor(::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen, int32_t bits) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RC2Parameters*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, keyOff, keyLen, bits);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::RC2Parameters::get_EffectiveKeyBits() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::RC2Parameters*>(), { "get_EffectiveKeyBits", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::RC2Parameters* Org::BouncyCastle::Crypto::Parameters::RC2Parameters::New_ctor(::ArrayW<uint8_t> key) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::RC2Parameters*>(key));
}
inline ::Org::BouncyCastle::Crypto::Parameters::RC2Parameters* Org::BouncyCastle::Crypto::Parameters::RC2Parameters::New_ctor(::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::RC2Parameters*>(key, keyOff, keyLen));
}
inline ::Org::BouncyCastle::Crypto::Parameters::RC2Parameters* Org::BouncyCastle::Crypto::Parameters::RC2Parameters::New_ctor(::ArrayW<uint8_t> key, int32_t bits) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::RC2Parameters*>(key, bits));
}
inline ::Org::BouncyCastle::Crypto::Parameters::RC2Parameters* Org::BouncyCastle::Crypto::Parameters::RC2Parameters::New_ctor(::ArrayW<uint8_t> key, int32_t keyOff, int32_t keyLen, int32_t bits) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::RC2Parameters*>(key, keyOff, keyLen, bits));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::RC2Parameters::RC2Parameters() {}
