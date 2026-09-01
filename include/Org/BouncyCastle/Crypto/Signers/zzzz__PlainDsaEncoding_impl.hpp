#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Signers\PlainDsaEncoding.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__PlainDsaEncoding_def.hpp"
#include "Org/BouncyCastle/Crypto/Signers/zzzz__IDsaEncoding_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*> (::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::Decode)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x342ee08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::Encode)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x342efa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding.CheckValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(
        &::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::CheckValue)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x342f06c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding.DecodeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::*)(::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<uint8_t>, int32_t, int32_t)>(
        &::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::DecodeValue)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x342f104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding.EncodeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::EncodeValue)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x342f1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::*)()>(&::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x342f310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::setStaticF_Instance(::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*, "Instance", ::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*>(
      std::forward<::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*>(value));
}
inline ::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding* Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*, "Instance", ::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*>();
}
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::Decode(::Org::BouncyCastle::Math::BigInteger* n, ::ArrayW<uint8_t> encoding) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(this, ___internal_method, n, encoding);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::Encode(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* r,
                                                                                      ::Org::BouncyCastle::Math::BigInteger* s) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, n, r, s);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::CheckValue(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* x) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, n, x);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::DecodeValue(::Org::BouncyCastle::Math::BigInteger* n, ::ArrayW<uint8_t> buf, int32_t off,
                                                                                                                int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, n, buf, off, len);
}
inline void Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::EncodeValue(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* x, ::ArrayW<uint8_t> buf, int32_t off,
                                                                              int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n, x, buf, off, len);
}
inline void Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding* Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Signers::IDsaEncoding"
constexpr Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::operator ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Signers::IDsaEncoding"
constexpr ::Org::BouncyCastle::Crypto::Signers::IDsaEncoding* Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::i___Org__BouncyCastle__Crypto__Signers__IDsaEncoding() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Signers::IDsaEncoding*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Signers::PlainDsaEncoding::PlainDsaEncoding() {}
