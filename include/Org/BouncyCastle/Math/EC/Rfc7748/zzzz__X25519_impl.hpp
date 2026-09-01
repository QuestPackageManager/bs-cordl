#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\EC\Rfc7748\X25519.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Rfc7748/zzzz__X25519_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc7748::X25519.CalculateAgreement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc7748::X25519::CalculateAgreement)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x351253c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc7748::X25519*>(),
                                                                                           { "CalculateAgreement",
                                                                                             {},
                                                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc7748::X25519.Decode32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc7748::X25519::Decode32)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3512918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc7748::X25519*>(), { "Decode32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc7748::X25519.DecodeScalar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint32_t>)>(&::Org::BouncyCastle::Math::EC::Rfc7748::X25519::DecodeScalar)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3512980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc7748::X25519*>(),
                                                             { "DecodeScalar", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc7748::X25519.GeneratePrivateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Security::SecureRandom*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Math::EC::Rfc7748::X25519::GeneratePrivateKey)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3512a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc7748::X25519*>(),
                                                             { "GeneratePrivateKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc7748::X25519.GeneratePublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc7748::X25519::GeneratePublicKey)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3512a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc7748::X25519*>(),
                            { "GeneratePublicKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc7748::X25519.PointDouble
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, ::ArrayW<int32_t>)>(&::Org::BouncyCastle::Math::EC::Rfc7748::X25519::PointDouble)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3512b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc7748::X25519*>(),
                                                                                           { "PointDouble", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc7748::X25519.Precompute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Org::BouncyCastle::Math::EC::Rfc7748::X25519::Precompute)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x35137a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc7748::X25519*>(), { "Precompute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc7748::X25519.ScalarMult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Math::EC::Rfc7748::X25519::ScalarMult)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x35125f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc7748::X25519*>(),
                                                                                           { "ScalarMult",
                                                                                             {},
                                                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc7748::X25519.ScalarMultBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Math::EC::Rfc7748::X25519::ScalarMultBase)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3512a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc7748::X25519*>(),
                            { "ScalarMultBase", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Rfc7748::X25519._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::EC::Rfc7748::X25519::*)()>(&::Org::BouncyCastle::Math::EC::Rfc7748::X25519::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3514490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc7748::X25519*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool Org::BouncyCastle::Math::EC::Rfc7748::X25519::CalculateAgreement(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint8_t> u, int32_t uOff, ::ArrayW<uint8_t> r, int32_t rOff) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc7748::X25519*>(),
                                                                                         { "CalculateAgreement",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, k, kOff, u, uOff, r, rOff);
}
inline uint32_t Org::BouncyCastle::Math::EC::Rfc7748::X25519::Decode32(::ArrayW<uint8_t> bs, int32_t off) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc7748::X25519*>(), { "Decode32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, bs, off);
}
inline void Org::BouncyCastle::Math::EC::Rfc7748::X25519::DecodeScalar(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint32_t> n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc7748::X25519*>(),
                                                           { "DecodeScalar", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, k, kOff, n);
}
inline void Org::BouncyCastle::Math::EC::Rfc7748::X25519::GeneratePrivateKey(::Org::BouncyCastle::Security::SecureRandom* random, ::ArrayW<uint8_t> k) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc7748::X25519*>(),
                                                           { "GeneratePrivateKey", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, random, k);
}
inline void Org::BouncyCastle::Math::EC::Rfc7748::X25519::GeneratePublicKey(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint8_t> r, int32_t rOff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc7748::X25519*>(),
                          { "GeneratePublicKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, k, kOff, r, rOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc7748::X25519::PointDouble(::ArrayW<int32_t> x, ::ArrayW<int32_t> z) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc7748::X25519*>(),
                                                                                         { "PointDouble", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, x, z);
}
inline void Org::BouncyCastle::Math::EC::Rfc7748::X25519::Precompute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc7748::X25519*>(), { "Precompute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Org::BouncyCastle::Math::EC::Rfc7748::X25519::ScalarMult(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint8_t> u, int32_t uOff, ::ArrayW<uint8_t> r, int32_t rOff) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc7748::X25519*>(),
                                                                                         { "ScalarMult",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, k, kOff, u, uOff, r, rOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc7748::X25519::ScalarMultBase(::ArrayW<uint8_t> k, int32_t kOff, ::ArrayW<uint8_t> r, int32_t rOff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc7748::X25519*>(),
                                       { "ScalarMultBase", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, k, kOff, r, rOff);
}
inline void Org::BouncyCastle::Math::EC::Rfc7748::X25519::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::EC::Rfc7748::X25519*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Rfc7748::X25519* Org::BouncyCastle::Math::EC::Rfc7748::X25519::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::EC::Rfc7748::X25519*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Rfc7748::X25519::X25519() {}
