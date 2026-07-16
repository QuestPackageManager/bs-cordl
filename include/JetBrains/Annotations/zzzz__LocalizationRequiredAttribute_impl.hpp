#pragma once
// IWYU pragma private; include "JetBrains/Annotations/LocalizationRequiredAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__LocalizationRequiredAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::LocalizationRequiredAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::LocalizationRequiredAttribute::*)()>(&::JetBrains::Annotations::LocalizationRequiredAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e3a968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::LocalizationRequiredAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::LocalizationRequiredAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::LocalizationRequiredAttribute::*)(bool)>(&::JetBrains::Annotations::LocalizationRequiredAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3a974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::LocalizationRequiredAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::LocalizationRequiredAttribute.get_Required
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::JetBrains::Annotations::LocalizationRequiredAttribute::*)()>(&::JetBrains::Annotations::LocalizationRequiredAttribute::get_Required)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3a97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::LocalizationRequiredAttribute*>(), { "get_Required", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::LocalizationRequiredAttribute.set_Required
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::LocalizationRequiredAttribute::*)(bool)>(
    &::JetBrains::Annotations::LocalizationRequiredAttribute::set_Required)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3a984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::LocalizationRequiredAttribute*>(), { "set_Required", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& JetBrains::Annotations::LocalizationRequiredAttribute::__cordl_internal_get__Required_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Required_k__BackingField;
}
constexpr bool const& JetBrains::Annotations::LocalizationRequiredAttribute::__cordl_internal_get__Required_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Required_k__BackingField;
}
constexpr void JetBrains::Annotations::LocalizationRequiredAttribute::__cordl_internal_set__Required_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Required_k__BackingField = value;
}
inline void JetBrains::Annotations::LocalizationRequiredAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::LocalizationRequiredAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JetBrains::Annotations::LocalizationRequiredAttribute::_ctor(bool required) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::LocalizationRequiredAttribute*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, required);
}
inline bool JetBrains::Annotations::LocalizationRequiredAttribute::get_Required() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::LocalizationRequiredAttribute*>(), { "get_Required", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void JetBrains::Annotations::LocalizationRequiredAttribute::set_Required(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::LocalizationRequiredAttribute*>(), { "set_Required", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::JetBrains::Annotations::LocalizationRequiredAttribute* JetBrains::Annotations::LocalizationRequiredAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::LocalizationRequiredAttribute*>());
}
inline ::JetBrains::Annotations::LocalizationRequiredAttribute* JetBrains::Annotations::LocalizationRequiredAttribute::New_ctor(bool required) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::LocalizationRequiredAttribute*>(required));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::LocalizationRequiredAttribute::LocalizationRequiredAttribute() {}
