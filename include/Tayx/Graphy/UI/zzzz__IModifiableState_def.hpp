#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IModifiableState)
namespace Tayx::Graphy {
struct __GraphyManager__ModuleState;
}
// Forward declare root types
namespace Tayx::Graphy::UI {
class IModifiableState;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::UI::IModifiableState);
// Type: Tayx.Graphy.UI::IModifiableState
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Tayx::Graphy::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15252))
// CS Name: ::Tayx.Graphy.UI::IModifiableState*
class CORDL_TYPE IModifiableState {
public:
  // Declarations
  /// @brief Method SetState addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SetState(::Tayx::Graphy::__GraphyManager__ModuleState newState, bool silentUpdate);

  // Ctor Parameters [CppParam { name: "", ty: "IModifiableState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IModifiableState(IModifiableState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IModifiableState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IModifiableState(IModifiableState const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Tayx::Graphy::UI
NEED_NO_BOX(::Tayx::Graphy::UI::IModifiableState);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::UI::IModifiableState*, "Tayx.Graphy.UI", "IModifiableState");
