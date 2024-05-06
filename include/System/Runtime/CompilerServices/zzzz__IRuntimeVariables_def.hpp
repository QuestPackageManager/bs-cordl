#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/IRuntimeVariables.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRuntimeVariables)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class IRuntimeVariables;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::IRuntimeVariables);
// Type: System.Runtime.CompilerServices::IRuntimeVariables
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::System.Runtime.CompilerServices::IRuntimeVariables*
class CORDL_TYPE IRuntimeVariables {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IRuntimeVariables", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRuntimeVariables(IRuntimeVariables&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRuntimeVariables", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRuntimeVariables(IRuntimeVariables const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::IRuntimeVariables);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::IRuntimeVariables*, "System.Runtime.CompilerServices", "IRuntimeVariables");
