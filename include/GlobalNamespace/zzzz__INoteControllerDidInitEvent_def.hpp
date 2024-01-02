#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INoteControllerDidInitEvent)
namespace GlobalNamespace {
class NoteControllerBase;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::INoteControllerDidInitEvent);
// Type: ::INoteControllerDidInitEvent
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4762))
// CS Name: ::INoteControllerDidInitEvent*
class CORDL_TYPE INoteControllerDidInitEvent {
public:
  // Declarations
  /// @brief Method HandleNoteControllerDidInit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase* noteController);

  // Ctor Parameters [CppParam { name: "", ty: "INoteControllerDidInitEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INoteControllerDidInitEvent(INoteControllerDidInitEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INoteControllerDidInitEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INoteControllerDidInitEvent(INoteControllerDidInitEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INoteControllerDidInitEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteControllerDidInitEvent*, "", "INoteControllerDidInitEvent");
