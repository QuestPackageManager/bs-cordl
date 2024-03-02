#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INoteControllerNoteDidDissolveEvent)
namespace GlobalNamespace {
class NoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteControllerNoteDidDissolveEvent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::INoteControllerNoteDidDissolveEvent);
// Type: ::INoteControllerNoteDidDissolveEvent
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::INoteControllerNoteDidDissolveEvent*
class CORDL_TYPE INoteControllerNoteDidDissolveEvent {
public:
  // Declarations
  /// @brief Method HandleNoteControllerNoteDidDissolve, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void HandleNoteControllerNoteDidDissolve(::GlobalNamespace::NoteController* noteController);

  // Ctor Parameters [CppParam { name: "", ty: "INoteControllerNoteDidDissolveEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INoteControllerNoteDidDissolveEvent(INoteControllerNoteDidDissolveEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INoteControllerNoteDidDissolveEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INoteControllerNoteDidDissolveEvent(INoteControllerNoteDidDissolveEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INoteControllerNoteDidDissolveEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteControllerNoteDidDissolveEvent*, "", "INoteControllerNoteDidDissolveEvent");
