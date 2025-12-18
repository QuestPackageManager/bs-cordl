#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Composites/ButtonWithOneModifier.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_impl.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__ButtonWithOneModifier_def.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__ButtonWithOneModifier_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder::ButtonWithOneModifier_ModifiersOrder(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder::ButtonWithOneModifier_ModifiersOrder() {}
constexpr ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder::Default{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder::Ordered{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder::Unordered{ static_cast<int32_t>(
    0x2) };
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier.ReadValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Composites::ButtonWithOneModifier::*)(
    ::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::UnityEngine::InputSystem::Composites::ButtonWithOneModifier::ReadValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6355650;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier.ModifierIsPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Composites::ButtonWithOneModifier::*)(
    ::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::UnityEngine::InputSystem::Composites::ButtonWithOneModifier::ModifierIsPressed)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x63556d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>::get(), "ModifierIsPressed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier.EvaluateMagnitude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Composites::ButtonWithOneModifier::*)(
    ::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::UnityEngine::InputSystem::Composites::ButtonWithOneModifier::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6355754;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier.FinishSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Composites::ButtonWithOneModifier::*)(
    ::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::UnityEngine::InputSystem::Composites::ButtonWithOneModifier::FinishSetup)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6355760;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Composites::ButtonWithOneModifier::*)()>(
    &::UnityEngine::InputSystem::Composites::ButtonWithOneModifier::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x63557f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_get_modifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifier;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_get_modifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifier;
}
constexpr void UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_set_modifier(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifier = value;
}
constexpr int32_t& UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_get_button() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___button;
}
constexpr int32_t const& UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_get_button() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___button;
}
constexpr void UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_set_button(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___button = value;
}
constexpr bool& UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_get_overrideModifiersNeedToBePressedFirst() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideModifiersNeedToBePressedFirst;
}
constexpr bool const& UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_get_overrideModifiersNeedToBePressedFirst() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideModifiersNeedToBePressedFirst;
}
constexpr void UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_set_overrideModifiersNeedToBePressedFirst(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideModifiersNeedToBePressedFirst = value;
}
constexpr ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder& UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_get_modifiersOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiersOrder;
}
constexpr ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder const& UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_get_modifiersOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiersOrder;
}
constexpr void UnityEngine::InputSystem::Composites::ButtonWithOneModifier::__cordl_internal_set_modifiersOrder(::UnityEngine::InputSystem::Composites::ButtonWithOneModifier_ModifiersOrder value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifiersOrder = value;
}
inline float_t UnityEngine::InputSystem::Composites::ButtonWithOneModifier::ReadValue(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, context);
}
inline bool UnityEngine::InputSystem::Composites::ButtonWithOneModifier::ModifierIsPressed(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>::get(), "ModifierIsPressed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context);
}
inline float_t UnityEngine::InputSystem::Composites::ButtonWithOneModifier::EvaluateMagnitude(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::Composites::ButtonWithOneModifier::FinishSetup(::ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void UnityEngine::InputSystem::Composites::ButtonWithOneModifier::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier* UnityEngine::InputSystem::Composites::ButtonWithOneModifier::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Composites::ButtonWithOneModifier*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Composites::ButtonWithOneModifier::ButtonWithOneModifier() {}
