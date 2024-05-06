#pragma once
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp::__AxisControl__Clamp(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp::__AxisControl__Clamp() {}
constexpr ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp UnityEngine::InputSystem::Controls::__AxisControl__Clamp::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp UnityEngine::InputSystem::Controls::__AxisControl__Clamp::BeforeNormalize{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp UnityEngine::InputSystem::Controls::__AxisControl__Clamp::AfterNormalize{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp UnityEngine::InputSystem::Controls::__AxisControl__Clamp::ToConstantBeforeNormalize{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AxisControl.Preprocess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Controls::AxisControl::*)(float_t)>(
    &::UnityEngine::InputSystem::Controls::AxisControl::Preprocess)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x3177164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), "Preprocess",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AxisControl.Unpreprocess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Controls::AxisControl::*)(float_t)>(
    &::UnityEngine::InputSystem::Controls::AxisControl::Unpreprocess)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3177238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), "Unpreprocess",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AxisControl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::AxisControl::*)()>(
    &::UnityEngine::InputSystem::Controls::AxisControl::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3177284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AxisControl.FinishSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::AxisControl::*)()>(
    &::UnityEngine::InputSystem::Controls::AxisControl::FinishSetup)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x317730c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AxisControl.ReadUnprocessedValueFromState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Controls::AxisControl::*)(::cordl_internals::Ptr<void>)>(
    &::UnityEngine::InputSystem::Controls::AxisControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x31773b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AxisControl.WriteValueIntoState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::AxisControl::*)(float_t, ::cordl_internals::Ptr<void>)>(
    &::UnityEngine::InputSystem::Controls::AxisControl::WriteValueIntoState)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x31773e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AxisControl.CompareValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Controls::AxisControl::*)(
    ::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<void>)>(&::UnityEngine::InputSystem::Controls::AxisControl::CompareValue)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3177424;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AxisControl.EvaluateMagnitude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Controls::AxisControl::*)(::cordl_internals::Ptr<void>)>(
    &::UnityEngine::InputSystem::Controls::AxisControl::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3177510;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_clamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clamp;
}
constexpr ::UnityEngine::InputSystem::Controls::__AxisControl__Clamp const& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_clamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clamp;
}
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_set_clamp(::UnityEngine::InputSystem::Controls::__AxisControl__Clamp value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clamp = value;
}
constexpr float_t& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_clampMin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clampMin;
}
constexpr float_t const& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_clampMin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clampMin;
}
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_set_clampMin(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clampMin = value;
}
constexpr float_t& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_clampMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clampMax;
}
constexpr float_t const& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_clampMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clampMax;
}
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_set_clampMax(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clampMax = value;
}
constexpr float_t& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_clampConstant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clampConstant;
}
constexpr float_t const& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_clampConstant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clampConstant;
}
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_set_clampConstant(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clampConstant = value;
}
constexpr bool& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_invert() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invert;
}
constexpr bool const& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_invert() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invert;
}
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_set_invert(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___invert = value;
}
constexpr bool& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_normalize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalize;
}
constexpr bool const& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_normalize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalize;
}
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_set_normalize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___normalize = value;
}
constexpr float_t& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_normalizeMin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalizeMin;
}
constexpr float_t const& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_normalizeMin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalizeMin;
}
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_set_normalizeMin(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___normalizeMin = value;
}
constexpr float_t& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_normalizeMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalizeMax;
}
constexpr float_t const& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_normalizeMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalizeMax;
}
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_set_normalizeMax(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___normalizeMax = value;
}
constexpr float_t& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_normalizeZero() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalizeZero;
}
constexpr float_t const& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_normalizeZero() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalizeZero;
}
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_set_normalizeZero(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___normalizeZero = value;
}
constexpr bool& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scale;
}
constexpr bool const& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scale;
}
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_set_scale(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scale = value;
}
constexpr float_t& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_scaleFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleFactor;
}
constexpr float_t const& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_scaleFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleFactor;
}
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_set_scaleFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scaleFactor = value;
}
inline float_t UnityEngine::InputSystem::Controls::AxisControl::Preprocess(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), "Preprocess",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::Controls::AxisControl::Unpreprocess(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), "Unpreprocess",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::Controls::AxisControl::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Controls::AxisControl*>());
}
inline void UnityEngine::InputSystem::Controls::AxisControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::AxisControl::FinishSetup() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::Controls::AxisControl::ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::Controls::AxisControl::WriteValueIntoState(float_t value, ::cordl_internals::Ptr<void> statePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, statePtr);
}
inline bool UnityEngine::InputSystem::Controls::AxisControl::CompareValue(::cordl_internals::Ptr<void> firstStatePtr, ::cordl_internals::Ptr<void> secondStatePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, firstStatePtr, secondStatePtr);
}
inline float_t UnityEngine::InputSystem::Controls::AxisControl::EvaluateMagnitude(::cordl_internals::Ptr<void> statePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, statePtr);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::AxisControl::AxisControl() {}
