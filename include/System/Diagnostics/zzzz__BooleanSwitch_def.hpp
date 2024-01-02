#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/zzzz__Switch_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BooleanSwitch)
// Forward declare root types
namespace System::Diagnostics {
class BooleanSwitch;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::BooleanSwitch);
// Type: System.Diagnostics::BooleanSwitch
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8935))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8933))
// CS Name: ::System.Diagnostics::BooleanSwitch*
class CORDL_TYPE BooleanSwitch : public ::System::Diagnostics::Switch {
public:
  // Declarations
  static inline ::System::Diagnostics::BooleanSwitch* New_ctor(::StringW displayName, ::StringW description);

  /// @brief Method .ctor, addr 0x296bbc4, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW displayName, ::StringW description);

  // Ctor Parameters [CppParam { name: "", ty: "BooleanSwitch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BooleanSwitch(BooleanSwitch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BooleanSwitch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BooleanSwitch(BooleanSwitch const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BooleanSwitch();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::BooleanSwitch, 0x30>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::BooleanSwitch);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::BooleanSwitch*, "System.Diagnostics", "BooleanSwitch");
