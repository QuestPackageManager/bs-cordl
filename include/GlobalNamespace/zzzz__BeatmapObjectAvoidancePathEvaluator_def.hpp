#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatmapObjectAvoidancePathEvaluator)
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class BezierSplineEvaluator;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectAvoidancePathEvaluator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator);
// Type: ::BeatmapObjectAvoidancePathEvaluator
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3957))
// CS Name: ::BeatmapObjectAvoidancePathEvaluator*
class CORDL_TYPE BeatmapObjectAvoidancePathEvaluator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _jumpStartZ, offset 0x10, size 0x4
  __declspec(property(get = __get__jumpStartZ, put = __set__jumpStartZ)) float_t _jumpStartZ;

  /// @brief Field _jumpEndZ, offset 0x14, size 0x4
  __declspec(property(get = __get__jumpEndZ, put = __set__jumpEndZ)) float_t _jumpEndZ;

  /// @brief Field _zOffset, offset 0x18, size 0x4
  __declspec(property(get = __get__zOffset, put = __set__zOffset)) float_t _zOffset;

  /// @brief Field _yOffset, offset 0x1c, size 0x4
  __declspec(property(get = __get__yOffset, put = __set__yOffset)) float_t _yOffset;

  /// @brief Field _noteJumpSpeed, offset 0x20, size 0x4
  __declspec(property(get = __get__noteJumpSpeed, put = __set__noteJumpSpeed)) float_t _noteJumpSpeed;

  /// @brief Field _moveToPlayerHeadTParam, offset 0x24, size 0x4
  __declspec(property(get = __get__moveToPlayerHeadTParam, put = __set__moveToPlayerHeadTParam)) float_t _moveToPlayerHeadTParam;

  /// @brief Field _pathBezierCurveEvaluator, offset 0x28, size 0x8
  __declspec(property(get = __get__pathBezierCurveEvaluator, put = __set__pathBezierCurveEvaluator))::GlobalNamespace::BezierSplineEvaluator* _pathBezierCurveEvaluator;

  /// @brief Field _audioTimeSource, offset 0x30, size 0x8
  __declspec(property(get = __get__audioTimeSource, put = __set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _playerTransforms, offset 0x38, size 0x8
  __declspec(property(get = __get__playerTransforms, put = __set__playerTransforms))::GlobalNamespace::PlayerTransforms* _playerTransforms;

  constexpr float_t& __get__jumpStartZ();

  constexpr float_t const& __get__jumpStartZ() const;

  constexpr void __set__jumpStartZ(float_t value);

  constexpr float_t& __get__jumpEndZ();

  constexpr float_t const& __get__jumpEndZ() const;

  constexpr void __set__jumpEndZ(float_t value);

  constexpr float_t& __get__zOffset();

  constexpr float_t const& __get__zOffset() const;

  constexpr void __set__zOffset(float_t value);

  constexpr float_t& __get__yOffset();

  constexpr float_t const& __get__yOffset() const;

  constexpr void __set__yOffset(float_t value);

  constexpr float_t& __get__noteJumpSpeed();

  constexpr float_t const& __get__noteJumpSpeed() const;

  constexpr void __set__noteJumpSpeed(float_t value);

  constexpr float_t& __get__moveToPlayerHeadTParam();

  constexpr float_t const& __get__moveToPlayerHeadTParam() const;

  constexpr void __set__moveToPlayerHeadTParam(float_t value);

  constexpr ::GlobalNamespace::BezierSplineEvaluator*& __get__pathBezierCurveEvaluator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BezierSplineEvaluator*> const& __get__pathBezierCurveEvaluator() const;

  constexpr void __set__pathBezierCurveEvaluator(::GlobalNamespace::BezierSplineEvaluator* value);

  constexpr ::GlobalNamespace::IAudioTimeSource*& __get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __get__audioTimeSource() const;

  constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr ::GlobalNamespace::PlayerTransforms*& __get__playerTransforms();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerTransforms*> const& __get__playerTransforms() const;

  constexpr void __set__playerTransforms(::GlobalNamespace::PlayerTransforms* value);

  static inline ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator* New_ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::PlayerTransforms* playerTransforms,
                                                                                 ::GlobalNamespace::BezierSplineEvaluator* pathBezierCurveEvaluator, float_t jumpStartZ, float_t jumpEndZ,
                                                                                 float_t yOffset, float_t zOffset, float_t noteJumpSeed, float_t moveToPlayerHeadTParam);

  /// @brief Method .ctor, addr 0x2217174, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::PlayerTransforms* playerTransforms, ::GlobalNamespace::BezierSplineEvaluator* pathBezierCurveEvaluator,
                    float_t jumpStartZ, float_t jumpEndZ, float_t yOffset, float_t zOffset, float_t noteJumpSeed, float_t moveToPlayerHeadTParam);

  /// @brief Method GetCurrentPathPosition, addr 0x22171ec, size 0x104, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetCurrentPathPosition();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectAvoidancePathEvaluator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectAvoidancePathEvaluator(BeatmapObjectAvoidancePathEvaluator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectAvoidancePathEvaluator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectAvoidancePathEvaluator(BeatmapObjectAvoidancePathEvaluator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectAvoidancePathEvaluator();

public:
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
  ::GlobalNamespace::PlayerTransforms* ____playerTransforms;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator, ____jumpStartZ) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator, ____jumpEndZ) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator, ____zOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator, ____yOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator, ____noteJumpSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator, ____moveToPlayerHeadTParam) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator, ____pathBezierCurveEvaluator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator, ____audioTimeSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator, ____playerTransforms) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*, "", "BeatmapObjectAvoidancePathEvaluator");
