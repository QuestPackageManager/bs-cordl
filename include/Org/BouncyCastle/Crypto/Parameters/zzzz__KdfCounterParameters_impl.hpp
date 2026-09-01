#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\KdfCounterParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KdfCounterParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3413f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3413f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters*>(),
                            { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters.get_Ki
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::get_Ki)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34140b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters*>(), { "get_Ki", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters.get_FixedInputData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::get_FixedInputData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x34140bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters*>(), { "get_FixedInputData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters.get_FixedInputDataCounterPrefix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::get_FixedInputDataCounterPrefix)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x341411c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters*>(), { "get_FixedInputDataCounterPrefix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters.get_FixedInputDataCounterSuffix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::get_FixedInputDataCounterSuffix)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x341417c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters*>(), { "get_FixedInputDataCounterSuffix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters.get_R
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::get_R)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34141dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters*>(), { "get_R", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::__cordl_internal_get_ki() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ki;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::__cordl_internal_get_ki() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ki;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::__cordl_internal_set_ki(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ki = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::__cordl_internal_get_fixedInputDataCounterPrefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixedInputDataCounterPrefix;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::__cordl_internal_get_fixedInputDataCounterPrefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixedInputDataCounterPrefix;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::__cordl_internal_set_fixedInputDataCounterPrefix(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fixedInputDataCounterPrefix = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::__cordl_internal_get_fixedInputDataCounterSuffix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixedInputDataCounterSuffix;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::__cordl_internal_get_fixedInputDataCounterSuffix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fixedInputDataCounterSuffix;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::__cordl_internal_set_fixedInputDataCounterSuffix(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fixedInputDataCounterSuffix = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::__cordl_internal_get_r() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::__cordl_internal_get_r() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___r;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::__cordl_internal_set_r(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___r = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::_ctor(::ArrayW<uint8_t> ki, ::ArrayW<uint8_t> fixedInputDataCounterSuffix, int32_t r) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ki, fixedInputDataCounterSuffix, r);
}
inline void Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::_ctor(::ArrayW<uint8_t> ki, ::ArrayW<uint8_t> fixedInputDataCounterPrefix, ::ArrayW<uint8_t> fixedInputDataCounterSuffix,
                                                                               int32_t r) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ki, fixedInputDataCounterPrefix, fixedInputDataCounterSuffix, r);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::get_Ki() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters*>(), { "get_Ki", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::get_FixedInputData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters*>(), { "get_FixedInputData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::get_FixedInputDataCounterPrefix() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters*>(), { "get_FixedInputDataCounterPrefix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::get_FixedInputDataCounterSuffix() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters*>(), { "get_FixedInputDataCounterSuffix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::get_R() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters*>(), { "get_R", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters* Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::New_ctor(::ArrayW<uint8_t> ki,
                                                                                                                                            ::ArrayW<uint8_t> fixedInputDataCounterSuffix, int32_t r) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters*>(ki, fixedInputDataCounterSuffix, r));
}
inline ::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters*
Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::New_ctor(::ArrayW<uint8_t> ki, ::ArrayW<uint8_t> fixedInputDataCounterPrefix, ::ArrayW<uint8_t> fixedInputDataCounterSuffix, int32_t r) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters*>(ki, fixedInputDataCounterPrefix, fixedInputDataCounterSuffix, r));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationParameters"
constexpr Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::operator ::Org::BouncyCastle::Crypto::IDerivationParameters*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationParameters*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationParameters"
constexpr ::Org::BouncyCastle::Crypto::IDerivationParameters* Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::i___Org__BouncyCastle__Crypto__IDerivationParameters() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationParameters*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters::KdfCounterParameters() {}
