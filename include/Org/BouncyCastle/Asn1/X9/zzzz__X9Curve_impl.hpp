#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X9/X9Curve.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9Curve_def.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9FieldID_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X9Curve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X9Curve::*)(::Org::BouncyCastle::Math::EC::ECCurve*)>(&::Org::BouncyCastle::Asn1::X9::X9Curve::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x367b370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9Curve*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X9Curve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X9Curve::*)(::Org::BouncyCastle::Math::EC::ECCurve*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Asn1::X9::X9Curve::_ctor)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x367b378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9Curve*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X9Curve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X9Curve::*)(::Org::BouncyCastle::Asn1::X9::X9FieldID*, ::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X9::X9Curve::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x367b508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9Curve*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X9::X9FieldID*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X9Curve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X9Curve::*)(::Org::BouncyCastle::Asn1::X9::X9FieldID*, ::Org::BouncyCastle::Math::BigInteger*,
                                                                                                        ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::X9::X9Curve::_ctor)> {
  constexpr static std::size_t size = 0x714;
  constexpr static std::size_t addrs = 0x367b518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9Curve*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Asn1::X9::X9FieldID*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X9Curve.get_Curve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve* (::Org::BouncyCastle::Asn1::X9::X9Curve::*)()>(&::Org::BouncyCastle::Asn1::X9::X9Curve::get_Curve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x367bf24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9Curve*>(), { "get_Curve", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X9Curve.GetSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Asn1::X9::X9Curve::*)()>(&::Org::BouncyCastle::Asn1::X9::X9Curve::GetSeed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x367bf2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9Curve*>(), { "GetSeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X9Curve.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X9::X9Curve::*)()>(&::Org::BouncyCastle::Asn1::X9::X9Curve::ToAsn1Object)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x367bf8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9Curve*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9Curve*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::ECCurve*& Org::BouncyCastle::Asn1::X9::X9Curve::__cordl_internal_get_curve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curve;
}
constexpr ::Org::BouncyCastle::Math::EC::ECCurve* const& Org::BouncyCastle::Asn1::X9::X9Curve::__cordl_internal_get_curve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curve;
}
constexpr void Org::BouncyCastle::Asn1::X9::X9Curve::__cordl_internal_set_curve(::Org::BouncyCastle::Math::EC::ECCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___curve = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Asn1::X9::X9Curve::__cordl_internal_get_seed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seed;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Asn1::X9::X9Curve::__cordl_internal_get_seed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seed;
}
constexpr void Org::BouncyCastle::Asn1::X9::X9Curve::__cordl_internal_set_seed(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___seed = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Asn1::X9::X9Curve::__cordl_internal_get_fieldIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fieldIdentifier;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Asn1::X9::X9Curve::__cordl_internal_get_fieldIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fieldIdentifier;
}
constexpr void Org::BouncyCastle::Asn1::X9::X9Curve::__cordl_internal_set_fieldIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fieldIdentifier = value;
}
inline void Org::BouncyCastle::Asn1::X9::X9Curve::_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9Curve*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curve);
}
inline void Org::BouncyCastle::Asn1::X9::X9Curve::_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::ArrayW<uint8_t> seed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9Curve*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECCurve*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curve, seed);
}
inline void Org::BouncyCastle::Asn1::X9::X9Curve::_ctor(::Org::BouncyCastle::Asn1::X9::X9FieldID* fieldID, ::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9Curve*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::X9::X9FieldID*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fieldID, seq);
}
inline void Org::BouncyCastle::Asn1::X9::X9Curve::_ctor(::Org::BouncyCastle::Asn1::X9::X9FieldID* fieldID, ::Org::BouncyCastle::Math::BigInteger* order,
                                                        ::Org::BouncyCastle::Math::BigInteger* cofactor, ::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9Curve*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Asn1::X9::X9FieldID*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fieldID, order, cofactor, seq);
}
inline ::Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Asn1::X9::X9Curve::get_Curve() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9Curve*>(), { "get_Curve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Asn1::X9::X9Curve::GetSeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9Curve*>(), { "GetSeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X9::X9Curve::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9Curve*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9Curve* Org::BouncyCastle::Asn1::X9::X9Curve::New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X9Curve*>(curve));
}
inline ::Org::BouncyCastle::Asn1::X9::X9Curve* Org::BouncyCastle::Asn1::X9::X9Curve::New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::ArrayW<uint8_t> seed) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X9Curve*>(curve, seed));
}
inline ::Org::BouncyCastle::Asn1::X9::X9Curve* Org::BouncyCastle::Asn1::X9::X9Curve::New_ctor(::Org::BouncyCastle::Asn1::X9::X9FieldID* fieldID, ::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X9Curve*>(fieldID, seq));
}
inline ::Org::BouncyCastle::Asn1::X9::X9Curve* Org::BouncyCastle::Asn1::X9::X9Curve::New_ctor(::Org::BouncyCastle::Asn1::X9::X9FieldID* fieldID, ::Org::BouncyCastle::Math::BigInteger* order,
                                                                                              ::Org::BouncyCastle::Math::BigInteger* cofactor, ::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X9Curve*>(fieldID, order, cofactor, seq));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X9Curve::X9Curve() {}
