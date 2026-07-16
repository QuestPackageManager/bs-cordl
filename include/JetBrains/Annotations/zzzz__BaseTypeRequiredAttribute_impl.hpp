#pragma once
// IWYU pragma private; include "JetBrains/Annotations/BaseTypeRequiredAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__BaseTypeRequiredAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::BaseTypeRequiredAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::BaseTypeRequiredAttribute::*)(::System::Type*)>(&::JetBrains::Annotations::BaseTypeRequiredAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3a990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::BaseTypeRequiredAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::BaseTypeRequiredAttribute.get_BaseType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::JetBrains::Annotations::BaseTypeRequiredAttribute::*)()>(
    &::JetBrains::Annotations::BaseTypeRequiredAttribute::get_BaseType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3a998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::BaseTypeRequiredAttribute*>(), { "get_BaseType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::BaseTypeRequiredAttribute.set_BaseType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::BaseTypeRequiredAttribute::*)(::System::Type*)>(
    &::JetBrains::Annotations::BaseTypeRequiredAttribute::set_BaseType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3a9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::BaseTypeRequiredAttribute*>(), { "set_BaseType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& JetBrains::Annotations::BaseTypeRequiredAttribute::__cordl_internal_get__BaseType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BaseType_k__BackingField;
}
constexpr ::System::Type* const& JetBrains::Annotations::BaseTypeRequiredAttribute::__cordl_internal_get__BaseType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BaseType_k__BackingField;
}
constexpr void JetBrains::Annotations::BaseTypeRequiredAttribute::__cordl_internal_set__BaseType_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BaseType_k__BackingField = value;
}
inline void JetBrains::Annotations::BaseTypeRequiredAttribute::_ctor(::System::Type* baseType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::BaseTypeRequiredAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseType);
}
inline ::System::Type* JetBrains::Annotations::BaseTypeRequiredAttribute::get_BaseType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::BaseTypeRequiredAttribute*>(), { "get_BaseType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void JetBrains::Annotations::BaseTypeRequiredAttribute::set_BaseType(::System::Type* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::BaseTypeRequiredAttribute*>(), { "set_BaseType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::JetBrains::Annotations::BaseTypeRequiredAttribute* JetBrains::Annotations::BaseTypeRequiredAttribute::New_ctor(::System::Type* baseType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::BaseTypeRequiredAttribute*>(baseType));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::BaseTypeRequiredAttribute::BaseTypeRequiredAttribute() {}
