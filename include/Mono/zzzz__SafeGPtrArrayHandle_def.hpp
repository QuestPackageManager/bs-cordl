#pragma once
// IWYU pragma private; include "Mono/SafeGPtrArrayHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/zzzz__RuntimeGPtrArrayHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SafeGPtrArrayHandle)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Mono {
struct SafeGPtrArrayHandle;
}
// Write type traits
MARK_VAL_T(::Mono::SafeGPtrArrayHandle);
// Dependencies Mono.RuntimeGPtrArrayHandle
namespace Mono {
// Is value type: true
// CS Name: Mono.SafeGPtrArrayHandle
struct CORDL_TYPE SafeGPtrArrayHandle {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::System::IntPtr Item[];

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x58ff4f8, size 0x48, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x58ff4f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr);

  /// @brief Method get_Item, addr 0x58ff558, size 0x4, virtual false, abstract: false, final false
  inline ::System::IntPtr get_Item(int32_t i);

  /// @brief Method get_Length, addr 0x58ff540, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeGPtrArrayHandle();

  // Ctor Parameters [CppParam { name: "handle", ty: "::Mono::RuntimeGPtrArrayHandle", modifiers: "", def_value: None }]
  constexpr SafeGPtrArrayHandle(::Mono::RuntimeGPtrArrayHandle handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2248 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field handle, offset: 0x0, size: 0x8, def value: None
  ::Mono::RuntimeGPtrArrayHandle handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::SafeGPtrArrayHandle, handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::SafeGPtrArrayHandle, 0x8>, "Size mismatch!");

} // namespace Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::SafeGPtrArrayHandle, "Mono", "SafeGPtrArrayHandle");
