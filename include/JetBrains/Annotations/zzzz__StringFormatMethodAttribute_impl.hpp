#pragma once
// IWYU pragma private; include "JetBrains/Annotations/StringFormatMethodAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__StringFormatMethodAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::StringFormatMethodAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::StringFormatMethodAttribute::*)(::StringW)>(&::JetBrains::Annotations::StringFormatMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3a8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::StringFormatMethodAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::StringFormatMethodAttribute.get_FormatParameterName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::JetBrains::Annotations::StringFormatMethodAttribute::*)()>(
    &::JetBrains::Annotations::StringFormatMethodAttribute::get_FormatParameterName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3a8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::StringFormatMethodAttribute*>(), { "get_FormatParameterName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::StringFormatMethodAttribute.set_FormatParameterName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::StringFormatMethodAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::StringFormatMethodAttribute::set_FormatParameterName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3a8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::StringFormatMethodAttribute*>(), { "set_FormatParameterName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& JetBrains::Annotations::StringFormatMethodAttribute::__cordl_internal_get__FormatParameterName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FormatParameterName_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::StringFormatMethodAttribute::__cordl_internal_get__FormatParameterName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FormatParameterName_k__BackingField;
}
constexpr void JetBrains::Annotations::StringFormatMethodAttribute::__cordl_internal_set__FormatParameterName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____FormatParameterName_k__BackingField = value;
}
inline void JetBrains::Annotations::StringFormatMethodAttribute::_ctor(::StringW formatParameterName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::StringFormatMethodAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formatParameterName);
}
inline ::StringW JetBrains::Annotations::StringFormatMethodAttribute::get_FormatParameterName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::StringFormatMethodAttribute*>(), { "get_FormatParameterName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void JetBrains::Annotations::StringFormatMethodAttribute::set_FormatParameterName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::StringFormatMethodAttribute*>(), { "set_FormatParameterName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::JetBrains::Annotations::StringFormatMethodAttribute* JetBrains::Annotations::StringFormatMethodAttribute::New_ctor(::StringW formatParameterName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::StringFormatMethodAttribute*>(formatParameterName));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::StringFormatMethodAttribute::StringFormatMethodAttribute() {}
