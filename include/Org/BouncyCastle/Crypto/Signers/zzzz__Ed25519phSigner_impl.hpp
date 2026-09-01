#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Signers\Ed25519phSigner.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__Ed25519phSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Ed25519PrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Ed25519PublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3426130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x34261d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::Init)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x342621c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::Update)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x34263a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner.BlockUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::BlockUpdate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3426460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner.GenerateSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::*)()>(
    &::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::GenerateSignature)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x3426530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner.VerifySignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::VerifySignature)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x3426774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::*)()>(&::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::Reset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3426300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::__cordl_internal_get_prehash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prehash;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::__cordl_internal_get_prehash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prehash;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::__cordl_internal_set_prehash(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prehash = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::__cordl_internal_set_context(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::__cordl_internal_get_forSigning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forSigning;
}
constexpr bool const& Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::__cordl_internal_get_forSigning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forSigning;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::__cordl_internal_set_forSigning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forSigning = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*& Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::__cordl_internal_get_privateKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKey;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* const& Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::__cordl_internal_get_privateKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKey;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::__cordl_internal_set_privateKey(::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___privateKey = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*& Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::__cordl_internal_get_publicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* const& Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::__cordl_internal_get_publicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKey;
}
constexpr void Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::__cordl_internal_set_publicKey(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___publicKey = value;
}
inline void Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::_ctor(::ArrayW<uint8_t> context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::StringW Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forSigning, parameters);
}
inline void Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::Update(uint8_t b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::BlockUpdate(::ArrayW<uint8_t> buf, int32_t off, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, off, len);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::GenerateSignature() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::VerifySignature(::ArrayW<uint8_t> signature) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, signature);
}
inline void Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner* Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::New_ctor(::ArrayW<uint8_t> context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner*>(context));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
constexpr Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISigner*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::ISigner"
constexpr ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::i___Org__BouncyCastle__Crypto__ISigner() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::ISigner*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Signers::Ed25519phSigner::Ed25519phSigner() {}
