#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\ECDomainParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECDomainParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParameters_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)(::Org::BouncyCastle::Asn1::X9::X9ECParameters*)>(
    &::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x340f9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)(
    ::Org::BouncyCastle::Math::EC::ECCurve*, ::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x340fb6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)(
    ::Org::BouncyCastle::Math::EC::ECCurve*, ::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x340fbfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)(
    ::Org::BouncyCastle::Math::EC::ECCurve*, ::Org::BouncyCastle::Math::EC::ECPoint*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x340fa2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(),
                                ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters.get_Curve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::get_Curve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x340fd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), { "get_Curve", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters.get_G
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::get_G)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x340fd38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), { "get_G", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters.get_N
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::get_N)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x340fd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), { "get_N", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters.get_H
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::get_H)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x340fd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), { "get_H", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters.get_HInv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::get_HInv)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x340fd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), { "get_HInv", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters.GetSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::GetSeed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x340fe10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), { "GetSeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)(::System::Object*)>(
    &::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::Equals)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x340fe70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*)>(
    &::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x340ff24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::GetHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x340ffac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters.ValidatePrivateScalar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::ValidatePrivateScalar)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3410028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(),
                                                                                           { "ValidatePrivateScalar", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters.ValidatePublicPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (
    ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::*)(::Org::BouncyCastle::Math::EC::ECPoint*)>(&::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::ValidatePublicPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3410164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(),
                                                                                           { "ValidatePublicPoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters.ValidatePublicPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (*)(::Org::BouncyCastle::Math::EC::ECCurve*, ::Org::BouncyCastle::Math::EC::ECPoint*)>(
    &::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::ValidatePublicPoint)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x340fc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(),
                                         { "ValidatePublicPoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::__cordl_internal_get_curve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curve;
}
constexpr ::Org::BouncyCastle::Math::EC::ECCurve* const& Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::__cordl_internal_get_curve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curve;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::__cordl_internal_set_curve(::Org::BouncyCastle::Math::EC::ECCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curve = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::__cordl_internal_get_seed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seed;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::__cordl_internal_get_seed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seed;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::__cordl_internal_set_seed(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___seed = value;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::__cordl_internal_get_g() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr ::Org::BouncyCastle::Math::EC::ECPoint* const& Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::__cordl_internal_get_g() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::__cordl_internal_set_g(::Org::BouncyCastle::Math::EC::ECPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___g = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::__cordl_internal_get_n() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___n;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::__cordl_internal_get_n() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___n;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::__cordl_internal_set_n(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___n = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::__cordl_internal_get_h() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___h;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::__cordl_internal_get_h() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___h;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::__cordl_internal_set_h(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___h = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::__cordl_internal_get_hInv() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hInv;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::__cordl_internal_get_hInv() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hInv;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::__cordl_internal_set_hInv(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hInv = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::_ctor(::Org::BouncyCastle::Asn1::X9::X9ECParameters* x9) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X9::X9ECParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x9);
}
inline void Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g,
                                                                             ::Org::BouncyCastle::Math::BigInteger* n) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curve, g, n);
}
inline void Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g,
                                                                             ::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* h) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curve, g, n, h);
}
inline void Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g,
                                                                             ::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* h, ::ArrayW<uint8_t> seed) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>(),
                              ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curve, g, n, h, seed);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::get_Curve() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), { "get_Curve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::get_G() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), { "get_G", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::get_N() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), { "get_N", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::get_H() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), { "get_H", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::get_HInv() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), { "get_HInv", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::GetSeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), { "GetSeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::Equals(::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* other) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::ValidatePrivateScalar(::Org::BouncyCastle::Math::BigInteger* d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(),
                                                                                         { "ValidatePrivateScalar", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, d);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::ValidatePublicPoint(::Org::BouncyCastle::Math::EC::ECPoint* q) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(),
                                                                                         { "ValidatePublicPoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(this, ___internal_method, q);
}
inline ::Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::ValidatePublicPoint(::Org::BouncyCastle::Math::EC::ECCurve* c,
                                                                                                                              ::Org::BouncyCastle::Math::EC::ECPoint* q) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(),
                                       { "ValidatePublicPoint", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint*>(nullptr, ___internal_method, c, q);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::New_ctor(::Org::BouncyCastle::Asn1::X9::X9ECParameters* x9) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(x9));
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve,
                                                                                                                                        ::Org::BouncyCastle::Math::EC::ECPoint* g,
                                                                                                                                        ::Org::BouncyCastle::Math::BigInteger* n) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(curve, g, n));
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve,
                                                                                                                                        ::Org::BouncyCastle::Math::EC::ECPoint* g,
                                                                                                                                        ::Org::BouncyCastle::Math::BigInteger* n,
                                                                                                                                        ::Org::BouncyCastle::Math::BigInteger* h) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(curve, g, n, h));
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*
Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::ECPoint* g, ::Org::BouncyCastle::Math::BigInteger* n,
                                                                    ::Org::BouncyCastle::Math::BigInteger* h, ::ArrayW<uint8_t> seed) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*>(curve, g, n, h, seed));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters::ECDomainParameters() {}
