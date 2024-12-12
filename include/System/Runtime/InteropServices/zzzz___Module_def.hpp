#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/_Module.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(_Module)
// Forward declare root types
namespace System::Runtime::InteropServices {
class _Module;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::_Module);
// Dependencies
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices._Module
class CORDL_TYPE _Module {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "_Module", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  _Module(_Module const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3345 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::_Module);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::_Module*, "System.Runtime.InteropServices", "_Module");
