#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Asn1\Cms\Attribute.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__Attribute_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Set_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::Attribute.GetInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Cms::Attribute* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::Cms::Attribute::GetInstance)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3352460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Attribute*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::Attribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::Attribute::*)(::Org::BouncyCastle::Asn1::Asn1Sequence*)>(
    &::Org::BouncyCastle::Asn1::Cms::Attribute::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x33525e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Attribute*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::Attribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::Attribute::*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*, ::Org::BouncyCastle::Asn1::Asn1Set*)>(
    &::Org::BouncyCastle::Asn1::Cms::Attribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335273c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Attribute*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::Attribute.get_AttrType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Asn1::Cms::Attribute::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::Attribute::get_AttrType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3352744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Attribute*>(), { "get_AttrType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::Attribute.get_AttrValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Set* (::Org::BouncyCastle::Asn1::Cms::Attribute::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::Attribute::get_AttrValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x335274c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Attribute*>(), { "get_AttrValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::Attribute.ToAsn1Object
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::Cms::Attribute::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::Attribute::ToAsn1Object)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3352754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Attribute*>(), { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Attribute*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Asn1::Cms::Attribute::__cordl_internal_get_attrType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrType;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Asn1::Cms::Attribute::__cordl_internal_get_attrType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrType;
}
constexpr void Org::BouncyCastle::Asn1::Cms::Attribute::__cordl_internal_set_attrType(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attrType = value;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set*& Org::BouncyCastle::Asn1::Cms::Attribute::__cordl_internal_get_attrValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrValues;
}
constexpr ::Org::BouncyCastle::Asn1::Asn1Set* const& Org::BouncyCastle::Asn1::Cms::Attribute::__cordl_internal_get_attrValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrValues;
}
constexpr void Org::BouncyCastle::Asn1::Cms::Attribute::__cordl_internal_set_attrValues(::Org::BouncyCastle::Asn1::Asn1Set* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attrValues = value;
}
inline ::Org::BouncyCastle::Asn1::Cms::Attribute* Org::BouncyCastle::Asn1::Cms::Attribute::GetInstance(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Attribute*>(), { "GetInstance", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::Attribute*>(nullptr, ___internal_method, obj);
}
inline void Org::BouncyCastle::Asn1::Cms::Attribute::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Attribute*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Sequence*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Asn1::Cms::Attribute::_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* attrType, ::Org::BouncyCastle::Asn1::Asn1Set* attrValues) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Attribute*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::Asn1Set*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attrType, attrValues);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Asn1::Cms::Attribute::get_AttrType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Attribute*>(), { "get_AttrType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Set* Org::BouncyCastle::Asn1::Cms::Attribute::get_AttrValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Attribute*>(), { "get_AttrValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Set*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::Cms::Attribute::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Asn1::Cms::Attribute*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::Attribute* Org::BouncyCastle::Asn1::Cms::Attribute::New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::Attribute*>(seq));
}
inline ::Org::BouncyCastle::Asn1::Cms::Attribute* Org::BouncyCastle::Asn1::Cms::Attribute::New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* attrType,
                                                                                                    ::Org::BouncyCastle::Asn1::Asn1Set* attrValues) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Asn1::Cms::Attribute*>(attrType, attrValues));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::Attribute::Attribute() {}
