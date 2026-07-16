#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AspMvcAreaViewLocationFormatAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__AspMvcAreaViewLocationFormatAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3ab10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute.get_Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute::*)()>(
    &::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute::get_Format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3ab18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute*>(), { "get_Format", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute.set_Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute::set_Format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3ab20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute*>(), { "set_Format", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute::__cordl_internal_get__Format_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Format_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute::__cordl_internal_get__Format_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Format_k__BackingField;
}
constexpr void JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute::__cordl_internal_set__Format_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Format_k__BackingField = value;
}
inline void JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute::_ctor(::StringW format) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format);
}
inline ::StringW JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute::get_Format() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute*>(), { "get_Format", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute::set_Format(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute*>(), { "set_Format", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute* JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute::New_ctor(::StringW format) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute*>(format));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute::AspMvcAreaViewLocationFormatAttribute() {}
