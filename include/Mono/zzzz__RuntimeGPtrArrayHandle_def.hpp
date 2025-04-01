#pragma once
// IWYU pragma private; include "Mono/RuntimeGPtrArrayHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeGPtrArrayHandle)
namespace Mono {
struct RuntimeStructs_GPtrArray;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Mono {
struct RuntimeGPtrArrayHandle;
}
// Write type traits
MARK_VAL_T(::Mono::RuntimeGPtrArrayHandle);
// Dependencies
namespace Mono {
// Is value type: true
// CS Name: Mono.RuntimeGPtrArrayHandle
struct CORDL_TYPE RuntimeGPtrArrayHandle {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::System::IntPtr Item[];

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Method DestroyAndFree, addr 0x3c50f10, size 0x1c, virtual false, abstract: false, final false
  static inline void DestroyAndFree(::ByRef<::Mono::RuntimeGPtrArrayHandle> h);

  /// @brief Method GPtrArrayFree, addr 0x3c50f0c, size 0x4, virtual false, abstract: false, final false
  static inline void GPtrArrayFree(::cordl_internals::Ptr<::Mono::RuntimeStructs_GPtrArray> value);

  /// @brief Method Lookup, addr 0x3c50ea8, size 0x64, virtual false, abstract: false, final false
  inline ::System::IntPtr Lookup(int32_t i);

  /// @brief Method .ctor, addr 0x3c50e68, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr);

  /// @brief Method get_Item, addr 0x3c50ea4, size 0x4, virtual false, abstract: false, final false
  inline ::System::IntPtr get_Item(int32_t i);

  /// @brief Method get_Length, addr 0x3c50e88, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_Length();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeGPtrArrayHandle();

  // Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::Ptr<::Mono::RuntimeStructs_GPtrArray>", modifiers: "", def_value: None }]
  constexpr RuntimeGPtrArrayHandle(::cordl_internals::Ptr<::Mono::RuntimeStructs_GPtrArray> value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2233 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field value, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<::Mono::RuntimeStructs_GPtrArray> value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Mono::RuntimeGPtrArrayHandle, value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::RuntimeGPtrArrayHandle, 0x8>, "Size mismatch!");

} // namespace Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeGPtrArrayHandle, "Mono", "RuntimeGPtrArrayHandle");
