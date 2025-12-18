#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/AxisControl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Controls::AxisControl_Clamp::AxisControl_Clamp(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::AxisControl_Clamp::AxisControl_Clamp() {}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl_Clamp UnityEngine::InputSystem::Controls::AxisControl_Clamp::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::InputSystem::Controls::AxisControl_Clamp UnityEngine::InputSystem::Controls::AxisControl_Clamp::BeforeNormalize{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputSystem::Controls::AxisControl_Clamp UnityEngine::InputSystem::Controls::AxisControl_Clamp::AfterNormalize{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputSystem::Controls::AxisControl_Clamp UnityEngine::InputSystem::Controls::AxisControl_Clamp::ToConstantBeforeNormalize{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AxisControl.Preprocess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Controls::AxisControl::*)(float_t)>(
    &::UnityEngine::InputSystem::Controls::AxisControl::Preprocess)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6343794;

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
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6343850;

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
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x63438cc;

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
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6343950;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AxisControl.ReadUnprocessedValueFromState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Controls::AxisControl::*)(void*)>(
    &::UnityEngine::InputSystem::Controls::AxisControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6343a3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AxisControl.WriteValueIntoState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::AxisControl::*)(float_t, void*)>(
    &::UnityEngine::InputSystem::Controls::AxisControl::WriteValueIntoState)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6343bac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AxisControl.CompareValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Controls::AxisControl::*)(void*, void*)>(
    &::UnityEngine::InputSystem::Controls::AxisControl::CompareValue)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6343c94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AxisControl.EvaluateMagnitude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Controls::AxisControl::*)(void*)>(
    &::UnityEngine::InputSystem::Controls::AxisControl::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6343d88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AxisControl.EvaluateMagnitude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Controls::AxisControl::*)(float_t)>(
    &::UnityEngine::InputSystem::Controls::AxisControl::EvaluateMagnitude)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6343dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), "EvaluateMagnitude",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AxisControl.CalculateOptimizedControlDataType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::Controls::AxisControl::*)()>(
    &::UnityEngine::InputSystem::Controls::AxisControl::CalculateOptimizedControlDataType)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6343ea0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), 15));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Controls::AxisControl_Clamp& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_clamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clamp;
}
constexpr ::UnityEngine::InputSystem::Controls::AxisControl_Clamp const& UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_get_clamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clamp;
}
constexpr void UnityEngine::InputSystem::Controls::AxisControl::__cordl_internal_set_clamp(::UnityEngine::InputSystem::Controls::AxisControl_Clamp value) {
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
inline float_t UnityEngine::InputSystem::Controls::AxisControl::ReadUnprocessedValueFromState(void* statePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::Controls::AxisControl::WriteValueIntoState(float_t value, void* statePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, statePtr);
}
inline bool UnityEngine::InputSystem::Controls::AxisControl::CompareValue(void* firstStatePtr, void* secondStatePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, firstStatePtr, secondStatePtr);
}
inline float_t UnityEngine::InputSystem::Controls::AxisControl::EvaluateMagnitude(void* statePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, statePtr);
}
inline float_t UnityEngine::InputSystem::Controls::AxisControl::EvaluateMagnitude(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), "EvaluateMagnitude",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Controls::AxisControl::CalculateOptimizedControlDataType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AxisControl*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::AxisControl* UnityEngine::InputSystem::Controls::AxisControl::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Controls::AxisControl*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::AxisControl::AxisControl() {}
