#pragma once
// IWYU pragma private; include "System/Data/Rule.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Rule)
// Forward declare root types
namespace System::Data {
struct Rule;
}
// Write type traits
MARK_VAL_T(::System::Data::Rule);
// Dependencies
namespace System::Data {
// Is value type: true
// CS Name: System.Data.Rule
struct CORDL_TYPE Rule {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Rule_Unwrapped
  enum struct __Rule_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Cascade = static_cast<int32_t>(0x1),
    __E_SetNull = static_cast<int32_t>(0x2),
    __E_SetDefault = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Rule_Unwrapped() const noexcept {
    return static_cast<__Rule_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Rule();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Rule(int32_t value__) noexcept;

  /// @brief Field Cascade value: I32(1)
  static ::System::Data::Rule const Cascade;

  /// @brief Field None value: I32(0)
  static ::System::Data::Rule const None;

  /// @brief Field SetDefault value: I32(3)
  static ::System::Data::Rule const SetDefault;

  /// @brief Field SetNull value: I32(2)
  static ::System::Data::Rule const SetNull;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11462 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Rule, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::Rule, 0x4>, "Size mismatch!");

} // namespace System::Data
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Rule, "System.Data", "Rule");
