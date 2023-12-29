#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapObjectsAvoidance)
namespace GlobalNamespace {
class IBeatmapObjectSpawnController;
}
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace GlobalNamespace {
class BeatmapObjectAvoidanceYOffsetEvaluator;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class BeatmapObjectAvoidanceTiltEvaluator;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
struct OffsetDirection;
}
namespace GlobalNamespace {
class BezierSplineEvaluator;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class BeatmapObjectAvoidancePathEvaluator;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectsAvoidance;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectsAvoidance);
// Type: ::BeatmapObjectsAvoidance
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170)), TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3947))
// CS Name: ::BeatmapObjectsAvoidance*
class CORDL_TYPE BeatmapObjectsAvoidance : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _zOffset, offset 0x18, size 0x4
  __declspec(property(get = __get__zOffset, put = __set__zOffset)) float_t _zOffset;

  /// @brief Field _yOffset, offset 0x1c, size 0x4
  __declspec(property(get = __get__yOffset, put = __set__yOffset)) float_t _yOffset;

  /// @brief Field _gravity, offset 0x20, size 0x8
  __declspec(property(get = __get__gravity, put = __set__gravity))::UnityEngine::Vector2 _gravity;

  /// @brief Field _towardsPlayerWrapperTransform, offset 0x28, size 0x8
  __declspec(property(get = __get__towardsPlayerWrapperTransform, put = __set__towardsPlayerWrapperTransform))::UnityEngine::Transform* _towardsPlayerWrapperTransform;

  /// @brief Field _audioTimeSource, offset 0x30, size 0x8
  __declspec(property(get = __get__audioTimeSource, put = __set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _beatmapData, offset 0x38, size 0x8
  __declspec(property(get = __get__beatmapData, put = __set__beatmapData))::GlobalNamespace::IReadonlyBeatmapData* _beatmapData;

  /// @brief Field _beatmapObjectSpawnController, offset 0x40, size 0x8
  __declspec(property(get = __get__beatmapObjectSpawnController, put = __set__beatmapObjectSpawnController))::GlobalNamespace::IBeatmapObjectSpawnController* _beatmapObjectSpawnController;

  /// @brief Field _playerTransforms, offset 0x48, size 0x8
  __declspec(property(get = __get__playerTransforms, put = __set__playerTransforms))::GlobalNamespace::PlayerTransforms* _playerTransforms;

  /// @brief Field _avoidanceYOffsetEvaluatorProvider, offset 0x50, size 0x8
  __declspec(property(get = __get__avoidanceYOffsetEvaluatorProvider,
                      put = __set__avoidanceYOffsetEvaluatorProvider))::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator* _avoidanceYOffsetEvaluatorProvider;

  /// @brief Field _pathEvaluator, offset 0x58, size 0x8
  __declspec(property(get = __get__pathEvaluator, put = __set__pathEvaluator))::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator* _pathEvaluator;

  /// @brief Field _tiltEvaluator, offset 0x60, size 0x8
  __declspec(property(get = __get__tiltEvaluator, put = __set__tiltEvaluator))::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator* _tiltEvaluator;

  /// @brief Field _pathBezierSplineEvaluator, offset 0x68, size 0x8
  __declspec(property(get = __get__pathBezierSplineEvaluator, put = __set__pathBezierSplineEvaluator))::GlobalNamespace::BezierSplineEvaluator* _pathBezierSplineEvaluator;

  /// @brief Field _accelerationBezierSplineEvaluator, offset 0x70, size 0x8
  __declspec(property(get = __get__accelerationBezierSplineEvaluator, put = __set__accelerationBezierSplineEvaluator))::GlobalNamespace::BezierSplineEvaluator* _accelerationBezierSplineEvaluator;

  /// @brief Field _transform, offset 0x78, size 0x8
  __declspec(property(get = __get__transform, put = __set__transform))::UnityEngine::Transform* _transform;

  constexpr float_t& __get__zOffset();

  constexpr float_t const& __get__zOffset() const;

  constexpr void __set__zOffset(float_t value);

  constexpr float_t& __get__yOffset();

  constexpr float_t const& __get__yOffset() const;

  constexpr void __set__yOffset(float_t value);

  constexpr ::UnityEngine::Vector2& __get__gravity();

  constexpr ::UnityEngine::Vector2 const& __get__gravity() const;

  constexpr void __set__gravity(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Transform*& __get__towardsPlayerWrapperTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__towardsPlayerWrapperTransform() const;

  constexpr void __set__towardsPlayerWrapperTransform(::UnityEngine::Transform* value);

  constexpr ::GlobalNamespace::IAudioTimeSource*& __get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __get__audioTimeSource() const;

  constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __get__beatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& __get__beatmapData() const;

  constexpr void __set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  constexpr ::GlobalNamespace::IBeatmapObjectSpawnController*& __get__beatmapObjectSpawnController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapObjectSpawnController*> const& __get__beatmapObjectSpawnController() const;

  constexpr void __set__beatmapObjectSpawnController(::GlobalNamespace::IBeatmapObjectSpawnController* value);

  constexpr ::GlobalNamespace::PlayerTransforms*& __get__playerTransforms();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerTransforms*> const& __get__playerTransforms() const;

  constexpr void __set__playerTransforms(::GlobalNamespace::PlayerTransforms* value);

  constexpr ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*& __get__avoidanceYOffsetEvaluatorProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*> const& __get__avoidanceYOffsetEvaluatorProvider() const;

  constexpr void __set__avoidanceYOffsetEvaluatorProvider(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator* value);

  constexpr ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*& __get__pathEvaluator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*> const& __get__pathEvaluator() const;

  constexpr void __set__pathEvaluator(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator* value);

  constexpr ::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*& __get__tiltEvaluator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*> const& __get__tiltEvaluator() const;

  constexpr void __set__tiltEvaluator(::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator* value);

  constexpr ::GlobalNamespace::BezierSplineEvaluator*& __get__pathBezierSplineEvaluator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BezierSplineEvaluator*> const& __get__pathBezierSplineEvaluator() const;

  constexpr void __set__pathBezierSplineEvaluator(::GlobalNamespace::BezierSplineEvaluator* value);

  constexpr ::GlobalNamespace::BezierSplineEvaluator*& __get__accelerationBezierSplineEvaluator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BezierSplineEvaluator*> const& __get__accelerationBezierSplineEvaluator() const;

  constexpr void __set__accelerationBezierSplineEvaluator(::GlobalNamespace::BezierSplineEvaluator* value);

  constexpr ::UnityEngine::Transform*& __get__transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__transform() const;

  constexpr void __set__transform(::UnityEngine::Transform* value);

  /// @brief Method Awake addr 0x20b6cb0 size 0x1c virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x20b6ccc size 0x184 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x20b7210 size 0x108 virtual false final false
  inline void OnDestroy();

  /// @brief Method Update addr 0x20b7318 size 0x190 virtual false final false
  inline void Update();

  /// @brief Method SetupAndRun addr 0x20b6e50 size 0x3c0 virtual false final false
  inline void SetupAndRun();

  /// @brief Method BuildAnimationCurvePath addr 0x20b74a8 size 0x584 virtual false final false
  inline bool BuildAnimationCurvePath();

  /// @brief Method AdjustPositionWithOffsetDirection addr 0x20b7aec size 0x2f0 virtual false final false
  inline void AdjustPositionWithOffsetDirection(ByRef<::UnityEngine::Vector2> position, int32_t lineIndex, ::GlobalNamespace::OffsetDirection offsetDirection);

  /// @brief Method HandleBeatmapObjectSpawnControllerDidInit addr 0x20b863c size 0x4 virtual false final false
  inline void HandleBeatmapObjectSpawnControllerDidInit();

  static inline ::GlobalNamespace::BeatmapObjectsAvoidance* New_ctor();

  /// @brief Method .ctor addr 0x20b8640 size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsAvoidance", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectsAvoidance(BeatmapObjectsAvoidance&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsAvoidance", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectsAvoidance(BeatmapObjectsAvoidance const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectsAvoidance();

public:
  /// @brief Field _zOffset, offset: 0x18, size: 0x4, def value: None
  float_t ____zOffset;

  /// @brief Field _yOffset, offset: 0x1c, size: 0x4, def value: None
  float_t ____yOffset;

  /// @brief Field _gravity, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____gravity;

  /// @brief Field _towardsPlayerWrapperTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ____towardsPlayerWrapperTransform;

  /// @brief Field _audioTimeSource, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _beatmapData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ____beatmapData;

  /// @brief Field _beatmapObjectSpawnController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapObjectSpawnController* ____beatmapObjectSpawnController;

  /// @brief Field _playerTransforms, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::PlayerTransforms* ____playerTransforms;

  /// @brief Field _avoidanceYOffsetEvaluatorProvider, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator* ____avoidanceYOffsetEvaluatorProvider;

  /// @brief Field _pathEvaluator, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator* ____pathEvaluator;

  /// @brief Field _tiltEvaluator, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator* ____tiltEvaluator;

  /// @brief Field _pathBezierSplineEvaluator, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::BezierSplineEvaluator* ____pathBezierSplineEvaluator;

  /// @brief Field _accelerationBezierSplineEvaluator, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::BezierSplineEvaluator* ____accelerationBezierSplineEvaluator;

  /// @brief Field _transform, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Transform* ____transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectsAvoidance, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsAvoidance, ____zOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsAvoidance, ____yOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsAvoidance, ____gravity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsAvoidance, ____towardsPlayerWrapperTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsAvoidance, ____audioTimeSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsAvoidance, ____beatmapData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsAvoidance, ____beatmapObjectSpawnController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsAvoidance, ____playerTransforms) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsAvoidance, ____avoidanceYOffsetEvaluatorProvider) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsAvoidance, ____pathEvaluator) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsAvoidance, ____tiltEvaluator) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsAvoidance, ____pathBezierSplineEvaluator) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsAvoidance, ____accelerationBezierSplineEvaluator) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectsAvoidance, ____transform) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectsAvoidance);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectsAvoidance*, "", "BeatmapObjectsAvoidance");
