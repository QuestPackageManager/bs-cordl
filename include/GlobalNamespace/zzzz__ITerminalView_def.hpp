#pragma once
// IWYU pragma private; include "GlobalNamespace\ITerminalView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITerminalView)
// Forward declare root types
namespace GlobalNamespace {
class ITerminalView;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ITerminalView*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ITerminalView*, "", "ITerminalView");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ITerminalView
class CORDL_TYPE ITerminalView {
public:
  // Declarations
  /// @brief Method SetOpen, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetOpen(bool open);

  // Ctor Parameters [CppParam { name: "", ty: "ITerminalView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITerminalView(ITerminalView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19430 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
