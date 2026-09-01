#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\X9\X9FieldElement.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9FieldElement_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetString_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECFieldElement_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X9FieldElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X9FieldElement::*)(::Org::BouncyCastle::Math::EC::ECFieldElement*)>(
    &::Org::BouncyCastle::Asn1::X9::X9FieldElement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x367e51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9FieldElement*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X9FieldElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X9FieldElement::*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Asn1::Asn1OctetString*)>(
    &::Org::BouncyCastle::Asn1::X9::X9FieldElement::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x367f868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9FieldElement*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X9FieldElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::X9::X9FieldElement::*)(int32_t, int32_t, int32_t, int32_t, ::Org::BouncyCastle::Asn1::Asn1OctetString*)>(
    &::Org::BouncyCastle::Asn1::X9::X9FieldElement::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x367f93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9FieldElement*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X9FieldElement.get_Value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (::Org::BouncyCastle::Asn1::X9::X9FieldElement::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X9FieldElement::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x367fa2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9FieldElement*>(), { "get_Value", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X9::X9FieldElement.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X9::X9FieldElement::*)()>(
    &::Org::BouncyCastle::Asn1::X9::X9FieldElement::ToAsn1Object)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x367fa34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9FieldElement*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9FieldElement*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement*& Org::BouncyCastle::Asn1::X9::X9FieldElement::__cordl_internal_get_f() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___f;
}
constexpr ::Org::BouncyCastle::Math::EC::ECFieldElement* const& Org::BouncyCastle::Asn1::X9::X9FieldElement::__cordl_internal_get_f() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___f;
}
constexpr void Org::BouncyCastle::Asn1::X9::X9FieldElement::__cordl_internal_set_f(::Org::BouncyCastle::Math::EC::ECFieldElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___f = value;
}
inline void Org::BouncyCastle::Asn1::X9::X9FieldElement::_ctor(::Org::BouncyCastle::Math::EC::ECFieldElement* f) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9FieldElement*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::EC::ECFieldElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, f);
}
inline void Org::BouncyCastle::Asn1::X9::X9FieldElement::_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Asn1::Asn1OctetString* s) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9FieldElement*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, s);
}
inline void Org::BouncyCastle::Asn1::X9::X9FieldElement::_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3, ::Org::BouncyCastle::Asn1::Asn1OctetString* s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9FieldElement*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1OctetString*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m, k1, k2, k3, s);
}
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Asn1::X9::X9FieldElement::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9FieldElement*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECFieldElement*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X9::X9FieldElement::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::X9::X9FieldElement*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X9::X9FieldElement* Org::BouncyCastle::Asn1::X9::X9FieldElement::New_ctor(::Org::BouncyCastle::Math::EC::ECFieldElement* f) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X9FieldElement*>(f));
}
inline ::Org::BouncyCastle::Asn1::X9::X9FieldElement* Org::BouncyCastle::Asn1::X9::X9FieldElement::New_ctor(::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Asn1::Asn1OctetString* s) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X9FieldElement*>(p, s));
}
inline ::Org::BouncyCastle::Asn1::X9::X9FieldElement* Org::BouncyCastle::Asn1::X9::X9FieldElement::New_ctor(int32_t m, int32_t k1, int32_t k2, int32_t k3,
                                                                                                            ::Org::BouncyCastle::Asn1::Asn1OctetString* s) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::X9::X9FieldElement*>(m, k1, k2, k3, s));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::X9::X9FieldElement::X9FieldElement() {}
