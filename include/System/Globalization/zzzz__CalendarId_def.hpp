#pragma once
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
// Type: System.Globalization::CalendarId
// SizeInfo { instance_size: 2, native_size: 2, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3665))
// CS Name: ::System.Globalization::CalendarId
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

  // Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr CalendarId(uint16_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CalendarId();

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  uint16_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field UNINITIALIZED_VALUE value: static_cast<uint16_t>(0x0u)
  static ::System::Globalization::CalendarId const UNINITIALIZED_VALUE;

  /// @brief Field GREGORIAN value: static_cast<uint16_t>(0x1u)
  static ::System::Globalization::CalendarId const GREGORIAN;

  /// @brief Field GREGORIAN_US value: static_cast<uint16_t>(0x2u)
  static ::System::Globalization::CalendarId const GREGORIAN_US;

  /// @brief Field JAPAN value: static_cast<uint16_t>(0x3u)
  static ::System::Globalization::CalendarId const JAPAN;

  /// @brief Field TAIWAN value: static_cast<uint16_t>(0x4u)
  static ::System::Globalization::CalendarId const TAIWAN;

  /// @brief Field KOREA value: static_cast<uint16_t>(0x5u)
  static ::System::Globalization::CalendarId const KOREA;

  /// @brief Field HIJRI value: static_cast<uint16_t>(0x6u)
  static ::System::Globalization::CalendarId const HIJRI;

  /// @brief Field THAI value: static_cast<uint16_t>(0x7u)
  static ::System::Globalization::CalendarId const THAI;

  /// @brief Field HEBREW value: static_cast<uint16_t>(0x8u)
  static ::System::Globalization::CalendarId const HEBREW;

  /// @brief Field GREGORIAN_ME_FRENCH value: static_cast<uint16_t>(0x9u)
  static ::System::Globalization::CalendarId const GREGORIAN_ME_FRENCH;

  /// @brief Field GREGORIAN_ARABIC value: static_cast<uint16_t>(0xau)
  static ::System::Globalization::CalendarId const GREGORIAN_ARABIC;

  /// @brief Field GREGORIAN_XLIT_ENGLISH value: static_cast<uint16_t>(0xbu)
  static ::System::Globalization::CalendarId const GREGORIAN_XLIT_ENGLISH;

  /// @brief Field GREGORIAN_XLIT_FRENCH value: static_cast<uint16_t>(0xcu)
  static ::System::Globalization::CalendarId const GREGORIAN_XLIT_FRENCH;

  /// @brief Field JULIAN value: static_cast<uint16_t>(0xdu)
  static ::System::Globalization::CalendarId const JULIAN;

  /// @brief Field JAPANESELUNISOLAR value: static_cast<uint16_t>(0xeu)
  static ::System::Globalization::CalendarId const JAPANESELUNISOLAR;

  /// @brief Field CHINESELUNISOLAR value: static_cast<uint16_t>(0xfu)
  static ::System::Globalization::CalendarId const CHINESELUNISOLAR;

  /// @brief Field SAKA value: static_cast<uint16_t>(0x10u)
  static ::System::Globalization::CalendarId const SAKA;

  /// @brief Field LUNAR_ETO_CHN value: static_cast<uint16_t>(0x11u)
  static ::System::Globalization::CalendarId const LUNAR_ETO_CHN;

  /// @brief Field LUNAR_ETO_KOR value: static_cast<uint16_t>(0x12u)
  static ::System::Globalization::CalendarId const LUNAR_ETO_KOR;

  /// @brief Field LUNAR_ETO_ROKUYOU value: static_cast<uint16_t>(0x13u)
  static ::System::Globalization::CalendarId const LUNAR_ETO_ROKUYOU;

  /// @brief Field KOREANLUNISOLAR value: static_cast<uint16_t>(0x14u)
  static ::System::Globalization::CalendarId const KOREANLUNISOLAR;

  /// @brief Field TAIWANLUNISOLAR value: static_cast<uint16_t>(0x15u)
  static ::System::Globalization::CalendarId const TAIWANLUNISOLAR;

  /// @brief Field PERSIAN value: static_cast<uint16_t>(0x16u)
  static ::System::Globalization::CalendarId const PERSIAN;

  /// @brief Field UMALQURA value: static_cast<uint16_t>(0x17u)
  static ::System::Globalization::CalendarId const UMALQURA;

  /// @brief Field LAST_CALENDAR value: static_cast<uint16_t>(0x17u)
  static ::System::Globalization::CalendarId const LAST_CALENDAR;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::CalendarId, 0x2>, "Size mismatch!");

static_assert(offsetof(::System::Globalization::CalendarId, value__) == 0x0, "Offset mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CalendarId, "System.Globalization", "CalendarId");
