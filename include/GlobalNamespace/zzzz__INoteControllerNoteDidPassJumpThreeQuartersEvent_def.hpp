#pragma once
// IWYU pragma private; include "GlobalNamespace/INoteControllerNoteDidPassJumpThreeQuartersEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INoteControllerNoteDidPassJumpThreeQuartersEvent)
namespace GlobalNamespace {
class NoteControllerBase;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteControllerNoteDidPassJumpThreeQuartersEvent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: INoteControllerNoteDidPassJumpThreeQuartersEvent
class CORDL_TYPE INoteControllerNoteDidPassJumpThreeQuartersEvent {
public:
  // Declarations
  /// @brief Method HandleNoteControllerNoteDidPassJumpThreeQuarters, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleNoteControllerNoteDidPassJumpThreeQuarters(::GlobalNamespace::NoteControllerBase* noteController);

  // Ctor Parameters [CppParam { name: "", ty: "INoteControllerNoteDidPassJumpThreeQuartersEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INoteControllerNoteDidPassJumpThreeQuartersEvent(INoteControllerNoteDidPassJumpThreeQuartersEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4117 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*, "", "INoteControllerNoteDidPassJumpThreeQuartersEvent");
