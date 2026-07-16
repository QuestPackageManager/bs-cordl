#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/Drbg/DrbgUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Prng/Drbg/zzzz__DrbgUtilities_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities.GetMaxSecurityStrength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Org::BouncyCastle::Crypto::IDigest*)>(&::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities::GetMaxSecurityStrength)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x341882c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities*>(),
                                                                                           { "GetMaxSecurityStrength", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities.GetMaxSecurityStrength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Org::BouncyCastle::Crypto::IMac*)>(&::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities::GetMaxSecurityStrength)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x34189a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities*>(),
                                                                                           { "GetMaxSecurityStrength", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities.HashDF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities::HashDF)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x3418b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities*>(),
                                                { "HashDF", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities.IsTooLarge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities::IsTooLarge)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3417f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities*>(),
                                                                                           { "IsTooLarge", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities::*)()>(&::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3419094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities::setStaticF_maxSecurityStrengths(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "maxSecurityStrengths", ::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities*>(
      std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities::getStaticF_maxSecurityStrengths() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "maxSecurityStrengths", ::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities*>();
}
inline int32_t Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities::GetMaxSecurityStrength(::Org::BouncyCastle::Crypto::IDigest* d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities*>(),
                                                                                         { "GetMaxSecurityStrength", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, d);
}
inline int32_t Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities::GetMaxSecurityStrength(::Org::BouncyCastle::Crypto::IMac* m) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities*>(),
                                                                                         { "GetMaxSecurityStrength", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, m);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities::HashDF(::Org::BouncyCastle::Crypto::IDigest* digest, ::ArrayW<uint8_t> seedMaterial, int32_t seedLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities*>(),
                                              { "HashDF", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, digest, seedMaterial, seedLength);
}
inline bool Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities::IsTooLarge(::ArrayW<uint8_t> bytes, int32_t maxBytes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities*>(),
                                                                                         { "IsTooLarge", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bytes, maxBytes);
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities* Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::Drbg::DrbgUtilities::DrbgUtilities() {}
