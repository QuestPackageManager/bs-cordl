#pragma once
// IWYU pragma private; include "GlobalNamespace\NoteJumpDurationTypeSettingsDropdown.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettings_def.hpp"
#include "GlobalNamespace/zzzz__ValueDropdownController_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NoteJumpDurationTypeSettingsDropdown)
namespace GlobalNamespace {
struct NoteJumpDurationTypeSettings;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteJumpDurationTypeSettingsDropdown;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown*, "", "NoteJumpDurationTypeSettingsDropdown");
// Dependencies NoteJumpDurationTypeSettings, ValueDropdownController`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteJumpDurationTypeSettingsDropdown
class CORDL_TYPE NoteJumpDurationTypeSettingsDropdown : public ::GlobalNamespace::ValueDropdownController_1<::GlobalNamespace::NoteJumpDurationTypeSettings> {
public:
  // Declarations
  /// @brief Method GetNamedValues, addr 0x5a157fc, size 0xf8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::NoteJumpDurationTypeSettings, ::StringW>*>* GetNamedValues();

  static inline ::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown* New_ctor();

  /// @brief Method .ctor, addr 0x5a158f4, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteJumpDurationTypeSettingsDropdown();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteJumpDurationTypeSettingsDropdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteJumpDurationTypeSettingsDropdown(NoteJumpDurationTypeSettingsDropdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteJumpDurationTypeSettingsDropdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteJumpDurationTypeSettingsDropdown(NoteJumpDurationTypeSettingsDropdown const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6410 };

  /// @brief Field kNoteJumpDurationTypeDynamicLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kNoteJumpDurationTypeDynamicLocalizationKey{ u"PLAYER_SETTINGS_NOTE_JUMP_DURATION_TYPE_DYNAMIC" };

  /// @brief Field kNoteJumpDurationTypeStaticLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kNoteJumpDurationTypeStaticLocalizationKey{ u"PLAYER_SETTINGS_NOTE_JUMP_DURATION_TYPE_STATIC" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
