#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapObjectSpawnMovementData)
namespace GlobalNamespace {
class IJumpOffsetYProvider;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteJumpValueType;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteJumpValueType;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnMovementData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__SliderSpawnData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectSpawnMovementData);
MARK_VAL_T(::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData);
MARK_VAL_T(::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData);
MARK_VAL_T(::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData);
// Type: ::ObstacleSpawnData
// SizeInfo { instance_size: 52, native_size: 52, calculated_instance_size: 52, calculated_native_size: 68, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapObjectSpawnMovementData::ObstacleSpawnData
struct CORDL_TYPE __BeatmapObjectSpawnMovementData__ObstacleSpawnData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2394708, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float_t obstacleHeight, float_t moveDuration, float_t jumpDuration,
                    float_t noteLinesDistance);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapObjectSpawnMovementData__ObstacleSpawnData();

  // Ctor Parameters [CppParam { name: "moveStartPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "moveEndPos", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "jumpEndPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "obstacleHeight", ty: "float_t", modifiers: "", def_value: None
  // }, CppParam { name: "moveDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "jumpDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "noteLinesDistance", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __BeatmapObjectSpawnMovementData__ObstacleSpawnData(::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float_t obstacleHeight,
                                                                float_t moveDuration, float_t jumpDuration, float_t noteLinesDistance) noexcept;

  /// @brief Field moveStartPos, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 moveStartPos;

  /// @brief Field moveEndPos, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 moveEndPos;

  /// @brief Field jumpEndPos, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 jumpEndPos;

  /// @brief Field obstacleHeight, offset: 0x24, size: 0x4, def value: None
  float_t obstacleHeight;

  /// @brief Field moveDuration, offset: 0x28, size: 0x4, def value: None
  float_t moveDuration;

  /// @brief Field jumpDuration, offset: 0x2c, size: 0x4, def value: None
  float_t jumpDuration;

  /// @brief Field noteLinesDistance, offset: 0x30, size: 0x4, def value: None
  float_t noteLinesDistance;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x34 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, 0x34>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, moveStartPos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, moveEndPos) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, jumpEndPos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, obstacleHeight) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, moveDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, jumpDuration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, noteLinesDistance) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NoteSpawnData
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapObjectSpawnMovementData::NoteSpawnData
struct CORDL_TYPE __BeatmapObjectSpawnMovementData__NoteSpawnData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2394804, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float_t jumpGravity, float_t moveDuration, float_t jumpDuration);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapObjectSpawnMovementData__NoteSpawnData();

  // Ctor Parameters [CppParam { name: "moveStartPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "moveEndPos", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "jumpEndPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "jumpGravity", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "moveDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "jumpDuration", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __BeatmapObjectSpawnMovementData__NoteSpawnData(::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float_t jumpGravity,
                                                            float_t moveDuration, float_t jumpDuration) noexcept;

  /// @brief Field moveStartPos, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 moveStartPos;

  /// @brief Field moveEndPos, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 moveEndPos;

  /// @brief Field jumpEndPos, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 jumpEndPos;

  /// @brief Field jumpGravity, offset: 0x24, size: 0x4, def value: None
  float_t jumpGravity;

  /// @brief Field moveDuration, offset: 0x28, size: 0x4, def value: None
  float_t moveDuration;

  /// @brief Field jumpDuration, offset: 0x2c, size: 0x4, def value: None
  float_t jumpDuration;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData, moveStartPos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData, moveEndPos) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData, jumpEndPos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData, jumpGravity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData, moveDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData, jumpDuration) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SliderSpawnData
// SizeInfo { instance_size: 88, native_size: 88, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapObjectSpawnMovementData::SliderSpawnData
struct CORDL_TYPE __BeatmapObjectSpawnMovementData__SliderSpawnData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2394834, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 headMoveStartPos, ::UnityEngine::Vector3 headJumpStartPos, ::UnityEngine::Vector3 headJumpEndPos, float_t headJumpGravity,
                    ::UnityEngine::Vector3 tailMoveStartPos, ::UnityEngine::Vector3 tailJumpStartPos, ::UnityEngine::Vector3 tailJumpEndPos, float_t tailJumpGravity, float_t moveDuration,
                    float_t jumpDuration);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapObjectSpawnMovementData__SliderSpawnData();

  // Ctor Parameters [CppParam { name: "headMoveStartPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "headJumpStartPos", ty: "::UnityEngine::Vector3", modifiers:
  // "", def_value: None }, CppParam { name: "headJumpEndPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "headJumpGravity", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "tailMoveStartPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tailJumpStartPos", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None }, CppParam { name: "tailJumpEndPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tailJumpGravity", ty: "float_t", modifiers:
  // "", def_value: None }, CppParam { name: "moveDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "jumpDuration", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __BeatmapObjectSpawnMovementData__SliderSpawnData(::UnityEngine::Vector3 headMoveStartPos, ::UnityEngine::Vector3 headJumpStartPos, ::UnityEngine::Vector3 headJumpEndPos,
                                                              float_t headJumpGravity, ::UnityEngine::Vector3 tailMoveStartPos, ::UnityEngine::Vector3 tailJumpStartPos,
                                                              ::UnityEngine::Vector3 tailJumpEndPos, float_t tailJumpGravity, float_t moveDuration, float_t jumpDuration) noexcept;

  /// @brief Field headMoveStartPos, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 headMoveStartPos;

  /// @brief Field headJumpStartPos, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 headJumpStartPos;

  /// @brief Field headJumpEndPos, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 headJumpEndPos;

  /// @brief Field headJumpGravity, offset: 0x24, size: 0x4, def value: None
  float_t headJumpGravity;

  /// @brief Field tailMoveStartPos, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 tailMoveStartPos;

  /// @brief Field tailJumpStartPos, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::Vector3 tailJumpStartPos;

  /// @brief Field tailJumpEndPos, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 tailJumpEndPos;

  /// @brief Field tailJumpGravity, offset: 0x4c, size: 0x4, def value: None
  float_t tailJumpGravity;

  /// @brief Field moveDuration, offset: 0x50, size: 0x4, def value: None
  float_t moveDuration;

  /// @brief Field jumpDuration, offset: 0x54, size: 0x4, def value: None
  float_t jumpDuration;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData, headMoveStartPos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData, headJumpStartPos) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData, headJumpEndPos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData, headJumpGravity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData, tailMoveStartPos) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData, tailJumpStartPos) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData, tailJumpEndPos) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData, tailJumpGravity) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData, moveDuration) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData, jumpDuration) == 0x54, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NoteJumpValueType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapObjectSpawnMovementData::NoteJumpValueType
struct CORDL_TYPE __BeatmapObjectSpawnMovementData__NoteJumpValueType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BeatmapObjectSpawnMovementData__NoteJumpValueType_Unwrapped
  enum struct ____BeatmapObjectSpawnMovementData__NoteJumpValueType_Unwrapped : int32_t {
    __E_BeatOffset = static_cast<int32_t>(0x1),
    __E_JumpDuration = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BeatmapObjectSpawnMovementData__NoteJumpValueType_Unwrapped() const noexcept {
    return static_cast<____BeatmapObjectSpawnMovementData__NoteJumpValueType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapObjectSpawnMovementData__NoteJumpValueType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BeatmapObjectSpawnMovementData__NoteJumpValueType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BeatOffset value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType const BeatOffset;

  /// @brief Field JumpDuration value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType const JumpDuration;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapObjectSpawnMovementData
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapObjectSpawnMovementData*
class CORDL_TYPE BeatmapObjectSpawnMovementData : public ::System::Object {
public:
  // Declarations
  using NoteJumpValueType = ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType;

  using NoteSpawnData = ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData;

  using ObstacleSpawnData = ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData;

  using SliderSpawnData = ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData;

  /// @brief Field _baseLinesHighestJumpPosY, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__baseLinesHighestJumpPosY, put = __cordl_internal_set__baseLinesHighestJumpPosY)) float_t _baseLinesHighestJumpPosY;

  /// @brief Field _centerPos, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get__centerPos, put = __cordl_internal_set__centerPos))::UnityEngine::Vector3 _centerPos;

  /// @brief Field _forwardVec, offset 0x94, size 0xc
  __declspec(property(get = __cordl_internal_get__forwardVec, put = __cordl_internal_set__forwardVec))::UnityEngine::Vector3 _forwardVec;

  /// @brief Field _jumpDistance, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__jumpDistance, put = __cordl_internal_set__jumpDistance)) float_t _jumpDistance;

  /// @brief Field _jumpDuration, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__jumpDuration, put = __cordl_internal_set__jumpDuration)) float_t _jumpDuration;

  /// @brief Field _jumpEndPos, offset 0x70, size 0xc
  __declspec(property(get = __cordl_internal_get__jumpEndPos, put = __cordl_internal_set__jumpEndPos))::UnityEngine::Vector3 _jumpEndPos;

  /// @brief Field _jumpOffsetYProvider, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__jumpOffsetYProvider, put = __cordl_internal_set__jumpOffsetYProvider))::GlobalNamespace::IJumpOffsetYProvider* _jumpOffsetYProvider;

  /// @brief Field _maxHalfJumpDistance, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxHalfJumpDistance, put = __cordl_internal_set__maxHalfJumpDistance)) float_t _maxHalfJumpDistance;

  /// @brief Field _moveDistance, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__moveDistance, put = __cordl_internal_set__moveDistance)) float_t _moveDistance;

  /// @brief Field _moveDuration, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__moveDuration, put = __cordl_internal_set__moveDuration)) float_t _moveDuration;

  /// @brief Field _moveEndPos, offset 0x64, size 0xc
  __declspec(property(get = __cordl_internal_get__moveEndPos, put = __cordl_internal_set__moveEndPos))::UnityEngine::Vector3 _moveEndPos;

  /// @brief Field _moveSpeed, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__moveSpeed, put = __cordl_internal_set__moveSpeed)) float_t _moveSpeed;

  /// @brief Field _moveStartPos, offset 0x58, size 0xc
  __declspec(property(get = __cordl_internal_get__moveStartPos, put = __cordl_internal_set__moveStartPos))::UnityEngine::Vector3 _moveStartPos;

  /// @brief Field _noteJumpMovementSpeed, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__noteJumpMovementSpeed, put = __cordl_internal_set__noteJumpMovementSpeed)) float_t _noteJumpMovementSpeed;

  /// @brief Field _noteJumpStartBeatOffset, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__noteJumpStartBeatOffset, put = __cordl_internal_set__noteJumpStartBeatOffset)) float_t _noteJumpStartBeatOffset;

  /// @brief Field _noteLinesCount, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get__noteLinesCount, put = __cordl_internal_set__noteLinesCount)) int32_t _noteLinesCount;

  /// @brief Field _obstacleTopPosY, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__obstacleTopPosY, put = __cordl_internal_set__obstacleTopPosY)) float_t _obstacleTopPosY;

  /// @brief Field _rightVec, offset 0x88, size 0xc
  __declspec(property(get = __cordl_internal_get__rightVec, put = __cordl_internal_set__rightVec))::UnityEngine::Vector3 _rightVec;

  /// @brief Field _spawnAheadTime, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__spawnAheadTime, put = __cordl_internal_set__spawnAheadTime)) float_t _spawnAheadTime;

  /// @brief Field _startHalfJumpDurationInBeats, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__startHalfJumpDurationInBeats, put = __cordl_internal_set__startHalfJumpDurationInBeats)) float_t _startHalfJumpDurationInBeats;

  /// @brief Field _topLinesHighestJumpPosY, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__topLinesHighestJumpPosY, put = __cordl_internal_set__topLinesHighestJumpPosY)) float_t _topLinesHighestJumpPosY;

  /// @brief Field _upperLinesHighestJumpPosY, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__upperLinesHighestJumpPosY, put = __cordl_internal_set__upperLinesHighestJumpPosY)) float_t _upperLinesHighestJumpPosY;

  /// @brief Field _verticalObstaclePosY, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__verticalObstaclePosY, put = __cordl_internal_set__verticalObstaclePosY)) float_t _verticalObstaclePosY;

  __declspec(property(get = get_centerPos))::UnityEngine::Vector3 centerPos;

  __declspec(property(get = get_jumpDistance)) float_t jumpDistance;

  __declspec(property(get = get_jumpDuration)) float_t jumpDuration;

  __declspec(property(get = get_jumpOffsetY)) float_t jumpOffsetY;

  __declspec(property(get = get_moveDuration)) float_t moveDuration;

  __declspec(property(get = get_noteJumpMovementSpeed)) float_t noteJumpMovementSpeed;

  __declspec(property(get = get_noteLinesCount)) int32_t noteLinesCount;

  __declspec(property(get = get_noteLinesDistance)) float_t noteLinesDistance;

  __declspec(property(get = get_spawnAheadTime)) float_t spawnAheadTime;

  __declspec(property(get = get_verticalLayersDistance)) float_t verticalLayersDistance;

  /// @brief Method Get2DNoteOffset, addr 0x2394458, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 Get2DNoteOffset(int32_t noteLineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer);

  /// @brief Method GetJumpingNoteSpawnData, addr 0x2394074, size 0xf8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData GetJumpingNoteSpawnData(::GlobalNamespace::NoteData* noteData);

  /// @brief Method GetNoteOffset, addr 0x2394740, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetNoteOffset(int32_t noteLineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer);

  /// @brief Method GetObstacleOffset, addr 0x2394680, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetObstacleOffset(int32_t noteLineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer);

  /// @brief Method GetObstacleSpawnData, addr 0x2393dfc, size 0x170, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData GetObstacleSpawnData(::GlobalNamespace::ObstacleData* obstacleData);

  /// @brief Method GetSliderSpawnData, addr 0x2394284, size 0x188, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData GetSliderSpawnData(::GlobalNamespace::SliderData* sliderData);

  /// @brief Method HighestJumpPosYForLineLayer, addr 0x23948fc, size 0x144, virtual false, abstract: false, final false
  inline float_t HighestJumpPosYForLineLayer(::GlobalNamespace::NoteLineLayer lineLayer);

  /// @brief Method HighestJumpPosYForLineLayerWithoutJumpOffset, addr 0x2394a40, size 0x28, virtual false, abstract: false, final false
  inline float_t HighestJumpPosYForLineLayerWithoutJumpOffset(::GlobalNamespace::NoteLineLayer lineLayer);

  /// @brief Method Init, addr 0x2393b44, size 0x150, virtual false, abstract: false, final false
  inline void Init(int32_t noteLinesCount, float_t startNoteJumpMovementSpeed, float_t startBpm, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType noteJumpValueType,
                   float_t noteJumpValue, ::GlobalNamespace::IJumpOffsetYProvider* jumpOffsetYProvider, ::UnityEngine::Vector3 rightVec, ::UnityEngine::Vector3 forwardVec);

  /// @brief Method JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset, addr 0x2394484, size 0x70, virtual false, abstract: false, final false
  inline float_t JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(::GlobalNamespace::NoteLineLayer lineLayer, float_t distanceFromPlayer);

  static inline ::GlobalNamespace::BeatmapObjectSpawnMovementData* New_ctor();

  /// @brief Method NoteJumpGravityForLineLayer, addr 0x23947b8, size 0x4c, virtual false, abstract: false, final false
  inline float_t NoteJumpGravityForLineLayer(::GlobalNamespace::NoteLineLayer lineLayer, ::GlobalNamespace::NoteLineLayer beforeJumpLineLayer);

  /// @brief Method NoteJumpGravityForLineLayerWithoutJumpOffset, addr 0x2394898, size 0x64, virtual false, abstract: false, final false
  inline float_t NoteJumpGravityForLineLayerWithoutJumpOffset(::GlobalNamespace::NoteLineLayer lineLayer, ::GlobalNamespace::NoteLineLayer beforeJumpLineLayer);

  constexpr float_t const& __cordl_internal_get__baseLinesHighestJumpPosY() const;

  constexpr float_t& __cordl_internal_get__baseLinesHighestJumpPosY();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__centerPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__centerPos();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__forwardVec() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__forwardVec();

  constexpr float_t const& __cordl_internal_get__jumpDistance() const;

  constexpr float_t& __cordl_internal_get__jumpDistance();

  constexpr float_t const& __cordl_internal_get__jumpDuration() const;

  constexpr float_t& __cordl_internal_get__jumpDuration();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__jumpEndPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__jumpEndPos();

  constexpr ::GlobalNamespace::IJumpOffsetYProvider*& __cordl_internal_get__jumpOffsetYProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IJumpOffsetYProvider*> const& __cordl_internal_get__jumpOffsetYProvider() const;

  constexpr float_t const& __cordl_internal_get__maxHalfJumpDistance() const;

  constexpr float_t& __cordl_internal_get__maxHalfJumpDistance();

  constexpr float_t const& __cordl_internal_get__moveDistance() const;

  constexpr float_t& __cordl_internal_get__moveDistance();

  constexpr float_t const& __cordl_internal_get__moveDuration() const;

  constexpr float_t& __cordl_internal_get__moveDuration();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__moveEndPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__moveEndPos();

  constexpr float_t const& __cordl_internal_get__moveSpeed() const;

  constexpr float_t& __cordl_internal_get__moveSpeed();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__moveStartPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__moveStartPos();

  constexpr float_t const& __cordl_internal_get__noteJumpMovementSpeed() const;

  constexpr float_t& __cordl_internal_get__noteJumpMovementSpeed();

  constexpr float_t const& __cordl_internal_get__noteJumpStartBeatOffset() const;

  constexpr float_t& __cordl_internal_get__noteJumpStartBeatOffset();

  constexpr int32_t const& __cordl_internal_get__noteLinesCount() const;

  constexpr int32_t& __cordl_internal_get__noteLinesCount();

  constexpr float_t const& __cordl_internal_get__obstacleTopPosY() const;

  constexpr float_t& __cordl_internal_get__obstacleTopPosY();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rightVec() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__rightVec();

  constexpr float_t const& __cordl_internal_get__spawnAheadTime() const;

  constexpr float_t& __cordl_internal_get__spawnAheadTime();

  constexpr float_t const& __cordl_internal_get__startHalfJumpDurationInBeats() const;

  constexpr float_t& __cordl_internal_get__startHalfJumpDurationInBeats();

  constexpr float_t const& __cordl_internal_get__topLinesHighestJumpPosY() const;

  constexpr float_t& __cordl_internal_get__topLinesHighestJumpPosY();

  constexpr float_t const& __cordl_internal_get__upperLinesHighestJumpPosY() const;

  constexpr float_t& __cordl_internal_get__upperLinesHighestJumpPosY();

  constexpr float_t const& __cordl_internal_get__verticalObstaclePosY() const;

  constexpr float_t& __cordl_internal_get__verticalObstaclePosY();

  constexpr void __cordl_internal_set__baseLinesHighestJumpPosY(float_t value);

  constexpr void __cordl_internal_set__centerPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__forwardVec(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__jumpDistance(float_t value);

  constexpr void __cordl_internal_set__jumpDuration(float_t value);

  constexpr void __cordl_internal_set__jumpEndPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__jumpOffsetYProvider(::GlobalNamespace::IJumpOffsetYProvider* value);

  constexpr void __cordl_internal_set__maxHalfJumpDistance(float_t value);

  constexpr void __cordl_internal_set__moveDistance(float_t value);

  constexpr void __cordl_internal_set__moveDuration(float_t value);

  constexpr void __cordl_internal_set__moveEndPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__moveSpeed(float_t value);

  constexpr void __cordl_internal_set__moveStartPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__noteJumpMovementSpeed(float_t value);

  constexpr void __cordl_internal_set__noteJumpStartBeatOffset(float_t value);

  constexpr void __cordl_internal_set__noteLinesCount(int32_t value);

  constexpr void __cordl_internal_set__obstacleTopPosY(float_t value);

  constexpr void __cordl_internal_set__rightVec(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__spawnAheadTime(float_t value);

  constexpr void __cordl_internal_set__startHalfJumpDurationInBeats(float_t value);

  constexpr void __cordl_internal_set__topLinesHighestJumpPosY(float_t value);

  constexpr void __cordl_internal_set__upperLinesHighestJumpPosY(float_t value);

  constexpr void __cordl_internal_set__verticalObstaclePosY(float_t value);

  /// @brief Method .ctor, addr 0x2394584, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_centerPos, addr 0x2394674, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_centerPos();

  /// @brief Method get_jumpDistance, addr 0x239465c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_jumpDistance();

  /// @brief Method get_jumpDuration, addr 0x2394654, size 0x8, virtual false, abstract: false, final false
  inline float_t get_jumpDuration();

  /// @brief Method get_jumpOffsetY, addr 0x2393510, size 0xa0, virtual false, abstract: false, final false
  inline float_t get_jumpOffsetY();

  /// @brief Method get_moveDuration, addr 0x239464c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_moveDuration();

  /// @brief Method get_noteJumpMovementSpeed, addr 0x2394664, size 0x8, virtual false, abstract: false, final false
  inline float_t get_noteJumpMovementSpeed();

  /// @brief Method get_noteLinesCount, addr 0x239466c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_noteLinesCount();

  /// @brief Method get_noteLinesDistance, addr 0x239366c, size 0xc, virtual false, abstract: false, final false
  inline float_t get_noteLinesDistance();

  /// @brief Method get_spawnAheadTime, addr 0x2394644, size 0x8, virtual false, abstract: false, final false
  inline float_t get_spawnAheadTime();

  /// @brief Method get_verticalLayersDistance, addr 0x2393624, size 0xc, virtual false, abstract: false, final false
  inline float_t get_verticalLayersDistance();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectSpawnMovementData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnMovementData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectSpawnMovementData(BeatmapObjectSpawnMovementData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnMovementData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectSpawnMovementData(BeatmapObjectSpawnMovementData const&) = delete;

  /// @brief Field _centerPos, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____centerPos;

  /// @brief Field _maxHalfJumpDistance, offset: 0x1c, size: 0x4, def value: None
  float_t ____maxHalfJumpDistance;

  /// @brief Field _startHalfJumpDurationInBeats, offset: 0x20, size: 0x4, def value: None
  float_t ____startHalfJumpDurationInBeats;

  /// @brief Field _baseLinesHighestJumpPosY, offset: 0x24, size: 0x4, def value: None
  float_t ____baseLinesHighestJumpPosY;

  /// @brief Field _upperLinesHighestJumpPosY, offset: 0x28, size: 0x4, def value: None
  float_t ____upperLinesHighestJumpPosY;

  /// @brief Field _topLinesHighestJumpPosY, offset: 0x2c, size: 0x4, def value: None
  float_t ____topLinesHighestJumpPosY;

  /// @brief Field _moveSpeed, offset: 0x30, size: 0x4, def value: None
  float_t ____moveSpeed;

  /// @brief Field _moveDuration, offset: 0x34, size: 0x4, def value: None
  float_t ____moveDuration;

  /// @brief Field _verticalObstaclePosY, offset: 0x38, size: 0x4, def value: None
  float_t ____verticalObstaclePosY;

  /// @brief Field _obstacleTopPosY, offset: 0x3c, size: 0x4, def value: None
  float_t ____obstacleTopPosY;

  /// @brief Field _spawnAheadTime, offset: 0x40, size: 0x4, def value: None
  float_t ____spawnAheadTime;

  /// @brief Field _jumpDuration, offset: 0x44, size: 0x4, def value: None
  float_t ____jumpDuration;

  /// @brief Field _noteJumpStartBeatOffset, offset: 0x48, size: 0x4, def value: None
  float_t ____noteJumpStartBeatOffset;

  /// @brief Field _noteJumpMovementSpeed, offset: 0x4c, size: 0x4, def value: None
  float_t ____noteJumpMovementSpeed;

  /// @brief Field _jumpDistance, offset: 0x50, size: 0x4, def value: None
  float_t ____jumpDistance;

  /// @brief Field _moveDistance, offset: 0x54, size: 0x4, def value: None
  float_t ____moveDistance;

  /// @brief Field _moveStartPos, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____moveStartPos;

  /// @brief Field _moveEndPos, offset: 0x64, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____moveEndPos;

  /// @brief Field _jumpEndPos, offset: 0x70, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____jumpEndPos;

  /// @brief Field _noteLinesCount, offset: 0x7c, size: 0x4, def value: None
  int32_t ____noteLinesCount;

  /// @brief Field _jumpOffsetYProvider, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::IJumpOffsetYProvider* ____jumpOffsetYProvider;

  /// @brief Field _rightVec, offset: 0x88, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____rightVec;

  /// @brief Field _forwardVec, offset: 0x94, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____forwardVec;

  /// @brief Field kDefaultMaxHalfJumpDistance offset 0xffffffff size 0x4
  static constexpr float_t kDefaultMaxHalfJumpDistance{ 18.0 };

  /// @brief Field kDefaultStartHalfJumpDurationInBeats offset 0xffffffff size 0x4
  static constexpr float_t kDefaultStartHalfJumpDurationInBeats{ 4.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectSpawnMovementData, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____centerPos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____maxHalfJumpDistance) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____startHalfJumpDurationInBeats) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____baseLinesHighestJumpPosY) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____upperLinesHighestJumpPosY) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____topLinesHighestJumpPosY) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____moveSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____moveDuration) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____verticalObstaclePosY) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____obstacleTopPosY) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____spawnAheadTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____jumpDuration) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____noteJumpStartBeatOffset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____noteJumpMovementSpeed) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____jumpDistance) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____moveDistance) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____moveStartPos) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____moveEndPos) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____jumpEndPos) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____noteLinesCount) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____jumpOffsetYProvider) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____rightVec) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____forwardVec) == 0x94, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteJumpValueType, "", "BeatmapObjectSpawnMovementData/NoteJumpValueType");
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectSpawnMovementData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectSpawnMovementData*, "", "BeatmapObjectSpawnMovementData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData, "", "BeatmapObjectSpawnMovementData/NoteSpawnData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, "", "BeatmapObjectSpawnMovementData/ObstacleSpawnData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData, "", "BeatmapObjectSpawnMovementData/SliderSpawnData");
