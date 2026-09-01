#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Signers\Gost3410DigestSigner.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__Gost3410DigestSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDsa_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::*)(::Org::BouncyCastle::Crypto::IDsa*, ::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3428b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDsa*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3428c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::Init)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x3428d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::Update)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3428f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner.BlockUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::BlockUpdate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3429044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner.GenerateSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::GenerateSignature)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x3429114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner.VerifySignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::VerifySignature)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x34294d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::*)()>(&::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::Reset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3429828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(), 17 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::__cordl_internal_get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::__cordl_internal_get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::__cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digest = value;
}
constexpr ::Org::BouncyCastle::Crypto::IDsa*& Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::__cordl_internal_get_dsaSigner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dsaSigner;
}
constexpr ::Org::BouncyCastle::Crypto::IDsa* const& Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::__cordl_internal_get_dsaSigner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dsaSigner;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::__cordl_internal_set_dsaSigner(::Org::BouncyCastle::Crypto::IDsa* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dsaSigner = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::__cordl_internal_get_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::__cordl_internal_get_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::__cordl_internal_set_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___size = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::__cordl_internal_get_halfSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___halfSize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::__cordl_internal_get_halfSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___halfSize;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::__cordl_internal_set_halfSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___halfSize = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::__cordl_internal_get_forSigning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forSigning;
}
constexpr bool const& Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::__cordl_internal_get_forSigning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forSigning;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::__cordl_internal_set_forSigning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forSigning = value;
}
inline void Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::_ctor(::Org::BouncyCastle::Crypto::IDsa* signer, ::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDsa*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signer, digest);
}
inline ::StringW Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forSigning, parameters);
}
inline void Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::Update(uint8_t input) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, inOff, length);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::GenerateSignature() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::VerifySignature(::ArrayW<uint8_t> signature) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, signature);
}
inline void Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner* Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::New_ctor(::Org::BouncyCastle::Crypto::IDsa* signer,
                                                                                                                                      ::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*>(signer, digest));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
constexpr Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISigner*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ISigner"
constexpr ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::i___Org__BouncyCastle__Crypto__ISigner() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISigner*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::Gost3410DigestSigner() {}
