#pragma once
// IWYU pragma private; include "System/RuntimeArgumentHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RuntimeArgumentHandle)
// Forward declare root types
namespace System {
struct RuntimeArgumentHandle;
}
// Write type traits
MARK_VAL_T(::System::RuntimeArgumentHandle);
// Dependencies System.IntPtr
namespace System {
// Is value type: true
// CS Name: System.RuntimeArgumentHandle
struct CORDL_TYPE RuntimeArgumentHandle {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeArgumentHandle();

  // Ctor Parameters [CppParam { name: "args", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr RuntimeArgumentHandle(::System::IntPtr args) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2625 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field args, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr args;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::RuntimeArgumentHandle, args) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::RuntimeArgumentHandle, 0x8>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::RuntimeArgumentHandle, "System", "RuntimeArgumentHandle");
