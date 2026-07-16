#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AspTypePropertyAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__AspTypePropertyAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::AspTypePropertyAttribute.get_CreateConstructorReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JetBrains::Annotations::AspTypePropertyAttribute::*)()>(
    &::JetBrains::Annotations::AspTypePropertyAttribute::get_CreateConstructorReferences)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3acc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspTypePropertyAttribute*>(), { "get_CreateConstructorReferences", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspTypePropertyAttribute.set_CreateConstructorReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::AspTypePropertyAttribute::*)(bool)>(
    &::JetBrains::Annotations::AspTypePropertyAttribute::set_CreateConstructorReferences)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3accc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspTypePropertyAttribute*>(), { "set_CreateConstructorReferences", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspTypePropertyAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::AspTypePropertyAttribute::*)(bool)>(&::JetBrains::Annotations::AspTypePropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3acd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspTypePropertyAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& JetBrains::Annotations::AspTypePropertyAttribute::__cordl_internal_get__CreateConstructorReferences_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CreateConstructorReferences_k__BackingField;
}
constexpr bool const& JetBrains::Annotations::AspTypePropertyAttribute::__cordl_internal_get__CreateConstructorReferences_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CreateConstructorReferences_k__BackingField;
}
constexpr void JetBrains::Annotations::AspTypePropertyAttribute::__cordl_internal_set__CreateConstructorReferences_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CreateConstructorReferences_k__BackingField = value;
}
inline bool JetBrains::Annotations::AspTypePropertyAttribute::get_CreateConstructorReferences() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspTypePropertyAttribute*>(), { "get_CreateConstructorReferences", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JetBrains::Annotations::AspTypePropertyAttribute::set_CreateConstructorReferences(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspTypePropertyAttribute*>(), { "set_CreateConstructorReferences", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void JetBrains::Annotations::AspTypePropertyAttribute::_ctor(bool createConstructorReferences) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspTypePropertyAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, createConstructorReferences);
}
inline ::JetBrains::Annotations::AspTypePropertyAttribute* JetBrains::Annotations::AspTypePropertyAttribute::New_ctor(bool createConstructorReferences) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::AspTypePropertyAttribute*>(createConstructorReferences));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::AspTypePropertyAttribute::AspTypePropertyAttribute() {}
