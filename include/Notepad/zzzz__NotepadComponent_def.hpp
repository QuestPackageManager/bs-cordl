#pragma once
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
// Type: Notepad::NotepadComponent
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Notepad {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16278))
// CS Name: ::Notepad::NotepadComponent*
class CORDL_TYPE NotepadComponent : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field note, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_note, put = __cordl_internal_set_note))::UnityW<::Notepad::NoteSO> note;

  constexpr ::UnityW<::Notepad::NoteSO>& __cordl_internal_get_note();

  constexpr ::UnityW<::Notepad::NoteSO> const& __cordl_internal_get_note() const;

  constexpr void __cordl_internal_set_note(::UnityW<::Notepad::NoteSO> value);

  static inline ::Notepad::NotepadComponent* New_ctor();

  /// @brief Method .ctor, addr 0xe26484, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NotepadComponent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NotepadComponent(NotepadComponent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NotepadComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NotepadComponent(NotepadComponent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NotepadComponent();

public:
  /// @brief Field note, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::Notepad::NoteSO> ___note;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Notepad::NotepadComponent, 0x20>, "Size mismatch!");

static_assert(offsetof(::Notepad::NotepadComponent, ___note) == 0x18, "Offset mismatch!");

} // namespace Notepad
NEED_NO_BOX(::Notepad::NotepadComponent);
DEFINE_IL2CPP_ARG_TYPE(::Notepad::NotepadComponent*, "Notepad", "NotepadComponent");
