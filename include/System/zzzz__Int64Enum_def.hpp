#pragma once
// IWYU pragma private; include "System/Int64Enum.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Int64Enum)
// Forward declare root types
namespace System {
struct Int64Enum;
}
// Write type traits
MARK_VAL_T(::System::Int64Enum);
// Type: System::Int64Enum
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::Int64Enum
struct CORDL_TYPE Int64Enum {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int64_t;

  /// @brief Nested struct __Int64Enum_Unwrapped
  enum struct __Int64Enum_Unwrapped : int64_t {};

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Int64Enum_Unwrapped() const noexcept {
    return static_cast<__Int64Enum_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int64_t() const noexcept {
    return static_cast<int64_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Int64Enum();

  // Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr Int64Enum(int64_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x8, def value: None
  int64_t value__;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2598 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Int64Enum, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Int64Enum, value__) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Int64Enum, "System", "Int64Enum");
