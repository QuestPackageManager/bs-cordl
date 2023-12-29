#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UInt32Enum)
// Forward declare root types
namespace System {
struct UInt32Enum;
}
// Write type traits
MARK_VAL_T(::System::UInt32Enum);
// Type: System::UInt32Enum
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2597))
// CS Name: ::System::UInt32Enum
struct CORDL_TYPE UInt32Enum {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __UInt32Enum_Unwrapped
  enum struct __UInt32Enum_Unwrapped : uint32_t {};

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UInt32Enum_Unwrapped() const noexcept {
    return static_cast<__UInt32Enum_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr UInt32Enum(uint32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr UInt32Enum();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UInt32Enum, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::UInt32Enum, value__) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::UInt32Enum, "System", "UInt32Enum");
