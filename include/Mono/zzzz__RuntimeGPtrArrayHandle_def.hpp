#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeGPtrArrayHandle)
namespace Mono {
struct __RuntimeStructs__GPtrArray;
}
// Forward declare root types
namespace Mono {
struct RuntimeGPtrArrayHandle;
}
// Write type traits
MARK_VAL_T(::Mono::RuntimeGPtrArrayHandle);
// Type: Mono::RuntimeGPtrArrayHandle
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2233))
// CS Name: ::Mono::RuntimeGPtrArrayHandle
struct CORDL_TYPE RuntimeGPtrArrayHandle {
public:
  // Declarations
  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_Item)) void* Item[];

  /// @brief Method .ctor addr 0x2412a6c size 0x20 virtual false final false
  inline void _ctor(void* ptr);

  /// @brief Method get_Length addr 0x2412a8c size 0x1c virtual false final false
  inline int32_t get_Length();

  /// @brief Method get_Item addr 0x2412aa8 size 0x4 virtual false final false
  inline void* get_Item(int32_t i);

  /// @brief Method Lookup addr 0x2412aac size 0x6c virtual false final false
  inline void* Lookup(int32_t i);

  /// @brief Method GPtrArrayFree addr 0x2412b18 size 0x4 virtual false final false
  static inline void GPtrArrayFree(::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray> value);

  /// @brief Method DestroyAndFree addr 0x2412b1c size 0x1c virtual false final false
  static inline void DestroyAndFree(ByRef<::Mono::RuntimeGPtrArrayHandle> h);

  // Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>", modifiers: "", def_value: None }]
  constexpr RuntimeGPtrArrayHandle(::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray> value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeGPtrArrayHandle();

  /// @brief Field value, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray> value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::RuntimeGPtrArrayHandle, 0x8>, "Size mismatch!");

} // namespace Mono
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeGPtrArrayHandle, "Mono", "RuntimeGPtrArrayHandle");
