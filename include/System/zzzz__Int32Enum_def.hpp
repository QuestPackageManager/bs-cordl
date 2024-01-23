#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Int32Enum)
// Forward declare root types
namespace System {
struct Int32Enum;
}
// Write type traits
MARK_VAL_T(::System::Int32Enum);
// Type: System::Int32Enum
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2595))
// CS Name: ::System::Int32Enum
struct CORDL_TYPE Int32Enum {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Int32Enum_Unwrapped
  enum struct __Int32Enum_Unwrapped : int32_t {};

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Int32Enum_Unwrapped() const noexcept {
    return static_cast<__Int32Enum_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Int32Enum(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Int32Enum();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Int32Enum, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Int32Enum, value__) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Int32Enum, "System", "Int32Enum");
