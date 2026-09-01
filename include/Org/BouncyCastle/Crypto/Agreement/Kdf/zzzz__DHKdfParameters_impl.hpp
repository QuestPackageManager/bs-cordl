#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Agreement\Kdf\DHKdfParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/Kdf/zzzz__DHKdfParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, int32_t, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x36e08b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::*)(
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x36e08c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters.get_Algorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::get_Algorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36e08d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters*>(), { "get_Algorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters.get_KeySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::get_KeySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36e08dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters*>(), { "get_KeySize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters.GetZ
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::GetZ)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36e08e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters*>(), { "GetZ", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters.GetExtraInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::GetExtraInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36e08ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters*>(), { "GetExtraInfo", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::__cordl_internal_get_algorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::__cordl_internal_get_algorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::__cordl_internal_set_algorithm(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___algorithm = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::__cordl_internal_get_keySize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::__cordl_internal_get_keySize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySize;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::__cordl_internal_set_keySize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keySize = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::__cordl_internal_get_z() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::__cordl_internal_get_z() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::__cordl_internal_set_z(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___z = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::__cordl_internal_get_extraInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraInfo;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::__cordl_internal_get_extraInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___extraInfo;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::__cordl_internal_set_extraInfo(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___extraInfo = value;
}
inline void Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, int32_t keySize, ::ArrayW<uint8_t> z) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithm, keySize, z);
}
inline void Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, int32_t keySize, ::ArrayW<uint8_t> z,
                                                                              ::ArrayW<uint8_t> extraInfo) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithm, keySize, z, extraInfo);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::get_Algorithm() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters*>(), { "get_Algorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::get_KeySize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters*>(), { "get_KeySize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::GetZ() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters*>(), { "GetZ", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::GetExtraInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters*>(), { "GetExtraInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters* Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm,
                                                                                                                                          int32_t keySize, ::ArrayW<uint8_t> z) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters*>(algorithm, keySize, z));
}
inline ::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters*
Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, int32_t keySize, ::ArrayW<uint8_t> z, ::ArrayW<uint8_t> extraInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters*>(algorithm, keySize, z, extraInfo));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationParameters"
constexpr Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::operator ::Org::BouncyCastle::Crypto::IDerivationParameters*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationParameters*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationParameters"
constexpr ::Org::BouncyCastle::Crypto::IDerivationParameters* Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::i___Org__BouncyCastle__Crypto__IDerivationParameters() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationParameters*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::Kdf::DHKdfParameters::DHKdfParameters() {}
