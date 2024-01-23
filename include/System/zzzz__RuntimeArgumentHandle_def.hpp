#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeArgumentHandle)
// Forward declare root types
namespace System {
struct RuntimeArgumentHandle;
}
// Write type traits
MARK_VAL_T(::System::RuntimeArgumentHandle);
// Type: System::RuntimeArgumentHandle
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2603))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2615))
// CS Name: ::System::RuntimeArgumentHandle
struct CORDL_TYPE RuntimeArgumentHandle {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "args", ty: "void*", modifiers: "", def_value: None }]
  constexpr RuntimeArgumentHandle(void* args) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeArgumentHandle();

  /// @brief Field args, offset: 0x0, size: 0x8, def value: None
  void* args;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::RuntimeArgumentHandle, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::RuntimeArgumentHandle, args) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::RuntimeArgumentHandle, "System", "RuntimeArgumentHandle");
