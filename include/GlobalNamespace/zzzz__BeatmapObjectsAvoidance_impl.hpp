#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectsAvoidance.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectsAvoidance_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectAvoidancePathEvaluator_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectAvoidanceTiltEvaluator_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectAvoidanceYOffsetEvaluator_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnController_def.hpp"
#include "GlobalNamespace/zzzz__BezierSplineEvaluator_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__IJumpOffsetYProvider_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__IVariableMovementDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__OffsetDirection_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTransforms_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsAvoidance.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectsAvoidance::*)()>(&::GlobalNamespace::BeatmapObjectsAvoidance::Awake)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3281b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsAvoidance*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsAvoidance.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectsAvoidance::*)()>(&::GlobalNamespace::BeatmapObjectsAvoidance::Start)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3281b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsAvoidance*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsAvoidance.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectsAvoidance::*)()>(&::GlobalNamespace::BeatmapObjectsAvoidance::OnDestroy)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3281fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsAvoidance*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsAvoidance.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectsAvoidance::*)()>(&::GlobalNamespace::BeatmapObjectsAvoidance::Update)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x32820b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsAvoidance*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsAvoidance.SetupAndRun
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectsAvoidance::*)()>(&::GlobalNamespace::BeatmapObjectsAvoidance::SetupAndRun)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x3281c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsAvoidance*>(), { "SetupAndRun", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsAvoidance.BuildAnimationCurvePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapObjectsAvoidance::*)()>(&::GlobalNamespace::BeatmapObjectsAvoidance::BuildAnimationCurvePath)> {
  constexpr static std::size_t size = 0x574;
  constexpr static std::size_t addrs = 0x3282318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsAvoidance*>(), { "BuildAnimationCurvePath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsAvoidance.AdjustPositionWithOffsetDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectsAvoidance::*)(::by_ref<::UnityEngine::Vector2>, int32_t, ::GlobalNamespace::OffsetDirection)>(
    &::GlobalNamespace::BeatmapObjectsAvoidance::AdjustPositionWithOffsetDirection)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x3282948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::BeatmapObjectsAvoidance*>(),
            { "AdjustPositionWithOffsetDirection", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::OffsetDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsAvoidance.HandleBeatmapObjectSpawnControllerDidInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectsAvoidance::*)()>(
    &::GlobalNamespace::BeatmapObjectsAvoidance::HandleBeatmapObjectSpawnControllerDidInit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3283354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsAvoidance*>(), { "HandleBeatmapObjectSpawnControllerDidInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectsAvoidance._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectsAvoidance::*)()>(&::GlobalNamespace::BeatmapObjectsAvoidance::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3283358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsAvoidance*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__zOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zOffset;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__zOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zOffset;
}
constexpr void GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_set__zOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zOffset = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__yOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yOffset;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__yOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yOffset;
}
constexpr void GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_set__yOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____yOffset = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__gravity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gravity;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__gravity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gravity;
}
constexpr void GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_set__gravity(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gravity = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__towardsPlayerWrapperTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____towardsPlayerWrapperTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__towardsPlayerWrapperTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____towardsPlayerWrapperTransform;
}
constexpr void GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_set__towardsPlayerWrapperTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____towardsPlayerWrapperTransform = value;
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::GlobalNamespace::IAudioTimeSource* const& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSource = value;
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData*& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__beatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData* const& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr void GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapData = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController>& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__beatmapObjectSpawnController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawnController;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> const& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__beatmapObjectSpawnController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawnController;
}
constexpr void GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_set__beatmapObjectSpawnController(::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectSpawnController = value;
}
constexpr ::GlobalNamespace::IVariableMovementDataProvider*& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__variableMovementDataProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variableMovementDataProvider;
}
constexpr ::GlobalNamespace::IVariableMovementDataProvider* const& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__variableMovementDataProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____variableMovementDataProvider;
}
constexpr void GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::IVariableMovementDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____variableMovementDataProvider = value;
}
constexpr ::GlobalNamespace::IJumpOffsetYProvider*& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__jumpOffsetYProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpOffsetYProvider;
}
constexpr ::GlobalNamespace::IJumpOffsetYProvider* const& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__jumpOffsetYProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpOffsetYProvider;
}
constexpr void GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_set__jumpOffsetYProvider(::GlobalNamespace::IJumpOffsetYProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpOffsetYProvider = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__playerTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__playerTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr void GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerTransforms = value;
}
constexpr ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__avoidanceYOffsetEvaluatorProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avoidanceYOffsetEvaluatorProvider;
}
constexpr ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator* const& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__avoidanceYOffsetEvaluatorProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avoidanceYOffsetEvaluatorProvider;
}
constexpr void GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_set__avoidanceYOffsetEvaluatorProvider(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avoidanceYOffsetEvaluatorProvider = value;
}
constexpr ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__pathEvaluator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pathEvaluator;
}
constexpr ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator* const& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__pathEvaluator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pathEvaluator;
}
constexpr void GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_set__pathEvaluator(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pathEvaluator = value;
}
constexpr ::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__tiltEvaluator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tiltEvaluator;
}
constexpr ::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator* const& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__tiltEvaluator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tiltEvaluator;
}
constexpr void GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_set__tiltEvaluator(::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tiltEvaluator = value;
}
constexpr ::GlobalNamespace::BezierSplineEvaluator*& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__pathBezierSplineEvaluator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pathBezierSplineEvaluator;
}
constexpr ::GlobalNamespace::BezierSplineEvaluator* const& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__pathBezierSplineEvaluator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pathBezierSplineEvaluator;
}
constexpr void GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_set__pathBezierSplineEvaluator(::GlobalNamespace::BezierSplineEvaluator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pathBezierSplineEvaluator = value;
}
constexpr ::GlobalNamespace::BezierSplineEvaluator*& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__accelerationBezierSplineEvaluator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accelerationBezierSplineEvaluator;
}
constexpr ::GlobalNamespace::BezierSplineEvaluator* const& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__accelerationBezierSplineEvaluator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accelerationBezierSplineEvaluator;
}
constexpr void GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_set__accelerationBezierSplineEvaluator(::GlobalNamespace::BezierSplineEvaluator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____accelerationBezierSplineEvaluator = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void GlobalNamespace::BeatmapObjectsAvoidance::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transform = value;
}
inline void GlobalNamespace::BeatmapObjectsAvoidance::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsAvoidance*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectsAvoidance::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsAvoidance*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectsAvoidance::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsAvoidance*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectsAvoidance::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsAvoidance*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectsAvoidance::SetupAndRun() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsAvoidance*>(), { "SetupAndRun", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapObjectsAvoidance::BuildAnimationCurvePath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsAvoidance*>(), { "BuildAnimationCurvePath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectsAvoidance::AdjustPositionWithOffsetDirection(::by_ref<::UnityEngine::Vector2> position, int32_t lineIndex,
                                                                                        ::GlobalNamespace::OffsetDirection offsetDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::BeatmapObjectsAvoidance*>(),
          { "AdjustPositionWithOffsetDirection", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::OffsetDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, lineIndex, offsetDirection);
}
inline void GlobalNamespace::BeatmapObjectsAvoidance::HandleBeatmapObjectSpawnControllerDidInit() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsAvoidance*>(), { "HandleBeatmapObjectSpawnControllerDidInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectsAvoidance::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectsAvoidance*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapObjectsAvoidance* GlobalNamespace::BeatmapObjectsAvoidance::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapObjectsAvoidance*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectsAvoidance::BeatmapObjectsAvoidance() {}
