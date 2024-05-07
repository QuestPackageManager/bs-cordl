#pragma once
// IWYU pragma private; include "GlobalNamespace/INoteControllerNoteWasMissedEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INoteControllerNoteWasMissedEvent)
namespace GlobalNamespace {
class NoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteControllerNoteWasMissedEvent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::INoteControllerNoteWasMissedEvent);
// Type: ::INoteControllerNoteWasMissedEvent
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::INoteControllerNoteWasMissedEvent*
class CORDL_TYPE INoteControllerNoteWasMissedEvent {
public:
  // Declarations
  /// @brief Method HandleNoteControllerNoteWasMissed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void HandleNoteControllerNoteWasMissed(::GlobalNamespace::NoteController* noteController);

  // Ctor Parameters [CppParam { name: "", ty: "INoteControllerNoteWasMissedEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INoteControllerNoteWasMissedEvent(INoteControllerNoteWasMissedEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INoteControllerNoteWasMissedEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INoteControllerNoteWasMissedEvent(INoteControllerNoteWasMissedEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INoteControllerNoteWasMissedEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteControllerNoteWasMissedEvent*, "", "INoteControllerNoteWasMissedEvent");
