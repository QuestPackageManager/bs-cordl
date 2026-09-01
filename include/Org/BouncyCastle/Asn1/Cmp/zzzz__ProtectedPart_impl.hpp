#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cmp\ProtectedPart.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__ProtectedPart_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiBody_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiHeader_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::ProtectedPart._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::ProtectedPart::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cmp::ProtectedPart::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3350b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ProtectedPart*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::ProtectedPart.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::ProtectedPart* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cmp::ProtectedPart::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3350bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ProtectedPart*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::ProtectedPart._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cmp::ProtectedPart::*)(::Org::BouncyCastle::Asn1::Cmp::PkiHeader*, ::Org::BouncyCastle::Asn1::Cmp::PkiBody*)>(
    &::Org::BouncyCastle::Asn1::Cmp::ProtectedPart::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3350d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ProtectedPart*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiBody*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::ProtectedPart.get_Header
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeader* (::Org::BouncyCastle::Asn1::Cmp::ProtectedPart::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::ProtectedPart::get_Header)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3350d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ProtectedPart*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ProtectedPart*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::ProtectedPart.get_Body
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiBody* (::Org::BouncyCastle::Asn1::Cmp::ProtectedPart::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::ProtectedPart::get_Body)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3350d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ProtectedPart*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ProtectedPart*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cmp::ProtectedPart.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cmp::ProtectedPart::*)()>(
    &::Org::BouncyCastle::Asn1::Cmp::ProtectedPart::ToAsn1Object)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3350d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ProtectedPart*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ProtectedPart*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiHeader*& Org::BouncyCastle::Asn1::Cmp::ProtectedPart::__cordl_internal_get_header() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___header;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* const& Org::BouncyCastle::Asn1::Cmp::ProtectedPart::__cordl_internal_get_header() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___header;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::ProtectedPart::__cordl_internal_set_header(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___header = value;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiBody*& Org::BouncyCastle::Asn1::Cmp::ProtectedPart::__cordl_internal_get_body() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___body;
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiBody* const& Org::BouncyCastle::Asn1::Cmp::ProtectedPart::__cordl_internal_get_body() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___body;
}
constexpr void Org::BouncyCastle::Asn1::Cmp::ProtectedPart::__cordl_internal_set_body(::Org::BouncyCastle::Asn1::Cmp::PkiBody* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___body = value;
}
inline void Org::BouncyCastle::Asn1::Cmp::ProtectedPart::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ProtectedPart*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::Cmp::ProtectedPart* Org::BouncyCastle::Asn1::Cmp::ProtectedPart::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ProtectedPart*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::ProtectedPart*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Cmp::ProtectedPart::_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header, ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ProtectedPart*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Cmp::PkiBody*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header, body);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* Org::BouncyCastle::Asn1::Cmp::ProtectedPart::get_Header() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ProtectedPart*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeader*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::PkiBody* Org::BouncyCastle::Asn1::Cmp::ProtectedPart::get_Body() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ProtectedPart*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiBody*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cmp::ProtectedPart::ToAsn1Object() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cmp::ProtectedPart*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cmp::ProtectedPart* Org::BouncyCastle::Asn1::Cmp::ProtectedPart::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::ProtectedPart*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Cmp::ProtectedPart* Org::BouncyCastle::Asn1::Cmp::ProtectedPart::New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiHeader* header,
                                                                                                            ::Org::BouncyCastle::Asn1::Cmp::PkiBody* body) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cmp::ProtectedPart*>(header, body));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cmp::ProtectedPart::ProtectedPart() {}
