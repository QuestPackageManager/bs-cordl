#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Utilities\DisplayStringFormatAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__DisplayStringFormatAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute.get_formatString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::*)()>(
    &::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::get_formatString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65014b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute*>(), { "get_formatString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute.set_formatString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::*)(::StringW)>(
    &::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::set_formatString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65014bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute*>(), { "set_formatString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::*)(::StringW)>(
    &::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65014c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::__cordl_internal_get__formatString_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formatString_k__BackingField;
}
constexpr ::StringW const& UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::__cordl_internal_get__formatString_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formatString_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::__cordl_internal_set__formatString_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____formatString_k__BackingField = value;
}
inline ::StringW UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::get_formatString() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute*>(), { "get_formatString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::set_formatString(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute*>(), { "set_formatString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::_ctor(::StringW formatString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formatString);
}
inline ::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute* UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::New_ctor(::StringW formatString) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute*>(formatString));
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute::DisplayStringFormatAttribute() {}
