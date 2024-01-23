#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMovable)
namespace Tayx::Graphy {
struct __GraphyManager__ModulePosition;
}
// Forward declare root types
namespace Tayx::Graphy::UI {
class IMovable;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::UI::IMovable);
// Type: Tayx.Graphy.UI::IMovable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Tayx::Graphy::UI {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15075))
// CS Name: ::Tayx.Graphy.UI::IMovable*
class CORDL_TYPE IMovable {
public:
  // Declarations
  /// @brief Method SetPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetPosition(::Tayx::Graphy::__GraphyManager__ModulePosition newModulePosition);

  // Ctor Parameters [CppParam { name: "", ty: "IMovable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMovable(IMovable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMovable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMovable(IMovable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Tayx::Graphy::UI
NEED_NO_BOX(::Tayx::Graphy::UI::IMovable);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::UI::IMovable*, "Tayx.Graphy.UI", "IMovable");
