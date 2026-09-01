#pragma once
// IWYU pragma private; include "GlobalNamespace\INoteControllerNoteDidDissolveEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::GlobalNamespace::INoteControllerNoteDidDissolveEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::INoteControllerNoteDidDissolveEvent*, "", "INoteControllerNoteDidDissolveEvent");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: INoteControllerNoteDidDissolveEvent
class CORDL_TYPE INoteControllerNoteDidDissolveEvent {
public:
  // Declarations
  /// @brief Method HandleNoteControllerNoteDidDissolve, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleNoteControllerNoteDidDissolve(::GlobalNamespace::NoteController* noteController);

  // Ctor Parameters [CppParam { name: "", ty: "INoteControllerNoteDidDissolveEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INoteControllerNoteDidDissolveEvent(INoteControllerNoteDidDissolveEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5681 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
