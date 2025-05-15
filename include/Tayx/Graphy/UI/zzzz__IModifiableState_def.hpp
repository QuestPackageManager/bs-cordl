#pragma once
// IWYU pragma private; include "Tayx/Graphy/UI/IModifiableState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IModifiableState)
namespace Tayx::Graphy {
struct GraphyManager_ModuleState;
}
// Forward declare root types
namespace Tayx::Graphy::UI {
class IModifiableState;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::UI::IModifiableState);
// Dependencies
namespace Tayx::Graphy::UI {
// Is value type: false
// CS Name: Tayx.Graphy.UI.IModifiableState
class CORDL_TYPE IModifiableState {
public:
  // Declarations
  /// @brief Method SetState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetState(::Tayx::Graphy::GraphyManager_ModuleState newState, bool silentUpdate);

  // Ctor Parameters [CppParam { name: "", ty: "IModifiableState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IModifiableState(IModifiableState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17229 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Tayx::Graphy::UI
NEED_NO_BOX(::Tayx::Graphy::UI::IModifiableState);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::UI::IModifiableState*, "Tayx.Graphy.UI", "IModifiableState");
