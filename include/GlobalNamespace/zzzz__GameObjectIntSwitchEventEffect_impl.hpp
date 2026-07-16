#pragma once
// IWYU pragma private; include "GlobalNamespace/GameObjectIntSwitchEventEffect.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameObjectIntSwitchEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__GameObjectIntSwitchEventEffect_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList.get_isActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::*)()>(
    &::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::get_isActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598c0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList*>(), { "get_isActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList.set_isActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::*)(bool)>(
    &::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::set_isActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598c0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList*>(), { "set_isActive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList.SetActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::*)(bool)>(
    &::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::SetActive)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x598bec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList*>(), { "SetActive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::*)()>(
    &::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598c0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr int32_t const& GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::__cordl_internal_set_value(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::__cordl_internal_get_gameObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::__cordl_internal_get_gameObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameObjects;
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::__cordl_internal_set_gameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameObjects = value;
}
constexpr bool& GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::__cordl_internal_get__isActive_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isActive_k__BackingField;
}
constexpr bool const& GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::__cordl_internal_get__isActive_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isActive_k__BackingField;
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::__cordl_internal_set__isActive_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isActive_k__BackingField = value;
}
inline bool GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::get_isActive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList*>(), { "get_isActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::set_isActive(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList*>(), { "set_isActive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::SetActive(bool active) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList*>(), { "SetActive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList* GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList::GameObjectIntSwitchEventEffect_GameObjectValueList() {}
//  Writing Method size for method: ::GlobalNamespace::GameObjectIntSwitchEventEffect.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameObjectIntSwitchEventEffect::*)(::GlobalNamespace::BeatmapCallbacksController*)>(
    &::GlobalNamespace::GameObjectIntSwitchEventEffect::Initialize)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x598bcc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectIntSwitchEventEffect*>(),
                                                                                           { "Initialize", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameObjectIntSwitchEventEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameObjectIntSwitchEventEffect::*)()>(&::GlobalNamespace::GameObjectIntSwitchEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x598bf38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectIntSwitchEventEffect*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameObjectIntSwitchEventEffect.HandleBasicBeatmapEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameObjectIntSwitchEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(
    &::GlobalNamespace::GameObjectIntSwitchEventEffect::HandleBasicBeatmapEventData)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x598bf5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectIntSwitchEventEffect*>(),
                                                                                           { "HandleBasicBeatmapEventData", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameObjectIntSwitchEventEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameObjectIntSwitchEventEffect::*)()>(&::GlobalNamespace::GameObjectIntSwitchEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598c0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectIntSwitchEventEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__beatmapEventType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventType;
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__beatmapEventType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapEventType;
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapEventType = value;
}
constexpr bool& GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__ignoreOnFail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreOnFail;
}
constexpr bool const& GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__ignoreOnFail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ignoreOnFail;
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_set__ignoreOnFail(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ignoreOnFail = value;
}
constexpr int32_t& GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__defaultValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue;
}
constexpr int32_t const& GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__defaultValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue;
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_set__defaultValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultValue = value;
}
constexpr ::ArrayW<::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList*>& GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__gameObjectsValueLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectsValueLists;
}
constexpr ::ArrayW<::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList*> const& GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__gameObjectsValueLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObjectsValueLists;
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_set__gameObjectsValueLists(::ArrayW<::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameObjectsValueLists = value;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__beatmapDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__beatmapDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDataCallbackWrapper;
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDataCallbackWrapper = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList*>*&
GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__valueToListMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueToListMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList*>* const&
GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__valueToListMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueToListMap;
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_set__valueToListMap(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::GlobalNamespace::GameObjectIntSwitchEventEffect_GameObjectValueList*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueToListMap = value;
}
constexpr int32_t& GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__previousActiveIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousActiveIdx;
}
constexpr int32_t const& GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_get__previousActiveIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousActiveIdx;
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect::__cordl_internal_set__previousActiveIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previousActiveIdx = value;
}
inline void GlobalNamespace::GameObjectIntSwitchEventEffect::Initialize(::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectIntSwitchEventEffect*>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCallbacksController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapCallbacksController);
}
inline void GlobalNamespace::GameObjectIntSwitchEventEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectIntSwitchEventEffect*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameObjectIntSwitchEventEffect::HandleBasicBeatmapEventData(::GlobalNamespace::BasicBeatmapEventData* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectIntSwitchEventEffect*>(),
                                                                                         { "HandleBasicBeatmapEventData", {}, { ::i2c::type_of<::GlobalNamespace::BasicBeatmapEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::GameObjectIntSwitchEventEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameObjectIntSwitchEventEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameObjectIntSwitchEventEffect* GlobalNamespace::GameObjectIntSwitchEventEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameObjectIntSwitchEventEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameObjectIntSwitchEventEffect::GameObjectIntSwitchEventEffect() {}
