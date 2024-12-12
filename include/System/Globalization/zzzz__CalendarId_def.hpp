#pragma once
// IWYU pragma private; include "System/Globalization/CalendarId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CalendarId)
// Forward declare root types
namespace System::Globalization {
struct CalendarId;
}
// Write type traits
MARK_VAL_T(::System::Globalization::CalendarId);
// Dependencies
namespace System::Globalization {
// Is value type: true
// CS Name: System.Globalization.CalendarId
struct CORDL_TYPE CalendarId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint16_t;

  /// @brief Nested struct __CalendarId_Unwrapped
  enum struct __CalendarId_Unwrapped : uint16_t {
    __E_UNINITIALIZED_VALUE = static_cast<uint16_t>(0x0u),
    __E_GREGORIAN = static_cast<uint16_t>(0x1u),
    __E_GREGORIAN_US = static_cast<uint16_t>(0x2u),
    __E_JAPAN = static_cast<uint16_t>(0x3u),
    __E_TAIWAN = static_cast<uint16_t>(0x4u),
    __E_KOREA = static_cast<uint16_t>(0x5u),
    __E_HIJRI = static_cast<uint16_t>(0x6u),
    __E_THAI = static_cast<uint16_t>(0x7u),
    __E_HEBREW = static_cast<uint16_t>(0x8u),
    __E_GREGORIAN_ME_FRENCH = static_cast<uint16_t>(0x9u),
    __E_GREGORIAN_ARABIC = static_cast<uint16_t>(0xau),
    __E_GREGORIAN_XLIT_ENGLISH = static_cast<uint16_t>(0xbu),
    __E_GREGORIAN_XLIT_FRENCH = static_cast<uint16_t>(0xcu),
    __E_JULIAN = static_cast<uint16_t>(0xdu),
    __E_JAPANESELUNISOLAR = static_cast<uint16_t>(0xeu),
    __E_CHINESELUNISOLAR = static_cast<uint16_t>(0xfu),
    __E_SAKA = static_cast<uint16_t>(0x10u),
    __E_LUNAR_ETO_CHN = static_cast<uint16_t>(0x11u),
    __E_LUNAR_ETO_KOR = static_cast<uint16_t>(0x12u),
    __E_LUNAR_ETO_ROKUYOU = static_cast<uint16_t>(0x13u),
    __E_KOREANLUNISOLAR = static_cast<uint16_t>(0x14u),
    __E_TAIWANLUNISOLAR = static_cast<uint16_t>(0x15u),
    __E_PERSIAN = static_cast<uint16_t>(0x16u),
    __E_UMALQURA = static_cast<uint16_t>(0x17u),
    __E_LAST_CALENDAR = static_cast<uint16_t>(0x17u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CalendarId_Unwrapped() const noexcept {
    return static_cast<__CalendarId_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint16_t() const noexcept {
    return static_cast<uint16_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CalendarId();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr CalendarId(uint16_t value__) noexcept;

  /// @brief Field CHINESELUNISOLAR value: U16(15)
  static ::System::Globalization::CalendarId const CHINESELUNISOLAR;

  /// @brief Field GREGORIAN value: U16(1)
  static ::System::Globalization::CalendarId const GREGORIAN;

  /// @brief Field GREGORIAN_ARABIC value: U16(10)
  static ::System::Globalization::CalendarId const GREGORIAN_ARABIC;

  /// @brief Field GREGORIAN_ME_FRENCH value: U16(9)
  static ::System::Globalization::CalendarId const GREGORIAN_ME_FRENCH;

  /// @brief Field GREGORIAN_US value: U16(2)
  static ::System::Globalization::CalendarId const GREGORIAN_US;

  /// @brief Field GREGORIAN_XLIT_ENGLISH value: U16(11)
  static ::System::Globalization::CalendarId const GREGORIAN_XLIT_ENGLISH;

  /// @brief Field GREGORIAN_XLIT_FRENCH value: U16(12)
  static ::System::Globalization::CalendarId const GREGORIAN_XLIT_FRENCH;

  /// @brief Field HEBREW value: U16(8)
  static ::System::Globalization::CalendarId const HEBREW;

  /// @brief Field HIJRI value: U16(6)
  static ::System::Globalization::CalendarId const HIJRI;

  /// @brief Field JAPAN value: U16(3)
  static ::System::Globalization::CalendarId const JAPAN;

  /// @brief Field JAPANESELUNISOLAR value: U16(14)
  static ::System::Globalization::CalendarId const JAPANESELUNISOLAR;

  /// @brief Field JULIAN value: U16(13)
  static ::System::Globalization::CalendarId const JULIAN;

  /// @brief Field KOREA value: U16(5)
  static ::System::Globalization::CalendarId const KOREA;

  /// @brief Field KOREANLUNISOLAR value: U16(20)
  static ::System::Globalization::CalendarId const KOREANLUNISOLAR;

  /// @brief Field LAST_CALENDAR value: U16(23)
  static ::System::Globalization::CalendarId const LAST_CALENDAR;

  /// @brief Field LUNAR_ETO_CHN value: U16(17)
  static ::System::Globalization::CalendarId const LUNAR_ETO_CHN;

  /// @brief Field LUNAR_ETO_KOR value: U16(18)
  static ::System::Globalization::CalendarId const LUNAR_ETO_KOR;

  /// @brief Field LUNAR_ETO_ROKUYOU value: U16(19)
  static ::System::Globalization::CalendarId const LUNAR_ETO_ROKUYOU;

  /// @brief Field PERSIAN value: U16(22)
  static ::System::Globalization::CalendarId const PERSIAN;

  /// @brief Field SAKA value: U16(16)
  static ::System::Globalization::CalendarId const SAKA;

  /// @brief Field TAIWAN value: U16(4)
  static ::System::Globalization::CalendarId const TAIWAN;

  /// @brief Field TAIWANLUNISOLAR value: U16(21)
  static ::System::Globalization::CalendarId const TAIWANLUNISOLAR;

  /// @brief Field THAI value: U16(7)
  static ::System::Globalization::CalendarId const THAI;

  /// @brief Field UMALQURA value: U16(23)
  static ::System::Globalization::CalendarId const UMALQURA;

  /// @brief Field UNINITIALIZED_VALUE value: U16(0)
  static ::System::Globalization::CalendarId const UNINITIALIZED_VALUE;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3673 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  uint16_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::CalendarId, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::CalendarId, 0x2>, "Size mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CalendarId, "System.Globalization", "CalendarId");
