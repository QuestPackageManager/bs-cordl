#pragma once
// IWYU pragma private; include "GlobalNamespace/INoteControllerNoteWasCutEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(INoteControllerNoteWasCutEvent)
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteControllerNoteWasCutEvent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::INoteControllerNoteWasCutEvent);
// Type: ::INoteControllerNoteWasCutEvent
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::INoteControllerNoteWasCutEvent*
class CORDL_TYPE INoteControllerNoteWasCutEvent {
public:
  // Declarations
  /// @brief Method HandleNoteControllerNoteWasCut, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void HandleNoteControllerNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);

  // Ctor Parameters [CppParam { name: "", ty: "INoteControllerNoteWasCutEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INoteControllerNoteWasCutEvent(INoteControllerNoteWasCutEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INoteControllerNoteWasCutEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INoteControllerNoteWasCutEvent(INoteControllerNoteWasCutEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INoteControllerNoteWasCutEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteControllerNoteWasCutEvent*, "", "INoteControllerNoteWasCutEvent");
