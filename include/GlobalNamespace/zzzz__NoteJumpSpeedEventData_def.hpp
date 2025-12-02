#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteJumpSpeedEventData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteJumpSpeedEventData)
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
struct EaseType;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteJumpSpeedEventData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteJumpSpeedEventData);
// Dependencies BeatmapEventData, EaseType
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteJumpSpeedEventData
class CORDL_TYPE NoteJumpSpeedEventData : public ::GlobalNamespace::BeatmapEventData {
public:
  // Declarations
  /// @brief Field _default, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__default, put = setStaticF__default)) ::GlobalNamespace::NoteJumpSpeedEventData* _default;

  /// @brief Field <relativeNoteJumpSpeed>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__relativeNoteJumpSpeed_k__BackingField,
                      put = __cordl_internal_set__relativeNoteJumpSpeed_k__BackingField)) float_t _relativeNoteJumpSpeed_k__BackingField;

  /// @brief Field easeType, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_easeType, put = __cordl_internal_set_easeType)) ::GlobalNamespace::EaseType easeType;

  __declspec(property(get = get_nextSameTypeEventData)) ::GlobalNamespace::NoteJumpSpeedEventData* nextSameTypeEventData;

  __declspec(property(get = get_previousSameTypeEventData)) ::GlobalNamespace::NoteJumpSpeedEventData* previousSameTypeEventData;

  __declspec(property(get = get_relativeNoteJumpSpeed, put = set_relativeNoteJumpSpeed)) float_t relativeNoteJumpSpeed;

  /// @brief Field usePreviousValue, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_usePreviousValue, put = __cordl_internal_set_usePreviousValue)) bool usePreviousValue;

  /// @brief Method ChangeRelativeNoteJumpSpeed, addr 0x3164968, size 0x8, virtual false, abstract: false, final false
  inline void ChangeRelativeNoteJumpSpeed(float_t value);

  /// @brief Method GetCopy, addr 0x3164970, size 0x88, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDataItem* GetCopy();

  /// @brief Method GetDefault, addr 0x31649f8, size 0x5c, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapEventData* GetDefault();

  static inline ::GlobalNamespace::NoteJumpSpeedEventData* New_ctor(float_t time, float_t relativeNoteJumpSpeed, ::GlobalNamespace::EaseType easeType, bool usePreviousValue);

  constexpr float_t const& __cordl_internal_get__relativeNoteJumpSpeed_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__relativeNoteJumpSpeed_k__BackingField();

  constexpr ::GlobalNamespace::EaseType const& __cordl_internal_get_easeType() const;

  constexpr ::GlobalNamespace::EaseType& __cordl_internal_get_easeType();

  constexpr bool const& __cordl_internal_get_usePreviousValue() const;

  constexpr bool& __cordl_internal_get_usePreviousValue();

  constexpr void __cordl_internal_set__relativeNoteJumpSpeed_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_easeType(::GlobalNamespace::EaseType value);

  constexpr void __cordl_internal_set_usePreviousValue(bool value);

  /// @brief Method .ctor, addr 0x3164940, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t time, float_t relativeNoteJumpSpeed, ::GlobalNamespace::EaseType easeType, bool usePreviousValue);

  static inline ::GlobalNamespace::NoteJumpSpeedEventData* getStaticF__default();

  /// @brief Method get_nextSameTypeEventData, addr 0x31648b4, size 0x7c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteJumpSpeedEventData* get_nextSameTypeEventData();

  /// @brief Method get_previousSameTypeEventData, addr 0x3164838, size 0x7c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::NoteJumpSpeedEventData* get_previousSameTypeEventData();

  /// @brief Method get_relativeNoteJumpSpeed, addr 0x3164930, size 0x8, virtual false, abstract: false, final false
  inline float_t get_relativeNoteJumpSpeed();

  static inline void setStaticF__default(::GlobalNamespace::NoteJumpSpeedEventData* value);

  /// @brief Method set_relativeNoteJumpSpeed, addr 0x3164938, size 0x8, virtual false, abstract: false, final false
  inline void set_relativeNoteJumpSpeed(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteJumpSpeedEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteJumpSpeedEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteJumpSpeedEventData(NoteJumpSpeedEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteJumpSpeedEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteJumpSpeedEventData(NoteJumpSpeedEventData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20977 };

  /// @brief Field <relativeNoteJumpSpeed>k__BackingField, offset: 0x30, size: 0x4, def value: None
  float_t ____relativeNoteJumpSpeed_k__BackingField;

  /// @brief Field easeType, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::EaseType ___easeType;

  /// @brief Field usePreviousValue, offset: 0x38, size: 0x1, def value: None
  bool ___usePreviousValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NoteJumpSpeedEventData, ____relativeNoteJumpSpeed_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJumpSpeedEventData, ___easeType) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoteJumpSpeedEventData, ___usePreviousValue) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteJumpSpeedEventData, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteJumpSpeedEventData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteJumpSpeedEventData*, "", "NoteJumpSpeedEventData");
