#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\BoolParameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BoolParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__BoolParameter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BoolParameter_DisplayType::BoolParameter_DisplayType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BoolParameter_DisplayType::BoolParameter_DisplayType() {}
constexpr ::UnityEngine::Rendering::BoolParameter_DisplayType UnityEngine::Rendering::BoolParameter_DisplayType::Checkbox{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::BoolParameter_DisplayType UnityEngine::Rendering::BoolParameter_DisplayType::EnumPopup{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::Rendering::BoolParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BoolParameter::*)(bool, bool)>(&::UnityEngine::Rendering::BoolParameter::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x67cc6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BoolParameter*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::BoolParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::BoolParameter::*)(bool, ::UnityEngine::Rendering::BoolParameter_DisplayType, bool)>(
    &::UnityEngine::Rendering::BoolParameter::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67cc728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BoolParameter*>(),
                                                { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::BoolParameter_DisplayType>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::BoolParameter_DisplayType& UnityEngine::Rendering::BoolParameter::__cordl_internal_get_displayType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayType;
}
constexpr ::UnityEngine::Rendering::BoolParameter_DisplayType const& UnityEngine::Rendering::BoolParameter::__cordl_internal_get_displayType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___displayType;
}
constexpr void UnityEngine::Rendering::BoolParameter::__cordl_internal_set_displayType(::UnityEngine::Rendering::BoolParameter_DisplayType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___displayType = value;
}
inline void UnityEngine::Rendering::BoolParameter::_ctor(bool value, bool overrideState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BoolParameter*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
inline void UnityEngine::Rendering::BoolParameter::_ctor(bool value, ::UnityEngine::Rendering::BoolParameter_DisplayType displayType, bool overrideState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::BoolParameter*>(),
                                              { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::BoolParameter_DisplayType>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, displayType, overrideState);
}
inline ::UnityEngine::Rendering::BoolParameter* UnityEngine::Rendering::BoolParameter::New_ctor(bool value, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::BoolParameter*>(value, overrideState));
}
inline ::UnityEngine::Rendering::BoolParameter* UnityEngine::Rendering::BoolParameter::New_ctor(bool value, ::UnityEngine::Rendering::BoolParameter_DisplayType displayType, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::BoolParameter*>(value, displayType, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BoolParameter::BoolParameter() {}
