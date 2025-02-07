#pragma once
// IWYU pragma private; include "GlobalNamespace/INoteControllerNoteDidStartDissolvingEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(INoteControllerNoteDidStartDissolvingEvent)
namespace GlobalNamespace {
class NoteControllerBase;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteControllerNoteDidStartDissolvingEvent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: INoteControllerNoteDidStartDissolvingEvent
class CORDL_TYPE INoteControllerNoteDidStartDissolvingEvent {
public:
  // Declarations
  /// @brief Method HandleNoteControllerNoteDidStartDissolving, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleNoteControllerNoteDidStartDissolving(::GlobalNamespace::NoteControllerBase* noteController, float_t duration);

  // Ctor Parameters [CppParam { name: "", ty: "INoteControllerNoteDidStartDissolvingEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INoteControllerNoteDidStartDissolvingEvent(INoteControllerNoteDidStartDissolvingEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4124 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*, "", "INoteControllerNoteDidStartDissolvingEvent");
