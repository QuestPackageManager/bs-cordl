#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__Assembly_def.hpp"
CORDL_MODULE_EXPORT(AssemblyBuilder)
// Forward declare root types
namespace System::Reflection::Emit {
class AssemblyBuilder;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Emit::AssemblyBuilder);
// Type: System.Reflection.Emit::AssemblyBuilder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection::Emit {
// Is value type: false
// CS Name: ::System.Reflection.Emit::AssemblyBuilder*
class CORDL_TYPE AssemblyBuilder : public ::System::Reflection::Assembly {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssemblyBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssemblyBuilder(AssemblyBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssemblyBuilder(AssemblyBuilder const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Emit::AssemblyBuilder, 0x10>, "Size mismatch!");

} // namespace System::Reflection::Emit
NEED_NO_BOX(::System::Reflection::Emit::AssemblyBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::AssemblyBuilder*, "System.Reflection.Emit", "AssemblyBuilder");
