#pragma once
// IWYU pragma private; include "GlobalNamespace\PlayerHeadAndObstacleInteraction.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerHeadAndObstacleInteraction_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTransforms_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.add_headDidEnterObstaclesEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)(::System::Action*)>(
    &::GlobalNamespace::PlayerHeadAndObstacleInteraction::add_headDidEnterObstaclesEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59ec100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>(), { "add_headDidEnterObstaclesEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.remove_headDidEnterObstaclesEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)(::System::Action*)>(
    &::GlobalNamespace::PlayerHeadAndObstacleInteraction::remove_headDidEnterObstaclesEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59ec1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>(),
                                                                                           { "remove_headDidEnterObstaclesEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.add_headDidEnterObstacleEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*)>(
    &::GlobalNamespace::PlayerHeadAndObstacleInteraction::add_headDidEnterObstacleEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59eae78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>(),
                                                             { "add_headDidEnterObstacleEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.remove_headDidEnterObstacleEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*)>(
    &::GlobalNamespace::PlayerHeadAndObstacleInteraction::remove_headDidEnterObstacleEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59eb214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>(),
                                                             { "remove_headDidEnterObstacleEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.add_headDidLeaveObstacleEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*)>(
    &::GlobalNamespace::PlayerHeadAndObstacleInteraction::add_headDidLeaveObstacleEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59eaf38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>(),
                                                             { "add_headDidLeaveObstacleEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.remove_headDidLeaveObstacleEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*)>(
    &::GlobalNamespace::PlayerHeadAndObstacleInteraction::remove_headDidLeaveObstacleEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59eb2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>(),
                                                             { "remove_headDidLeaveObstacleEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.get_playerHeadIsInObstacle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)()>(
    &::GlobalNamespace::PlayerHeadAndObstacleInteraction::get_playerHeadIsInObstacle)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59eb4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>(), { "get_playerHeadIsInObstacle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.RefreshIntersectingObstacles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::PlayerHeadAndObstacleInteraction::RefreshIntersectingObstacles)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x59ec258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>(),
                                                                                           { "RefreshIntersectingObstacles", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)()>(&::GlobalNamespace::PlayerHeadAndObstacleInteraction::Update)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x59ec5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerHeadAndObstacleInteraction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerHeadAndObstacleInteraction::*)()>(&::GlobalNamespace::PlayerHeadAndObstacleInteraction::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x59ec654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get__playerTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get__playerTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr void GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerTransforms = value;
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::GlobalNamespace::BeatmapObjectManager* const& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectManager = value;
}
constexpr ::System::Action*& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get_headDidEnterObstaclesEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headDidEnterObstaclesEvent;
}
constexpr ::System::Action* const& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get_headDidEnterObstaclesEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headDidEnterObstaclesEvent;
}
constexpr void GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_set_headDidEnterObstaclesEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headDidEnterObstaclesEvent = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get_headDidEnterObstacleEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headDidEnterObstacleEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* const& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get_headDidEnterObstacleEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headDidEnterObstacleEvent;
}
constexpr void GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_set_headDidEnterObstacleEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headDidEnterObstacleEvent = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get_headDidLeaveObstacleEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headDidLeaveObstacleEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* const& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get_headDidLeaveObstacleEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headDidLeaveObstacleEvent;
}
constexpr void GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_set_headDidLeaveObstacleEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headDidLeaveObstacleEvent = value;
}
constexpr int32_t& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get__lastFrameNumCheck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameNumCheck;
}
constexpr int32_t const& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get__lastFrameNumCheck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameNumCheck;
}
constexpr void GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_set__lastFrameNumCheck(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastFrameNumCheck = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::ObstacleController>>*&
GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get__intersectingObstacles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intersectingObstacles;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::ObstacleController>>* const&
GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get__intersectingObstacles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intersectingObstacles;
}
constexpr void
GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_set__intersectingObstacles(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intersectingObstacles = value;
}
constexpr int32_t& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get__prevFrameNumberOfIntersectingObstaclesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevFrameNumberOfIntersectingObstaclesCount;
}
constexpr int32_t const& GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_get__prevFrameNumberOfIntersectingObstaclesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevFrameNumberOfIntersectingObstaclesCount;
}
constexpr void GlobalNamespace::PlayerHeadAndObstacleInteraction::__cordl_internal_set__prevFrameNumberOfIntersectingObstaclesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevFrameNumberOfIntersectingObstaclesCount = value;
}
inline void GlobalNamespace::PlayerHeadAndObstacleInteraction::add_headDidEnterObstaclesEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>(), { "add_headDidEnterObstaclesEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerHeadAndObstacleInteraction::remove_headDidEnterObstaclesEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>(), { "remove_headDidEnterObstaclesEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerHeadAndObstacleInteraction::add_headDidEnterObstacleEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>(),
                                                           { "add_headDidEnterObstacleEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerHeadAndObstacleInteraction::remove_headDidEnterObstacleEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>(),
                                                           { "remove_headDidEnterObstacleEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerHeadAndObstacleInteraction::add_headDidLeaveObstacleEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>(),
                                                           { "add_headDidLeaveObstacleEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerHeadAndObstacleInteraction::remove_headDidLeaveObstacleEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>(),
                                                           { "remove_headDidLeaveObstacleEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerHeadAndObstacleInteraction::get_playerHeadIsInObstacle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>(), { "get_playerHeadIsInObstacle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeadAndObstacleInteraction::RefreshIntersectingObstacles(::UnityEngine::Vector3 worldPos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>(), { "RefreshIntersectingObstacles", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldPos);
}
inline void GlobalNamespace::PlayerHeadAndObstacleInteraction::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerHeadAndObstacleInteraction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerHeadAndObstacleInteraction* GlobalNamespace::PlayerHeadAndObstacleInteraction::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerHeadAndObstacleInteraction*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerHeadAndObstacleInteraction::PlayerHeadAndObstacleInteraction() {}
