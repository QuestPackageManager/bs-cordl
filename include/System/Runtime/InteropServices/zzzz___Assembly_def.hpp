#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/_Assembly.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(_Assembly)
// Forward declare root types
namespace System::Runtime::InteropServices {
class _Assembly;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::_Assembly);
// Dependencies
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices._Assembly
class CORDL_TYPE _Assembly {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "_Assembly", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  _Assembly(_Assembly const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3343 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::_Assembly);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::_Assembly*, "System.Runtime.InteropServices", "_Assembly");
