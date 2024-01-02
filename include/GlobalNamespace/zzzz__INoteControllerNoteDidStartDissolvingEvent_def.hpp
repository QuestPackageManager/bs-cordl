#pragma once
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
// Type: ::INoteControllerNoteDidStartDissolvingEvent
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4768))
// CS Name: ::INoteControllerNoteDidStartDissolvingEvent*
class CORDL_TYPE INoteControllerNoteDidStartDissolvingEvent {
public:
  // Declarations
  /// @brief Method HandleNoteControllerNoteDidStartDissolving, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void HandleNoteControllerNoteDidStartDissolving(::GlobalNamespace::NoteControllerBase* noteController, float_t duration);

  // Ctor Parameters [CppParam { name: "", ty: "INoteControllerNoteDidStartDissolvingEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INoteControllerNoteDidStartDissolvingEvent(INoteControllerNoteDidStartDissolvingEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INoteControllerNoteDidStartDissolvingEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INoteControllerNoteDidStartDissolvingEvent(INoteControllerNoteDidStartDissolvingEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*, "", "INoteControllerNoteDidStartDissolvingEvent");
