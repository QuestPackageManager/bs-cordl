#pragma once
// IWYU pragma private; include "Tayx/Graphy/UI/IMovable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMovable)
namespace Tayx::Graphy {
struct GraphyManager_ModulePosition;
}
// Forward declare root types
namespace Tayx::Graphy::UI {
class IMovable;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::UI::IMovable);
// Dependencies
namespace Tayx::Graphy::UI {
// Is value type: false
// CS Name: Tayx.Graphy.UI.IMovable
class CORDL_TYPE IMovable {
public:
  // Declarations
  /// @brief Method SetPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetPosition(::Tayx::Graphy::GraphyManager_ModulePosition newModulePosition);

  // Ctor Parameters [CppParam { name: "", ty: "IMovable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMovable(IMovable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17222 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Tayx::Graphy::UI
NEED_NO_BOX(::Tayx::Graphy::UI::IMovable);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::UI::IMovable*, "Tayx.Graphy.UI", "IMovable");
