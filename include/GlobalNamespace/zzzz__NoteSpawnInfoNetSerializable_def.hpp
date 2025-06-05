#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteSpawnInfoNetSerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__PoolableSerializable_def.hpp"
#include "GlobalNamespace/zzzz__Vector3Serializable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteSpawnInfoNetSerializable)
namespace GlobalNamespace {
struct ColorType;
}
namespace GlobalNamespace {
struct NoteCutDirection;
}
namespace GlobalNamespace {
struct NoteData_GameplayType;
}
namespace GlobalNamespace {
struct NoteData_ScoringType;
}
namespace GlobalNamespace {
struct NoteLineLayer;
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
class NoteSpawnInfoNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteSpawnInfoNetSerializable);
// Dependencies ColorType, NoteCutDirection, NoteData::GameplayType, NoteData::ScoringType, NoteLineLayer, PoolableSerializable, Vector3Serializable
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteSpawnInfoNetSerializable
class CORDL_TYPE NoteSpawnInfoNetSerializable : public ::GlobalNamespace::PoolableSerializable {
public:
  // Declarations
  /// @brief Field beat, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_beat, put = __cordl_internal_set_beat)) float_t beat;

  /// @brief Field beforeJumpNoteLineLayer, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_beforeJumpNoteLineLayer, put = __cordl_internal_set_beforeJumpNoteLineLayer)) ::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer;

  /// @brief Field colorType, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_colorType, put = __cordl_internal_set_colorType)) ::GlobalNamespace::ColorType colorType;

  /// @brief Field cutDirection, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_cutDirection, put = __cordl_internal_set_cutDirection)) ::GlobalNamespace::NoteCutDirection cutDirection;

  /// @brief Field cutDirectionAngleOffset, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_cutDirectionAngleOffset, put = __cordl_internal_set_cutDirectionAngleOffset)) float_t cutDirectionAngleOffset;

  /// @brief Field cutSfxVolumeMultiplier, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_cutSfxVolumeMultiplier, put = __cordl_internal_set_cutSfxVolumeMultiplier)) float_t cutSfxVolumeMultiplier;

  /// @brief Field flipLineIndex, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_flipLineIndex, put = __cordl_internal_set_flipLineIndex)) int32_t flipLineIndex;

  /// @brief Field flipYSide, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_flipYSide, put = __cordl_internal_set_flipYSide)) float_t flipYSide;

  /// @brief Field gameplayType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_gameplayType, put = __cordl_internal_set_gameplayType)) ::GlobalNamespace::NoteData_GameplayType gameplayType;

  /// @brief Field gravityBase, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_gravityBase, put = __cordl_internal_set_gravityBase)) float_t gravityBase;

  /// @brief Field jumpEndOffset, offset 0x60, size 0xc
  __declspec(property(get = __cordl_internal_get_jumpEndOffset, put = __cordl_internal_set_jumpEndOffset)) ::GlobalNamespace::Vector3Serializable jumpEndOffset;

  /// @brief Field lineIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_lineIndex, put = __cordl_internal_set_lineIndex)) int32_t lineIndex;

  /// @brief Field moveEndOffset, offset 0x54, size 0xc
  __declspec(property(get = __cordl_internal_get_moveEndOffset, put = __cordl_internal_set_moveEndOffset)) ::GlobalNamespace::Vector3Serializable moveEndOffset;

  /// @brief Field moveStartOffset, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get_moveStartOffset, put = __cordl_internal_set_moveStartOffset)) ::GlobalNamespace::Vector3Serializable moveStartOffset;

  /// @brief Field noteLineLayer, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_noteLineLayer, put = __cordl_internal_set_noteLineLayer)) ::GlobalNamespace::NoteLineLayer noteLineLayer;

  /// @brief Field rotation, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_rotation, put = __cordl_internal_set_rotation)) float_t rotation;

  /// @brief Field scoringType, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_scoringType, put = __cordl_internal_set_scoringType)) ::GlobalNamespace::NoteData_ScoringType scoringType;

  /// @brief Field time, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_time, put = __cordl_internal_set_time)) float_t time;

  /// @brief Field timeToNextColorNote, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_timeToNextColorNote, put = __cordl_internal_set_timeToNextColorNote)) float_t timeToNextColorNote;

  /// @brief Field timeToPrevColorNote, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_timeToPrevColorNote, put = __cordl_internal_set_timeToPrevColorNote)) float_t timeToPrevColorNote;

  /// @brief Method Deserialize, addr 0x2723428, size 0x194, virtual true, abstract: false, final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x27230a4, size 0x118, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteSpawnInfoNetSerializable* Init(float_t time, float_t beat, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer,
                                                               ::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer, ::GlobalNamespace::NoteData_GameplayType gameplayType,
                                                               ::GlobalNamespace::NoteData_ScoringType scoringType, ::GlobalNamespace::ColorType colorType,
                                                               ::GlobalNamespace::NoteCutDirection cutDirection, float_t timeToNextColorNote, float_t timeToPrevColorNote, int32_t flipLineIndex,
                                                               float_t flipYSide, ::UnityEngine::Vector3 moveStartOffset, ::UnityEngine::Vector3 moveEndOffset, ::UnityEngine::Vector3 jumpEndOffset,
                                                               float_t gravityBase, float_t rotation, float_t cutDirectionAngleOffset, float_t cutSfxVolumeMultiplier);

  static inline ::GlobalNamespace::NoteSpawnInfoNetSerializable* New_ctor();

  /// @brief Method Obtain, addr 0x2723040, size 0x64, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteSpawnInfoNetSerializable* Obtain();

  /// @brief Method Serialize, addr 0x2723214, size 0x214, virtual true, abstract: false, final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr float_t const& __cordl_internal_get_beat() const;

  constexpr float_t& __cordl_internal_get_beat();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get_beforeJumpNoteLineLayer() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get_beforeJumpNoteLineLayer();

  constexpr ::GlobalNamespace::ColorType const& __cordl_internal_get_colorType() const;

  constexpr ::GlobalNamespace::ColorType& __cordl_internal_get_colorType();

  constexpr ::GlobalNamespace::NoteCutDirection const& __cordl_internal_get_cutDirection() const;

  constexpr ::GlobalNamespace::NoteCutDirection& __cordl_internal_get_cutDirection();

  constexpr float_t const& __cordl_internal_get_cutDirectionAngleOffset() const;

  constexpr float_t& __cordl_internal_get_cutDirectionAngleOffset();

  constexpr float_t const& __cordl_internal_get_cutSfxVolumeMultiplier() const;

  constexpr float_t& __cordl_internal_get_cutSfxVolumeMultiplier();

  constexpr int32_t const& __cordl_internal_get_flipLineIndex() const;

  constexpr int32_t& __cordl_internal_get_flipLineIndex();

  constexpr float_t const& __cordl_internal_get_flipYSide() const;

  constexpr float_t& __cordl_internal_get_flipYSide();

  constexpr ::GlobalNamespace::NoteData_GameplayType const& __cordl_internal_get_gameplayType() const;

  constexpr ::GlobalNamespace::NoteData_GameplayType& __cordl_internal_get_gameplayType();

  constexpr float_t const& __cordl_internal_get_gravityBase() const;

  constexpr float_t& __cordl_internal_get_gravityBase();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_jumpEndOffset() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_jumpEndOffset();

  constexpr int32_t const& __cordl_internal_get_lineIndex() const;

  constexpr int32_t& __cordl_internal_get_lineIndex();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_moveEndOffset() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_moveEndOffset();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_moveStartOffset() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_moveStartOffset();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get_noteLineLayer() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get_noteLineLayer();

  constexpr float_t const& __cordl_internal_get_rotation() const;

  constexpr float_t& __cordl_internal_get_rotation();

  constexpr ::GlobalNamespace::NoteData_ScoringType const& __cordl_internal_get_scoringType() const;

  constexpr ::GlobalNamespace::NoteData_ScoringType& __cordl_internal_get_scoringType();

  constexpr float_t const& __cordl_internal_get_time() const;

  constexpr float_t& __cordl_internal_get_time();

  constexpr float_t const& __cordl_internal_get_timeToNextColorNote() const;

  constexpr float_t& __cordl_internal_get_timeToNextColorNote();

  constexpr float_t const& __cordl_internal_get_timeToPrevColorNote() const;

  constexpr float_t& __cordl_internal_get_timeToPrevColorNote();

  constexpr void __cordl_internal_set_beat(float_t value);

  constexpr void __cordl_internal_set_beforeJumpNoteLineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set_colorType(::GlobalNamespace::ColorType value);

  constexpr void __cordl_internal_set_cutDirection(::GlobalNamespace::NoteCutDirection value);

  constexpr void __cordl_internal_set_cutDirectionAngleOffset(float_t value);

  constexpr void __cordl_internal_set_cutSfxVolumeMultiplier(float_t value);

  constexpr void __cordl_internal_set_flipLineIndex(int32_t value);

  constexpr void __cordl_internal_set_flipYSide(float_t value);

  constexpr void __cordl_internal_set_gameplayType(::GlobalNamespace::NoteData_GameplayType value);

  constexpr void __cordl_internal_set_gravityBase(float_t value);

  constexpr void __cordl_internal_set_jumpEndOffset(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_lineIndex(int32_t value);

  constexpr void __cordl_internal_set_moveEndOffset(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_moveStartOffset(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_noteLineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set_rotation(float_t value);

  constexpr void __cordl_internal_set_scoringType(::GlobalNamespace::NoteData_ScoringType value);

  constexpr void __cordl_internal_set_time(float_t value);

  constexpr void __cordl_internal_set_timeToNextColorNote(float_t value);

  constexpr void __cordl_internal_set_timeToPrevColorNote(float_t value);

  /// @brief Method .ctor, addr 0x27231bc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteSpawnInfoNetSerializable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteSpawnInfoNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteSpawnInfoNetSerializable(NoteSpawnInfoNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteSpawnInfoNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteSpawnInfoNetSerializable(NoteSpawnInfoNetSerializable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17013 };

  /// @brief Field time, offset: 0x14, size: 0x4, def value: None
  float_t ___time;

  /// @brief Field beat, offset: 0x18, size: 0x4, def value: None
  float_t ___beat;

  /// @brief Field lineIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___lineIndex;

  /// @brief Field noteLineLayer, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___noteLineLayer;

  /// @brief Field beforeJumpNoteLineLayer, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___beforeJumpNoteLineLayer;

  /// @brief Field gameplayType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::NoteData_GameplayType ___gameplayType;

  /// @brief Field scoringType, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::NoteData_ScoringType ___scoringType;

  /// @brief Field colorType, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::ColorType ___colorType;

  /// @brief Field cutDirection, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::NoteCutDirection ___cutDirection;

  /// @brief Field timeToNextColorNote, offset: 0x38, size: 0x4, def value: None
  float_t ___timeToNextColorNote;

  /// @brief Field timeToPrevColorNote, offset: 0x3c, size: 0x4, def value: None
  float_t ___timeToPrevColorNote;

  /// @brief Field flipLineIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ___flipLineIndex;

  /// @brief Field flipYSide, offset: 0x44, size: 0x4, def value: None
  float_t ___flipYSide;

  /// @brief Field moveStartOffset, offset: 0x48, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___moveStartOffset;

  /// @brief Field moveEndOffset, offset: 0x54, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___moveEndOffset;

  /// @brief Field jumpEndOffset, offset: 0x60, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___jumpEndOffset;

  /// @brief Field gravityBase, offset: 0x6c, size: 0x4, def value: None
  float_t ___gravityBase;

  /// @brief Field rotation, offset: 0x70, size: 0x4, def value: None
  float_t ___rotation;

  /// @brief Field cutDirectionAngleOffset, offset: 0x74, size: 0x4, def value: None
  float_t ___cutDirectionAngleOffset;

  /// @brief Field cutSfxVolumeMultiplier, offset: 0x78, size: 0x4, def value: None
  float_t ___cutSfxVolumeMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___time) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___beat) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___lineIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___noteLineLayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___beforeJumpNoteLineLayer) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___gameplayType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___scoringType) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___colorType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___cutDirection) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___timeToNextColorNote) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___timeToPrevColorNote) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___flipLineIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___flipYSide) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___moveStartOffset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___moveEndOffset) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___jumpEndOffset) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___gravityBase) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___rotation) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___cutDirectionAngleOffset) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___cutSfxVolumeMultiplier) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteSpawnInfoNetSerializable, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteSpawnInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteSpawnInfoNetSerializable*, "", "NoteSpawnInfoNetSerializable");
