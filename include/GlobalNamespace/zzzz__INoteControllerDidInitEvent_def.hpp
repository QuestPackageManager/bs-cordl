#pragma once
// IWYU pragma private; include "GlobalNamespace/INoteControllerDidInitEvent.hpp"
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
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: INoteControllerDidInitEvent
class CORDL_TYPE INoteControllerDidInitEvent {
public:
  // Declarations
  /// @brief Method HandleNoteControllerDidInit, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase* noteController);

  // Ctor Parameters [CppParam { name: "", ty: "INoteControllerDidInitEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INoteControllerDidInitEvent(INoteControllerDidInitEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5681 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INoteControllerDidInitEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteControllerDidInitEvent*, "", "INoteControllerDidInitEvent");
