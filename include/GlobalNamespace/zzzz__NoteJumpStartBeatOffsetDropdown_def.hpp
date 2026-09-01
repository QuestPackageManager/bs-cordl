#pragma once
// IWYU pragma private; include "GlobalNamespace\NoteJumpStartBeatOffsetDropdown.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ValueDropdownController_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoteJumpStartBeatOffsetDropdown)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteJumpStartBeatOffsetDropdown;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NoteJumpStartBeatOffsetDropdown*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NoteJumpStartBeatOffsetDropdown*, "", "NoteJumpStartBeatOffsetDropdown");
// Dependencies ValueDropdownController`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteJumpStartBeatOffsetDropdown
class CORDL_TYPE NoteJumpStartBeatOffsetDropdown : public ::GlobalNamespace::ValueDropdownController_1<float_t> {
public:
  // Declarations
  /// @brief Method GetNamedValues, addr 0x5a15938, size 0x1a0, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<float_t, ::StringW>*>* GetNamedValues();

  static inline ::GlobalNamespace::NoteJumpStartBeatOffsetDropdown* New_ctor();

  /// @brief Method .ctor, addr 0x5a15ad8, size 0x44, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteJumpStartBeatOffsetDropdown();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteJumpStartBeatOffsetDropdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteJumpStartBeatOffsetDropdown(NoteJumpStartBeatOffsetDropdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteJumpStartBeatOffsetDropdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteJumpStartBeatOffsetDropdown(NoteJumpStartBeatOffsetDropdown const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6411 };

  /// @brief Field kJumpStartCloseLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kJumpStartCloseLocalizationKey{ u"PLAYER_SETTINGS_JUMP_START_CLOSE" };

  /// @brief Field kJumpStartCloserLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kJumpStartCloserLocalizationKey{ u"PLAYER_SETTINGS_JUMP_START_CLOSER" };

  /// @brief Field kJumpStartDefaultLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kJumpStartDefaultLocalizationKey{ u"PLAYER_SETTINGS_JUMP_START_DEFAULT" };

  /// @brief Field kJumpStartFarLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kJumpStartFarLocalizationKey{ u"PLAYER_SETTINGS_JUMP_START_FAR" };

  /// @brief Field kJumpStartFurtherLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kJumpStartFurtherLocalizationKey{ u"PLAYER_SETTINGS_JUMP_START_FURTHER" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NoteJumpStartBeatOffsetDropdown) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
