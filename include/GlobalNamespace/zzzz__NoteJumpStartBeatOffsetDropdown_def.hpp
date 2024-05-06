#pragma once
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
// Type: ::NoteJumpStartBeatOffsetDropdown
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoteJumpStartBeatOffsetDropdown*
class CORDL_TYPE NoteJumpStartBeatOffsetDropdown : public ::GlobalNamespace::ValueDropdownController_1<float_t> {
public:
  // Declarations
  /// @brief Method GetNamedValues, addr 0x2633248, size 0x198, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<float_t, ::StringW>*>* GetNamedValues();

  static inline ::GlobalNamespace::NoteJumpStartBeatOffsetDropdown* New_ctor();

  /// @brief Method .ctor, addr 0x26333e0, size 0x48, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteJumpStartBeatOffsetDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteJumpStartBeatOffsetDropdown*, "", "NoteJumpStartBeatOffsetDropdown");
