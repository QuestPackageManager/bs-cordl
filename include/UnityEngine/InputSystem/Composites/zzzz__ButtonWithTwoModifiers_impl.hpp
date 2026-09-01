#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Composites\ButtonWithTwoModifiers.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_impl.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__ButtonWithTwoModifiers_def.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__ButtonWithTwoModifiers_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder::ButtonWithTwoModifiers_ModifiersOrder(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder::ButtonWithTwoModifiers_ModifiersOrder() {}
constexpr ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder::Default{ static_cast<int32_t>(
    0x0) };
constexpr ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder::Ordered{ static_cast<int32_t>(
    0x1) };
constexpr ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder::Unordered{ static_cast<int32_t>(
    0x2) };
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers.ReadValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(
    &::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::ReadValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x650bea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers.ModifiersArePressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(
    &::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::ModifiersArePressed)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x650bf28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers*>(),
                                                             { "ModifiersArePressed", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers.EvaluateMagnitude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(
    &::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x650bfdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(
    &::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::FinishSetup)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x650bfe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::*)()>(
    &::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x650c078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::__cordl_internal_get_modifier1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifier1;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::__cordl_internal_get_modifier1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifier1;
}
constexpr void UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::__cordl_internal_set_modifier1(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifier1 = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::__cordl_internal_get_modifier2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifier2;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::__cordl_internal_get_modifier2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifier2;
}
constexpr void UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::__cordl_internal_set_modifier2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifier2 = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::__cordl_internal_get_button() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___button;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::__cordl_internal_get_button() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___button;
}
constexpr void UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::__cordl_internal_set_button(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___button = value;
}
constexpr bool& UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::__cordl_internal_get_overrideModifiersNeedToBePressedFirst() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideModifiersNeedToBePressedFirst;
}
constexpr bool const& UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::__cordl_internal_get_overrideModifiersNeedToBePressedFirst() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideModifiersNeedToBePressedFirst;
}
constexpr void UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::__cordl_internal_set_overrideModifiersNeedToBePressedFirst(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideModifiersNeedToBePressedFirst = value;
}
constexpr ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder& UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::__cordl_internal_get_modifiersOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiersOrder;
}
constexpr ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder const&
UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::__cordl_internal_get_modifiersOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiersOrder;
}
constexpr void UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::__cordl_internal_set_modifiersOrder(::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers_ModifiersOrder value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifiersOrder = value;
}
inline float_t UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::ReadValue(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, context);
}
inline bool UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::ModifiersArePressed(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers*>(),
                                                           { "ModifiersArePressed", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline float_t UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::EvaluateMagnitude(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::FinishSetup(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers* UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Composites::ButtonWithTwoModifiers::ButtonWithTwoModifiers() {}
