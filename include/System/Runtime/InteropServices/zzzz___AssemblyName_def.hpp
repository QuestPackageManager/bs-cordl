#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/_AssemblyName.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(_AssemblyName)
// Forward declare root types
namespace System::Runtime::InteropServices {
class _AssemblyName;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::_AssemblyName);
// Dependencies
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices._AssemblyName
class CORDL_TYPE _AssemblyName {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "_AssemblyName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  _AssemblyName(_AssemblyName const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3357 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::_AssemblyName);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::_AssemblyName*, "System.Runtime.InteropServices", "_AssemblyName");
