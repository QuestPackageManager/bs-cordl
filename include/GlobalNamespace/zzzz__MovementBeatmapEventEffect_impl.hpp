#pragma once
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MovementBeatmapEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__MovementBeatmapEventEffect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MovementBeatmapEventEffect__MovementData.get_localPositionOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::__MovementBeatmapEventEffect__MovementData::*)()>(
    &::GlobalNamespace::__MovementBeatmapEventEffect__MovementData::get_localPositionOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23b4e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*>::get(),
                                                 "get_localPositionOffset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MovementBeatmapEventEffect__MovementData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MovementBeatmapEventEffect__MovementData::*)()>(
    &::GlobalNamespace::__MovementBeatmapEventEffect__MovementData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b4e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::__MovementBeatmapEventEffect__MovementData::__get__localPositionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::__MovementBeatmapEventEffect__MovementData::__get__localPositionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPositionOffset;
}
constexpr void GlobalNamespace::__MovementBeatmapEventEffect__MovementData::__set__localPositionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localPositionOffset = value;
}
inline ::UnityEngine::Vector3 GlobalNamespace::__MovementBeatmapEventEffect__MovementData::get_localPositionOffset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*>::get(), "get_localPositionOffset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__MovementBeatmapEventEffect__MovementData* GlobalNamespace::__MovementBeatmapEventEffect__MovementData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*>());
}
inline void GlobalNamespace::__MovementBeatmapEventEffect__MovementData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MovementBeatmapEventEffect__MovementData::__MovementBeatmapEventEffect__MovementData() {}
//  Writing Method size for method: ::GlobalNamespace::MovementBeatmapEventEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MovementBeatmapEventEffect::*)()>(&::GlobalNamespace::MovementBeatmapEventEffect::Start)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x23b4970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementBeatmapEventEffect*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementBeatmapEventEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MovementBeatmapEventEffect::*)()>(
    &::GlobalNamespace::MovementBeatmapEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23b4c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementBeatmapEventEffect*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementBeatmapEventEffect.FixedUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MovementBeatmapEventEffect::*)()>(
    &::GlobalNamespace::MovementBeatmapEventEffect::FixedUpdate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x23b4c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementBeatmapEventEffect*>::get(),
                                                                               "FixedUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementBeatmapEventEffect.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MovementBeatmapEventEffect::*)()>(
    &::GlobalNamespace::MovementBeatmapEventEffect::LateUpdate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x23b4d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementBeatmapEventEffect*>::get(),
                                                                               "LateUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementBeatmapEventEffect.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MovementBeatmapEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::MovementBeatmapEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23b4ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementBeatmapEventEffect*>::get(), "HandleBeatmapEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementBeatmapEventEffect.SetLocalPositionOffsetsForAllObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MovementBeatmapEventEffect::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::MovementBeatmapEventEffect::SetLocalPositionOffsetsForAllObjects)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x23b4b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementBeatmapEventEffect*>::get(), "SetLocalPositionOffsetsForAllObjects",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovementBeatmapEventEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MovementBeatmapEventEffect::*)()>(&::GlobalNamespace::MovementBeatmapEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23b4e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementBeatmapEventEffect*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::MovementBeatmapEventEffect::__get__beatmapEventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventType;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::MovementBeatmapEventEffect::__get__beatmapEventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventType;
}
constexpr void GlobalNamespace::MovementBeatmapEventEffect::__set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapEventType = value;
}
constexpr float_t& GlobalNamespace::MovementBeatmapEventEffect::__get__transitionSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitionSpeed;
}
constexpr float_t const& GlobalNamespace::MovementBeatmapEventEffect::__get__transitionSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitionSpeed;
}
constexpr void GlobalNamespace::MovementBeatmapEventEffect::__set__transitionSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transitionSpeed = value;
}
constexpr ::ArrayW<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*, ::Array<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*>*>&
GlobalNamespace::MovementBeatmapEventEffect::__get__movementData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementData;
}
constexpr ::ArrayW<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*, ::Array<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*>*> const&
GlobalNamespace::MovementBeatmapEventEffect::__get__movementData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementData;
}
constexpr void GlobalNamespace::MovementBeatmapEventEffect::__set__movementData(
    ::ArrayW<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*, ::Array<::GlobalNamespace::__MovementBeatmapEventEffect__MovementData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____movementData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& GlobalNamespace::MovementBeatmapEventEffect::__get__transforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transforms;
}
constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& GlobalNamespace::MovementBeatmapEventEffect::__get__transforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transforms;
}
constexpr void GlobalNamespace::MovementBeatmapEventEffect::__set__transforms(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::MovementBeatmapEventEffect::__get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& GlobalNamespace::MovementBeatmapEventEffect::__get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::MovementBeatmapEventEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::MovementBeatmapEventEffect::__get__currentMovementDataIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentMovementDataIdx;
}
constexpr int32_t const& GlobalNamespace::MovementBeatmapEventEffect::__get__currentMovementDataIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentMovementDataIdx;
}
constexpr void GlobalNamespace::MovementBeatmapEventEffect::__set__currentMovementDataIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentMovementDataIdx = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MovementBeatmapEventEffect::__get__currentPositionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MovementBeatmapEventEffect::__get__currentPositionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPositionOffset;
}
constexpr void GlobalNamespace::MovementBeatmapEventEffect::__set__currentPositionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentPositionOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MovementBeatmapEventEffect::__get__prevPositionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MovementBeatmapEventEffect::__get__prevPositionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevPositionOffset;
}
constexpr void GlobalNamespace::MovementBeatmapEventEffect::__set__prevPositionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevPositionOffset = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& GlobalNamespace::MovementBeatmapEventEffect::__get__startLocalPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startLocalPositions;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& GlobalNamespace::MovementBeatmapEventEffect::__get__startLocalPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startLocalPositions;
}
constexpr void GlobalNamespace::MovementBeatmapEventEffect::__set__startLocalPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____startLocalPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::MovementBeatmapEventEffect::__get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& GlobalNamespace::MovementBeatmapEventEffect::__get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::MovementBeatmapEventEffect::__set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MovementBeatmapEventEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementBeatmapEventEffect*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MovementBeatmapEventEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementBeatmapEventEffect*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MovementBeatmapEventEffect::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementBeatmapEventEffect*>::get(),
                                                                             "FixedUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MovementBeatmapEventEffect::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementBeatmapEventEffect*>::get(),
                                                                             "LateUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MovementBeatmapEventEffect::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementBeatmapEventEffect*>::get(), "HandleBeatmapEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicBeatmapEventData);
}
inline void GlobalNamespace::MovementBeatmapEventEffect::SetLocalPositionOffsetsForAllObjects(::UnityEngine::Vector3 localPositionOffset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementBeatmapEventEffect*>::get(), "SetLocalPositionOffsetsForAllObjects",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localPositionOffset);
}
inline ::GlobalNamespace::MovementBeatmapEventEffect* GlobalNamespace::MovementBeatmapEventEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MovementBeatmapEventEffect*>());
}
inline void GlobalNamespace::MovementBeatmapEventEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MovementBeatmapEventEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MovementBeatmapEventEffect::MovementBeatmapEventEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
