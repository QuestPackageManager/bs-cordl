#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Composites/TwoModifiersComposite.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_impl.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__TwoModifiersComposite_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__TwoModifiersComposite_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder::TwoModifiersComposite_ModifiersOrder(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder::TwoModifiersComposite_ModifiersOrder() {}
constexpr ::UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder::Default{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder::Ordered{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder::Unordered{ static_cast<int32_t>(
    0x2) };
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::TwoModifiersComposite.get_valueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::InputSystem::Composites::TwoModifiersComposite::*)()>(
    &::UnityEngine::InputSystem::Composites::TwoModifiersComposite::get_valueType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6506f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::TwoModifiersComposite.get_valueSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::Composites::TwoModifiersComposite::*)()>(
    &::UnityEngine::InputSystem::Composites::TwoModifiersComposite::get_valueSizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6506f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::TwoModifiersComposite.EvaluateMagnitude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::Composites::TwoModifiersComposite::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(
    &::UnityEngine::InputSystem::Composites::TwoModifiersComposite::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6506f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::TwoModifiersComposite.ReadValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Composites::TwoModifiersComposite::*)(
    ::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>, void*, int32_t)>(&::UnityEngine::InputSystem::Composites::TwoModifiersComposite::ReadValue)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6507070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::TwoModifiersComposite.ModifiersArePressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Composites::TwoModifiersComposite::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(
    &::UnityEngine::InputSystem::Composites::TwoModifiersComposite::ModifiersArePressed)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6506fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>(),
                                                             { "ModifiersArePressed", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::TwoModifiersComposite.FinishSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Composites::TwoModifiersComposite::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(
    &::UnityEngine::InputSystem::Composites::TwoModifiersComposite::FinishSetup)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6507110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::TwoModifiersComposite.ReadValueAsObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::UnityEngine::InputSystem::Composites::TwoModifiersComposite::*)(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(
        &::UnityEngine::InputSystem::Composites::TwoModifiersComposite::ReadValueAsObject)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x65071c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::TwoModifiersComposite._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Composites::TwoModifiersComposite::*)()>(
    &::UnityEngine::InputSystem::Composites::TwoModifiersComposite::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6507228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_get_modifier1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifier1;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_get_modifier1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifier1;
}
constexpr void UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_set_modifier1(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifier1 = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_get_modifier2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifier2;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_get_modifier2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifier2;
}
constexpr void UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_set_modifier2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifier2 = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_get_binding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binding;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_get_binding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binding;
}
constexpr void UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_set_binding(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binding = value;
}
constexpr bool& UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_get_overrideModifiersNeedToBePressedFirst() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideModifiersNeedToBePressedFirst;
}
constexpr bool const& UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_get_overrideModifiersNeedToBePressedFirst() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideModifiersNeedToBePressedFirst;
}
constexpr void UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_set_overrideModifiersNeedToBePressedFirst(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideModifiersNeedToBePressedFirst = value;
}
constexpr ::UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder& UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_get_modifiersOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiersOrder;
}
constexpr ::UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder const& UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_get_modifiersOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiersOrder;
}
constexpr void UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_set_modifiersOrder(::UnityEngine::InputSystem::Composites::TwoModifiersComposite_ModifiersOrder value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifiersOrder = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_get_m_ValueSizeInBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValueSizeInBytes;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_get_m_ValueSizeInBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValueSizeInBytes;
}
constexpr void UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_set_m_ValueSizeInBytes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ValueSizeInBytes = value;
}
constexpr ::System::Type*& UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_get_m_ValueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValueType;
}
constexpr ::System::Type* const& UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_get_m_ValueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValueType;
}
constexpr void UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_set_m_ValueType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ValueType = value;
}
constexpr bool& UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_get_m_BindingIsButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingIsButton;
}
constexpr bool const& UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_get_m_BindingIsButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BindingIsButton;
}
constexpr void UnityEngine::InputSystem::Composites::TwoModifiersComposite::__cordl_internal_set_m_BindingIsButton(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BindingIsButton = value;
}
inline ::System::Type* UnityEngine::InputSystem::Composites::TwoModifiersComposite::get_valueType() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::Composites::TwoModifiersComposite::get_valueSizeInBytes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::Composites::TwoModifiersComposite::EvaluateMagnitude(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::Composites::TwoModifiersComposite::ReadValue(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context, void* buffer, int32_t bufferSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, buffer, bufferSize);
}
inline bool UnityEngine::InputSystem::Composites::TwoModifiersComposite::ModifiersArePressed(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>(),
                                                           { "ModifiersArePressed", {}, { ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::Composites::TwoModifiersComposite::FinishSetup(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::System::Object* UnityEngine::InputSystem::Composites::TwoModifiersComposite::ReadValueAsObject(::by_ref<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::Composites::TwoModifiersComposite::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Composites::TwoModifiersComposite* UnityEngine::InputSystem::Composites::TwoModifiersComposite::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Composites::TwoModifiersComposite*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Composites::TwoModifiersComposite::TwoModifiersComposite() {}
