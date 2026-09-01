#pragma once
// IWYU pragma private; include "GlobalNamespace\ObstacleSaberSparkleEffectManager.hpp"
#include "GlobalNamespace/zzzz__ObstacleSaberSparkleEffect_impl.hpp"
#include "GlobalNamespace/zzzz__Saber_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleSaberSparkleEffectManager_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticFeedbackManager_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSaberSparkleEffectManager_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSaberSparkleEffect_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
inline void GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations::setStaticF_kNegativeX(::UnityEngine::Quaternion value) {
  ::cordl_internals::setStaticField<::UnityEngine::Quaternion, "kNegativeX", ::GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations*>(std::forward<::UnityEngine::Quaternion>(value));
}
inline ::UnityEngine::Quaternion GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations::getStaticF_kNegativeX() {
  return ::cordl_internals::getStaticField<::UnityEngine::Quaternion, "kNegativeX", ::GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations*>();
}
inline void GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations::setStaticF_kPositiveX(::UnityEngine::Quaternion value) {
  ::cordl_internals::setStaticField<::UnityEngine::Quaternion, "kPositiveX", ::GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations*>(std::forward<::UnityEngine::Quaternion>(value));
}
inline ::UnityEngine::Quaternion GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations::getStaticF_kPositiveX() {
  return ::cordl_internals::getStaticField<::UnityEngine::Quaternion, "kPositiveX", ::GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations*>();
}
inline void GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations::setStaticF_kNegativeY(::UnityEngine::Quaternion value) {
  ::cordl_internals::setStaticField<::UnityEngine::Quaternion, "kNegativeY", ::GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations*>(std::forward<::UnityEngine::Quaternion>(value));
}
inline ::UnityEngine::Quaternion GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations::getStaticF_kNegativeY() {
  return ::cordl_internals::getStaticField<::UnityEngine::Quaternion, "kNegativeY", ::GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations*>();
}
inline void GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations::setStaticF_kPositiveY(::UnityEngine::Quaternion value) {
  ::cordl_internals::setStaticField<::UnityEngine::Quaternion, "kPositiveY", ::GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations*>(std::forward<::UnityEngine::Quaternion>(value));
}
inline ::UnityEngine::Quaternion GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations::getStaticF_kPositiveY() {
  return ::cordl_internals::getStaticField<::UnityEngine::Quaternion, "kPositiveY", ::GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations*>();
}
inline void GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations::setStaticF_kNegativeZ(::UnityEngine::Quaternion value) {
  ::cordl_internals::setStaticField<::UnityEngine::Quaternion, "kNegativeZ", ::GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations*>(std::forward<::UnityEngine::Quaternion>(value));
}
inline ::UnityEngine::Quaternion GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations::getStaticF_kNegativeZ() {
  return ::cordl_internals::getStaticField<::UnityEngine::Quaternion, "kNegativeZ", ::GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations*>();
}
inline void GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations::setStaticF_kPositiveZ(::UnityEngine::Quaternion value) {
  ::cordl_internals::setStaticField<::UnityEngine::Quaternion, "kPositiveZ", ::GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations*>(std::forward<::UnityEngine::Quaternion>(value));
}
inline ::UnityEngine::Quaternion GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations::getStaticF_kPositiveZ() {
  return ::cordl_internals::getStaticField<::UnityEngine::Quaternion, "kPositiveZ", ::GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations*>();
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObstacleSaberSparkleEffectManager_BoxSideRotations::ObstacleSaberSparkleEffectManager_BoxSideRotations() {}
//  Writing Method size for method: ::GlobalNamespace::ObstacleSaberSparkleEffectManager.add_sparkleEffectDidStartEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleSaberSparkleEffectManager::*)(::System::Action_1<::GlobalNamespace::SaberType>*)>(
    &::GlobalNamespace::ObstacleSaberSparkleEffectManager::add_sparkleEffectDidStartEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x598c4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(),
                                                             { "add_sparkleEffectDidStartEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::SaberType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSaberSparkleEffectManager.remove_sparkleEffectDidStartEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleSaberSparkleEffectManager::*)(::System::Action_1<::GlobalNamespace::SaberType>*)>(
    &::GlobalNamespace::ObstacleSaberSparkleEffectManager::remove_sparkleEffectDidStartEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x598c5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(),
                                                             { "remove_sparkleEffectDidStartEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::SaberType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSaberSparkleEffectManager.add_sparkleEffectDidEndEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleSaberSparkleEffectManager::*)(::System::Action_1<::GlobalNamespace::SaberType>*)>(
    &::GlobalNamespace::ObstacleSaberSparkleEffectManager::add_sparkleEffectDidEndEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x598c67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(),
                                                             { "add_sparkleEffectDidEndEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::SaberType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSaberSparkleEffectManager.remove_sparkleEffectDidEndEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleSaberSparkleEffectManager::*)(::System::Action_1<::GlobalNamespace::SaberType>*)>(
    &::GlobalNamespace::ObstacleSaberSparkleEffectManager::remove_sparkleEffectDidEndEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x598c73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(),
                                                             { "remove_sparkleEffectDidEndEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::SaberType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSaberSparkleEffectManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleSaberSparkleEffectManager::*)()>(&::GlobalNamespace::ObstacleSaberSparkleEffectManager::Start)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x598c7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSaberSparkleEffectManager.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleSaberSparkleEffectManager::*)()>(&::GlobalNamespace::ObstacleSaberSparkleEffectManager::Update)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x598ca5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSaberSparkleEffectManager.IntersectSaberWithObstacles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::Saber*, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>*, ::by_ref<bool>,
                                                                ::by_ref<::UnityEngine::Pose>)>(&::GlobalNamespace::ObstacleSaberSparkleEffectManager::IntersectSaberWithObstacles)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x598cce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(),
                                         { "IntersectSaberWithObstacles",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>*>(),
                                             ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSaberSparkleEffectManager.IntersectBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::ObstacleSaberSparkleEffectManager::IntersectBounds)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x598d040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(),
                                         { "IntersectBounds", {}, { ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSaberSparkleEffectManager.IntersectBoxSurfacePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Bounds>, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Pose>)>(
    &::GlobalNamespace::ObstacleSaberSparkleEffectManager::IntersectBoxSurfacePose)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x598cffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(),
                                                                                           { "IntersectBoxSurfacePose",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                               ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSaberSparkleEffectManager.IntersectBoxSurfacePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Bounds>, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>)>(
    &::GlobalNamespace::ObstacleSaberSparkleEffectManager::IntersectBoxSurfacePosition)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x598d220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(),
                                                                                           { "IntersectBoxSurfacePosition",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                               ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSaberSparkleEffectManager.FindBoxSurfaceRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::by_ref<::UnityEngine::Bounds>, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::ObstacleSaberSparkleEffectManager::FindBoxSurfaceRotation)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x598d5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(),
                                                             { "FindBoxSurfaceRotation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleSaberSparkleEffectManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ObstacleSaberSparkleEffectManager::*)()>(&::GlobalNamespace::ObstacleSaberSparkleEffectManager::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x598d778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>& GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_get__obstacleSaberSparkleEffectPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleSaberSparkleEffectPrefab;
}
constexpr ::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect> const& GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_get__obstacleSaberSparkleEffectPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleSaberSparkleEffectPrefab;
}
constexpr void GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_set__obstacleSaberSparkleEffectPrefab(::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacleSaberSparkleEffectPrefab = value;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO>& GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_get__rumblePreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumblePreset;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO> const& GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_get__rumblePreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumblePreset;
}
constexpr void GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_set__rumblePreset(::UnityW<::BeatSaber::Haptics::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rumblePreset = value;
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::GlobalNamespace::BeatmapObjectManager* const& GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectManager = value;
}
constexpr ::UnityW<::GlobalNamespace::SaberManager>& GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_get__saberManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr ::UnityW<::GlobalNamespace::SaberManager> const& GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_get__saberManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr void GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberManager = value;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager>& GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_get__hapticFeedbackManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> const& GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_get__hapticFeedbackManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr void GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_set__hapticFeedbackManager(::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticFeedbackManager = value;
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::GlobalNamespace::ColorManager* const& GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorManager = value;
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::Saber>>& GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_get__sabers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sabers;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::Saber>> const& GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_get__sabers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sabers;
}
constexpr void GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_set__sabers(::ArrayW<::UnityW<::GlobalNamespace::Saber>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sabers = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>>& GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_get__effects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effects;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>> const& GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_get__effects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effects;
}
constexpr void GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_set__effects(::ArrayW<::UnityW<::GlobalNamespace::ObstacleSaberSparkleEffect>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____effects = value;
}
constexpr ::System::Action_1<::GlobalNamespace::SaberType>*& GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_get_sparkleEffectDidStartEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sparkleEffectDidStartEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::SaberType>* const& GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_get_sparkleEffectDidStartEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sparkleEffectDidStartEvent;
}
constexpr void GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_set_sparkleEffectDidStartEvent(::System::Action_1<::GlobalNamespace::SaberType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sparkleEffectDidStartEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::SaberType>*& GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_get_sparkleEffectDidEndEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sparkleEffectDidEndEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::SaberType>* const& GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_get_sparkleEffectDidEndEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sparkleEffectDidEndEvent;
}
constexpr void GlobalNamespace::ObstacleSaberSparkleEffectManager::__cordl_internal_set_sparkleEffectDidEndEvent(::System::Action_1<::GlobalNamespace::SaberType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sparkleEffectDidEndEvent = value;
}
inline void GlobalNamespace::ObstacleSaberSparkleEffectManager::add_sparkleEffectDidStartEvent(::System::Action_1<::GlobalNamespace::SaberType>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(),
                                                           { "add_sparkleEffectDidStartEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::SaberType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ObstacleSaberSparkleEffectManager::remove_sparkleEffectDidStartEvent(::System::Action_1<::GlobalNamespace::SaberType>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(),
                                                           { "remove_sparkleEffectDidStartEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::SaberType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ObstacleSaberSparkleEffectManager::add_sparkleEffectDidEndEvent(::System::Action_1<::GlobalNamespace::SaberType>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(),
                                                           { "add_sparkleEffectDidEndEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::SaberType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ObstacleSaberSparkleEffectManager::remove_sparkleEffectDidEndEvent(::System::Action_1<::GlobalNamespace::SaberType>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(),
                                                           { "remove_sparkleEffectDidEndEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::SaberType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ObstacleSaberSparkleEffectManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ObstacleSaberSparkleEffectManager::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ObstacleSaberSparkleEffectManager::IntersectSaberWithObstacles(::GlobalNamespace::Saber* saber,
                                                                                            ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* obstacles,
                                                                                            ::by_ref<bool> intersectObstacleSurface, ::by_ref<::UnityEngine::Pose> hit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(),
                                       { "IntersectSaberWithObstacles",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>*>(),
                                           ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, saber, obstacles, intersectObstacleSurface, hit);
}
inline bool GlobalNamespace::ObstacleSaberSparkleEffectManager::IntersectBounds(::UnityEngine::Bounds bounds, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(),
                                       { "IntersectBounds", {}, { ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bounds, start, end);
}
inline bool GlobalNamespace::ObstacleSaberSparkleEffectManager::IntersectBoxSurfacePose(::by_ref<::UnityEngine::Bounds> bounds, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end,
                                                                                        ::by_ref<::UnityEngine::Pose> hit) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(),
                                                                                         { "IntersectBoxSurfacePose",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                             ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bounds, start, end, hit);
}
inline bool GlobalNamespace::ObstacleSaberSparkleEffectManager::IntersectBoxSurfacePosition(::by_ref<::UnityEngine::Bounds> bounds, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end,
                                                                                            ::by_ref<::UnityEngine::Vector3> hit) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(),
                                                                                         { "IntersectBoxSurfacePosition",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                             ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bounds, start, end, hit);
}
inline ::UnityEngine::Quaternion GlobalNamespace::ObstacleSaberSparkleEffectManager::FindBoxSurfaceRotation(::by_ref<::UnityEngine::Bounds> bounds, ::UnityEngine::Vector3 position) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(),
                                                           { "FindBoxSurfaceRotation", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, bounds, position);
}
inline void GlobalNamespace::ObstacleSaberSparkleEffectManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ObstacleSaberSparkleEffectManager* GlobalNamespace::ObstacleSaberSparkleEffectManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ObstacleSaberSparkleEffectManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObstacleSaberSparkleEffectManager::ObstacleSaberSparkleEffectManager() {}
