#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeOverlapped)
// Forward declare root types
namespace System::Threading {
struct NativeOverlapped;
}
// Write type traits
MARK_VAL_T(::System::Threading::NativeOverlapped);
// Type: System.Threading::NativeOverlapped
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2601))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2677))
// CS Name: ::System.Threading::NativeOverlapped
struct CORDL_TYPE NativeOverlapped {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "InternalLow", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "InternalHigh", ty: "void*", modifiers: "", def_value: None }, CppParam { name:
  // "OffsetLow", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "OffsetHigh", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "EventHandle", ty: "void*",
  // modifiers: "", def_value: None }]
  constexpr NativeOverlapped(void* InternalLow, void* InternalHigh, int32_t OffsetLow, int32_t OffsetHigh, void* EventHandle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeOverlapped();

  /// @brief Field InternalLow, offset: 0x0, size: 0x8, def value: None
  void* InternalLow;

  /// @brief Field InternalHigh, offset: 0x8, size: 0x8, def value: None
  void* InternalHigh;

  /// @brief Field OffsetLow, offset: 0x10, size: 0x4, def value: None
  int32_t OffsetLow;

  /// @brief Field OffsetHigh, offset: 0x14, size: 0x4, def value: None
  int32_t OffsetHigh;

  /// @brief Field EventHandle, offset: 0x18, size: 0x8, def value: None
  void* EventHandle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::NativeOverlapped, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Threading::NativeOverlapped, InternalLow) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Threading::NativeOverlapped, InternalHigh) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Threading::NativeOverlapped, OffsetLow) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::NativeOverlapped, OffsetHigh) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Threading::NativeOverlapped, EventHandle) == 0x18, "Offset mismatch!");

} // namespace System::Threading
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::NativeOverlapped, "System.Threading", "NativeOverlapped");
