#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Signers/StandardDsaEncoding.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__StandardDsaEncoding_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__IDsaEncoding_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*> (::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::Decode)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x3431bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::Encode)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3431df4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding.CheckValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(
        &::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::CheckValue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3431f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding.DecodeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (
    ::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Asn1::Asn1Sequence*, int32_t)>(
    &::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::DecodeValue)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3431ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding.EncodeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(
        &::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::EncodeValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x34320bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::*)()>(&::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x34321a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::setStaticF_Instance(::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*, "Instance", ::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*>(
      std::forward<::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*>(value));
}
inline ::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding* Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*, "Instance", ::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*>();
}
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::Decode(::Org::BouncyCastle::Math::BigInteger* n, ::ArrayW<uint8_t> encoding) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(this, ___internal_method, n, encoding);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::Encode(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* r,
                                                                                         ::Org::BouncyCastle::Math::BigInteger* s) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, n, r, s);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::CheckValue(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* x) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, n, x);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::DecodeValue(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Asn1::Asn1Sequence* s,
                                                                                                                   int32_t pos) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, n, s, pos);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::EncodeValue(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* x) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*>(this, ___internal_method, n, x);
}
inline void Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding* Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Signers::IDsaEncoding"
constexpr Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::operator ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Signers::IDsaEncoding"
constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::i___Org__BouncyCastle__Crypto__Signers__IDsaEncoding() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Signers::StandardDsaEncoding::StandardDsaEncoding() {}
