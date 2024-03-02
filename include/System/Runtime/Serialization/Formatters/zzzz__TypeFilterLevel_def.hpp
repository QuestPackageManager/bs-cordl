#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeFilterLevel)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters {
struct TypeFilterLevel;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::Formatters::TypeFilterLevel);
// Type: System.Runtime.Serialization.Formatters::TypeFilterLevel
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters {
// Is value type: true
// CS Name: ::System.Runtime.Serialization.Formatters::TypeFilterLevel
struct CORDL_TYPE TypeFilterLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TypeFilterLevel_Unwrapped
  enum struct __TypeFilterLevel_Unwrapped : int32_t {
    __E_Low = static_cast<int32_t>(0x2),
    __E_Full = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TypeFilterLevel_Unwrapped() const noexcept {
    return static_cast<__TypeFilterLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeFilterLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TypeFilterLevel(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Full value: static_cast<int32_t>(0x3)
  static ::System::Runtime::Serialization::Formatters::TypeFilterLevel const Full;

  /// @brief Field Low value: static_cast<int32_t>(0x2)
  static ::System::Runtime::Serialization::Formatters::TypeFilterLevel const Low;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::TypeFilterLevel, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::TypeFilterLevel, value__) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::TypeFilterLevel, "System.Runtime.Serialization.Formatters", "TypeFilterLevel");
