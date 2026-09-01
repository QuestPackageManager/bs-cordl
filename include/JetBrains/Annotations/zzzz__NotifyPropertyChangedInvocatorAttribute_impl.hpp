#pragma once
// IWYU pragma private; include "JetBrains\Annotations\NotifyPropertyChangedInvocatorAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "JetBrains/Annotations/zzzz__NotifyPropertyChangedInvocatorAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::*)()>(
    &::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e3de9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3dea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute.get_ParameterName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::*)()>(
    &::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::get_ParameterName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3dea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>(), { "get_ParameterName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute.set_ParameterName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::*)(::StringW)>(
    &::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::set_ParameterName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e3deb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>(), { "set_ParameterName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::__cordl_internal_get__ParameterName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ParameterName_k__BackingField;
}
constexpr ::StringW const& JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::__cordl_internal_get__ParameterName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ParameterName_k__BackingField;
}
constexpr void JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::__cordl_internal_set__ParameterName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ParameterName_k__BackingField = value;
}
inline void JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::_ctor(::StringW parameterName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameterName);
}
inline ::StringW JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::get_ParameterName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>(), { "get_ParameterName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::set_ParameterName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>(), { "set_ParameterName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute* JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>());
}
inline ::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute* JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::New_ctor(::StringW parameterName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute*>(parameterName));
}
// Ctor Parameters []
constexpr ::JetBrains::Annotations::NotifyPropertyChangedInvocatorAttribute::NotifyPropertyChangedInvocatorAttribute() {}
