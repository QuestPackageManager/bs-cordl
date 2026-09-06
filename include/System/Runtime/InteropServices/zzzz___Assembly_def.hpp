#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/_Assembly.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(_Assembly)
// Forward declare root types
namespace System::Runtime::InteropServices {
class _Assembly;
}
// Write type traits
MARK_REF_T(::System::Runtime::InteropServices::_Assembly*);
DEFINE_IL2CPP_CLASS(::System::Runtime::InteropServices::_Assembly*, "System.Runtime.InteropServices", "_Assembly");
// [InterfaceType((System.Runtime.InteropServices.ComInterfaceType)0)]
// [Guid("17156360-2F1A-384A-BC52-FDE93C215C5B")]
// [CLSCompliant(false)]
// [ComVisible(true)]
// Dependencies
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices._Assembly
class CORDL_TYPE _Assembly {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "_Assembly", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  _Assembly(_Assemblyconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3356 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::InteropServices
