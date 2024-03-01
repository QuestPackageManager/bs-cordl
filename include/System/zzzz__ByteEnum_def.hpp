#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ByteEnum)
// Forward declare root types
namespace System {
struct ByteEnum;
}
// Write type traits
MARK_VAL_T(::System::ByteEnum);
// Type: System::ByteEnum
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::ByteEnum
struct CORDL_TYPE ByteEnum {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __ByteEnum_Unwrapped
  enum struct __ByteEnum_Unwrapped : uint8_t {};

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ByteEnum_Unwrapped() const noexcept {
    return static_cast<__ByteEnum_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator uint8_t() const noexcept {
    return static_cast<__ByteEnum_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ByteEnum();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr ByteEnum(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ByteEnum, 0x1>, "Size mismatch!");

static_assert(offsetof(::System::ByteEnum, value__) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::ByteEnum, "System", "ByteEnum");
