#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Composites/AxisComposite.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__AxisComposite_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_impl.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__AxisComposite_def.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__AxisComposite_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins::__AxisComposite__WhichSideWins(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins::__AxisComposite__WhichSideWins() {}
constexpr ::UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins::Neither{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins::Positive{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins::Negative{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::AxisComposite.get_midPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Composites::AxisComposite::*)()>(
    &::UnityEngine::InputSystem::Composites::AxisComposite::get_midPoint)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x44fbe24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::AxisComposite*>::get(),
                                                                               "get_midPoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::AxisComposite.ReadValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Composites::AxisComposite::*)(
    ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::UnityEngine::InputSystem::Composites::AxisComposite::ReadValue)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x44fbe38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::AxisComposite*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::AxisComposite*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::AxisComposite.EvaluateMagnitude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Composites::AxisComposite::*)(
    ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>)>(&::UnityEngine::InputSystem::Composites::AxisComposite::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x44fbf58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::AxisComposite*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::AxisComposite*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Composites::AxisComposite._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Composites::AxisComposite::*)()>(
    &::UnityEngine::InputSystem::Composites::AxisComposite::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x44fbfa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::AxisComposite*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
constexpr ::UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins& UnityEngine::InputSystem::Composites::AxisComposite::__cordl_internal_get_whichSideWins() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___whichSideWins;
}
constexpr ::UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins const& UnityEngine::InputSystem::Composites::AxisComposite::__cordl_internal_get_whichSideWins() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___whichSideWins;
}
constexpr void UnityEngine::InputSystem::Composites::AxisComposite::__cordl_internal_set_whichSideWins(::UnityEngine::InputSystem::Composites::__AxisComposite__WhichSideWins value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___whichSideWins = value;
}
inline float_t UnityEngine::InputSystem::Composites::AxisComposite::get_midPoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::AxisComposite*>::get(),
                                                                             "get_midPoint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::Composites::AxisComposite::ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::AxisComposite*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, context);
}
inline float_t UnityEngine::InputSystem::Composites::AxisComposite::EvaluateMagnitude(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::AxisComposite*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, context);
}
inline ::UnityEngine::InputSystem::Composites::AxisComposite* UnityEngine::InputSystem::Composites::AxisComposite::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Composites::AxisComposite*>());
}
inline void UnityEngine::InputSystem::Composites::AxisComposite::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Composites::AxisComposite*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Composites::AxisComposite::AxisComposite() {}
