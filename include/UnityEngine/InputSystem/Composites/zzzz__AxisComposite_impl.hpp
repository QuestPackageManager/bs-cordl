#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Composites/AxisComposite.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_impl.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__AxisComposite_def.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__AxisComposite_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins::AxisComposite_WhichSideWins(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins::AxisComposite_WhichSideWins() {}
constexpr ::UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins::Neither{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins::Positive{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins::Negative{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::AxisComposite.get_midPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Composites::AxisComposite::*)()>(&::UnityEngine::InputSystem::Composites::AxisComposite::get_midPoint)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x65062f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::AxisComposite*>(), { "get_midPoint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::AxisComposite.ReadValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Composites::AxisComposite::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(
    &::UnityEngine::InputSystem::Composites::AxisComposite::ReadValue)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x650630c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::AxisComposite*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Composites::AxisComposite*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::AxisComposite.EvaluateMagnitude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Composites::AxisComposite::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(
    &::UnityEngine::InputSystem::Composites::AxisComposite::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6506420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::AxisComposite*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Composites::AxisComposite*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::AxisComposite._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Composites::AxisComposite::*)()>(&::UnityEngine::InputSystem::Composites::AxisComposite::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6506468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::AxisComposite*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::Composites::AxisComposite::__cordl_internal_get_negative() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___negative;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::AxisComposite::__cordl_internal_get_negative() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___negative;
}
constexpr void UnityEngine::InputSystem::Composites::AxisComposite::__cordl_internal_set_negative(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___negative = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::AxisComposite::__cordl_internal_get_positive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positive;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::AxisComposite::__cordl_internal_get_positive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positive;
}
constexpr void UnityEngine::InputSystem::Composites::AxisComposite::__cordl_internal_set_positive(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___positive = value;
}
constexpr float_t& UnityEngine::InputSystem::Composites::AxisComposite::__cordl_internal_get_minValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minValue;
}
constexpr float_t const& UnityEngine::InputSystem::Composites::AxisComposite::__cordl_internal_get_minValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minValue;
}
constexpr void UnityEngine::InputSystem::Composites::AxisComposite::__cordl_internal_set_minValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minValue = value;
}
constexpr float_t& UnityEngine::InputSystem::Composites::AxisComposite::__cordl_internal_get_maxValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxValue;
}
constexpr float_t const& UnityEngine::InputSystem::Composites::AxisComposite::__cordl_internal_get_maxValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxValue;
}
constexpr void UnityEngine::InputSystem::Composites::AxisComposite::__cordl_internal_set_maxValue(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxValue = value;
}
constexpr ::UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins& UnityEngine::InputSystem::Composites::AxisComposite::__cordl_internal_get_whichSideWins() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___whichSideWins;
}
constexpr ::UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins const& UnityEngine::InputSystem::Composites::AxisComposite::__cordl_internal_get_whichSideWins() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___whichSideWins;
}
constexpr void UnityEngine::InputSystem::Composites::AxisComposite::__cordl_internal_set_whichSideWins(::UnityEngine::InputSystem::Composites::AxisComposite_WhichSideWins value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___whichSideWins = value;
}
inline float_t UnityEngine::InputSystem::Composites::AxisComposite::get_midPoint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::AxisComposite*>(), { "get_midPoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::Composites::AxisComposite::ReadValue(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Composites::AxisComposite*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, context);
}
inline float_t UnityEngine::InputSystem::Composites::AxisComposite::EvaluateMagnitude(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Composites::AxisComposite*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::Composites::AxisComposite::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::AxisComposite*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Composites::AxisComposite* UnityEngine::InputSystem::Composites::AxisComposite::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Composites::AxisComposite*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Composites::AxisComposite::AxisComposite() {}
