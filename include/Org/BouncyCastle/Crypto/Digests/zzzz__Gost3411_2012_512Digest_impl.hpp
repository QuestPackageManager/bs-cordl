#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Digests\Gost3411_2012_512Digest.hpp"
#include "Org/BouncyCastle/Crypto/Digests/zzzz__Gost3411_2012Digest_impl.hpp"
#include "Org/BouncyCastle/Crypto/Digests/zzzz__Gost3411_2012_512Digest_def.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__IMemoable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x36eebe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x36eec24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::*)(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*)>(
    &::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x36eecb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest.GetDigestSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::GetDigestSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36eed64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Utilities::IMemoable* (::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::*)()>(
    &::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::Copy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x36eed6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*>(), 14 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::setStaticF_IV(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "IV", ::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::getStaticF_IV() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "IV", ::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*>();
}
inline ::StringW Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::_ctor(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline int32_t Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::GetDigestSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::IMemoable* Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::Copy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Utilities::IMemoable*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest* Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*>());
}
inline ::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*
Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::New_ctor(::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest* other) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*>(other));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::Gost3411_2012_512Digest() {}
