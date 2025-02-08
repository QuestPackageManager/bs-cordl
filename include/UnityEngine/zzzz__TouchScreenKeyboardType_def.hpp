#pragma once
// IWYU pragma private; include "UnityEngine/TouchScreenKeyboardType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchScreenKeyboardType)
// Forward declare root types
namespace UnityEngine {
struct TouchScreenKeyboardType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TouchScreenKeyboardType);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TouchScreenKeyboardType
struct CORDL_TYPE TouchScreenKeyboardType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TouchScreenKeyboardType_Unwrapped
  enum struct __TouchScreenKeyboardType_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_ASCIICapable = static_cast<int32_t>(0x1),
    __E_NumbersAndPunctuation = static_cast<int32_t>(0x2),
    __E_URL = static_cast<int32_t>(0x3),
    __E_NumberPad = static_cast<int32_t>(0x4),
    __E_PhonePad = static_cast<int32_t>(0x5),
    __E_NamePhonePad = static_cast<int32_t>(0x6),
    __E_EmailAddress = static_cast<int32_t>(0x7),
    __E_NintendoNetworkAccount = static_cast<int32_t>(0x8),
    __E_Social = static_cast<int32_t>(0x9),
    __E_Search = static_cast<int32_t>(0xa),
    __E_DecimalPad = static_cast<int32_t>(0xb),
    __E_OneTimeCode = static_cast<int32_t>(0xc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TouchScreenKeyboardType_Unwrapped() const noexcept {
    return static_cast<__TouchScreenKeyboardType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchScreenKeyboardType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TouchScreenKeyboardType(int32_t value__) noexcept;

  /// @brief Field ASCIICapable value: I32(1)
  static ::UnityEngine::TouchScreenKeyboardType const ASCIICapable;

  /// @brief Field DecimalPad value: I32(11)
  static ::UnityEngine::TouchScreenKeyboardType const DecimalPad;

  /// @brief Field Default value: I32(0)
  static ::UnityEngine::TouchScreenKeyboardType const Default;

  /// @brief Field EmailAddress value: I32(7)
  static ::UnityEngine::TouchScreenKeyboardType const EmailAddress;

  /// @brief Field NamePhonePad value: I32(6)
  static ::UnityEngine::TouchScreenKeyboardType const NamePhonePad;

  /// @brief Field NintendoNetworkAccount value: I32(8)
  static ::UnityEngine::TouchScreenKeyboardType const NintendoNetworkAccount;

  /// @brief Field NumberPad value: I32(4)
  static ::UnityEngine::TouchScreenKeyboardType const NumberPad;

  /// @brief Field NumbersAndPunctuation value: I32(2)
  static ::UnityEngine::TouchScreenKeyboardType const NumbersAndPunctuation;

  /// @brief Field OneTimeCode value: I32(12)
  static ::UnityEngine::TouchScreenKeyboardType const OneTimeCode;

  /// @brief Field PhonePad value: I32(5)
  static ::UnityEngine::TouchScreenKeyboardType const PhonePad;

  /// @brief Field Search value: I32(10)
  static ::UnityEngine::TouchScreenKeyboardType const Search;

  /// @brief Field Social value: I32(9)
  static ::UnityEngine::TouchScreenKeyboardType const Social;

  /// @brief Field URL value: I32(3)
  static ::UnityEngine::TouchScreenKeyboardType const URL;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10946 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TouchScreenKeyboardType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TouchScreenKeyboardType, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TouchScreenKeyboardType, "UnityEngine", "TouchScreenKeyboardType");
