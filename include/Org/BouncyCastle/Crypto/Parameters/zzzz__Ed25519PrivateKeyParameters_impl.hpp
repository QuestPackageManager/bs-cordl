#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\Ed25519PrivateKeyParameters.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Ed25519PrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Ed25519PublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Math/EC/Rfc8032/zzzz__Ed25519_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3411368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3411444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3411500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::Encode)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3411604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>(),
                                                                                           { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters.GetEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::GetEncoded)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x341168c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>(), { "GetEncoded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters.GeneratePublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* (
    ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::*)()>(&::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::GeneratePublicKey)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x34116ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>(), { "GeneratePublicKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters.Sign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::*)(
    ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_Algorithm, ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, int32_t,
    ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::Sign)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3411910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>(),
                                                                                           { "Sign",
                                                                                             {},
                                                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_Algorithm>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*>(),
                                                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters.Sign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::*)(
    ::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_Algorithm, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::Sign)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x3411930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>(),
                                         { "Sign",
                                           {},
                                           { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_Algorithm>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::__cordl_internal_set_data(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*& Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::__cordl_internal_get_cachedPublicKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedPublicKey;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* const& Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::__cordl_internal_get_cachedPublicKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedPublicKey;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::__cordl_internal_set_cachedPublicKey(::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cachedPublicKey = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::setStaticF_KeySize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "KeySize", ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::getStaticF_KeySize() {
  return ::cordl_internals::getStaticField<int32_t, "KeySize", ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>();
}
inline void Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::setStaticF_SignatureSize(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SignatureSize", ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::getStaticF_SignatureSize() {
  return ::cordl_internals::getStaticField<int32_t, "SignatureSize", ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>();
}
inline void Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::_ctor(::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, random);
}
inline void Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::_ctor(::ArrayW<uint8_t> buf, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, off);
}
inline void Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::_ctor(::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::Encode(::ArrayW<uint8_t> buf, int32_t off) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>(),
                                                                                         { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, off);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::GetEncoded() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>(), { "GetEncoded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::GeneratePublicKey() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>(), { "GeneratePublicKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::Sign(::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_Algorithm algorithm,
                                                                                     ::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters* publicKey, ::ArrayW<uint8_t> ctx,
                                                                                     ::ArrayW<uint8_t> msg, int32_t msgOff, int32_t msgLen, ::ArrayW<uint8_t> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>(),
                                                                                         { "Sign",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_Algorithm>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::Ed25519PublicKeyParameters*>(),
                                                                                             ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithm, publicKey, ctx, msg, msgOff, msgLen, sig, sigOff);
}
inline void Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::Sign(::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_Algorithm algorithm, ::ArrayW<uint8_t> ctx, ::ArrayW<uint8_t> msg,
                                                                                     int32_t msgOff, int32_t msgLen, ::ArrayW<uint8_t> sig, int32_t sigOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>(),
                                              { "Sign",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Math::EC::Rfc8032::Ed25519_Algorithm>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithm, ctx, msg, msgOff, msgLen, sig, sigOff);
}
inline ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*
Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::New_ctor(::Org::BouncyCastle::Security::SecureRandom* random) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>(random));
}
inline ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::New_ctor(::ArrayW<uint8_t> buf, int32_t off) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>(buf, off));
}
inline ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters* Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::New_ctor(::System::IO::Stream* input) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters*>(input));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::Ed25519PrivateKeyParameters::Ed25519PrivateKeyParameters() {}
