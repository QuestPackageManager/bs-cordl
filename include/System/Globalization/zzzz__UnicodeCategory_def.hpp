#pragma once
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
// Type: System.Globalization::UnicodeCategory
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// CS Name: ::System.Globalization::UnicodeCategory
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
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnicodeCategory();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnicodeCategory(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ClosePunctuation value: static_cast<int32_t>(0x15)
  static ::System::Globalization::UnicodeCategory const ClosePunctuation;

  /// @brief Field ConnectorPunctuation value: static_cast<int32_t>(0x12)
  static ::System::Globalization::UnicodeCategory const ConnectorPunctuation;

  /// @brief Field Control value: static_cast<int32_t>(0xe)
  static ::System::Globalization::UnicodeCategory const Control;

  /// @brief Field CurrencySymbol value: static_cast<int32_t>(0x1a)
  static ::System::Globalization::UnicodeCategory const CurrencySymbol;

  /// @brief Field DashPunctuation value: static_cast<int32_t>(0x13)
  static ::System::Globalization::UnicodeCategory const DashPunctuation;

  /// @brief Field DecimalDigitNumber value: static_cast<int32_t>(0x8)
  static ::System::Globalization::UnicodeCategory const DecimalDigitNumber;

  /// @brief Field EnclosingMark value: static_cast<int32_t>(0x7)
  static ::System::Globalization::UnicodeCategory const EnclosingMark;

  /// @brief Field FinalQuotePunctuation value: static_cast<int32_t>(0x17)
  static ::System::Globalization::UnicodeCategory const FinalQuotePunctuation;

  /// @brief Field Format value: static_cast<int32_t>(0xf)
  static ::System::Globalization::UnicodeCategory const Format;

  /// @brief Field InitialQuotePunctuation value: static_cast<int32_t>(0x16)
  static ::System::Globalization::UnicodeCategory const InitialQuotePunctuation;

  /// @brief Field LetterNumber value: static_cast<int32_t>(0x9)
  static ::System::Globalization::UnicodeCategory const LetterNumber;

  /// @brief Field LineSeparator value: static_cast<int32_t>(0xc)
  static ::System::Globalization::UnicodeCategory const LineSeparator;

  /// @brief Field LowercaseLetter value: static_cast<int32_t>(0x1)
  static ::System::Globalization::UnicodeCategory const LowercaseLetter;

  /// @brief Field MathSymbol value: static_cast<int32_t>(0x19)
  static ::System::Globalization::UnicodeCategory const MathSymbol;

  /// @brief Field ModifierLetter value: static_cast<int32_t>(0x3)
  static ::System::Globalization::UnicodeCategory const ModifierLetter;

  /// @brief Field ModifierSymbol value: static_cast<int32_t>(0x1b)
  static ::System::Globalization::UnicodeCategory const ModifierSymbol;

  /// @brief Field NonSpacingMark value: static_cast<int32_t>(0x5)
  static ::System::Globalization::UnicodeCategory const NonSpacingMark;

  /// @brief Field OpenPunctuation value: static_cast<int32_t>(0x14)
  static ::System::Globalization::UnicodeCategory const OpenPunctuation;

  /// @brief Field OtherLetter value: static_cast<int32_t>(0x4)
  static ::System::Globalization::UnicodeCategory const OtherLetter;

  /// @brief Field OtherNotAssigned value: static_cast<int32_t>(0x1d)
  static ::System::Globalization::UnicodeCategory const OtherNotAssigned;

  /// @brief Field OtherNumber value: static_cast<int32_t>(0xa)
  static ::System::Globalization::UnicodeCategory const OtherNumber;

  /// @brief Field OtherPunctuation value: static_cast<int32_t>(0x18)
  static ::System::Globalization::UnicodeCategory const OtherPunctuation;

  /// @brief Field OtherSymbol value: static_cast<int32_t>(0x1c)
  static ::System::Globalization::UnicodeCategory const OtherSymbol;

  /// @brief Field ParagraphSeparator value: static_cast<int32_t>(0xd)
  static ::System::Globalization::UnicodeCategory const ParagraphSeparator;

  /// @brief Field PrivateUse value: static_cast<int32_t>(0x11)
  static ::System::Globalization::UnicodeCategory const PrivateUse;

  /// @brief Field SpaceSeparator value: static_cast<int32_t>(0xb)
  static ::System::Globalization::UnicodeCategory const SpaceSeparator;

  /// @brief Field SpacingCombiningMark value: static_cast<int32_t>(0x6)
  static ::System::Globalization::UnicodeCategory const SpacingCombiningMark;

  /// @brief Field Surrogate value: static_cast<int32_t>(0x10)
  static ::System::Globalization::UnicodeCategory const Surrogate;

  /// @brief Field TitlecaseLetter value: static_cast<int32_t>(0x2)
  static ::System::Globalization::UnicodeCategory const TitlecaseLetter;

  /// @brief Field UppercaseLetter value: static_cast<int32_t>(0x0)
  static ::System::Globalization::UnicodeCategory const UppercaseLetter;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::UnicodeCategory, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::UnicodeCategory, value__) == 0x0, "Offset mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::UnicodeCategory, "System.Globalization", "UnicodeCategory");
