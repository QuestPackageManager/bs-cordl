#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SByteEnum)
// Forward declare root types
namespace System {
struct SByteEnum;
}
// Write type traits
MARK_VAL_T(::System::SByteEnum);
// Type: System::SByteEnum
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::SByteEnum
struct CORDL_TYPE SByteEnum {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int8_t;

  /// @brief Nested struct __SByteEnum_Unwrapped
  enum struct __SByteEnum_Unwrapped : int8_t {};

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SByteEnum_Unwrapped() const noexcept {
    return static_cast<__SByteEnum_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int8_t() const noexcept {
    return static_cast<int8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SByteEnum();

  // Ctor Parameters [CppParam { name: "value__", ty: "int8_t", modifiers: "", def_value: None }]
  constexpr SByteEnum(int8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  int8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::SByteEnum, 0x1>, "Size mismatch!");

static_assert(offsetof(::System::SByteEnum, value__) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::SByteEnum, "System", "SByteEnum");
