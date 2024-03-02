#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HebrewNumberParsingState)
// Forward declare root types
namespace System::Globalization {
struct HebrewNumberParsingState;
}
// Write type traits
MARK_VAL_T(::System::Globalization::HebrewNumberParsingState);
// Type: System.Globalization::HebrewNumberParsingState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// CS Name: ::System.Globalization::HebrewNumberParsingState
struct CORDL_TYPE HebrewNumberParsingState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HebrewNumberParsingState_Unwrapped
  enum struct __HebrewNumberParsingState_Unwrapped : int32_t {
    __E_InvalidHebrewNumber = static_cast<int32_t>(0x0),
    __E_NotHebrewDigit = static_cast<int32_t>(0x1),
    __E_FoundEndOfHebrewNumber = static_cast<int32_t>(0x2),
    __E_ContinueParsing = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HebrewNumberParsingState_Unwrapped() const noexcept {
    return static_cast<__HebrewNumberParsingState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HebrewNumberParsingState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HebrewNumberParsingState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ContinueParsing value: static_cast<int32_t>(0x3)
  static ::System::Globalization::HebrewNumberParsingState const ContinueParsing;

  /// @brief Field FoundEndOfHebrewNumber value: static_cast<int32_t>(0x2)
  static ::System::Globalization::HebrewNumberParsingState const FoundEndOfHebrewNumber;

  /// @brief Field InvalidHebrewNumber value: static_cast<int32_t>(0x0)
  static ::System::Globalization::HebrewNumberParsingState const InvalidHebrewNumber;

  /// @brief Field NotHebrewDigit value: static_cast<int32_t>(0x1)
  static ::System::Globalization::HebrewNumberParsingState const NotHebrewDigit;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::HebrewNumberParsingState, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::HebrewNumberParsingState, value__) == 0x0, "Offset mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::HebrewNumberParsingState, "System.Globalization", "HebrewNumberParsingState");
