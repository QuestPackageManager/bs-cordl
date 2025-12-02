#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectAvoidancePathEvaluator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatmapObjectAvoidancePathEvaluator)
namespace GlobalNamespace {
class BezierSplineEvaluator;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectAvoidancePathEvaluator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapObjectAvoidancePathEvaluator
class CORDL_TYPE BeatmapObjectAvoidancePathEvaluator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _audioTimeSource, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _jumpEndZ, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__jumpEndZ, put = __cordl_internal_set__jumpEndZ)) float_t _jumpEndZ;

  /// @brief Field _jumpStartZ, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__jumpStartZ, put = __cordl_internal_set__jumpStartZ)) float_t _jumpStartZ;

  /// @brief Field _moveToPlayerHeadTParam, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__moveToPlayerHeadTParam, put = __cordl_internal_set__moveToPlayerHeadTParam)) float_t _moveToPlayerHeadTParam;

  /// @brief Field _noteJumpSpeed, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__noteJumpSpeed, put = __cordl_internal_set__noteJumpSpeed)) float_t _noteJumpSpeed;

  /// @brief Field _pathBezierCurveEvaluator, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__pathBezierCurveEvaluator, put = __cordl_internal_set__pathBezierCurveEvaluator)) ::GlobalNamespace::BezierSplineEvaluator* _pathBezierCurveEvaluator;

  /// @brief Field _playerTransforms, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTransforms, put = __cordl_internal_set__playerTransforms)) ::UnityW<::GlobalNamespace::PlayerTransforms> _playerTransforms;

  /// @brief Field _yOffset, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__yOffset, put = __cordl_internal_set__yOffset)) float_t _yOffset;

  /// @brief Field _zOffset, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__zOffset, put = __cordl_internal_set__zOffset)) float_t _zOffset;

  /// @brief Method GetCurrentPathPosition, addr 0x31828d0, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetCurrentPathPosition();

  static inline ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator* New_ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::PlayerTransforms* playerTransforms,
                                                                                 ::GlobalNamespace::BezierSplineEvaluator* pathBezierCurveEvaluator, float_t jumpStartZ, float_t jumpEndZ,
                                                                                 float_t yOffset, float_t zOffset, float_t noteJumpSeed, float_t moveToPlayerHeadTParam);

  constexpr ::GlobalNamespace::IAudioTimeSource* const& __cordl_internal_get__audioTimeSource() const;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr float_t const& __cordl_internal_get__jumpEndZ() const;

  constexpr float_t& __cordl_internal_get__jumpEndZ();

  constexpr float_t const& __cordl_internal_get__jumpStartZ() const;

  constexpr float_t& __cordl_internal_get__jumpStartZ();

  constexpr float_t const& __cordl_internal_get__moveToPlayerHeadTParam() const;

  constexpr float_t& __cordl_internal_get__moveToPlayerHeadTParam();

  constexpr float_t const& __cordl_internal_get__noteJumpSpeed() const;

  constexpr float_t& __cordl_internal_get__noteJumpSpeed();

  constexpr ::GlobalNamespace::BezierSplineEvaluator* const& __cordl_internal_get__pathBezierCurveEvaluator() const;

  constexpr ::GlobalNamespace::BezierSplineEvaluator*& __cordl_internal_get__pathBezierCurveEvaluator();

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& __cordl_internal_get__playerTransforms() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& __cordl_internal_get__playerTransforms();

  constexpr float_t const& __cordl_internal_get__yOffset() const;

  constexpr float_t& __cordl_internal_get__yOffset();

  constexpr float_t const& __cordl_internal_get__zOffset() const;

  constexpr float_t& __cordl_internal_get__zOffset();

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__jumpEndZ(float_t value);

  constexpr void __cordl_internal_set__jumpStartZ(float_t value);

  constexpr void __cordl_internal_set__moveToPlayerHeadTParam(float_t value);

  constexpr void __cordl_internal_set__noteJumpSpeed(float_t value);

  constexpr void __cordl_internal_set__pathBezierCurveEvaluator(::GlobalNamespace::BezierSplineEvaluator* value);

  constexpr void __cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value);

  constexpr void __cordl_internal_set__yOffset(float_t value);

  constexpr void __cordl_internal_set__zOffset(float_t value);

  /// @brief Method .ctor, addr 0x31828b8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::PlayerTransforms* playerTransforms, ::GlobalNamespace::BezierSplineEvaluator* pathBezierCurveEvaluator,
                    float_t jumpStartZ, float_t jumpEndZ, float_t yOffset, float_t zOffset, float_t noteJumpSeed, float_t moveToPlayerHeadTParam);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectAvoidancePathEvaluator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectAvoidancePathEvaluator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectAvoidancePathEvaluator(BeatmapObjectAvoidancePathEvaluator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectAvoidancePathEvaluator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectAvoidancePathEvaluator(BeatmapObjectAvoidancePathEvaluator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21426 };

  /// @brief Field _jumpStartZ, offset: 0x10, size: 0x4, def value: None
  float_t ____jumpStartZ;

  /// @brief Field _jumpEndZ, offset: 0x14, size: 0x4, def value: None
  float_t ____jumpEndZ;

  /// @brief Field _zOffset, offset: 0x18, size: 0x4, def value: None
  float_t ____zOffset;

  /// @brief Field _yOffset, offset: 0x1c, size: 0x4, def value: None
  float_t ____yOffset;

  /// @brief Field _noteJumpSpeed, offset: 0x20, size: 0x4, def value: None
  float_t ____noteJumpSpeed;

  /// @brief Field _moveToPlayerHeadTParam, offset: 0x24, size: 0x4, def value: None
  float_t ____moveToPlayerHeadTParam;

  /// @brief Field _pathBezierCurveEvaluator, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BezierSplineEvaluator* ____pathBezierCurveEvaluator;

  /// @brief Field _audioTimeSource, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _playerTransforms, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerTransforms> ____playerTransforms;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator, ____jumpStartZ) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator, ____jumpEndZ) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator, ____zOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator, ____yOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator, ____noteJumpSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator, ____moveToPlayerHeadTParam) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator, ____pathBezierCurveEvaluator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator, ____audioTimeSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator, ____playerTransforms) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*, "", "BeatmapObjectAvoidancePathEvaluator");
