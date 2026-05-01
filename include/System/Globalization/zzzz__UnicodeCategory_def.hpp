#pragma once
// IWYU pragma private; include "System/Globalization/UnicodeCategory.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnicodeCategory)
// Forward declare root types
namespace System::Globalization {
struct UnicodeCategory;
}
// Write type traits
MARK_VAL_T(::System::Globalization::UnicodeCategory);
// Dependencies
namespace System::Globalization {
// Is value type: true
// CS Name: System.Globalization.UnicodeCategory
struct CORDL_TYPE UnicodeCategory {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UnicodeCategory_Unwrapped
  enum struct __UnicodeCategory_Unwrapped : int32_t {
    __E_UppercaseLetter = static_cast<int32_t>(0x0),
    __E_LowercaseLetter = static_cast<int32_t>(0x1),
    __E_TitlecaseLetter = static_cast<int32_t>(0x2),
    __E_ModifierLetter = static_cast<int32_t>(0x3),
    __E_OtherLetter = static_cast<int32_t>(0x4),
    __E_NonSpacingMark = static_cast<int32_t>(0x5),
    __E_SpacingCombiningMark = static_cast<int32_t>(0x6),
    __E_EnclosingMark = static_cast<int32_t>(0x7),
    __E_DecimalDigitNumber = static_cast<int32_t>(0x8),
    __E_LetterNumber = static_cast<int32_t>(0x9),
    __E_OtherNumber = static_cast<int32_t>(0xa),
    __E_SpaceSeparator = static_cast<int32_t>(0xb),
    __E_LineSeparator = static_cast<int32_t>(0xc),
    __E_ParagraphSeparator = static_cast<int32_t>(0xd),
    __E_Control = static_cast<int32_t>(0xe),
    __E_Format = static_cast<int32_t>(0xf),
    __E_Surrogate = static_cast<int32_t>(0x10),
    __E_PrivateUse = static_cast<int32_t>(0x11),
    __E_ConnectorPunctuation = static_cast<int32_t>(0x12),
    __E_DashPunctuation = static_cast<int32_t>(0x13),
    __E_OpenPunctuation = static_cast<int32_t>(0x14),
    __E_ClosePunctuation = static_cast<int32_t>(0x15),
    __E_InitialQuotePunctuation = static_cast<int32_t>(0x16),
    __E_FinalQuotePunctuation = static_cast<int32_t>(0x17),
    __E_OtherPunctuation = static_cast<int32_t>(0x18),
    __E_MathSymbol = static_cast<int32_t>(0x19),
    __E_CurrencySymbol = static_cast<int32_t>(0x1a),
    __E_ModifierSymbol = static_cast<int32_t>(0x1b),
    __E_OtherSymbol = static_cast<int32_t>(0x1c),
    __E_OtherNotAssigned = static_cast<int32_t>(0x1d),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UnicodeCategory_Unwrapped() const noexcept {
    return static_cast<__UnicodeCategory_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnicodeCategory();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnicodeCategory(int32_t value__) noexcept;

  /// @brief Field ClosePunctuation value: I32(21)
  static ::System::Globalization::UnicodeCategory const ClosePunctuation;

  /// @brief Field ConnectorPunctuation value: I32(18)
  static ::System::Globalization::UnicodeCategory const ConnectorPunctuation;

  /// @brief Field Control value: I32(14)
  static ::System::Globalization::UnicodeCategory const Control;

  /// @brief Field CurrencySymbol value: I32(26)
  static ::System::Globalization::UnicodeCategory const CurrencySymbol;

  /// @brief Field DashPunctuation value: I32(19)
  static ::System::Globalization::UnicodeCategory const DashPunctuation;

  /// @brief Field DecimalDigitNumber value: I32(8)
  static ::System::Globalization::UnicodeCategory const DecimalDigitNumber;

  /// @brief Field EnclosingMark value: I32(7)
  static ::System::Globalization::UnicodeCategory const EnclosingMark;

  /// @brief Field FinalQuotePunctuation value: I32(23)
  static ::System::Globalization::UnicodeCategory const FinalQuotePunctuation;

  /// @brief Field Format value: I32(15)
  static ::System::Globalization::UnicodeCategory const Format;

  /// @brief Field InitialQuotePunctuation value: I32(22)
  static ::System::Globalization::UnicodeCategory const InitialQuotePunctuation;

  /// @brief Field LetterNumber value: I32(9)
  static ::System::Globalization::UnicodeCategory const LetterNumber;

  /// @brief Field LineSeparator value: I32(12)
  static ::System::Globalization::UnicodeCategory const LineSeparator;

  /// @brief Field LowercaseLetter value: I32(1)
  static ::System::Globalization::UnicodeCategory const LowercaseLetter;

  /// @brief Field MathSymbol value: I32(25)
  static ::System::Globalization::UnicodeCategory const MathSymbol;

  /// @brief Field ModifierLetter value: I32(3)
  static ::System::Globalization::UnicodeCategory const ModifierLetter;

  /// @brief Field ModifierSymbol value: I32(27)
  static ::System::Globalization::UnicodeCategory const ModifierSymbol;

  /// @brief Field NonSpacingMark value: I32(5)
  static ::System::Globalization::UnicodeCategory const NonSpacingMark;

  /// @brief Field OpenPunctuation value: I32(20)
  static ::System::Globalization::UnicodeCategory const OpenPunctuation;

  /// @brief Field OtherLetter value: I32(4)
  static ::System::Globalization::UnicodeCategory const OtherLetter;

  /// @brief Field OtherNotAssigned value: I32(29)
  static ::System::Globalization::UnicodeCategory const OtherNotAssigned;

  /// @brief Field OtherNumber value: I32(10)
  static ::System::Globalization::UnicodeCategory const OtherNumber;

  /// @brief Field OtherPunctuation value: I32(24)
  static ::System::Globalization::UnicodeCategory const OtherPunctuation;

  /// @brief Field OtherSymbol value: I32(28)
  static ::System::Globalization::UnicodeCategory const OtherSymbol;

  /// @brief Field ParagraphSeparator value: I32(13)
  static ::System::Globalization::UnicodeCategory const ParagraphSeparator;

  /// @brief Field PrivateUse value: I32(17)
  static ::System::Globalization::UnicodeCategory const PrivateUse;

  /// @brief Field SpaceSeparator value: I32(11)
  static ::System::Globalization::UnicodeCategory const SpaceSeparator;

  /// @brief Field SpacingCombiningMark value: I32(6)
  static ::System::Globalization::UnicodeCategory const SpacingCombiningMark;

  /// @brief Field Surrogate value: I32(16)
  static ::System::Globalization::UnicodeCategory const Surrogate;

  /// @brief Field TitlecaseLetter value: I32(2)
  static ::System::Globalization::UnicodeCategory const TitlecaseLetter;

  /// @brief Field UppercaseLetter value: I32(0)
  static ::System::Globalization::UnicodeCategory const UppercaseLetter;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3620 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::UnicodeCategory, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::UnicodeCategory, 0x4>, "Size mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::UnicodeCategory, "System.Globalization", "UnicodeCategory");
