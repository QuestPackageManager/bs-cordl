#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/DiscreteButtonControl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__DiscreteButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__DiscreteButtonControl_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Controls::DiscreteButtonControl_WriteMode::DiscreteButtonControl_WriteMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::DiscreteButtonControl_WriteMode::DiscreteButtonControl_WriteMode() {}
constexpr ::UnityEngine::InputSystem::Controls::DiscreteButtonControl_WriteMode UnityEngine::InputSystem::Controls::DiscreteButtonControl_WriteMode::WriteDisabled{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::Controls::DiscreteButtonControl_WriteMode UnityEngine::InputSystem::Controls::DiscreteButtonControl_WriteMode::WriteNullAndMaxValue{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DiscreteButtonControl.FinishSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::DiscreteButtonControl::*)()>(
    &::UnityEngine::InputSystem::Controls::DiscreteButtonControl::FinishSetup)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x63449a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DiscreteButtonControl.ReadUnprocessedValueFromState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Controls::DiscreteButtonControl::*)(void*)>(
    &::UnityEngine::InputSystem::Controls::DiscreteButtonControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6344aa8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DiscreteButtonControl.WriteValueIntoState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::DiscreteButtonControl::*)(float_t, void*)>(
    &::UnityEngine::InputSystem::Controls::DiscreteButtonControl::WriteValueIntoState)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6344c38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::DiscreteButtonControl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::DiscreteButtonControl::*)()>(
    &::UnityEngine::InputSystem::Controls::DiscreteButtonControl::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6344d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__cordl_internal_get_minValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minValue;
}
constexpr int32_t const& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__cordl_internal_get_minValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minValue;
}
constexpr void UnityEngine::InputSystem::Controls::DiscreteButtonControl::__cordl_internal_set_minValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minValue = value;
}
constexpr int32_t& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__cordl_internal_get_maxValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxValue;
}
constexpr int32_t const& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__cordl_internal_get_maxValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxValue;
}
constexpr void UnityEngine::InputSystem::Controls::DiscreteButtonControl::__cordl_internal_set_maxValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxValue = value;
}
constexpr int32_t& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__cordl_internal_get_wrapAtValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrapAtValue;
}
constexpr int32_t const& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__cordl_internal_get_wrapAtValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___wrapAtValue;
}
constexpr void UnityEngine::InputSystem::Controls::DiscreteButtonControl::__cordl_internal_set_wrapAtValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___wrapAtValue = value;
}
constexpr int32_t& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__cordl_internal_get_nullValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nullValue;
}
constexpr int32_t const& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__cordl_internal_get_nullValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nullValue;
}
constexpr void UnityEngine::InputSystem::Controls::DiscreteButtonControl::__cordl_internal_set_nullValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nullValue = value;
}
constexpr ::UnityEngine::InputSystem::Controls::DiscreteButtonControl_WriteMode& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__cordl_internal_get_writeMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeMode;
}
constexpr ::UnityEngine::InputSystem::Controls::DiscreteButtonControl_WriteMode const& UnityEngine::InputSystem::Controls::DiscreteButtonControl::__cordl_internal_get_writeMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeMode;
}
constexpr void UnityEngine::InputSystem::Controls::DiscreteButtonControl::__cordl_internal_set_writeMode(::UnityEngine::InputSystem::Controls::DiscreteButtonControl_WriteMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writeMode = value;
}
inline void UnityEngine::InputSystem::Controls::DiscreteButtonControl::FinishSetup() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::Controls::DiscreteButtonControl::ReadUnprocessedValueFromState(void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::Controls::DiscreteButtonControl::WriteValueIntoState(float_t value, void* statePtr) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, statePtr);
}
inline void UnityEngine::InputSystem::Controls::DiscreteButtonControl::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::DiscreteButtonControl* UnityEngine::InputSystem::Controls::DiscreteButtonControl::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Controls::DiscreteButtonControl*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::DiscreteButtonControl::DiscreteButtonControl() {}
