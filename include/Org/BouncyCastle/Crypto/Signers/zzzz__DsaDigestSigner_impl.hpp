#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Signers\DsaDigestSigner.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__DsaDigestSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__IDsaEncoding_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDsaExt_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDsa_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::*)(::Org::BouncyCastle::Crypto::IDsa*, ::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x342209c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDsa*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::*)(::Org::BouncyCastle::Crypto::IDsaExt*, ::Org::BouncyCastle::Crypto::IDigest*,
                                                                                                                       ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*)>(
    &::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3422114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDsaExt*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3422120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::Init)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x342226c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::Update)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x34224a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner.BlockUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::BlockUpdate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x342255c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner.GenerateSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::GenerateSignature)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x342262c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner.VerifySignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::VerifySignature)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x34229b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::*)()>(&::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::Reset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3422d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner.GetOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::GetOrder)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3422ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(), 18 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IDsa*& Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::__cordl_internal_get_dsa() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dsa;
}
constexpr ::Org::BouncyCastle::Crypto::IDsa* const& Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::__cordl_internal_get_dsa() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dsa;
}
constexpr void Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::__cordl_internal_set_dsa(::Org::BouncyCastle::Crypto::IDsa* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dsa = value;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::__cordl_internal_get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::__cordl_internal_get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::__cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digest = value;
}
constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*& Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::__cordl_internal_get_encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* const& Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::__cordl_internal_get_encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encoding;
}
constexpr void Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::__cordl_internal_set_encoding(::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encoding = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::__cordl_internal_get_forSigning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forSigning;
}
constexpr bool const& Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::__cordl_internal_get_forSigning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forSigning;
}
constexpr void Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::__cordl_internal_set_forSigning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forSigning = value;
}
inline void Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::_ctor(::Org::BouncyCastle::Crypto::IDsa* dsa, ::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDsa*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dsa, digest);
}
inline void Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::_ctor(::Org::BouncyCastle::Crypto::IDsaExt* dsa, ::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                       ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDsaExt*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dsa, digest, encoding);
}
inline ::StringW Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forSigning, parameters);
}
inline void Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::Update(uint8_t input) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, length);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::GenerateSignature() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::VerifySignature(::ArrayW<uint8_t> signature) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, signature);
}
inline void Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::GetOrder() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner* Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::New_ctor(::Org::BouncyCastle::Crypto::IDsa* dsa,
                                                                                                                            ::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(dsa, digest));
}
inline ::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner* Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::New_ctor(::Org::BouncyCastle::Crypto::IDsaExt* dsa,
                                                                                                                            ::Org::BouncyCastle::Crypto::IDigest* digest,
                                                                                                                            ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner*>(dsa, digest, encoding));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
constexpr Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISigner*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ISigner"
constexpr ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::i___Org__BouncyCastle__Crypto__ISigner() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISigner*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Signers::DsaDigestSigner::DsaDigestSigner() {}
