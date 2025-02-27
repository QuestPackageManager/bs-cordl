#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplierValuesRecorder.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplierValuesRecorder_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__IScoreController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplierValuesRecorder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue::*)(int32_t, float_t)>(
    &::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3bf4df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiplierValuesRecorder_MultiplierValue::_ctor(int32_t multiplier, float_t time) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplier, time);
}
// Ctor Parameters [CppParam { name: "multiplier", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue::MultiplierValuesRecorder_MultiplierValue(int32_t multiplier, float_t time) noexcept {
  this->multiplier = multiplier;
  this->time = time;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue::MultiplierValuesRecorder_MultiplierValue() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplierValuesRecorder.get_multiplierValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue>* (
    ::GlobalNamespace::MultiplierValuesRecorder::*)()>(&::GlobalNamespace::MultiplierValuesRecorder::get_multiplierValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bf4b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplierValuesRecorder*>::get(),
                                                                               "get_multiplierValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplierValuesRecorder.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplierValuesRecorder::*)()>(&::GlobalNamespace::MultiplierValuesRecorder::Start)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3bf4b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplierValuesRecorder*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplierValuesRecorder.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplierValuesRecorder::*)()>(&::GlobalNamespace::MultiplierValuesRecorder::OnDestroy)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3bf4bfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplierValuesRecorder*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplierValuesRecorder.HandleScoreControllerMultiplierDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplierValuesRecorder::*)(int32_t, float_t)>(
    &::GlobalNamespace::MultiplierValuesRecorder::HandleScoreControllerMultiplierDidChange)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3bf4cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplierValuesRecorder*>::get(), "HandleScoreControllerMultiplierDidChange",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplierValuesRecorder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplierValuesRecorder::*)()>(&::GlobalNamespace::MultiplierValuesRecorder::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3bf4e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplierValuesRecorder*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IScoreController*& GlobalNamespace::MultiplierValuesRecorder::__cordl_internal_get__scoreController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreController;
}
constexpr ::GlobalNamespace::IScoreController* const& GlobalNamespace::MultiplierValuesRecorder::__cordl_internal_get__scoreController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreController;
}
constexpr void GlobalNamespace::MultiplierValuesRecorder::__cordl_internal_set__scoreController(::GlobalNamespace::IScoreController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scoreController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::MultiplierValuesRecorder::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::MultiplierValuesRecorder::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::MultiplierValuesRecorder::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue>*& GlobalNamespace::MultiplierValuesRecorder::__cordl_internal_get__multiplierValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplierValues;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue>* const&
GlobalNamespace::MultiplierValuesRecorder::__cordl_internal_get__multiplierValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplierValues;
}
constexpr void
GlobalNamespace::MultiplierValuesRecorder::__cordl_internal_set__multiplierValues(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplierValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue>* GlobalNamespace::MultiplierValuesRecorder::get_multiplierValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplierValuesRecorder*>::get(),
                                                                             "get_multiplierValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::MultiplierValuesRecorder_MultiplierValue>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplierValuesRecorder::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplierValuesRecorder*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplierValuesRecorder::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplierValuesRecorder*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplierValuesRecorder::HandleScoreControllerMultiplierDidChange(int32_t multiplier, float_t multiplierProgress) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplierValuesRecorder*>::get(), "HandleScoreControllerMultiplierDidChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplier, multiplierProgress);
}
inline void GlobalNamespace::MultiplierValuesRecorder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplierValuesRecorder*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplierValuesRecorder* GlobalNamespace::MultiplierValuesRecorder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplierValuesRecorder*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplierValuesRecorder::MultiplierValuesRecorder() {}
