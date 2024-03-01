#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EventSystemHelpers)
// Forward declare root types
namespace HMUI {
class EventSystemHelpers;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::EventSystemHelpers);
// Type: HMUI::EventSystemHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::EventSystemHelpers*
class CORDL_TYPE EventSystemHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsInputFieldSelected, addr 0x227e4f0, size 0xf8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::EventSystemHelpers, 0x10>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::EventSystemHelpers);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::EventSystemHelpers*, "HMUI", "EventSystemHelpers");
