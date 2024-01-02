#pragma once
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
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteJumpDurationTypeSettingsDropdown;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown);
// Type: ::NoteJumpDurationTypeSettingsDropdown
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4622)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5602), inst: 4748 }),
// TypeDefinitionIndex(TypeDefinitionIndex(5602))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5606)) CS Name: ::NoteJumpDurationTypeSettingsDropdown*
class CORDL_TYPE NoteJumpDurationTypeSettingsDropdown : public ::GlobalNamespace::ValueDropdownController_1<::GlobalNamespace::NoteJumpDurationTypeSettings> {
public:
  // Declarations
  /// @brief Method GetNamedValues, addr 0x22ab764, size 0xf4, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::NoteJumpDurationTypeSettings, ::StringW>*>* GetNamedValues();

  static inline ::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown* New_ctor();

  /// @brief Method .ctor, addr 0x22ab858, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NoteJumpDurationTypeSettingsDropdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteJumpDurationTypeSettingsDropdown(NoteJumpDurationTypeSettingsDropdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteJumpDurationTypeSettingsDropdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteJumpDurationTypeSettingsDropdown(NoteJumpDurationTypeSettingsDropdown const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteJumpDurationTypeSettingsDropdown();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown*, "", "NoteJumpDurationTypeSettingsDropdown");
