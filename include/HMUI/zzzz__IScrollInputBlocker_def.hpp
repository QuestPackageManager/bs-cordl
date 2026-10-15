#pragma once
// IWYU pragma private; include "HMUI/IScrollInputBlocker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IScrollInputBlocker)
// Forward declare root types
namespace HMUI {
class IScrollInputBlocker;
}
// Write type traits
MARK_REF_T(::HMUI::IScrollInputBlocker*);
DEFINE_IL2CPP_CLASS(::HMUI::IScrollInputBlocker*, "HMUI", "IScrollInputBlocker");
// Dependencies
namespace HMUI {
// Is value type: false
// CS Name: HMUI.IScrollInputBlocker
class CORDL_TYPE IScrollInputBlocker {
public:
  // Declarations
  __declspec(property(get = get_isScrollInputBlocked)) bool isScrollInputBlocked;

  /// @brief Method get_isScrollInputBlocked, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isScrollInputBlocked();

  // Ctor Parameters [CppParam { name: "", ty: "IScrollInputBlocker", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IScrollInputBlocker(IScrollInputBlocker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19686 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HMUI
