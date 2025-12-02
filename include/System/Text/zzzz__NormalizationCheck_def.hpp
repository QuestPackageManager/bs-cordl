#pragma once
// IWYU pragma private; include "System/Text/NormalizationCheck.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NormalizationCheck)
// Forward declare root types
namespace System::Text {
struct NormalizationCheck;
}
// Write type traits
MARK_VAL_T(::System::Text::NormalizationCheck);
// Dependencies
namespace System::Text {
// Is value type: true
// CS Name: System.Text.NormalizationCheck
struct CORDL_TYPE NormalizationCheck {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NormalizationCheck_Unwrapped
  enum struct __NormalizationCheck_Unwrapped : int32_t {
    __E_Yes = static_cast<int32_t>(0x0),
    __E_No = static_cast<int32_t>(0x1),
    __E_Maybe = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NormalizationCheck_Unwrapped() const noexcept {
    return static_cast<__NormalizationCheck_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NormalizationCheck();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NormalizationCheck(int32_t value__) noexcept;

  /// @brief Field Maybe value: I32(2)
  static ::System::Text::NormalizationCheck const Maybe;

  /// @brief Field No value: I32(1)
  static ::System::Text::NormalizationCheck const No;

  /// @brief Field Yes value: I32(0)
  static ::System::Text::NormalizationCheck const Yes;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2894 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Text::NormalizationCheck, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Text::NormalizationCheck, 0x4>, "Size mismatch!");

} // namespace System::Text
DEFINE_IL2CPP_ARG_TYPE(::System::Text::NormalizationCheck, "System.Text", "NormalizationCheck");
