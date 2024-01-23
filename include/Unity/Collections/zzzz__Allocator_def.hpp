#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Allocator)
// Forward declare root types
namespace Unity::Collections {
struct Allocator;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::Allocator);
// Type: Unity.Collections::Allocator
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Collections {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10003))
// CS Name: ::Unity.Collections::Allocator
struct CORDL_TYPE Allocator {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Allocator_Unwrapped
  enum struct __Allocator_Unwrapped : int32_t {
    __E_Invalid = static_cast<int32_t>(0x0),
    __E_None = static_cast<int32_t>(0x1),
    __E_Temp = static_cast<int32_t>(0x2),
    __E_TempJob = static_cast<int32_t>(0x3),
    __E_Persistent = static_cast<int32_t>(0x4),
    __E_AudioKernel = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Allocator_Unwrapped() const noexcept {
    return static_cast<__Allocator_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Allocator(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Allocator();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Invalid value: static_cast<int32_t>(0x0)
  static ::Unity::Collections::Allocator const Invalid;

  /// @brief Field None value: static_cast<int32_t>(0x1)
  static ::Unity::Collections::Allocator const None;

  /// @brief Field Temp value: static_cast<int32_t>(0x2)
  static ::Unity::Collections::Allocator const Temp;

  /// @brief Field TempJob value: static_cast<int32_t>(0x3)
  static ::Unity::Collections::Allocator const TempJob;

  /// @brief Field Persistent value: static_cast<int32_t>(0x4)
  static ::Unity::Collections::Allocator const Persistent;

  /// @brief Field AudioKernel value: static_cast<int32_t>(0x5)
  static ::Unity::Collections::Allocator const AudioKernel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::Allocator, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Collections::Allocator, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::Allocator, "Unity.Collections", "Allocator");
