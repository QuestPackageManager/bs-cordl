#pragma once
// IWYU pragma private; include "GlobalNamespace\INoteControllerNoteDidStartJumpEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INoteControllerNoteDidStartJumpEvent)
namespace GlobalNamespace {
class NoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteControllerNoteDidStartJumpEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::INoteControllerNoteDidStartJumpEvent*, "", "INoteControllerNoteDidStartJumpEvent");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: INoteControllerNoteDidStartJumpEvent
class CORDL_TYPE INoteControllerNoteDidStartJumpEvent {
public:
  // Declarations
  /// @brief Method HandleNoteControllerNoteDidStartJump, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleNoteControllerNoteDidStartJump(::GlobalNamespace::NoteController* noteController);

  // Ctor Parameters [CppParam { name: "", ty: "INoteControllerNoteDidStartJumpEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INoteControllerNoteDidStartJumpEvent(INoteControllerNoteDidStartJumpEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5675 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
