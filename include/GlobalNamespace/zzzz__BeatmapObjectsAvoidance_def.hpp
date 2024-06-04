#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectsAvoidance.hpp"
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
class BeatmapObjectAvoidancePathEvaluator;
}
namespace GlobalNamespace {
class BeatmapObjectAvoidanceTiltEvaluator;
}
namespace GlobalNamespace {
class BeatmapObjectAvoidanceYOffsetEvaluator;
}
namespace GlobalNamespace {
class BezierSplineEvaluator;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class IBeatmapObjectSpawnController;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
struct OffsetDirection;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
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
// CS Name: ::BeatmapObjectsAvoidance*
class CORDL_TYPE BeatmapObjectsAvoidance : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _accelerationBezierSplineEvaluator, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__accelerationBezierSplineEvaluator,
                      put = __cordl_internal_set__accelerationBezierSplineEvaluator))::GlobalNamespace::BezierSplineEvaluator* _accelerationBezierSplineEvaluator;

  /// @brief Field _audioTimeSource, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _avoidanceYOffsetEvaluatorProvider, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__avoidanceYOffsetEvaluatorProvider,
                      put = __cordl_internal_set__avoidanceYOffsetEvaluatorProvider))::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator* _avoidanceYOffsetEvaluatorProvider;

  /// @brief Field _beatmapData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapData, put = __cordl_internal_set__beatmapData))::GlobalNamespace::IReadonlyBeatmapData* _beatmapData;

  /// @brief Field _beatmapObjectSpawnController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectSpawnController,
                      put = __cordl_internal_set__beatmapObjectSpawnController))::GlobalNamespace::IBeatmapObjectSpawnController* _beatmapObjectSpawnController;

  /// @brief Field _gravity, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gravity, put = __cordl_internal_set__gravity))::UnityEngine::Vector2 _gravity;

  /// @brief Field _pathBezierSplineEvaluator, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__pathBezierSplineEvaluator,
                      put = __cordl_internal_set__pathBezierSplineEvaluator))::GlobalNamespace::BezierSplineEvaluator* _pathBezierSplineEvaluator;

  /// @brief Field _pathEvaluator, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__pathEvaluator, put = __cordl_internal_set__pathEvaluator))::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator* _pathEvaluator;

  /// @brief Field _playerTransforms, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTransforms, put = __cordl_internal_set__playerTransforms))::UnityW<::GlobalNamespace::PlayerTransforms> _playerTransforms;

  /// @brief Field _tiltEvaluator, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__tiltEvaluator, put = __cordl_internal_set__tiltEvaluator))::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator* _tiltEvaluator;

  /// @brief Field _towardsPlayerWrapperTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__towardsPlayerWrapperTransform,
                      put = __cordl_internal_set__towardsPlayerWrapperTransform))::UnityW<::UnityEngine::Transform> _towardsPlayerWrapperTransform;

  /// @brief Field _transform, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__transform, put = __cordl_internal_set__transform))::UnityW<::UnityEngine::Transform> _transform;

  /// @brief Field _yOffset, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__yOffset, put = __cordl_internal_set__yOffset)) float_t _yOffset;

  /// @brief Field _zOffset, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__zOffset, put = __cordl_internal_set__zOffset)) float_t _zOffset;

  /// @brief Method AdjustPositionWithOffsetDirection, addr 0x1059bf0, size 0x2f0, virtual false, abstract: false, final false
  inline void AdjustPositionWithOffsetDirection(ByRef<::UnityEngine::Vector2> position, int32_t lineIndex, ::GlobalNamespace::OffsetDirection offsetDirection);

  /// @brief Method Awake, addr 0x1058db4, size 0x1c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method BuildAnimationCurvePath, addr 0x10595ac, size 0x584, virtual false, abstract: false, final false
  inline bool BuildAnimationCurvePath();

  /// @brief Method HandleBeatmapObjectSpawnControllerDidInit, addr 0x105a740, size 0x4, virtual false, abstract: false, final false
  inline void HandleBeatmapObjectSpawnControllerDidInit();

  static inline ::GlobalNamespace::BeatmapObjectsAvoidance* New_ctor();

  /// @brief Method OnDestroy, addr 0x1059314, size 0x108, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetupAndRun, addr 0x1058f54, size 0x3c0, virtual false, abstract: false, final false
  inline void SetupAndRun();

  /// @brief Method Start, addr 0x1058dd0, size 0x184, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x105941c, size 0x190, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::BezierSplineEvaluator*& __cordl_internal_get__accelerationBezierSplineEvaluator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BezierSplineEvaluator*> const& __cordl_internal_get__accelerationBezierSplineEvaluator() const;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __cordl_internal_get__audioTimeSource() const;

  constexpr ::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*& __cordl_internal_get__avoidanceYOffsetEvaluatorProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*> const& __cordl_internal_get__avoidanceYOffsetEvaluatorProvider() const;

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __cordl_internal_get__beatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& __cordl_internal_get__beatmapData() const;

  constexpr ::GlobalNamespace::IBeatmapObjectSpawnController*& __cordl_internal_get__beatmapObjectSpawnController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapObjectSpawnController*> const& __cordl_internal_get__beatmapObjectSpawnController() const;

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__gravity() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__gravity();

  constexpr ::GlobalNamespace::BezierSplineEvaluator*& __cordl_internal_get__pathBezierSplineEvaluator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BezierSplineEvaluator*> const& __cordl_internal_get__pathBezierSplineEvaluator() const;

  constexpr ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*& __cordl_internal_get__pathEvaluator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*> const& __cordl_internal_get__pathEvaluator() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& __cordl_internal_get__playerTransforms() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& __cordl_internal_get__playerTransforms();

  constexpr ::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*& __cordl_internal_get__tiltEvaluator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*> const& __cordl_internal_get__tiltEvaluator() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__towardsPlayerWrapperTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__towardsPlayerWrapperTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform();

  constexpr float_t const& __cordl_internal_get__yOffset() const;

  constexpr float_t& __cordl_internal_get__yOffset();

  constexpr float_t const& __cordl_internal_get__zOffset() const;

  constexpr float_t& __cordl_internal_get__zOffset();

  constexpr void __cordl_internal_set__accelerationBezierSplineEvaluator(::GlobalNamespace::BezierSplineEvaluator* value);

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__avoidanceYOffsetEvaluatorProvider(::GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator* value);

  constexpr void __cordl_internal_set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  constexpr void __cordl_internal_set__beatmapObjectSpawnController(::GlobalNamespace::IBeatmapObjectSpawnController* value);

  constexpr void __cordl_internal_set__gravity(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__pathBezierSplineEvaluator(::GlobalNamespace::BezierSplineEvaluator* value);

  constexpr void __cordl_internal_set__pathEvaluator(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator* value);

  constexpr void __cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value);

  constexpr void __cordl_internal_set__tiltEvaluator(::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator* value);

  constexpr void __cordl_internal_set__towardsPlayerWrapperTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__yOffset(float_t value);

  constexpr void __cordl_internal_set__zOffset(float_t value);

  /// @brief Method .ctor, addr 0x105a744, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectsAvoidance();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsAvoidance", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectsAvoidance(BeatmapObjectsAvoidance&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectsAvoidance", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectsAvoidance(BeatmapObjectsAvoidance const&) = delete;

  /// @brief Field _zOffset, offset: 0x18, size: 0x4, def value: None
  float_t ____zOffset;

  /// @brief Field _yOffset, offset: 0x1c, size: 0x4, def value: None
  float_t ____yOffset;

  /// @brief Field _gravity, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____gravity;

  /// @brief Field _towardsPlayerWrapperTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____towardsPlayerWrapperTransform;

  /// @brief Field _audioTimeSource, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _beatmapData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ____beatmapData;

  /// @brief Field _beatmapObjectSpawnController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapObjectSpawnController* ____beatmapObjectSpawnController;

  /// @brief Field _playerTransforms, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerTransforms> ____playerTransforms;

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
  ::UnityW<::UnityEngine::Transform> ____transform;

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
