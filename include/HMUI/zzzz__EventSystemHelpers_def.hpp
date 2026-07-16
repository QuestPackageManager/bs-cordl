#pragma once
// IWYU pragma private; include "HMUI/EventSystemHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EventSystemHelpers)
// Forward declare root types
namespace HMUI {
class EventSystemHelpers;
}
// Write type traits
MARK_REF_T(::HMUI::EventSystemHelpers*);
DEFINE_IL2CPP_CLASS(::HMUI::EventSystemHelpers*, "HMUI", "EventSystemHelpers");
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.EventSystemHelpers
class CORDL_TYPE EventSystemHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsInputFieldSelected, addr 0x587b628, size 0x104, virtual false, abstract: false, final false
  static inline bool IsInputFieldSelected();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventSystemHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventSystemHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventSystemHelpers(EventSystemHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventSystemHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventSystemHelpers(EventSystemHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19135 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::HMUI::EventSystemHelpers) == 0x10, "Size mismatch!");

} // namespace HMUI
