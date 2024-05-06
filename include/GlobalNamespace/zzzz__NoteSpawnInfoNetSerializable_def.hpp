#pragma once
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
struct NoteLineLayer;
}
namespace GlobalNamespace {
struct __NoteData__GameplayType;
}
namespace GlobalNamespace {
struct __NoteData__ScoringType;
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
// Type: ::NoteSpawnInfoNetSerializable
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoteSpawnInfoNetSerializable*
class CORDL_TYPE NoteSpawnInfoNetSerializable : public ::GlobalNamespace::PoolableSerializable {
public:
  // Declarations
  /// @brief Field beforeJumpNoteLineLayer, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_beforeJumpNoteLineLayer, put = __cordl_internal_set_beforeJumpNoteLineLayer))::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer;

  /// @brief Field colorType, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_colorType, put = __cordl_internal_set_colorType))::GlobalNamespace::ColorType colorType;

  /// @brief Field cutDirection, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_cutDirection, put = __cordl_internal_set_cutDirection))::GlobalNamespace::NoteCutDirection cutDirection;

  /// @brief Field cutDirectionAngleOffset, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_cutDirectionAngleOffset, put = __cordl_internal_set_cutDirectionAngleOffset)) float_t cutDirectionAngleOffset;

  /// @brief Field cutSfxVolumeMultiplier, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_cutSfxVolumeMultiplier, put = __cordl_internal_set_cutSfxVolumeMultiplier)) float_t cutSfxVolumeMultiplier;

  /// @brief Field flipLineIndex, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_flipLineIndex, put = __cordl_internal_set_flipLineIndex)) int32_t flipLineIndex;

  /// @brief Field flipYSide, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_flipYSide, put = __cordl_internal_set_flipYSide)) float_t flipYSide;

  /// @brief Field gameplayType, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_gameplayType, put = __cordl_internal_set_gameplayType))::GlobalNamespace::__NoteData__GameplayType gameplayType;

  /// @brief Field jumpDuration, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_jumpDuration, put = __cordl_internal_set_jumpDuration)) float_t jumpDuration;

  /// @brief Field jumpEndPos, offset 0x5c, size 0xc
  __declspec(property(get = __cordl_internal_get_jumpEndPos, put = __cordl_internal_set_jumpEndPos))::GlobalNamespace::Vector3Serializable jumpEndPos;

  /// @brief Field jumpGravity, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_jumpGravity, put = __cordl_internal_set_jumpGravity)) float_t jumpGravity;

  /// @brief Field lineIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_lineIndex, put = __cordl_internal_set_lineIndex)) int32_t lineIndex;

  /// @brief Field moveDuration, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_moveDuration, put = __cordl_internal_set_moveDuration)) float_t moveDuration;

  /// @brief Field moveEndPos, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get_moveEndPos, put = __cordl_internal_set_moveEndPos))::GlobalNamespace::Vector3Serializable moveEndPos;

  /// @brief Field moveStartPos, offset 0x44, size 0xc
  __declspec(property(get = __cordl_internal_get_moveStartPos, put = __cordl_internal_set_moveStartPos))::GlobalNamespace::Vector3Serializable moveStartPos;

  /// @brief Field noteLineLayer, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_noteLineLayer, put = __cordl_internal_set_noteLineLayer))::GlobalNamespace::NoteLineLayer noteLineLayer;

  /// @brief Field rotation, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_rotation, put = __cordl_internal_set_rotation)) float_t rotation;

  /// @brief Field scoringType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_scoringType, put = __cordl_internal_set_scoringType))::GlobalNamespace::__NoteData__ScoringType scoringType;

  /// @brief Field time, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_time, put = __cordl_internal_set_time)) float_t time;

  /// @brief Field timeToNextColorNote, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_timeToNextColorNote, put = __cordl_internal_set_timeToNextColorNote)) float_t timeToNextColorNote;

  /// @brief Field timeToPrevColorNote, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_timeToPrevColorNote, put = __cordl_internal_set_timeToPrevColorNote)) float_t timeToPrevColorNote;

  /// @brief Method Deserialize, addr 0x1505748, size 0x1b4, virtual true, abstract: false, final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method Init, addr 0x150540c, size 0x140, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteSpawnInfoNetSerializable* Init(float_t time, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer,
                                                               ::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer, ::GlobalNamespace::__NoteData__GameplayType gameplayType,
                                                               ::GlobalNamespace::__NoteData__ScoringType scoringType, ::GlobalNamespace::ColorType colorType,
                                                               ::GlobalNamespace::NoteCutDirection cutDirection, float_t timeToNextColorNote, float_t timeToPrevColorNote, int32_t flipLineIndex,
                                                               float_t flipYSide, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos,
                                                               float_t jumpGravity, float_t moveDuration, float_t jumpDuration, float_t rotation, float_t cutDirectionAngleOffset,
                                                               float_t cutSfxVolumeMultiplier);

  static inline ::GlobalNamespace::NoteSpawnInfoNetSerializable* New_ctor();

  /// @brief Method Obtain, addr 0x15053a8, size 0x64, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteSpawnInfoNetSerializable* Obtain();

  /// @brief Method Serialize, addr 0x15055a4, size 0x1a4, virtual true, abstract: false, final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

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

  constexpr ::GlobalNamespace::__NoteData__GameplayType const& __cordl_internal_get_gameplayType() const;

  constexpr ::GlobalNamespace::__NoteData__GameplayType& __cordl_internal_get_gameplayType();

  constexpr float_t const& __cordl_internal_get_jumpDuration() const;

  constexpr float_t& __cordl_internal_get_jumpDuration();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_jumpEndPos() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_jumpEndPos();

  constexpr float_t const& __cordl_internal_get_jumpGravity() const;

  constexpr float_t& __cordl_internal_get_jumpGravity();

  constexpr int32_t const& __cordl_internal_get_lineIndex() const;

  constexpr int32_t& __cordl_internal_get_lineIndex();

  constexpr float_t const& __cordl_internal_get_moveDuration() const;

  constexpr float_t& __cordl_internal_get_moveDuration();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_moveEndPos() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_moveEndPos();

  constexpr ::GlobalNamespace::Vector3Serializable const& __cordl_internal_get_moveStartPos() const;

  constexpr ::GlobalNamespace::Vector3Serializable& __cordl_internal_get_moveStartPos();

  constexpr ::GlobalNamespace::NoteLineLayer const& __cordl_internal_get_noteLineLayer() const;

  constexpr ::GlobalNamespace::NoteLineLayer& __cordl_internal_get_noteLineLayer();

  constexpr float_t const& __cordl_internal_get_rotation() const;

  constexpr float_t& __cordl_internal_get_rotation();

  constexpr ::GlobalNamespace::__NoteData__ScoringType const& __cordl_internal_get_scoringType() const;

  constexpr ::GlobalNamespace::__NoteData__ScoringType& __cordl_internal_get_scoringType();

  constexpr float_t const& __cordl_internal_get_time() const;

  constexpr float_t& __cordl_internal_get_time();

  constexpr float_t const& __cordl_internal_get_timeToNextColorNote() const;

  constexpr float_t& __cordl_internal_get_timeToNextColorNote();

  constexpr float_t const& __cordl_internal_get_timeToPrevColorNote() const;

  constexpr float_t& __cordl_internal_get_timeToPrevColorNote();

  constexpr void __cordl_internal_set_beforeJumpNoteLineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set_colorType(::GlobalNamespace::ColorType value);

  constexpr void __cordl_internal_set_cutDirection(::GlobalNamespace::NoteCutDirection value);

  constexpr void __cordl_internal_set_cutDirectionAngleOffset(float_t value);

  constexpr void __cordl_internal_set_cutSfxVolumeMultiplier(float_t value);

  constexpr void __cordl_internal_set_flipLineIndex(int32_t value);

  constexpr void __cordl_internal_set_flipYSide(float_t value);

  constexpr void __cordl_internal_set_gameplayType(::GlobalNamespace::__NoteData__GameplayType value);

  constexpr void __cordl_internal_set_jumpDuration(float_t value);

  constexpr void __cordl_internal_set_jumpEndPos(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_jumpGravity(float_t value);

  constexpr void __cordl_internal_set_lineIndex(int32_t value);

  constexpr void __cordl_internal_set_moveDuration(float_t value);

  constexpr void __cordl_internal_set_moveEndPos(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_moveStartPos(::GlobalNamespace::Vector3Serializable value);

  constexpr void __cordl_internal_set_noteLineLayer(::GlobalNamespace::NoteLineLayer value);

  constexpr void __cordl_internal_set_rotation(float_t value);

  constexpr void __cordl_internal_set_scoringType(::GlobalNamespace::__NoteData__ScoringType value);

  constexpr void __cordl_internal_set_time(float_t value);

  constexpr void __cordl_internal_set_timeToNextColorNote(float_t value);

  constexpr void __cordl_internal_set_timeToPrevColorNote(float_t value);

  /// @brief Method .ctor, addr 0x150554c, size 0x58, virtual false, abstract: false, final false
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

  /// @brief Field time, offset: 0x14, size: 0x4, def value: None
  float_t ___time;

  /// @brief Field lineIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___lineIndex;

  /// @brief Field noteLineLayer, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___noteLineLayer;

  /// @brief Field beforeJumpNoteLineLayer, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::NoteLineLayer ___beforeJumpNoteLineLayer;

  /// @brief Field gameplayType, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__NoteData__GameplayType ___gameplayType;

  /// @brief Field scoringType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__NoteData__ScoringType ___scoringType;

  /// @brief Field colorType, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::ColorType ___colorType;

  /// @brief Field cutDirection, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::NoteCutDirection ___cutDirection;

  /// @brief Field timeToNextColorNote, offset: 0x34, size: 0x4, def value: None
  float_t ___timeToNextColorNote;

  /// @brief Field timeToPrevColorNote, offset: 0x38, size: 0x4, def value: None
  float_t ___timeToPrevColorNote;

  /// @brief Field flipLineIndex, offset: 0x3c, size: 0x4, def value: None
  int32_t ___flipLineIndex;

  /// @brief Field flipYSide, offset: 0x40, size: 0x4, def value: None
  float_t ___flipYSide;

  /// @brief Field moveStartPos, offset: 0x44, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___moveStartPos;

  /// @brief Field moveEndPos, offset: 0x50, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___moveEndPos;

  /// @brief Field jumpEndPos, offset: 0x5c, size: 0xc, def value: None
  ::GlobalNamespace::Vector3Serializable ___jumpEndPos;

  /// @brief Field jumpGravity, offset: 0x68, size: 0x4, def value: None
  float_t ___jumpGravity;

  /// @brief Field moveDuration, offset: 0x6c, size: 0x4, def value: None
  float_t ___moveDuration;

  /// @brief Field jumpDuration, offset: 0x70, size: 0x4, def value: None
  float_t ___jumpDuration;

  /// @brief Field rotation, offset: 0x74, size: 0x4, def value: None
  float_t ___rotation;

  /// @brief Field cutDirectionAngleOffset, offset: 0x78, size: 0x4, def value: None
  float_t ___cutDirectionAngleOffset;

  /// @brief Field cutSfxVolumeMultiplier, offset: 0x7c, size: 0x4, def value: None
  float_t ___cutSfxVolumeMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteSpawnInfoNetSerializable, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___time) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___lineIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___noteLineLayer) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___beforeJumpNoteLineLayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___gameplayType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___scoringType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___colorType) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___cutDirection) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___timeToNextColorNote) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___timeToPrevColorNote) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___flipLineIndex) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___flipYSide) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___moveStartPos) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___moveEndPos) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___jumpEndPos) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___jumpGravity) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___moveDuration) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___jumpDuration) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___rotation) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___cutDirectionAngleOffset) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteSpawnInfoNetSerializable, ___cutSfxVolumeMultiplier) == 0x7c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteSpawnInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteSpawnInfoNetSerializable*, "", "NoteSpawnInfoNetSerializable");
