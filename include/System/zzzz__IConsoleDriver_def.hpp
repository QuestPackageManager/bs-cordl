#pragma once
// IWYU pragma private; include "System/IConsoleDriver.hpp"
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
// Dependencies
namespace System {
// Is value type: false
// CS Name: System.IConsoleDriver
class CORDL_TYPE IConsoleDriver {
public:
  // Declarations
  /// @brief Method ReadKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::ConsoleKeyInfo ReadKey(bool intercept);

  // Ctor Parameters [CppParam { name: "", ty: "IConsoleDriver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IConsoleDriver(IConsoleDriver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2612 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
NEED_NO_BOX(::System::IConsoleDriver);
DEFINE_IL2CPP_ARG_TYPE(::System::IConsoleDriver*, "System", "IConsoleDriver");
