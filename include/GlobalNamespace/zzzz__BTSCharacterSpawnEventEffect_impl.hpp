#pragma once
// IWYU pragma private; include "GlobalNamespace/BTSCharacterSpawnEventEffect.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterSpawnEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterDataModel_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacter_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnEventEffect.add_startCharacterAnimationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnEventEffect::*)(::System::Action_1<::UnityW<::GlobalNamespace::BTSCharacter>>*)>(
    &::GlobalNamespace::BTSCharacterSpawnEventEffect::add_startCharacterAnimationEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32846ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventEffect*>(),
                                                             { "add_startCharacterAnimationEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::BTSCharacter>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnEventEffect.remove_startCharacterAnimationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnEventEffect::*)(::System::Action_1<::UnityW<::GlobalNamespace::BTSCharacter>>*)>(
    &::GlobalNamespace::BTSCharacterSpawnEventEffect::remove_startCharacterAnimationEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3284c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventEffect*>(),
                                                             { "remove_startCharacterAnimationEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::BTSCharacter>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnEventEffect.get_isInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BTSCharacterSpawnEventEffect::*)()>(&::GlobalNamespace::BTSCharacterSpawnEventEffect::get_isInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3284ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventEffect*>(), { "get_isInitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnEventEffect.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnEventEffect::*)()>(&::GlobalNamespace::BTSCharacterSpawnEventEffect::Start)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0x3284eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventEffect*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnEventEffect.LoadAddressables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnEventEffect::*)()>(&::GlobalNamespace::BTSCharacterSpawnEventEffect::LoadAddressables)> {
  constexpr static std::size_t size = 0x844;
  constexpr static std::size_t addrs = 0x3285450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventEffect*>(), { "LoadAddressables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnEventEffect.CleanupAddressables
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnEventEffect::*)()>(&::GlobalNamespace::BTSCharacterSpawnEventEffect::CleanupAddressables)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3285e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventEffect*>(), { "CleanupAddressables", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnEventEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnEventEffect::*)()>(&::GlobalNamespace::BTSCharacterSpawnEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3285f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventEffect*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnEventEffect.HandleBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::BTSCharacterSpawnEventEffect::HandleBeatmapEvent)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x3285fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventEffect*>(),
                                                                                           { "HandleBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnEventEffect.GetCharacterWithAnimationClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Tuple_2<
    ::UnityW<::GlobalNamespace::BTSCharacter>, ::UnityW<::UnityEngine::AnimationClip>>* (*)(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::BTSCharacter>>*,
                                                                                            ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::AnimationClip>>*, int32_t,
                                                                                            int32_t)>(&::GlobalNamespace::BTSCharacterSpawnEventEffect::GetCharacterWithAnimationClip)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x3285ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventEffect*>(),
                                                             { "GetCharacterWithAnimationClip",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::BTSCharacter>>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::AnimationClip>>*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnEventEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnEventEffect::*)()>(&::GlobalNamespace::BTSCharacterSpawnEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x3286138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__animationStartAheadTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationStartAheadTime;
}
constexpr float_t const& GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__animationStartAheadTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationStartAheadTime;
}
constexpr void GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_set__animationStartAheadTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animationStartAheadTime = value;
}
constexpr ::UnityW<::GlobalNamespace::BTSCharacterDataModel>& GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__btsCharacterDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____btsCharacterDataModel;
}
constexpr ::UnityW<::GlobalNamespace::BTSCharacterDataModel> const& GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__btsCharacterDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____btsCharacterDataModel;
}
constexpr void GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_set__btsCharacterDataModel(::UnityW<::GlobalNamespace::BTSCharacterDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____btsCharacterDataModel = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__characterWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characterWrapper;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__characterWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characterWrapper;
}
constexpr void GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_set__characterWrapper(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____characterWrapper = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData*& GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__beatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData* const& GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr void GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapData = value;
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::GlobalNamespace::IAudioTimeSource* const& GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSource = value;
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr void GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiers = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::BTSCharacter>>*& GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get_startCharacterAnimationEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startCharacterAnimationEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::BTSCharacter>>* const& GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get_startCharacterAnimationEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startCharacterAnimationEvent;
}
constexpr void GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_set_startCharacterAnimationEvent(::System::Action_1<::UnityW<::GlobalNamespace::BTSCharacter>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startCharacterAnimationEvent = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::BTSCharacter>>*&
GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__idsToCharacterPrefabsDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idsToCharacterPrefabsDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::BTSCharacter>>* const&
GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__idsToCharacterPrefabsDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idsToCharacterPrefabsDictionary;
}
constexpr void GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_set__idsToCharacterPrefabsDictionary(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::BTSCharacter>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____idsToCharacterPrefabsDictionary = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::BTSCharacter>>*&
GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__idsToCharactersDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idsToCharactersDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::BTSCharacter>>* const&
GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__idsToCharactersDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idsToCharactersDictionary;
}
constexpr void GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_set__idsToCharactersDictionary(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::BTSCharacter>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____idsToCharactersDictionary = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::AnimationClip>>*&
GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__idsToAnimationClipsDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idsToAnimationClipsDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::AnimationClip>>* const&
GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__idsToAnimationClipsDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idsToAnimationClipsDictionary;
}
constexpr void GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_set__idsToAnimationClipsDictionary(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::AnimationClip>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____idsToAnimationClipsDictionary = value;
}
constexpr bool& GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__isInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr bool const& GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__isInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr void GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_set__isInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInitialized = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDataCallbackWrapper = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*&
GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__asyncOperationHandles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncOperationHandles;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const&
GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_get__asyncOperationHandles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncOperationHandles;
}
constexpr void GlobalNamespace::BTSCharacterSpawnEventEffect::__cordl_internal_set__asyncOperationHandles(
    ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____asyncOperationHandles = value;
}
inline void GlobalNamespace::BTSCharacterSpawnEventEffect::add_startCharacterAnimationEvent(::System::Action_1<::UnityW<::GlobalNamespace::BTSCharacter>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventEffect*>(),
                                                           { "add_startCharacterAnimationEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::BTSCharacter>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BTSCharacterSpawnEventEffect::remove_startCharacterAnimationEvent(::System::Action_1<::UnityW<::GlobalNamespace::BTSCharacter>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventEffect*>(),
                                                           { "remove_startCharacterAnimationEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::BTSCharacter>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::BTSCharacterSpawnEventEffect::get_isInitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventEffect*>(), { "get_isInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnEventEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventEffect*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnEventEffect::LoadAddressables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventEffect*>(), { "LoadAddressables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnEventEffect::CleanupAddressables() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventEffect*>(), { "CleanupAddressables", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnEventEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventEffect*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnEventEffect::HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventEffect*>(),
                                                                                         { "HandleBeatmapEvent", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, basicBeatmapEventData);
}
inline ::System::Tuple_2<::UnityW<::GlobalNamespace::BTSCharacter>, ::UnityW<::UnityEngine::AnimationClip>>*
GlobalNamespace::BTSCharacterSpawnEventEffect::GetCharacterWithAnimationClip(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::BTSCharacter>>* charDictionary,
                                                                             ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::AnimationClip>>* animDictionary,
                                                                             int32_t prefabId, int32_t animationId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventEffect*>(),
                                                           { "GetCharacterWithAnimationClip",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::GlobalNamespace::BTSCharacter>>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::AnimationClip>>*>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Tuple_2<::UnityW<::GlobalNamespace::BTSCharacter>, ::UnityW<::UnityEngine::AnimationClip>>*>(nullptr, ___internal_method, charDictionary,
                                                                                                                                                    animDictionary, prefabId, animationId);
}
inline void GlobalNamespace::BTSCharacterSpawnEventEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnEventEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BTSCharacterSpawnEventEffect* GlobalNamespace::BTSCharacterSpawnEventEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BTSCharacterSpawnEventEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BTSCharacterSpawnEventEffect::BTSCharacterSpawnEventEffect() {}
constexpr ::GlobalNamespace::BasicBeatmapEventType GlobalNamespace::BTSCharacterSpawnEventEffect::kCharacterDisplayEventType{ static_cast<int32_t>(0x28) };
