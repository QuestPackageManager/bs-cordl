#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IConsoleDriver)
namespace System {
struct ConsoleKeyInfo;
}
// Forward declare root types
namespace System {
class IConsoleDriver;
}
// Write type traits
MARK_REF_PTR_T(::System::IConsoleDriver);
// Type: System::IConsoleDriver
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2600))
// CS Name: ::System::IConsoleDriver*
class CORDL_TYPE IConsoleDriver {
public:
  // Declarations
  /// @brief Method ReadKey addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::ConsoleKeyInfo ReadKey(bool intercept);

  // Ctor Parameters [CppParam { name: "", ty: "IConsoleDriver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IConsoleDriver(IConsoleDriver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IConsoleDriver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IConsoleDriver(IConsoleDriver const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::IConsoleDriver);
DEFINE_IL2CPP_ARG_TYPE(::System::IConsoleDriver*, "System", "IConsoleDriver");
