#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteJumpDurationTypeSettingsDropdown.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettings_def.hpp"
#include "GlobalNamespace/zzzz__ValueDropdownController_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown);
// Dependencies NoteJumpDurationTypeSettings, ValueDropdownController`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteJumpDurationTypeSettingsDropdown
class CORDL_TYPE NoteJumpDurationTypeSettingsDropdown : public ::GlobalNamespace::ValueDropdownController_1<::GlobalNamespace::NoteJumpDurationTypeSettings> {
public:
  // Declarations
  /// @brief Method GetNamedValues, addr 0x3c18494, size 0xf4, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::NoteJumpDurationTypeSettings, ::StringW>*>* GetNamedValues();

  static inline ::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown* New_ctor();

  /// @brief Method .ctor, addr 0x3c18588, size 0x48, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4866 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown*, "", "NoteJumpDurationTypeSettingsDropdown");
