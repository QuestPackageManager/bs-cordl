#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Composites\OneModifierComposite.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_impl.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__OneModifierComposite_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__OneModifierComposite_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Composites::OneModifierComposite_ModifiersOrder::OneModifierComposite_ModifiersOrder(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Composites::OneModifierComposite_ModifiersOrder::OneModifierComposite_ModifiersOrder() {}
constexpr ::UnityEngine::InputSystem::Composites::OneModifierComposite_ModifiersOrder UnityEngine::InputSystem::Composites::OneModifierComposite_ModifiersOrder::Default{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::Composites::OneModifierComposite_ModifiersOrder UnityEngine::InputSystem::Composites::OneModifierComposite_ModifiersOrder::Ordered{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::Composites::OneModifierComposite_ModifiersOrder UnityEngine::InputSystem::Composites::OneModifierComposite_ModifiersOrder::Unordered{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::OneModifierComposite.get_valueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::InputSystem::Composites::OneModifierComposite::*)()>(
    &::UnityEngine::InputSystem::Composites::OneModifierComposite::get_valueType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x650c0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::OneModifierComposite.get_valueSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::Composites::OneModifierComposite::*)()>(
    &::UnityEngine::InputSystem::Composites::OneModifierComposite::get_valueSizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x650c0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::OneModifierComposite.EvaluateMagnitude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Composites::OneModifierComposite::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(
    &::UnityEngine::InputSystem::Composites::OneModifierComposite::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x650c0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::OneModifierComposite.ReadValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Composites::OneModifierComposite::*)(
    ::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>, void*, int32_t)>(&::UnityEngine::InputSystem::Composites::OneModifierComposite::ReadValue)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x650c190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::OneModifierComposite.ModifierIsPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Composites::OneModifierComposite::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(
    &::UnityEngine::InputSystem::Composites::OneModifierComposite::ModifierIsPressed)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x650c104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(),
                                                             { "ModifierIsPressed", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::OneModifierComposite.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Composites::OneModifierComposite::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(
    &::UnityEngine::InputSystem::Composites::OneModifierComposite::FinishSetup)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x650c230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::OneModifierComposite.ReadValueAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::UnityEngine::InputSystem::Composites::OneModifierComposite::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(
        &::UnityEngine::InputSystem::Composites::OneModifierComposite::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x650c728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::OneModifierComposite.DetermineValueTypeAndSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>, int32_t, ::by_ref<::System::Type*>, ::by_ref<int32_t>,
                                                                ::by_ref<bool>)>(&::UnityEngine::InputSystem::Composites::OneModifierComposite::DetermineValueTypeAndSize)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x650c2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(),
                                                             { "DetermineValueTypeAndSize",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::by_ref<::System::Type*>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::OneModifierComposite._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Composites::OneModifierComposite::*)()>(
    &::UnityEngine::InputSystem::Composites::OneModifierComposite::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x650c778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::Composites::OneModifierComposite::__cordl_internal_get_modifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifier;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::OneModifierComposite::__cordl_internal_get_modifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifier;
}
constexpr void UnityEngine::InputSystem::Composites::OneModifierComposite::__cordl_internal_set_modifier(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifier = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::OneModifierComposite::__cordl_internal_get_binding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binding;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::OneModifierComposite::__cordl_internal_get_binding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binding;
}
constexpr void UnityEngine::InputSystem::Composites::OneModifierComposite::__cordl_internal_set_binding(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binding = value;
}
constexpr bool& UnityEngine::InputSystem::Composites::OneModifierComposite::__cordl_internal_get_overrideModifiersNeedToBePressedFirst() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideModifiersNeedToBePressedFirst;
}
constexpr bool const& UnityEngine::InputSystem::Composites::OneModifierComposite::__cordl_internal_get_overrideModifiersNeedToBePressedFirst() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideModifiersNeedToBePressedFirst;
}
constexpr void UnityEngine::InputSystem::Composites::OneModifierComposite::__cordl_internal_set_overrideModifiersNeedToBePressedFirst(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideModifiersNeedToBePressedFirst = value;
}
constexpr ::UnityEngine::InputSystem::Composites::OneModifierComposite_ModifiersOrder& UnityEngine::InputSystem::Composites::OneModifierComposite::__cordl_internal_get_modifiersOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiersOrder;
}
constexpr ::UnityEngine::InputSystem::Composites::OneModifierComposite_ModifiersOrder const& UnityEngine::InputSystem::Composites::OneModifierComposite::__cordl_internal_get_modifiersOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiersOrder;
}
constexpr void UnityEngine::InputSystem::Composites::OneModifierComposite::__cordl_internal_set_modifiersOrder(::UnityEngine::InputSystem::Composites::OneModifierComposite_ModifiersOrder value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifiersOrder = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::OneModifierComposite::__cordl_internal_get_m_ValueSizeInBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValueSizeInBytes;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::OneModifierComposite::__cordl_internal_get_m_ValueSizeInBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValueSizeInBytes;
}
constexpr void UnityEngine::InputSystem::Composites::OneModifierComposite::__cordl_internal_set_m_ValueSizeInBytes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ValueSizeInBytes = value;
}
constexpr ::System::Type*& UnityEngine::InputSystem::Composites::OneModifierComposite::__cordl_internal_get_m_ValueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValueType;
}
constexpr ::System::Type* const& UnityEngine::InputSystem::Composites::OneModifierComposite::__cordl_internal_get_m_ValueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValueType;
}
constexpr void UnityEngine::InputSystem::Composites::OneModifierComposite::__cordl_internal_set_m_ValueType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ValueType = value;
}
constexpr bool& UnityEngine::InputSystem::Composites::OneModifierComposite::__cordl_internal_get_m_BindingIsButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingIsButton;
}
constexpr bool const& UnityEngine::InputSystem::Composites::OneModifierComposite::__cordl_internal_get_m_BindingIsButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingIsButton;
}
constexpr void UnityEngine::InputSystem::Composites::OneModifierComposite::__cordl_internal_set_m_BindingIsButton(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BindingIsButton = value;
}
inline ::System::Type* UnityEngine::InputSystem::Composites::OneModifierComposite::get_valueType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::Composites::OneModifierComposite::get_valueSizeInBytes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::Composites::OneModifierComposite::EvaluateMagnitude(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::Composites::OneModifierComposite::ReadValue(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context, void* buffer, int32_t bufferSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, buffer, bufferSize);
}
inline bool UnityEngine::InputSystem::Composites::OneModifierComposite::ModifierIsPressed(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(),
                                                           { "ModifierIsPressed", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::Composites::OneModifierComposite::FinishSetup(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::System::Object* UnityEngine::InputSystem::Composites::OneModifierComposite::ReadValueAsObject(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::Composites::OneModifierComposite::DetermineValueTypeAndSize(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context, int32_t part,
                                                                                                  ::by_ref<::System::Type*> valueType, ::by_ref<int32_t> valueSizeInBytes, ::by_ref<bool> isButton) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(),
                                                           { "DetermineValueTypeAndSize",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::by_ref<::System::Type*>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, part, valueType, valueSizeInBytes, isButton);
}
inline void UnityEngine::InputSystem::Composites::OneModifierComposite::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::OneModifierComposite*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Composites::OneModifierComposite* UnityEngine::InputSystem::Composites::OneModifierComposite::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Composites::OneModifierComposite*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Composites::OneModifierComposite::OneModifierComposite() {}
