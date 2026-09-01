#pragma once
// IWYU pragma private; include "JetBrains\Annotations\AspRequiredAttributeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__AspRequiredAttributeAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::AspRequiredAttributeAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::AspRequiredAttributeAttribute::*)(::StringW)>(&::JetBrains::Annotations::AspRequiredAttributeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspRequiredAttributeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspRequiredAttributeAttribute.get_Attribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::JetBrains::Annotations::AspRequiredAttributeAttribute::*)()>(
    &::JetBrains::Annotations::AspRequiredAttributeAttribute::get_Attribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspRequiredAttributeAttribute*>(), { "get_Attribute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspRequiredAttributeAttribute.set_Attribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::AspRequiredAttributeAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::AspRequiredAttributeAttribute::set_Attribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3e244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspRequiredAttributeAttribute*>(), { "set_Attribute", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& JetBrains::Annotations::AspRequiredAttributeAttribute::__cordl_internal_get__Attribute_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Attribute_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::AspRequiredAttributeAttribute::__cordl_internal_get__Attribute_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Attribute_k__BackingField;
}
constexpr void JetBrains::Annotations::AspRequiredAttributeAttribute::__cordl_internal_set__Attribute_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Attribute_k__BackingField = value;
}
inline void JetBrains::Annotations::AspRequiredAttributeAttribute::_ctor(::StringW attribute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspRequiredAttributeAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attribute);
}
inline ::StringW JetBrains::Annotations::AspRequiredAttributeAttribute::get_Attribute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspRequiredAttributeAttribute*>(), { "get_Attribute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void JetBrains::Annotations::AspRequiredAttributeAttribute::set_Attribute(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspRequiredAttributeAttribute*>(), { "set_Attribute", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::JetBrains::Annotations::AspRequiredAttributeAttribute* JetBrains::Annotations::AspRequiredAttributeAttribute::New_ctor(::StringW attribute) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::AspRequiredAttributeAttribute*>(attribute));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::AspRequiredAttributeAttribute::AspRequiredAttributeAttribute() {}
