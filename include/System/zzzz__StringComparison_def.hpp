#pragma once
// IWYU pragma private; include "System/StringComparison.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StringComparison)
// Forward declare root types
namespace System {
struct StringComparison;
}
// Write type traits
MARK_VAL_T(::System::StringComparison);
// Type: System::StringComparison
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::StringComparison
struct CORDL_TYPE StringComparison {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StringComparison_Unwrapped
  enum struct __StringComparison_Unwrapped : int32_t {
    __E_CurrentCulture = static_cast<int32_t>(0x0),
    __E_CurrentCultureIgnoreCase = static_cast<int32_t>(0x1),
    __E_InvariantCulture = static_cast<int32_t>(0x2),
    __E_InvariantCultureIgnoreCase = static_cast<int32_t>(0x3),
    __E_Ordinal = static_cast<int32_t>(0x4),
    __E_OrdinalIgnoreCase = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StringComparison_Unwrapped() const noexcept {
    return static_cast<__StringComparison_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StringComparison();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StringComparison(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CurrentCulture value: static_cast<int32_t>(0x0)
  static ::System::StringComparison const CurrentCulture;

  /// @brief Field CurrentCultureIgnoreCase value: static_cast<int32_t>(0x1)
  static ::System::StringComparison const CurrentCultureIgnoreCase;

  /// @brief Field InvariantCulture value: static_cast<int32_t>(0x2)
  static ::System::StringComparison const InvariantCulture;

  /// @brief Field InvariantCultureIgnoreCase value: static_cast<int32_t>(0x3)
  static ::System::StringComparison const InvariantCultureIgnoreCase;

  /// @brief Field Ordinal value: static_cast<int32_t>(0x4)
  static ::System::StringComparison const Ordinal;

  /// @brief Field OrdinalIgnoreCase value: static_cast<int32_t>(0x5)
  static ::System::StringComparison const OrdinalIgnoreCase;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2478 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::StringComparison, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::StringComparison, value__) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::StringComparison, "System", "StringComparison");
