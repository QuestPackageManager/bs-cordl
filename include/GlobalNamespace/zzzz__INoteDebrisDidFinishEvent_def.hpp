#pragma once
// IWYU pragma private; include "GlobalNamespace/INoteDebrisDidFinishEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INoteDebrisDidFinishEvent)
namespace GlobalNamespace {
class NoteDebris;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteDebrisDidFinishEvent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::INoteDebrisDidFinishEvent);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: INoteDebrisDidFinishEvent
class CORDL_TYPE INoteDebrisDidFinishEvent {
public:
  // Declarations
  /// @brief Method HandleNoteDebrisDidFinish, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleNoteDebrisDidFinish(::GlobalNamespace::NoteDebris* noteDebris);

  // Ctor Parameters [CppParam { name: "", ty: "INoteDebrisDidFinishEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INoteDebrisDidFinishEvent(INoteDebrisDidFinishEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4127 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INoteDebrisDidFinishEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteDebrisDidFinishEvent*, "", "INoteDebrisDidFinishEvent");
