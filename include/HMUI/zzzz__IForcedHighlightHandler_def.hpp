#pragma once
// IWYU pragma private; include "HMUI/IForcedHighlightHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IForcedHighlightHandler)
// Forward declare root types
namespace HMUI {
class IForcedHighlightHandler;
}
// Write type traits
MARK_REF_T(::HMUI::IForcedHighlightHandler*);
DEFINE_IL2CPP_CLASS(::HMUI::IForcedHighlightHandler*, "HMUI", "IForcedHighlightHandler");
// Dependencies
namespace HMUI {
// Is value type: false
// CS Name: HMUI.IForcedHighlightHandler
class CORDL_TYPE IForcedHighlightHandler {
public:
  // Declarations
  /// @brief Method SetForcedHighlight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetForcedHighlight(bool forced);

  // Ctor Parameters [CppParam { name: "", ty: "IForcedHighlightHandler", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IForcedHighlightHandler(IForcedHighlightHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19674 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HMUI
