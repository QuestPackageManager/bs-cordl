#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Priority)
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
struct Priority;
}
// Write type traits
MARK_VAL_T(::Unity::IO::LowLevel::Unsafe::Priority);
// Type: Unity.IO.LowLevel.Unsafe::Priority
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: true
// CS Name: ::Unity.IO.LowLevel.Unsafe::Priority
struct CORDL_TYPE Priority {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Priority_Unwrapped
  enum struct __Priority_Unwrapped : int32_t {
    __E_PriorityLow = static_cast<int32_t>(0x0),
    __E_PriorityHigh = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Priority_Unwrapped() const noexcept {
    return static_cast<__Priority_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Priority();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Priority(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field PriorityHigh value: static_cast<int32_t>(0x1)
  static ::Unity::IO::LowLevel::Unsafe::Priority const PriorityHigh;

  /// @brief Field PriorityLow value: static_cast<int32_t>(0x0)
  static ::Unity::IO::LowLevel::Unsafe::Priority const PriorityLow;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::IO::LowLevel::Unsafe::Priority, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::Priority, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::IO::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::Priority, "Unity.IO.LowLevel.Unsafe", "Priority");
