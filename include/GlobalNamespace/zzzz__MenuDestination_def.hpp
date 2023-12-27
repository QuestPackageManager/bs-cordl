#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MenuDestination)
// Forward declare root types
namespace GlobalNamespace {
class MenuDestination;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MenuDestination);
// Type: ::MenuDestination
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4152))
// CS Name: ::MenuDestination*
class CORDL_TYPE MenuDestination : public ::System::Object {
public:
  // Declarations
  static inline ::GlobalNamespace::MenuDestination* New_ctor();

  /// @brief Method .ctor addr 0x223dd20 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MenuDestination", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuDestination(MenuDestination&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuDestination", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuDestination(MenuDestination const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuDestination();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuDestination, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MenuDestination);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuDestination*, "", "MenuDestination");
