#pragma once
// IWYU pragma private; include "Notepad/NotepadComponent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NotepadComponent)
namespace Notepad {
class NoteSO;
}
// Forward declare root types
namespace Notepad {
class NotepadComponent;
}
// Write type traits
MARK_REF_PTR_T(::Notepad::NotepadComponent);
// Dependencies UnityEngine.MonoBehaviour
namespace Notepad {
// Is value type: false
// CS Name: Notepad.NotepadComponent
class CORDL_TYPE NotepadComponent : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field note, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_note, put = __cordl_internal_set_note)) ::UnityW<::Notepad::NoteSO> note;

  static inline ::Notepad::NotepadComponent* New_ctor();

  constexpr ::UnityW<::Notepad::NoteSO> const& __cordl_internal_get_note() const;

  constexpr ::UnityW<::Notepad::NoteSO>& __cordl_internal_get_note();

  constexpr void __cordl_internal_set_note(::UnityW<::Notepad::NoteSO> value);

  /// @brief Method .ctor, addr 0x22ab8f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotepadComponent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NotepadComponent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotepadComponent(NotepadComponent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotepadComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotepadComponent(NotepadComponent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19282 };

  /// @brief Field note, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Notepad::NoteSO> ___note;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Notepad::NotepadComponent, ___note) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Notepad::NotepadComponent, 0x28>, "Size mismatch!");

} // namespace Notepad
NEED_NO_BOX(::Notepad::NotepadComponent);
DEFINE_IL2CPP_ARG_TYPE(::Notepad::NotepadComponent*, "Notepad", "NotepadComponent");
