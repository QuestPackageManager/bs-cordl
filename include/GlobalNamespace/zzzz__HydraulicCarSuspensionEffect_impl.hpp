#pragma once
// IWYU pragma private; include "GlobalNamespace/HydraulicCarSuspensionEffect.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HydraulicCarSuspensionEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__SpringJoint_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarSuspensionEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HydraulicCarSuspensionEffect::*)()>(
    &::GlobalNamespace::HydraulicCarSuspensionEffect::Start)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1062010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarSuspensionEffect*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarSuspensionEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HydraulicCarSuspensionEffect::*)()>(
    &::GlobalNamespace::HydraulicCarSuspensionEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1062230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarSuspensionEffect*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarSuspensionEffect.HandleContractBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HydraulicCarSuspensionEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::HydraulicCarSuspensionEffect::HandleContractBeatmapEvent)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1062270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarSuspensionEffect*>::get(), "HandleContractBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarSuspensionEffect.HandleExpandBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HydraulicCarSuspensionEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::HydraulicCarSuspensionEffect::HandleExpandBeatmapEvent)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1062314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarSuspensionEffect*>::get(), "HandleExpandBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HydraulicCarSuspensionEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HydraulicCarSuspensionEffect::*)()>(
    &::GlobalNamespace::HydraulicCarSuspensionEffect::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x10623b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarSuspensionEffect*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__contractEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractEvent;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__contractEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractEvent;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__contractEvent(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contractEvent = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__contractEventValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractEventValues;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__contractEventValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractEventValues;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__contractEventValues(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____contractEventValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__expandEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandEvent;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__expandEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandEvent;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__expandEvent(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____expandEvent = value;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__expandEventValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandEventValues;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__expandEventValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandEventValues;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__expandEventValues(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____expandEventValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::SpringJoint>& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__springJoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____springJoint;
}
constexpr ::UnityW<::UnityEngine::SpringJoint> const& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__springJoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____springJoint;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__springJoint(::UnityW<::UnityEngine::SpringJoint> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____springJoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__contractDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractDistance;
}
constexpr float_t const& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__contractDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractDistance;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__contractDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contractDistance = value;
}
constexpr float_t& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__expandDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandDistance;
}
constexpr float_t const& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__expandDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandDistance;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__expandDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____expandDistance = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__rigidbody() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__rigidbody() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rigidbody;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rigidbody)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const&
GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__contractEventValuesHashSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractEventValuesHashSet;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const&
GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__contractEventValuesHashSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractEventValuesHashSet;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__contractEventValuesHashSet(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____contractEventValuesHashSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__expandEventValuesHashSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandEventValuesHashSet;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const&
GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__expandEventValuesHashSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandEventValuesHashSet;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__expandEventValuesHashSet(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____expandEventValuesHashSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__contractBeatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractBeatmapDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const&
GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__contractBeatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contractBeatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__contractBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____contractBeatmapDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__expandBeatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandBeatmapDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const&
GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_get__expandBeatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandBeatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::HydraulicCarSuspensionEffect::__cordl_internal_set__expandBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____expandBeatmapDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::HydraulicCarSuspensionEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarSuspensionEffect*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarSuspensionEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarSuspensionEffect*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HydraulicCarSuspensionEffect::HandleContractBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarSuspensionEffect*>::get(), "HandleContractBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicBeatmapEventData);
}
inline void GlobalNamespace::HydraulicCarSuspensionEffect::HandleExpandBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarSuspensionEffect*>::get(), "HandleExpandBeatmapEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicBeatmapEventData);
}
inline ::GlobalNamespace::HydraulicCarSuspensionEffect* GlobalNamespace::HydraulicCarSuspensionEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::HydraulicCarSuspensionEffect*>());
}
inline void GlobalNamespace::HydraulicCarSuspensionEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HydraulicCarSuspensionEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HydraulicCarSuspensionEffect::HydraulicCarSuspensionEffect() {}
