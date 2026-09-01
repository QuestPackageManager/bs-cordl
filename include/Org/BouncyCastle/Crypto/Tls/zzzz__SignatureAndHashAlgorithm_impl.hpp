#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\SignatureAndHashAlgorithm.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SignatureAndHashAlgorithm_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::*)(uint8_t, uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3470418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm.get_Hash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::get_Hash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34704f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm.get_Signature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::get_Signature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3470500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::*)(::System::Object*)>(
    &::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::Equals)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3470508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x34705e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::Encode)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3470624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* (*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::Parse)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x34706e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(), { "Parse", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
constexpr uint8_t& Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::__cordl_internal_get_mHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHash;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::__cordl_internal_get_mHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mHash;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::__cordl_internal_set_mHash(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mHash = value;
}
constexpr uint8_t& Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::__cordl_internal_get_mSignature() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSignature;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::__cordl_internal_get_mSignature() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSignature;
}
constexpr void Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::__cordl_internal_set_mSignature(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSignature = value;
}
inline void Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::_ctor(uint8_t hash, uint8_t signature) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(), { ".ctor", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash, signature);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::get_Hash() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::get_Signature() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::Encode(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::Parse(::System::IO::Stream* input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(), { "Parse", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(nullptr, ___internal_method, input);
}
inline ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::New_ctor(uint8_t hash, uint8_t signature) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(hash, signature));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm::SignatureAndHashAlgorithm() {}
