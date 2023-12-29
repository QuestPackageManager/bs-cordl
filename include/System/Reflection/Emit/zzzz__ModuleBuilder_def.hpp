#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__Module_def.hpp"
CORDL_MODULE_EXPORT(ModuleBuilder)
// Forward declare root types
namespace System::Reflection::Emit {
class ModuleBuilder;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Emit::ModuleBuilder);
// Type: System.Reflection.Emit::ModuleBuilder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3476))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3539))
// CS Name: ::System.Reflection.Emit::ModuleBuilder*
class CORDL_TYPE ModuleBuilder : public ::System::Reflection::Module {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "ModuleBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ModuleBuilder(ModuleBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ModuleBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ModuleBuilder(ModuleBuilder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ModuleBuilder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Emit::ModuleBuilder, 0x10>, "Size mismatch!");

} // namespace System::Reflection::Emit
NEED_NO_BOX(::System::Reflection::Emit::ModuleBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::ModuleBuilder*, "System.Reflection.Emit", "ModuleBuilder");
