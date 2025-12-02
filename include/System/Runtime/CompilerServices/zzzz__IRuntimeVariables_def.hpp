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
// Dependencies
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.IRuntimeVariables
class CORDL_TYPE IRuntimeVariables {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IRuntimeVariables", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRuntimeVariables(IRuntimeVariables const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16585 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::IRuntimeVariables);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::IRuntimeVariables*, "System.Runtime.CompilerServices", "IRuntimeVariables");
