#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectSpawnMovementData.hpp"
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
struct BeatmapObjectSpawnMovementData_NoteJumpValueType;
}
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
struct NoteSpawnData;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
struct ObstacleSpawnData;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
struct SliderSpawnData;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct BeatmapObjectSpawnMovementData_NoteJumpValueType;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnMovementData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectSpawnMovementData);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapObjectSpawnMovementData/NoteJumpValueType
struct CORDL_TYPE BeatmapObjectSpawnMovementData_NoteJumpValueType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BeatmapObjectSpawnMovementData_NoteJumpValueType_Unwrapped
  enum struct __BeatmapObjectSpawnMovementData_NoteJumpValueType_Unwrapped : int32_t {
    __E_BeatOffset = static_cast<int32_t>(0x1),
    __E_JumpDuration = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BeatmapObjectSpawnMovementData_NoteJumpValueType_Unwrapped() const noexcept {
    return static_cast<__BeatmapObjectSpawnMovementData_NoteJumpValueType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectSpawnMovementData_NoteJumpValueType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BeatmapObjectSpawnMovementData_NoteJumpValueType(int32_t value__) noexcept;

  /// @brief Field BeatOffset value: I32(1)
  static ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType const BeatOffset;

  /// @brief Field JumpDuration value: I32(2)
  static ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType const JumpDuration;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4081 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapObjectSpawnMovementData
class CORDL_TYPE BeatmapObjectSpawnMovementData : public ::System::Object {
public:
  // Declarations
  using NoteJumpValueType = ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType;

  /// @brief Field _baseLinesHighestJumpPosY, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__baseLinesHighestJumpPosY, put = __cordl_internal_set__baseLinesHighestJumpPosY)) float_t _baseLinesHighestJumpPosY;

  /// @brief Field _centerPos, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get__centerPos, put = __cordl_internal_set__centerPos)) ::UnityEngine::Vector3 _centerPos;

  /// @brief Field _jumpOffsetYProvider, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__jumpOffsetYProvider, put = __cordl_internal_set__jumpOffsetYProvider)) ::GlobalNamespace::IJumpOffsetYProvider* _jumpOffsetYProvider;

  /// @brief Field _maxHalfJumpDistance, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxHalfJumpDistance, put = __cordl_internal_set__maxHalfJumpDistance)) float_t _maxHalfJumpDistance;

  /// @brief Field _noteLinesCount, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__noteLinesCount, put = __cordl_internal_set__noteLinesCount)) int32_t _noteLinesCount;

  /// @brief Field _obstacleTopPosY, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__obstacleTopPosY, put = __cordl_internal_set__obstacleTopPosY)) float_t _obstacleTopPosY;

  /// @brief Field _rightVec, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get__rightVec, put = __cordl_internal_set__rightVec)) ::UnityEngine::Vector3 _rightVec;

  /// @brief Field _startHalfJumpDurationInBeats, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__startHalfJumpDurationInBeats, put = __cordl_internal_set__startHalfJumpDurationInBeats)) float_t _startHalfJumpDurationInBeats;

  /// @brief Field _topLinesHighestJumpPosY, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__topLinesHighestJumpPosY, put = __cordl_internal_set__topLinesHighestJumpPosY)) float_t _topLinesHighestJumpPosY;

  /// @brief Field _upperLinesHighestJumpPosY, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__upperLinesHighestJumpPosY, put = __cordl_internal_set__upperLinesHighestJumpPosY)) float_t _upperLinesHighestJumpPosY;

  /// @brief Field _verticalObstaclePosY, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__verticalObstaclePosY, put = __cordl_internal_set__verticalObstaclePosY)) float_t _verticalObstaclePosY;

  __declspec(property(get = get_centerPos)) ::UnityEngine::Vector3 centerPos;

  __declspec(property(get = get_maxHalfJumpDistance)) float_t maxHalfJumpDistance;

  __declspec(property(get = get_noteLinesCount)) int32_t noteLinesCount;

  __declspec(property(get = get_noteLinesDistance)) float_t noteLinesDistance;

  __declspec(property(get = get_startHalfJumpDurationInBeats)) float_t startHalfJumpDurationInBeats;

  __declspec(property(get = get_verticalLayersDistance)) float_t verticalLayersDistance;

  /// @brief Method Get2DNoteOffset, addr 0x3ae4f64, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 Get2DNoteOffset(int32_t noteLineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer);

  /// @brief Method GetGravityBase, addr 0x3ae4e88, size 0x30, virtual false, abstract: false, final false
  inline float_t GetGravityBase(::GlobalNamespace::NoteLineLayer noteLineLayer, ::GlobalNamespace::NoteLineLayer beforeJumpLineLayer);

  /// @brief Method GetJumpingNoteSpawnData, addr 0x3ae27bc, size 0xc4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteSpawnData GetJumpingNoteSpawnData(::GlobalNamespace::NoteData* noteData);

  /// @brief Method GetNoteOffset, addr 0x3ae4e10, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetNoteOffset(int32_t noteLineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer);

  /// @brief Method GetObstacleOffset, addr 0x3ae4eb8, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetObstacleOffset(int32_t noteLineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer);

  /// @brief Method GetObstacleSpawnData, addr 0x3ae2970, size 0x14c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ObstacleSpawnData GetObstacleSpawnData(::GlobalNamespace::ObstacleData* obstacleData);

  /// @brief Method GetSliderSpawnData, addr 0x3ae2ba4, size 0xd4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SliderSpawnData GetSliderSpawnData(::GlobalNamespace::SliderData* sliderData);

  /// @brief Method HighestJumpPosYForLineLayer, addr 0x3ae4fa0, size 0xd8, virtual false, abstract: false, final false
  inline float_t HighestJumpPosYForLineLayer(::GlobalNamespace::NoteLineLayer lineLayer);

  /// @brief Method HighestJumpPosYForLineLayerWithoutJumpOffset, addr 0x3ae4f78, size 0x28, virtual false, abstract: false, final false
  inline float_t HighestJumpPosYForLineLayerWithoutJumpOffset(::GlobalNamespace::NoteLineLayer lineLayer);

  /// @brief Method Init, addr 0x3ae265c, size 0x14, virtual false, abstract: false, final false
  inline void Init(int32_t noteLinesCount, ::GlobalNamespace::IJumpOffsetYProvider* jumpOffsetYProvider, ::UnityEngine::Vector3 rightVec);

  static inline ::GlobalNamespace::BeatmapObjectSpawnMovementData* New_ctor();

  constexpr float_t const& __cordl_internal_get__baseLinesHighestJumpPosY() const;

  constexpr float_t& __cordl_internal_get__baseLinesHighestJumpPosY();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__centerPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__centerPos();

  constexpr ::GlobalNamespace::IJumpOffsetYProvider* const& __cordl_internal_get__jumpOffsetYProvider() const;

  constexpr ::GlobalNamespace::IJumpOffsetYProvider*& __cordl_internal_get__jumpOffsetYProvider();

  constexpr float_t const& __cordl_internal_get__maxHalfJumpDistance() const;

  constexpr float_t& __cordl_internal_get__maxHalfJumpDistance();

  constexpr int32_t const& __cordl_internal_get__noteLinesCount() const;

  constexpr int32_t& __cordl_internal_get__noteLinesCount();

  constexpr float_t const& __cordl_internal_get__obstacleTopPosY() const;

  constexpr float_t& __cordl_internal_get__obstacleTopPosY();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rightVec() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__rightVec();

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

  constexpr void __cordl_internal_set__jumpOffsetYProvider(::GlobalNamespace::IJumpOffsetYProvider* value);

  constexpr void __cordl_internal_set__maxHalfJumpDistance(float_t value);

  constexpr void __cordl_internal_set__noteLinesCount(int32_t value);

  constexpr void __cordl_internal_set__obstacleTopPosY(float_t value);

  constexpr void __cordl_internal_set__rightVec(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__startHalfJumpDurationInBeats(float_t value);

  constexpr void __cordl_internal_set__topLinesHighestJumpPosY(float_t value);

  constexpr void __cordl_internal_set__upperLinesHighestJumpPosY(float_t value);

  constexpr void __cordl_internal_set__verticalObstaclePosY(float_t value);

  /// @brief Method .ctor, addr 0x3ae2d0c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_centerPos, addr 0x3ae4e04, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_centerPos();

  /// @brief Method get_maxHalfJumpDistance, addr 0x3ae4df4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxHalfJumpDistance();

  /// @brief Method get_noteLinesCount, addr 0x3ae4dfc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_noteLinesCount();

  /// @brief Method get_noteLinesDistance, addr 0x3ae1d04, size 0xc, virtual false, abstract: false, final false
  inline float_t get_noteLinesDistance();

  /// @brief Method get_startHalfJumpDurationInBeats, addr 0x3ae4dec, size 0x8, virtual false, abstract: false, final false
  inline float_t get_startHalfJumpDurationInBeats();

  /// @brief Method get_verticalLayersDistance, addr 0x3ae1d30, size 0xc, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4082 };

  /// @brief Field kDefaultMaxHalfJumpDistance offset 0xffffffff size 0x4
  static constexpr float_t kDefaultMaxHalfJumpDistance{ static_cast<float_t>(18.0f) };

  /// @brief Field kDefaultStartHalfJumpDurationInBeats offset 0xffffffff size 0x4
  static constexpr float_t kDefaultStartHalfJumpDurationInBeats{ static_cast<float_t>(4.0f) };

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

  /// @brief Field _verticalObstaclePosY, offset: 0x30, size: 0x4, def value: None
  float_t ____verticalObstaclePosY;

  /// @brief Field _obstacleTopPosY, offset: 0x34, size: 0x4, def value: None
  float_t ____obstacleTopPosY;

  /// @brief Field _noteLinesCount, offset: 0x38, size: 0x4, def value: None
  int32_t ____noteLinesCount;

  /// @brief Field _jumpOffsetYProvider, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::IJumpOffsetYProvider* ____jumpOffsetYProvider;

  /// @brief Field _rightVec, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____rightVec;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____centerPos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____maxHalfJumpDistance) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____startHalfJumpDurationInBeats) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____baseLinesHighestJumpPosY) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____upperLinesHighestJumpPosY) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____topLinesHighestJumpPosY) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____verticalObstaclePosY) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____obstacleTopPosY) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____noteLinesCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____jumpOffsetYProvider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectSpawnMovementData, ____rightVec) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectSpawnMovementData, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType, "", "BeatmapObjectSpawnMovementData/NoteJumpValueType");
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectSpawnMovementData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectSpawnMovementData*, "", "BeatmapObjectSpawnMovementData");
