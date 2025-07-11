#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteJumpStartBeatOffsetDropdown.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ValueDropdownController_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::GlobalNamespace::NoteJumpStartBeatOffsetDropdown);
// Dependencies ValueDropdownController`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: NoteJumpStartBeatOffsetDropdown
class CORDL_TYPE NoteJumpStartBeatOffsetDropdown : public ::GlobalNamespace::ValueDropdownController_1<float_t> {
public:
  // Declarations
  /// @brief Method GetNamedValues, addr 0x3c13b64, size 0x198, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<float_t, ::StringW>*>* GetNamedValues();

  static inline ::GlobalNamespace::NoteJumpStartBeatOffsetDropdown* New_ctor();

  /// @brief Method .ctor, addr 0x3c13cfc, size 0x48, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4867 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteJumpStartBeatOffsetDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteJumpStartBeatOffsetDropdown*, "", "NoteJumpStartBeatOffsetDropdown");
