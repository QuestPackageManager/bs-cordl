#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorMode_def.hpp"
#include "GlobalNamespace/zzzz__Vector3Serializable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SliderSpawnInfoNetSerializable)
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
struct NoteLineLayer;
}
namespace GlobalNamespace {
struct SliderMidAnchorMode;
}
namespace GlobalNamespace {
struct __SliderData__Type;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderSpawnInfoNetSerializable);
// Type: ::SliderSpawnInfoNetSerializable
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 196, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SliderSpawnInfoNetSerializable*
class CORDL_TYPE SliderSpawnInfoNetSerializable : public ::GlobalNamespace::PoolableSerializable {
public:
  // Declarations
  /// @brief Field colorType, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_colorType, put = __cordl_internal_set_colorType))::GlobalNamespace::ColorType colorType;

  /// @brief Field hasHeadNote, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_hasHeadNote, put = __cordl_internal_set_hasHeadNote)) bool hasHeadNote;

  /// @brief Field hasTailNote, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_hasTailNote, put = __cordl_internal_set_hasTailNote)) bool hasTailNote;

  /// @brief Field headBeforeJumpLineLayer, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_headBeforeJumpLineLayer, put = __cordl_internal_set_headBeforeJumpLineLayer))::GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer;

  /// @brief Field headControlPointLengthMultiplier, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_headControlPointLengthMultiplier, put = __cordl_internal_set_headControlPointLengthMultiplier)) float_t headControlPointLengthMultiplier;

  /// @brief Field headCutDirection, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_headCutDirection, put = __cordl_internal_set_headCutDirection))::GlobalNamespace::NoteCutDirection headCutDirection;

  /// @brief Field headCutDirectionAngleOffset, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_headCutDirectionAngleOffset, put = __cordl_internal_set_headCutDirectionAngleOffset)) float_t headCutDirectionAngleOffset;

  /// @brief Field headJumpEndPos, offset 0x80, size 0xc
  __declspec(property(get = __cordl_internal_get_headJumpEndPos, put = __cordl_internal_set_headJumpEndPos))::GlobalNamespace::Vector3Serializable headJumpEndPos;

  /// @brief Field headJumpGravity, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_headJumpGravity, put = __cordl_internal_set_headJumpGravity)) float_t headJumpGravity;

  /// @brief Field headJumpStartPos, offset 0x74, size 0xc
  __declspec(property(get = __cordl_internal_get_headJumpStartPos, put = __cordl_internal_set_headJumpStartPos))::GlobalNamespace::Vector3Serializable headJumpStartPos;

  /// @brief Field headLineIndex, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_headLineIndex, put = __cordl_internal_set_headLineIndex)) int32_t headLineIndex;

  /// @brief Field headLineLayer, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_headLineLayer, put = __cordl_internal_set_headLineLayer))::GlobalNamespace::NoteLineLayer headLineLayer;

  /// @brief Field headMoveStartPos, offset 0x68, size 0xc
  __declspec(property(get = __cordl_internal_get_headMoveStartPos, put = __cordl_internal_set_headMoveStartPos))::GlobalNamespace::Vector3Serializable headMoveStartPos;

  /// @brief Field headTime, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_headTime, put = __cordl_internal_set_headTime)) float_t headTime;

  /// @brief Field jumpDuration, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_jumpDuration, put = __cordl_internal_set_jumpDuration)) float_t jumpDuration;

  /// @brief Field midAnchorMode, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_midAnchorMode, put = __cordl_internal_set_midAnchorMode))::GlobalNamespace::SliderMidAnchorMode midAnchorMode;

  /// @brief Field moveDuration, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_moveDuration, put = __cordl_internal_set_moveDuration)) float_t moveDuration;

  /// @brief Field rotation, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_rotation, put = __cordl_internal_set_rotation)) float_t rotation;

  /// @brief Field sliceCount, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_sliceCount, put = __cordl_internal_set_sliceCount)) int32_t sliceCount;

  /// @brief Field sliderType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_sliderType, put = __cordl_internal_set_sliderType))::GlobalNamespace::__SliderData__Type sliderType;

  /// @brief Field squishAmount, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_squishAmount, put = __cordl_internal_set_squishAmount)) float_t squishAmount;

  /// @brief Field tailBeforeJumpLineLayer, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_tailBeforeJumpLineLayer, put = __cordl_internal_set_tailBeforeJumpLineLayer))::GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer;

  /// @brief Field tailControlPointLengthMultiplier, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_tailControlPointLengthMultiplier, put = __cordl_internal_set_tailControlPointLengthMultiplier)) float_t tailControlPointLengthMultiplier;

  /// @brief Field tailCutDirection, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_tailCutDirection, put = __cordl_internal_set_tailCutDirection))::GlobalNamespace::NoteCutDirection tailCutDirection;

  /// @brief Field tailCutDirectionAngleOffset, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_tailCutDirectionAngleOffset, put = __cordl_internal_set_tailCutDirectionAngleOffset)) float_t tailCutDirectionAngleOffset;

  /// @brief Field tailJumpEndPos, offset 0xa8, size 0xc
  __declspec(property(get = __cordl_internal_get_tailJumpEndPos, put = __cordl_internal_set_tailJumpEndPos))::GlobalNamespace::Vector3Serializable tailJumpEndPos;

  /// @brief Field tailJumpGravity, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get_tailJumpGravity, put = __cordl_internal_set_tailJumpGravity)) float_t tailJumpGravity;

  /// @brief Field tailJumpStartPos, offset 0x9c, size 0xc
  __declspec(property(get = __cordl_internal_get_tailJumpStartPos, put = __cordl_internal_set_tailJumpStartPos))::GlobalNamespace::Vector3Serializable tailJumpStartPos;

  /// @brief Field tailLineIndex, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_tailLineIndex, put = __cordl_internal_set_tailLineIndex)) int32_t tailLineIndex;

  /// @brief Field tailLineLayer, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_tailLineLayer, put = __cordl_internal_set_tailLineLayer))::GlobalNamespace::NoteLineLayer tailLineLayer;

  /// @brief Field tailMoveStartPos, offset 0x90, size 0xc
  __declspec(property(get = __cordl_internal_get_tailMoveStartPos, put = __cordl_internal_set_tailMoveStartPos))::GlobalNamespace::Vector3Serializable tailMoveStartPos;

  /// @brief Field tailTime, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_tailTime, put = __cordl_internal_set_tailTime)) float_t tailTime;

  /// @brief Method Deserialize, addr 0x14186d8, size 0x274, virtual true, abstract: false, final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x1418204, size 0x244, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SliderSpawnInfoNetSerializable*
  Init(::GlobalNamespace::ColorType colorType, ::GlobalNamespace::__SliderData__Type sliderType, bool hasHeadNote, float_t headTime, int32_t headLineIndex,
       ::GlobalNamespace::NoteLineLayer headLineLayer, ::GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer, float_t headControlPointLengthMultiplier,
       ::GlobalNamespace::NoteCutDirection headCutDirection, float_t headCutDirectionAngleOffset, bool hasTailNote, float_t tailTime, int32_t tailLineIndex,
       ::GlobalNamespace::NoteLineLayer tailLineLayer, ::GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer, float_t tailControlPointLengthMultiplier,
       ::GlobalNamespace::NoteCutDirection tailCutDirection, float_t tailCutDirectionAngleOffset, ::GlobalNamespace::SliderMidAnchorMode midAnchorMode, int32_t sliceCount, float_t squishAmount,
       ::UnityEngine::Vector3 headMoveStartPos, ::UnityEngine::Vector3 headJumpStartPos, ::UnityEngine::Vector3 headJumpEndPos, float_t headJumpGravity, ::UnityEngine::Vector3 tailMoveStartPos,
       ::UnityEngine::Vector3 tailJumpStartPos, ::UnityEngine::Vector3 tailJumpEndPos, float_t tailJumpGravity, float_t moveDuration, float_t jumpDuration, float_t rotation);

  static inline ::GlobalNamespace::SliderSpawnInfoNetSerializable* New_ctor();

  /// @brief Method Obtain, addr 0x14181a0, size 0x64, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::SliderSpawnInfoNetSerializable* Obtain();

  /// @brief Method Serialize, addr 0x14184a0, size 0x238, virtual true, abstract: false, final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::ColorType const& __cordl_internal_get_colorType() const;

  constexpr ::GlobalNamespace::ColorType& __cordl_internal_get_colorType();

  constexpr bool const& __cordl_internal_get_hasHeadNote() const;

  constexpr bool& __cordl_internal_get_hasHeadNote();

  constexpr bool const& __cordl_internal_get_hasTailNote() const;

  constexpr bool& __cordl_internal_get_hasTailNote();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get_headBeforeJumpLineLayer() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get_headBeforeJumpLineLayer();

  constexpr float_t const& __cordl_internal_get_headControlPointLengthMultiplier() const;

  constexpr float_t& __cordl_internal_get_headControlPointLengthMultiplier();

  constexpr ::GlobalNamespace::NoteCutDirection const& __cordl_internal_get_headCutDirection() const;

  constexpr ::GlobalNamespace::NoteCutDirection& __cordl_internal_get_headCutDirection();

  constexpr float_t const& __cordl_internal_get_headCutDirectionAngleOffset() const;

  constexpr float_t& __cordl_internal_get_headCutDirectionAngleOffset();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_headJumpEndPos() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_headJumpEndPos();

  constexpr float_t const& __cordl_internal_get_headJumpGravity() const;

  constexpr float_t& __cordl_internal_get_headJumpGravity();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_headJumpStartPos() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_headJumpStartPos();

  constexpr int32_t const& __cordl_internal_get_headLineIndex() const;

  constexpr int32_t& __cordl_internal_get_headLineIndex();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get_headLineLayer() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get_headLineLayer();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_headMoveStartPos() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_headMoveStartPos();

  constexpr float_t const& __cordl_internal_get_headTime() const;

  constexpr float_t& __cordl_internal_get_headTime();

  constexpr float_t const& __cordl_internal_get_jumpDuration() const;

  constexpr float_t& __cordl_internal_get_jumpDuration();

  constexpr ::GlobalNamespace::SliderMidAnchorMode const& __cordl_internal_get_midAnchorMode() const;

  constexpr ::GlobalNamespace::SliderMidAnchorMode& __cordl_internal_get_midAnchorMode();

  constexpr float_t const& __cordl_internal_get_moveDuration() const;

  constexpr float_t& __cordl_internal_get_moveDuration();

  constexpr float_t const& __cordl_internal_get_rotation() const;

  constexpr float_t& __cordl_internal_get_rotation();

  constexpr int32_t const& __cordl_internal_get_sliceCount() const;

  constexpr int32_t& __cordl_internal_get_sliceCount();

  constexpr ::GlobalNamespace::__SliderData__Type const& __cordl_internal_get_sliderType() const;

  constexpr ::GlobalNamespace::__SliderData__Type& __cordl_internal_get_sliderType();

  constexpr float_t const& __cordl_internal_get_squishAmount() const;

  constexpr float_t& __cordl_internal_get_squishAmount();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get_tailBeforeJumpLineLayer() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get_tailBeforeJumpLineLayer();

  constexpr float_t const& __cordl_internal_get_tailControlPointLengthMultiplier() const;

  constexpr float_t& __cordl_internal_get_tailControlPointLengthMultiplier();

  constexpr ::GlobalNamespace::NoteCutDirection const& __cordl_internal_get_tailCutDirection() const;

  constexpr ::GlobalNamespace::NoteCutDirection& __cordl_internal_get_tailCutDirection();

  constexpr float_t const& __cordl_internal_get_tailCutDirectionAngleOffset() const;

  constexpr float_t& __cordl_internal_get_tailCutDirectionAngleOffset();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_tailJumpEndPos() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_tailJumpEndPos();

  constexpr float_t const& __cordl_internal_get_tailJumpGravity() const;

  constexpr float_t& __cordl_internal_get_tailJumpGravity();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_tailJumpStartPos() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_tailJumpStartPos();

  constexpr int32_t const& __cordl_internal_get_tailLineIndex() const;

  constexpr int32_t& __cordl_internal_get_tailLineIndex();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get_tailLineLayer() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get_tailLineLayer();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_tailMoveStartPos() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_tailMoveStartPos();

  constexpr float_t const& __cordl_internal_get_tailTime() const;

  constexpr float_t& __cordl_internal_get_tailTime();

  constexpr void __cordl_internal_set_colorType(::GlobalNamespace::ColorType value);

  constexpr void __cordl_internal_set_hasHeadNote(bool value);

  constexpr void __cordl_internal_set_hasTailNote(bool value);

  constexpr void __cordl_internal_set_headBeforeJumpLineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set_headControlPointLengthMultiplier(float_t value);

  constexpr void __cordl_internal_set_headCutDirection(::GlobalNamespace::NoteCutDirection value);

  constexpr void __cordl_internal_set_headCutDirectionAngleOffset(float_t value);

  constexpr void __cordl_internal_set_headJumpEndPos(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_headJumpGravity(float_t value);

  constexpr void __cordl_internal_set_headJumpStartPos(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_headLineIndex(int32_t value);

  constexpr void __cordl_internal_set_headLineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set_headMoveStartPos(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_headTime(float_t value);

  constexpr void __cordl_internal_set_jumpDuration(float_t value);

  constexpr void __cordl_internal_set_midAnchorMode(::GlobalNamespace::SliderMidAnchorMode value);

  constexpr void __cordl_internal_set_moveDuration(float_t value);

  constexpr void __cordl_internal_set_rotation(float_t value);

  constexpr void __cordl_internal_set_sliceCount(int32_t value);

  constexpr void __cordl_internal_set_sliderType(::GlobalNamespace::__SliderData__Type value);

  constexpr void __cordl_internal_set_squishAmount(float_t value);

  constexpr void __cordl_internal_set_tailBeforeJumpLineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set_tailControlPointLengthMultiplier(float_t value);

  constexpr void __cordl_internal_set_tailCutDirection(::GlobalNamespace::NoteCutDirection value);

  constexpr void __cordl_internal_set_tailCutDirectionAngleOffset(float_t value);

  constexpr void __cordl_internal_set_tailJumpEndPos(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_tailJumpGravity(float_t value);

  constexpr void __cordl_internal_set_tailJumpStartPos(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_tailLineIndex(int32_t value);

  constexpr void __cordl_internal_set_tailLineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set_tailMoveStartPos(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_tailTime(float_t value);

  /// @brief Method .ctor, addr 0x1418448, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderSpawnInfoNetSerializable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SliderSpawnInfoNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SliderSpawnInfoNetSerializable(SliderSpawnInfoNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SliderSpawnInfoNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SliderSpawnInfoNetSerializable(SliderSpawnInfoNetSerializable const&) = delete;

  /// @brief Field colorType, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::ColorType ___colorType;

  /// @brief Field sliderType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__SliderData__Type ___sliderType;

  /// @brief Field hasHeadNote, offset: 0x1c, size: 0x1, def value: None
  bool ___hasHeadNote;

  /// @brief Field headTime, offset: 0x20, size: 0x4, def value: None
  float_t ___headTime;

  /// @brief Field headLineIndex, offset: 0x24, size: 0x4, def value: None
  int32_t ___headLineIndex;

  /// @brief Field headLineLayer, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___headLineLayer;

  /// @brief Field headBeforeJumpLineLayer, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___headBeforeJumpLineLayer;

  /// @brief Field headControlPointLengthMultiplier, offset: 0x30, size: 0x4, def value: None
  float_t ___headControlPointLengthMultiplier;

  /// @brief Field headCutDirection, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::NoteCutDirection ___headCutDirection;

  /// @brief Field headCutDirectionAngleOffset, offset: 0x38, size: 0x4, def value: None
  float_t ___headCutDirectionAngleOffset;

  /// @brief Field hasTailNote, offset: 0x3c, size: 0x1, def value: None
  bool ___hasTailNote;

  /// @brief Field tailTime, offset: 0x40, size: 0x4, def value: None
  float_t ___tailTime;

  /// @brief Field tailLineIndex, offset: 0x44, size: 0x4, def value: None
  int32_t ___tailLineIndex;

  /// @brief Field tailLineLayer, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___tailLineLayer;

  /// @brief Field tailBeforeJumpLineLayer, offset: 0x4c, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___tailBeforeJumpLineLayer;

  /// @brief Field tailControlPointLengthMultiplier, offset: 0x50, size: 0x4, def value: None
  float_t ___tailControlPointLengthMultiplier;

  /// @brief Field tailCutDirection, offset: 0x54, size: 0x4, def value: None
  ::GlobalNamespace::NoteCutDirection ___tailCutDirection;

  /// @brief Field tailCutDirectionAngleOffset, offset: 0x58, size: 0x4, def value: None
  float_t ___tailCutDirectionAngleOffset;

  /// @brief Field midAnchorMode, offset: 0x5c, size: 0x4, def value: None
  ::GlobalNamespace::SliderMidAnchorMode ___midAnchorMode;

  /// @brief Field sliceCount, offset: 0x60, size: 0x4, def value: None
  int32_t ___sliceCount;

  /// @brief Field squishAmount, offset: 0x64, size: 0x4, def value: None
  float_t ___squishAmount;

  /// @brief Field headMoveStartPos, offset: 0x68, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___headMoveStartPos;

  /// @brief Field headJumpStartPos, offset: 0x74, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___headJumpStartPos;

  /// @brief Field headJumpEndPos, offset: 0x80, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___headJumpEndPos;

  /// @brief Field headJumpGravity, offset: 0x8c, size: 0x4, def value: None
  float_t ___headJumpGravity;

  /// @brief Field tailMoveStartPos, offset: 0x90, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___tailMoveStartPos;

  /// @brief Field tailJumpStartPos, offset: 0x9c, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___tailJumpStartPos;

  /// @brief Field tailJumpEndPos, offset: 0xa8, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___tailJumpEndPos;

  /// @brief Field tailJumpGravity, offset: 0xb4, size: 0x4, def value: None
  float_t ___tailJumpGravity;

  /// @brief Field moveDuration, offset: 0xb8, size: 0x4, def value: None
  float_t ___moveDuration;

  /// @brief Field jumpDuration, offset: 0xbc, size: 0x4, def value: None
  float_t ___jumpDuration;

  /// @brief Field rotation, offset: 0xc0, size: 0x4, def value: None
  float_t ___rotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderSpawnInfoNetSerializable, 0xc8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___colorType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___sliderType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___hasHeadNote) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___headTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___headLineIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___headLineLayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___headBeforeJumpLineLayer) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___headControlPointLengthMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___headCutDirection) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___headCutDirectionAngleOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___hasTailNote) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___tailTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___tailLineIndex) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___tailLineLayer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___tailBeforeJumpLineLayer) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___tailControlPointLengthMultiplier) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___tailCutDirection) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___tailCutDirectionAngleOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___midAnchorMode) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___sliceCount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___squishAmount) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___headMoveStartPos) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___headJumpStartPos) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___headJumpEndPos) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___headJumpGravity) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___tailMoveStartPos) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___tailJumpStartPos) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___tailJumpEndPos) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___tailJumpGravity) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___moveDuration) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___jumpDuration) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___rotation) == 0xc0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderSpawnInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderSpawnInfoNetSerializable*, "", "SliderSpawnInfoNetSerializable");
