#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderSpawnInfoNetSerializable.hpp"
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
struct SliderData_Type;
}
namespace GlobalNamespace {
struct SliderMidAnchorMode;
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
// Dependencies ColorType, NoteCutDirection, NoteLineLayer, PoolableSerializable, SliderData::Type, SliderMidAnchorMode, Vector3Serializable
namespace GlobalNamespace {
// Is value type: false
// CS Name: SliderSpawnInfoNetSerializable
class CORDL_TYPE SliderSpawnInfoNetSerializable : public ::GlobalNamespace::PoolableSerializable {
public:
  // Declarations
  /// @brief Field colorType, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_colorType, put = __cordl_internal_set_colorType)) ::GlobalNamespace::ColorType colorType;

  /// @brief Field hasHeadNote, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_hasHeadNote, put = __cordl_internal_set_hasHeadNote)) bool hasHeadNote;

  /// @brief Field hasTailNote, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_hasTailNote, put = __cordl_internal_set_hasTailNote)) bool hasTailNote;

  /// @brief Field headBeat, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_headBeat, put = __cordl_internal_set_headBeat)) float_t headBeat;

  /// @brief Field headBeforeJumpLineLayer, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_headBeforeJumpLineLayer, put = __cordl_internal_set_headBeforeJumpLineLayer)) ::GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer;

  /// @brief Field headControlPointLengthMultiplier, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_headControlPointLengthMultiplier, put = __cordl_internal_set_headControlPointLengthMultiplier)) float_t headControlPointLengthMultiplier;

  /// @brief Field headCutDirection, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_headCutDirection, put = __cordl_internal_set_headCutDirection)) ::GlobalNamespace::NoteCutDirection headCutDirection;

  /// @brief Field headCutDirectionAngleOffset, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_headCutDirectionAngleOffset, put = __cordl_internal_set_headCutDirectionAngleOffset)) float_t headCutDirectionAngleOffset;

  /// @brief Field headGravityBase, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_headGravityBase, put = __cordl_internal_set_headGravityBase)) float_t headGravityBase;

  /// @brief Field headLineIndex, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_headLineIndex, put = __cordl_internal_set_headLineIndex)) int32_t headLineIndex;

  /// @brief Field headLineLayer, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_headLineLayer, put = __cordl_internal_set_headLineLayer)) ::GlobalNamespace::NoteLineLayer headLineLayer;

  /// @brief Field headNoteOffset, offset 0x6c, size 0xc
  __declspec(property(get = __cordl_internal_get_headNoteOffset, put = __cordl_internal_set_headNoteOffset)) ::GlobalNamespace::Vector3Serializable headNoteOffset;

  /// @brief Field headTime, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_headTime, put = __cordl_internal_set_headTime)) float_t headTime;

  /// @brief Field midAnchorMode, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_midAnchorMode, put = __cordl_internal_set_midAnchorMode)) ::GlobalNamespace::SliderMidAnchorMode midAnchorMode;

  /// @brief Field rotation, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_rotation, put = __cordl_internal_set_rotation)) float_t rotation;

  /// @brief Field sliceCount, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_sliceCount, put = __cordl_internal_set_sliceCount)) int32_t sliceCount;

  /// @brief Field sliderType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_sliderType, put = __cordl_internal_set_sliderType)) ::GlobalNamespace::SliderData_Type sliderType;

  /// @brief Field squishAmount, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_squishAmount, put = __cordl_internal_set_squishAmount)) float_t squishAmount;

  /// @brief Field tailBeforeJumpLineLayer, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_tailBeforeJumpLineLayer, put = __cordl_internal_set_tailBeforeJumpLineLayer)) ::GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer;

  /// @brief Field tailControlPointLengthMultiplier, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_tailControlPointLengthMultiplier, put = __cordl_internal_set_tailControlPointLengthMultiplier)) float_t tailControlPointLengthMultiplier;

  /// @brief Field tailCutDirection, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_tailCutDirection, put = __cordl_internal_set_tailCutDirection)) ::GlobalNamespace::NoteCutDirection tailCutDirection;

  /// @brief Field tailCutDirectionAngleOffset, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_tailCutDirectionAngleOffset, put = __cordl_internal_set_tailCutDirectionAngleOffset)) float_t tailCutDirectionAngleOffset;

  /// @brief Field tailGravityBase, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_tailGravityBase, put = __cordl_internal_set_tailGravityBase)) float_t tailGravityBase;

  /// @brief Field tailLineIndex, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_tailLineIndex, put = __cordl_internal_set_tailLineIndex)) int32_t tailLineIndex;

  /// @brief Field tailLineLayer, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_tailLineLayer, put = __cordl_internal_set_tailLineLayer)) ::GlobalNamespace::NoteLineLayer tailLineLayer;

  /// @brief Field tailNoteOffset, offset 0x7c, size 0xc
  __declspec(property(get = __cordl_internal_get_tailNoteOffset, put = __cordl_internal_set_tailNoteOffset)) ::GlobalNamespace::Vector3Serializable tailNoteOffset;

  /// @brief Field tailTime, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_tailTime, put = __cordl_internal_set_tailTime)) float_t tailTime;

  /// @brief Method Deserialize, addr 0x2727318, size 0x224, virtual true, abstract: false, final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x2726f00, size 0x118, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SliderSpawnInfoNetSerializable* Init(::GlobalNamespace::ColorType colorType, ::GlobalNamespace::SliderData_Type sliderType, bool hasHeadNote, float_t headTime,
                                                                 float_t headBeat, int32_t headLineIndex, ::GlobalNamespace::NoteLineLayer headLineLayer,
                                                                 ::GlobalNamespace::NoteLineLayer headBeforeJumpLineLayer, float_t headControlPointLengthMultiplier,
                                                                 ::GlobalNamespace::NoteCutDirection headCutDirection, float_t headCutDirectionAngleOffset, bool hasTailNote, float_t tailTime,
                                                                 int32_t tailLineIndex, ::GlobalNamespace::NoteLineLayer tailLineLayer, ::GlobalNamespace::NoteLineLayer tailBeforeJumpLineLayer,
                                                                 float_t tailControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection tailCutDirection, float_t tailCutDirectionAngleOffset,
                                                                 ::GlobalNamespace::SliderMidAnchorMode midAnchorMode, int32_t sliceCount, float_t squishAmount, ::UnityEngine::Vector3 headNoteOffset,
                                                                 float_t headGravityBase, ::UnityEngine::Vector3 tailNoteOffset, float_t tailGravityBase, float_t rotation);

  static inline ::GlobalNamespace::SliderSpawnInfoNetSerializable* New_ctor();

  /// @brief Method Obtain, addr 0x2726e9c, size 0x64, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::SliderSpawnInfoNetSerializable* Obtain();

  /// @brief Method Serialize, addr 0x2727070, size 0x2a8, virtual true, abstract: false, final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr ::GlobalNamespace::ColorType const& __cordl_internal_get_colorType() const;

  constexpr ::GlobalNamespace::ColorType& __cordl_internal_get_colorType();

  constexpr bool const& __cordl_internal_get_hasHeadNote() const;

  constexpr bool& __cordl_internal_get_hasHeadNote();

  constexpr bool const& __cordl_internal_get_hasTailNote() const;

  constexpr bool& __cordl_internal_get_hasTailNote();

  constexpr float_t const& __cordl_internal_get_headBeat() const;

  constexpr float_t& __cordl_internal_get_headBeat();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get_headBeforeJumpLineLayer() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get_headBeforeJumpLineLayer();

  constexpr float_t const& __cordl_internal_get_headControlPointLengthMultiplier() const;

  constexpr float_t& __cordl_internal_get_headControlPointLengthMultiplier();

  constexpr ::GlobalNamespace::NoteCutDirection const& __cordl_internal_get_headCutDirection() const;

  constexpr ::GlobalNamespace::NoteCutDirection& __cordl_internal_get_headCutDirection();

  constexpr float_t const& __cordl_internal_get_headCutDirectionAngleOffset() const;

  constexpr float_t& __cordl_internal_get_headCutDirectionAngleOffset();

  constexpr float_t const& __cordl_internal_get_headGravityBase() const;

  constexpr float_t& __cordl_internal_get_headGravityBase();

  constexpr int32_t const& __cordl_internal_get_headLineIndex() const;

  constexpr int32_t& __cordl_internal_get_headLineIndex();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get_headLineLayer() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get_headLineLayer();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_headNoteOffset() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_headNoteOffset();

  constexpr float_t const& __cordl_internal_get_headTime() const;

  constexpr float_t& __cordl_internal_get_headTime();

  constexpr ::GlobalNamespace::SliderMidAnchorMode const& __cordl_internal_get_midAnchorMode() const;

  constexpr ::GlobalNamespace::SliderMidAnchorMode& __cordl_internal_get_midAnchorMode();

  constexpr float_t const& __cordl_internal_get_rotation() const;

  constexpr float_t& __cordl_internal_get_rotation();

  constexpr int32_t const& __cordl_internal_get_sliceCount() const;

  constexpr int32_t& __cordl_internal_get_sliceCount();

  constexpr ::GlobalNamespace::SliderData_Type const& __cordl_internal_get_sliderType() const;

  constexpr ::GlobalNamespace::SliderData_Type& __cordl_internal_get_sliderType();

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

  constexpr float_t const& __cordl_internal_get_tailGravityBase() const;

  constexpr float_t& __cordl_internal_get_tailGravityBase();

  constexpr int32_t const& __cordl_internal_get_tailLineIndex() const;

  constexpr int32_t& __cordl_internal_get_tailLineIndex();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get_tailLineLayer() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get_tailLineLayer();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_tailNoteOffset() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_tailNoteOffset();

  constexpr float_t const& __cordl_internal_get_tailTime() const;

  constexpr float_t& __cordl_internal_get_tailTime();

  constexpr void __cordl_internal_set_colorType(::GlobalNamespace::ColorType value);

  constexpr void __cordl_internal_set_hasHeadNote(bool value);

  constexpr void __cordl_internal_set_hasTailNote(bool value);

  constexpr void __cordl_internal_set_headBeat(float_t value);

  constexpr void __cordl_internal_set_headBeforeJumpLineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set_headControlPointLengthMultiplier(float_t value);

  constexpr void __cordl_internal_set_headCutDirection(::GlobalNamespace::NoteCutDirection value);

  constexpr void __cordl_internal_set_headCutDirectionAngleOffset(float_t value);

  constexpr void __cordl_internal_set_headGravityBase(float_t value);

  constexpr void __cordl_internal_set_headLineIndex(int32_t value);

  constexpr void __cordl_internal_set_headLineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set_headNoteOffset(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_headTime(float_t value);

  constexpr void __cordl_internal_set_midAnchorMode(::GlobalNamespace::SliderMidAnchorMode value);

  constexpr void __cordl_internal_set_rotation(float_t value);

  constexpr void __cordl_internal_set_sliceCount(int32_t value);

  constexpr void __cordl_internal_set_sliderType(::GlobalNamespace::SliderData_Type value);

  constexpr void __cordl_internal_set_squishAmount(float_t value);

  constexpr void __cordl_internal_set_tailBeforeJumpLineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set_tailControlPointLengthMultiplier(float_t value);

  constexpr void __cordl_internal_set_tailCutDirection(::GlobalNamespace::NoteCutDirection value);

  constexpr void __cordl_internal_set_tailCutDirectionAngleOffset(float_t value);

  constexpr void __cordl_internal_set_tailGravityBase(float_t value);

  constexpr void __cordl_internal_set_tailLineIndex(int32_t value);

  constexpr void __cordl_internal_set_tailLineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set_tailNoteOffset(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_tailTime(float_t value);

  /// @brief Method .ctor, addr 0x2727018, size 0x58, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17024 };

  /// @brief Field colorType, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::ColorType ___colorType;

  /// @brief Field sliderType, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::SliderData_Type ___sliderType;

  /// @brief Field hasHeadNote, offset: 0x1c, size: 0x1, def value: None
  bool ___hasHeadNote;

  /// @brief Field headTime, offset: 0x20, size: 0x4, def value: None
  float_t ___headTime;

  /// @brief Field headBeat, offset: 0x24, size: 0x4, def value: None
  float_t ___headBeat;

  /// @brief Field headLineIndex, offset: 0x28, size: 0x4, def value: None
  int32_t ___headLineIndex;

  /// @brief Field headLineLayer, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___headLineLayer;

  /// @brief Field headBeforeJumpLineLayer, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___headBeforeJumpLineLayer;

  /// @brief Field headControlPointLengthMultiplier, offset: 0x34, size: 0x4, def value: None
  float_t ___headControlPointLengthMultiplier;

  /// @brief Field headCutDirection, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::NoteCutDirection ___headCutDirection;

  /// @brief Field headCutDirectionAngleOffset, offset: 0x3c, size: 0x4, def value: None
  float_t ___headCutDirectionAngleOffset;

  /// @brief Field hasTailNote, offset: 0x40, size: 0x1, def value: None
  bool ___hasTailNote;

  /// @brief Field tailTime, offset: 0x44, size: 0x4, def value: None
  float_t ___tailTime;

  /// @brief Field tailLineIndex, offset: 0x48, size: 0x4, def value: None
  int32_t ___tailLineIndex;

  /// @brief Field tailLineLayer, offset: 0x4c, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___tailLineLayer;

  /// @brief Field tailBeforeJumpLineLayer, offset: 0x50, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___tailBeforeJumpLineLayer;

  /// @brief Field tailControlPointLengthMultiplier, offset: 0x54, size: 0x4, def value: None
  float_t ___tailControlPointLengthMultiplier;

  /// @brief Field tailCutDirection, offset: 0x58, size: 0x4, def value: None
  ::GlobalNamespace::NoteCutDirection ___tailCutDirection;

  /// @brief Field tailCutDirectionAngleOffset, offset: 0x5c, size: 0x4, def value: None
  float_t ___tailCutDirectionAngleOffset;

  /// @brief Field midAnchorMode, offset: 0x60, size: 0x4, def value: None
  ::GlobalNamespace::SliderMidAnchorMode ___midAnchorMode;

  /// @brief Field sliceCount, offset: 0x64, size: 0x4, def value: None
  int32_t ___sliceCount;

  /// @brief Field squishAmount, offset: 0x68, size: 0x4, def value: None
  float_t ___squishAmount;

  /// @brief Field headNoteOffset, offset: 0x6c, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___headNoteOffset;

  /// @brief Field headGravityBase, offset: 0x78, size: 0x4, def value: None
  float_t ___headGravityBase;

  /// @brief Field tailNoteOffset, offset: 0x7c, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___tailNoteOffset;

  /// @brief Field tailGravityBase, offset: 0x88, size: 0x4, def value: None
  float_t ___tailGravityBase;

  /// @brief Field rotation, offset: 0x8c, size: 0x4, def value: None
  float_t ___rotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___colorType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___sliderType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___hasHeadNote) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___headTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___headBeat) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___headLineIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___headLineLayer) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___headBeforeJumpLineLayer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___headControlPointLengthMultiplier) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___headCutDirection) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___headCutDirectionAngleOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___hasTailNote) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___tailTime) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___tailLineIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___tailLineLayer) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___tailBeforeJumpLineLayer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___tailControlPointLengthMultiplier) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___tailCutDirection) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___tailCutDirectionAngleOffset) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___midAnchorMode) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___sliceCount) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___squishAmount) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___headNoteOffset) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___headGravityBase) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___tailNoteOffset) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___tailGravityBase) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SliderSpawnInfoNetSerializable, ___rotation) == 0x8c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderSpawnInfoNetSerializable, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderSpawnInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderSpawnInfoNetSerializable*, "", "SliderSpawnInfoNetSerializable");
