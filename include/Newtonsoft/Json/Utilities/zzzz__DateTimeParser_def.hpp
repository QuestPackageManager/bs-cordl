#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/DateTimeParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Utilities/zzzz__ParserTimeZone_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeParser)
namespace Newtonsoft::Json::Utilities {
struct ParserTimeZone;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
struct DateTimeParser;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Utilities::DateTimeParser);
// Type: Newtonsoft.Json.Utilities::DateTimeParser
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// CS Name: ::Newtonsoft.Json.Utilities::DateTimeParser
struct CORDL_TYPE DateTimeParser {
public:
  // Declarations
  /// @brief Field LzHH, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_LzHH, put = setStaticF_LzHH)) int32_t LzHH;

  /// @brief Field LzHH_, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_LzHH_, put = setStaticF_LzHH_)) int32_t LzHH_;

  /// @brief Field LzHH_mm, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_LzHH_mm, put = setStaticF_LzHH_mm)) int32_t LzHH_mm;

  /// @brief Field LzHH_mm_, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_LzHH_mm_, put = setStaticF_LzHH_mm_)) int32_t LzHH_mm_;

  /// @brief Field LzHH_mm_ss, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_LzHH_mm_ss, put = setStaticF_LzHH_mm_ss)) int32_t LzHH_mm_ss;

  /// @brief Field Lz_, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_Lz_, put = setStaticF_Lz_)) int32_t Lz_;

  /// @brief Field Lz_zz, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_Lz_zz, put = setStaticF_Lz_zz)) int32_t Lz_zz;

  /// @brief Field Lzyyyy, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_Lzyyyy, put = setStaticF_Lzyyyy)) int32_t Lzyyyy;

  /// @brief Field Lzyyyy_, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_Lzyyyy_, put = setStaticF_Lzyyyy_)) int32_t Lzyyyy_;

  /// @brief Field Lzyyyy_MM, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_Lzyyyy_MM, put = setStaticF_Lzyyyy_MM)) int32_t Lzyyyy_MM;

  /// @brief Field Lzyyyy_MM_, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_Lzyyyy_MM_, put = setStaticF_Lzyyyy_MM_)) int32_t Lzyyyy_MM_;

  /// @brief Field Lzyyyy_MM_dd, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_Lzyyyy_MM_dd, put = setStaticF_Lzyyyy_MM_dd)) int32_t Lzyyyy_MM_dd;

  /// @brief Field Lzyyyy_MM_ddT, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_Lzyyyy_MM_ddT, put = setStaticF_Lzyyyy_MM_ddT)) int32_t Lzyyyy_MM_ddT;

  /// @brief Field Power10, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Power10, put = setStaticF_Power10))::ArrayW<int32_t, ::Array<int32_t>*> Power10;

  /// @brief Method Parse, addr 0x2a3e29c, size 0xd8, virtual false, abstract: false, final false
  inline bool Parse(::ArrayW<char16_t, ::Array<char16_t>*> text, int32_t startIndex, int32_t length);

  /// @brief Method Parse2Digit, addr 0x2a3e674, size 0x94, virtual false, abstract: false, final false
  inline bool Parse2Digit(int32_t start, ByRef<int32_t> num);

  /// @brief Method Parse4Digit, addr 0x2a3e598, size 0xdc, virtual false, abstract: false, final false
  inline bool Parse4Digit(int32_t start, ByRef<int32_t> num);

  /// @brief Method ParseChar, addr 0x2a3e50c, size 0x4c, virtual false, abstract: false, final false
  inline bool ParseChar(int32_t start, char16_t ch);

  /// @brief Method ParseDate, addr 0x2a3e374, size 0x198, virtual false, abstract: false, final false
  inline bool ParseDate(int32_t start);

  /// @brief Method ParseTime, addr 0x2a3e708, size 0x2c0, virtual false, abstract: false, final false
  inline bool ParseTime(ByRef<int32_t> start);

  /// @brief Method ParseTimeAndZoneAndWhitespace, addr 0x2a3e558, size 0x40, virtual false, abstract: false, final false
  inline bool ParseTimeAndZoneAndWhitespace(int32_t start);

  /// @brief Method ParseZone, addr 0x2a3e9c8, size 0x1d0, virtual false, abstract: false, final false
  inline bool ParseZone(int32_t start);

  static inline int32_t getStaticF_LzHH();

  static inline int32_t getStaticF_LzHH_();

  static inline int32_t getStaticF_LzHH_mm();

  static inline int32_t getStaticF_LzHH_mm_();

  static inline int32_t getStaticF_LzHH_mm_ss();

  static inline int32_t getStaticF_Lz_();

  static inline int32_t getStaticF_Lz_zz();

  static inline int32_t getStaticF_Lzyyyy();

  static inline int32_t getStaticF_Lzyyyy_();

  static inline int32_t getStaticF_Lzyyyy_MM();

  static inline int32_t getStaticF_Lzyyyy_MM_();

  static inline int32_t getStaticF_Lzyyyy_MM_dd();

  static inline int32_t getStaticF_Lzyyyy_MM_ddT();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_Power10();

  static inline void setStaticF_LzHH(int32_t value);

  static inline void setStaticF_LzHH_(int32_t value);

  static inline void setStaticF_LzHH_mm(int32_t value);

  static inline void setStaticF_LzHH_mm_(int32_t value);

  static inline void setStaticF_LzHH_mm_ss(int32_t value);

  static inline void setStaticF_Lz_(int32_t value);

  static inline void setStaticF_Lz_zz(int32_t value);

  static inline void setStaticF_Lzyyyy(int32_t value);

  static inline void setStaticF_Lzyyyy_(int32_t value);

  static inline void setStaticF_Lzyyyy_MM(int32_t value);

  static inline void setStaticF_Lzyyyy_MM_(int32_t value);

  static inline void setStaticF_Lzyyyy_MM_dd(int32_t value);

  static inline void setStaticF_Lzyyyy_MM_ddT(int32_t value);

  static inline void setStaticF_Power10(::ArrayW<int32_t, ::Array<int32_t>*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeParser();

  // Ctor Parameters [CppParam { name: "Year", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Month", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Day", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "Hour", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Minute", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "Second", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Fraction", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ZoneHour", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "ZoneMinute", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Zone", ty:
  // "::Newtonsoft::Json::Utilities::ParserTimeZone", modifiers: "", def_value: None }, CppParam { name: "_text", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: None },
  // CppParam { name: "_end", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DateTimeParser(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Fraction, int32_t ZoneHour, int32_t ZoneMinute,
                           ::Newtonsoft::Json::Utilities::ParserTimeZone Zone, ::ArrayW<char16_t, ::Array<char16_t>*> _text, int32_t _end) noexcept;

  /// @brief Field Year, offset: 0x0, size: 0x4, def value: None
  int32_t Year;

  /// @brief Field Month, offset: 0x4, size: 0x4, def value: None
  int32_t Month;

  /// @brief Field Day, offset: 0x8, size: 0x4, def value: None
  int32_t Day;

  /// @brief Field Hour, offset: 0xc, size: 0x4, def value: None
  int32_t Hour;

  /// @brief Field Minute, offset: 0x10, size: 0x4, def value: None
  int32_t Minute;

  /// @brief Field Second, offset: 0x14, size: 0x4, def value: None
  int32_t Second;

  /// @brief Field Fraction, offset: 0x18, size: 0x4, def value: None
  int32_t Fraction;

  /// @brief Field ZoneHour, offset: 0x1c, size: 0x4, def value: None
  int32_t ZoneHour;

  /// @brief Field ZoneMinute, offset: 0x20, size: 0x4, def value: None
  int32_t ZoneMinute;

  /// @brief Field Zone, offset: 0x24, size: 0x4, def value: None
  ::Newtonsoft::Json::Utilities::ParserTimeZone Zone;

  /// @brief Field _text, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> _text;

  /// @brief Field _end, offset: 0x30, size: 0x4, def value: None
  int32_t _end;

  /// @brief Field MaxFractionDigits offset 0xffffffff size 0x2
  static constexpr int16_t MaxFractionDigits{ static_cast<int16_t>(0x7) };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::DateTimeParser, 0x38>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::DateTimeParser, Year) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::DateTimeParser, Month) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::DateTimeParser, Day) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::DateTimeParser, Hour) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::DateTimeParser, Minute) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::DateTimeParser, Second) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::DateTimeParser, Fraction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::DateTimeParser, ZoneHour) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::DateTimeParser, ZoneMinute) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::DateTimeParser, Zone) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::DateTimeParser, _text) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::DateTimeParser, _end) == 0x30, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::DateTimeParser, "Newtonsoft.Json.Utilities", "DateTimeParser");
