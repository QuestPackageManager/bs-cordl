#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimeFieldAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimeFieldAttribute_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimeFieldAttribute_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode::TimeFieldAttribute_UseEditMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode::TimeFieldAttribute_UseEditMode() {}
constexpr ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode UnityEngine::Timeline::TimeFieldAttribute_UseEditMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode UnityEngine::Timeline::TimeFieldAttribute_UseEditMode::ApplyEditMode{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Timeline::TimeFieldAttribute.get_useEditMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode (::UnityEngine::Timeline::TimeFieldAttribute::*)()>(
    &::UnityEngine::Timeline::TimeFieldAttribute::get_useEditMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c5c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeFieldAttribute*>(), { "get_useEditMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeFieldAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::TimeFieldAttribute::*)(::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode)>(
    &::UnityEngine::Timeline::TimeFieldAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69c5c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeFieldAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode& UnityEngine::Timeline::TimeFieldAttribute::__cordl_internal_get__useEditMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useEditMode_k__BackingField;
}
constexpr ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode const& UnityEngine::Timeline::TimeFieldAttribute::__cordl_internal_get__useEditMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useEditMode_k__BackingField;
}
constexpr void UnityEngine::Timeline::TimeFieldAttribute::__cordl_internal_set__useEditMode_k__BackingField(::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useEditMode_k__BackingField = value;
}
inline ::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode UnityEngine::Timeline::TimeFieldAttribute::get_useEditMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeFieldAttribute*>(), { "get_useEditMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TimeFieldAttribute::_ctor(::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode useEditMode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::TimeFieldAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useEditMode);
}
inline ::UnityEngine::Timeline::TimeFieldAttribute* UnityEngine::Timeline::TimeFieldAttribute::New_ctor(::UnityEngine::Timeline::TimeFieldAttribute_UseEditMode useEditMode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::TimeFieldAttribute*>(useEditMode));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimeFieldAttribute::TimeFieldAttribute() {}
