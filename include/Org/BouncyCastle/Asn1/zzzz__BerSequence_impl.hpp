#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\BerSequence.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerSequence_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerSequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerSequence.FromVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::BerSequence* (*)(::Org::BouncyCastle::Asn1::Asn1EncodableVector*)>(
    &::Org::BouncyCastle::Asn1::BerSequence::FromVector)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3687b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerSequence*>(), { "FromVector", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerSequence._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerSequence::*)()>(&::Org::BouncyCastle::Asn1::BerSequence::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x368b2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerSequence*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerSequence._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerSequence::*)(::Org::BouncyCastle::Asn1::Asn1Encodable*)>(&::Org::BouncyCastle::Asn1::BerSequence::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3685aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerSequence*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerSequence._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerSequence::*)(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*>)>(
    &::Org::BouncyCastle::Asn1::BerSequence::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x368b328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerSequence*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerSequence._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerSequence::*)(::Org::BouncyCastle::Asn1::Asn1EncodableVector*)>(
    &::Org::BouncyCastle::Asn1::BerSequence::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x368b268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerSequence*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::BerSequence.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::BerSequence::*)(::Org::BouncyCastle::Asn1::DerOutputStream*)>(
    &::Org::BouncyCastle::Asn1::BerSequence::Encode)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x368b390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerSequence*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::BerSequence*>(), 6 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::BerSequence::setStaticF_Empty(::Org::BouncyCastle::Asn1::BerSequence* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::BerSequence*, "Empty", ::Org::BouncyCastle::Asn1::BerSequence*>(std::forward<::Org::BouncyCastle::Asn1::BerSequence*>(value));
}
inline ::Org::BouncyCastle::Asn1::BerSequence* Org::BouncyCastle::Asn1::BerSequence::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::BerSequence*, "Empty", ::Org::BouncyCastle::Asn1::BerSequence*>();
}
inline ::Org::BouncyCastle::Asn1::BerSequence* Org::BouncyCastle::Asn1::BerSequence::FromVector(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerSequence*>(), { "FromVector", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::BerSequence*>(nullptr, ___internal_method, elementVector);
}
inline void Org::BouncyCastle::Asn1::BerSequence::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerSequence*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Asn1::BerSequence::_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerSequence*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Encodable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void Org::BouncyCastle::Asn1::BerSequence::_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*> elements) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerSequence*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elements);
}
inline void Org::BouncyCastle::Asn1::BerSequence::_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::BerSequence*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1EncodableVector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementVector);
}
inline void Org::BouncyCastle::Asn1::BerSequence::Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::BerSequence*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, derOut);
}
inline ::Org::BouncyCastle::Asn1::BerSequence* Org::BouncyCastle::Asn1::BerSequence::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerSequence*>());
}
inline ::Org::BouncyCastle::Asn1::BerSequence* Org::BouncyCastle::Asn1::BerSequence::New_ctor(::Org::BouncyCastle::Asn1::Asn1Encodable* element) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerSequence*>(element));
}
inline ::Org::BouncyCastle::Asn1::BerSequence* Org::BouncyCastle::Asn1::BerSequence::New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Asn1Encodable*> elements) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerSequence*>(elements));
}
inline ::Org::BouncyCastle::Asn1::BerSequence* Org::BouncyCastle::Asn1::BerSequence::New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::BerSequence*>(elementVector));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::BerSequence::BerSequence() {}
