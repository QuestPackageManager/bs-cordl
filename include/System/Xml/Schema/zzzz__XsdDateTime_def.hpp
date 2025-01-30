#pragma once
// IWYU pragma private; include "System/Xml/Schema/XsdDateTime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XsdDateTime)
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
struct XsdDateTimeFlags;
}
namespace System::Xml::Schema {
struct XsdDateTime_DateTimeTypeCode;
}
namespace System::Xml::Schema {
struct XsdDateTime_Parser;
}
namespace System::Xml::Schema {
struct XsdDateTime_XsdDateTimeKind;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Xml::Schema {
struct XsdDateTime_DateTimeTypeCode;
}
namespace System::Xml::Schema {
struct XsdDateTime_XsdDateTimeKind;
}
namespace System::Xml::Schema {
struct XsdDateTime;
}
namespace System::Xml::Schema {
struct XsdDateTime_Parser;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XsdDateTime_DateTimeTypeCode);
MARK_VAL_T(::System::Xml::Schema::XsdDateTime_XsdDateTimeKind);
MARK_VAL_T(::System::Xml::Schema::XsdDateTime);
MARK_VAL_T(::System::Xml::Schema::XsdDateTime_Parser);
// Dependencies
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.XsdDateTime/DateTimeTypeCode
struct CORDL_TYPE XsdDateTime_DateTimeTypeCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XsdDateTime_DateTimeTypeCode_Unwrapped
  enum struct __XsdDateTime_DateTimeTypeCode_Unwrapped : int32_t {
    __E_DateTime = static_cast<int32_t>(0x0),
    __E_Time = static_cast<int32_t>(0x1),
    __E_Date = static_cast<int32_t>(0x2),
    __E_GYearMonth = static_cast<int32_t>(0x3),
    __E_GYear = static_cast<int32_t>(0x4),
    __E_GMonthDay = static_cast<int32_t>(0x5),
    __E_GDay = static_cast<int32_t>(0x6),
    __E_GMonth = static_cast<int32_t>(0x7),
    __E_XdrDateTime = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XsdDateTime_DateTimeTypeCode_Unwrapped() const noexcept {
    return static_cast<__XsdDateTime_DateTimeTypeCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XsdDateTime_DateTimeTypeCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XsdDateTime_DateTimeTypeCode(int32_t value__) noexcept;

  /// @brief Field Date value: I32(2)
  static ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode const Date;

  /// @brief Field DateTime value: I32(0)
  static ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode const DateTime;

  /// @brief Field GDay value: I32(6)
  static ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode const GDay;

  /// @brief Field GMonth value: I32(7)
  static ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode const GMonth;

  /// @brief Field GMonthDay value: I32(5)
  static ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode const GMonthDay;

  /// @brief Field GYear value: I32(4)
  static ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode const GYear;

  /// @brief Field GYearMonth value: I32(3)
  static ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode const GYearMonth;

  /// @brief Field Time value: I32(1)
  static ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode const Time;

  /// @brief Field XdrDateTime value: I32(8)
  static ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode const XdrDateTime;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7762 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XsdDateTime_DateTimeTypeCode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XsdDateTime_DateTimeTypeCode, 0x4>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.XsdDateTime/XsdDateTimeKind
struct CORDL_TYPE XsdDateTime_XsdDateTimeKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XsdDateTime_XsdDateTimeKind_Unwrapped
  enum struct __XsdDateTime_XsdDateTimeKind_Unwrapped : int32_t {
    __E_Unspecified = static_cast<int32_t>(0x0),
    __E_Zulu = static_cast<int32_t>(0x1),
    __E_LocalWestOfZulu = static_cast<int32_t>(0x2),
    __E_LocalEastOfZulu = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XsdDateTime_XsdDateTimeKind_Unwrapped() const noexcept {
    return static_cast<__XsdDateTime_XsdDateTimeKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XsdDateTime_XsdDateTimeKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XsdDateTime_XsdDateTimeKind(int32_t value__) noexcept;

  /// @brief Field LocalEastOfZulu value: I32(3)
  static ::System::Xml::Schema::XsdDateTime_XsdDateTimeKind const LocalEastOfZulu;

  /// @brief Field LocalWestOfZulu value: I32(2)
  static ::System::Xml::Schema::XsdDateTime_XsdDateTimeKind const LocalWestOfZulu;

  /// @brief Field Unspecified value: I32(0)
  static ::System::Xml::Schema::XsdDateTime_XsdDateTimeKind const Unspecified;

  /// @brief Field Zulu value: I32(1)
  static ::System::Xml::Schema::XsdDateTime_XsdDateTimeKind const Zulu;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7763 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XsdDateTime_XsdDateTimeKind, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XsdDateTime_XsdDateTimeKind, 0x4>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.Xml.Schema.XsdDateTime::DateTimeTypeCode, System.Xml.Schema.XsdDateTime::XsdDateTimeKind
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.XsdDateTime/Parser
struct CORDL_TYPE XsdDateTime_Parser {
public:
  // Declarations
  /// @brief Field Power10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Power10, put = setStaticF_Power10)) ::ArrayW<int32_t, ::Array<int32_t>*> Power10;

  /// @brief Method Parse, addr 0x42fe5ac, size 0xb44, virtual false, abstract: false, final false
  inline bool Parse(::StringW text, ::System::Xml::Schema::XsdDateTimeFlags kinds);

  /// @brief Method Parse2Dig, addr 0x43017d8, size 0xa8, virtual false, abstract: false, final false
  inline bool Parse2Dig(int32_t start, ::ByRef<int32_t> num);

  /// @brief Method Parse4Dig, addr 0x43016b0, size 0x128, virtual false, abstract: false, final false
  inline bool Parse4Dig(int32_t start, ::ByRef<int32_t> num);

  /// @brief Method ParseChar, addr 0x43012c8, size 0x44, virtual false, abstract: false, final false
  inline bool ParseChar(int32_t start, char16_t ch);

  /// @brief Method ParseDate, addr 0x43010ac, size 0x21c, virtual false, abstract: false, final false
  inline bool ParseDate(int32_t start);

  /// @brief Method ParseTime, addr 0x4301880, size 0x378, virtual false, abstract: false, final false
  inline bool ParseTime(::ByRef<int32_t> start);

  /// @brief Method ParseTimeAndWhitespace, addr 0x4301614, size 0x9c, virtual false, abstract: false, final false
  inline bool ParseTimeAndWhitespace(int32_t start);

  /// @brief Method ParseTimeAndZoneAndWhitespace, addr 0x430130c, size 0x9c, virtual false, abstract: false, final false
  inline bool ParseTimeAndZoneAndWhitespace(int32_t start);

  /// @brief Method ParseZoneAndWhitespace, addr 0x43013a8, size 0x26c, virtual false, abstract: false, final false
  inline bool ParseZoneAndWhitespace(int32_t start);

  /// @brief Method Test, addr 0x43010a0, size 0xc, virtual false, abstract: false, final false
  static inline bool Test(::System::Xml::Schema::XsdDateTimeFlags left, ::System::Xml::Schema::XsdDateTimeFlags right);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_Power10();

  static inline void setStaticF_Power10(::ArrayW<int32_t, ::Array<int32_t>*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XsdDateTime_Parser();

  // Ctor Parameters [CppParam { name: "typeCode", ty: "::System::Xml::Schema::XsdDateTime_DateTimeTypeCode", modifiers: "", def_value: None }, CppParam { name: "year", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "month", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "day", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hour", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "minute", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "second", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "fraction", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "kind", ty: "::System::Xml::Schema::XsdDateTime_XsdDateTimeKind", modifiers: "", def_value: None
  // }, CppParam { name: "zoneHour", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "zoneMinute", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "text", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XsdDateTime_Parser(::System::Xml::Schema::XsdDateTime_DateTimeTypeCode typeCode, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t fraction,
                               ::System::Xml::Schema::XsdDateTime_XsdDateTimeKind kind, int32_t zoneHour, int32_t zoneMinute, ::StringW text, int32_t length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7764 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field typeCode, offset: 0x0, size: 0x4, def value: None
  ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode typeCode;

  /// @brief Field year, offset: 0x4, size: 0x4, def value: None
  int32_t year;

  /// @brief Field month, offset: 0x8, size: 0x4, def value: None
  int32_t month;

  /// @brief Field day, offset: 0xc, size: 0x4, def value: None
  int32_t day;

  /// @brief Field hour, offset: 0x10, size: 0x4, def value: None
  int32_t hour;

  /// @brief Field minute, offset: 0x14, size: 0x4, def value: None
  int32_t minute;

  /// @brief Field second, offset: 0x18, size: 0x4, def value: None
  int32_t second;

  /// @brief Field fraction, offset: 0x1c, size: 0x4, def value: None
  int32_t fraction;

  /// @brief Field kind, offset: 0x20, size: 0x4, def value: None
  ::System::Xml::Schema::XsdDateTime_XsdDateTimeKind kind;

  /// @brief Field zoneHour, offset: 0x24, size: 0x4, def value: None
  int32_t zoneHour;

  /// @brief Field zoneMinute, offset: 0x28, size: 0x4, def value: None
  int32_t zoneMinute;

  /// @brief Field text, offset: 0x30, size: 0x8, def value: None
  ::StringW text;

  /// @brief Field length, offset: 0x38, size: 0x4, def value: None
  int32_t length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XsdDateTime_Parser, typeCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDateTime_Parser, year) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDateTime_Parser, month) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDateTime_Parser, day) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDateTime_Parser, hour) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDateTime_Parser, minute) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDateTime_Parser, second) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDateTime_Parser, fraction) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDateTime_Parser, kind) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDateTime_Parser, zoneHour) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDateTime_Parser, zoneMinute) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDateTime_Parser, text) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDateTime_Parser, length) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XsdDateTime_Parser, 0x40>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.DateTime
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.XsdDateTime
struct CORDL_TYPE XsdDateTime {
public:
  // Declarations
  using DateTimeTypeCode = ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode;

  using Parser = ::System::Xml::Schema::XsdDateTime_Parser;

  using XsdDateTimeKind = ::System::Xml::Schema::XsdDateTime_XsdDateTimeKind;

  __declspec(property(get = get_Day)) int32_t Day;

  __declspec(property(get = get_Fraction)) int32_t Fraction;

  __declspec(property(get = get_Hour)) int32_t Hour;

  __declspec(property(get = get_InternalKind)) ::System::Xml::Schema::XsdDateTime_XsdDateTimeKind InternalKind;

  __declspec(property(get = get_InternalTypeCode)) ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode InternalTypeCode;

  /// @brief Field LzHH, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_LzHH, put = setStaticF_LzHH)) int32_t LzHH;

  /// @brief Field LzHH_, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_LzHH_, put = setStaticF_LzHH_)) int32_t LzHH_;

  /// @brief Field LzHH_mm, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_LzHH_mm, put = setStaticF_LzHH_mm)) int32_t LzHH_mm;

  /// @brief Field LzHH_mm_, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_LzHH_mm_, put = setStaticF_LzHH_mm_)) int32_t LzHH_mm_;

  /// @brief Field LzHH_mm_ss, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_LzHH_mm_ss, put = setStaticF_LzHH_mm_ss)) int32_t LzHH_mm_ss;

  /// @brief Field Lz_, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Lz_, put = setStaticF_Lz_)) int32_t Lz_;

  /// @brief Field Lz__, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Lz__, put = setStaticF_Lz__)) int32_t Lz__;

  /// @brief Field Lz___, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Lz___, put = setStaticF_Lz___)) int32_t Lz___;

  /// @brief Field Lz___dd, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Lz___dd, put = setStaticF_Lz___dd)) int32_t Lz___dd;

  /// @brief Field Lz__mm, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Lz__mm, put = setStaticF_Lz__mm)) int32_t Lz__mm;

  /// @brief Field Lz__mm_, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Lz__mm_, put = setStaticF_Lz__mm_)) int32_t Lz__mm_;

  /// @brief Field Lz__mm__, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Lz__mm__, put = setStaticF_Lz__mm__)) int32_t Lz__mm__;

  /// @brief Field Lz__mm_dd, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Lz__mm_dd, put = setStaticF_Lz__mm_dd)) int32_t Lz__mm_dd;

  /// @brief Field Lz_zz, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Lz_zz, put = setStaticF_Lz_zz)) int32_t Lz_zz;

  /// @brief Field Lz_zz_, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Lz_zz_, put = setStaticF_Lz_zz_)) int32_t Lz_zz_;

  /// @brief Field Lz_zz_zz, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Lz_zz_zz, put = setStaticF_Lz_zz_zz)) int32_t Lz_zz_zz;

  /// @brief Field Lzyyyy, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Lzyyyy, put = setStaticF_Lzyyyy)) int32_t Lzyyyy;

  /// @brief Field Lzyyyy_, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Lzyyyy_, put = setStaticF_Lzyyyy_)) int32_t Lzyyyy_;

  /// @brief Field Lzyyyy_MM, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Lzyyyy_MM, put = setStaticF_Lzyyyy_MM)) int32_t Lzyyyy_MM;

  /// @brief Field Lzyyyy_MM_, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Lzyyyy_MM_, put = setStaticF_Lzyyyy_MM_)) int32_t Lzyyyy_MM_;

  /// @brief Field Lzyyyy_MM_dd, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Lzyyyy_MM_dd, put = setStaticF_Lzyyyy_MM_dd)) int32_t Lzyyyy_MM_dd;

  /// @brief Field Lzyyyy_MM_ddT, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Lzyyyy_MM_ddT, put = setStaticF_Lzyyyy_MM_ddT)) int32_t Lzyyyy_MM_ddT;

  __declspec(property(get = get_Minute)) int32_t Minute;

  __declspec(property(get = get_Month)) int32_t Month;

  __declspec(property(get = get_Second)) int32_t Second;

  __declspec(property(get = get_Year)) int32_t Year;

  __declspec(property(get = get_ZoneHour)) int32_t ZoneHour;

  __declspec(property(get = get_ZoneMinute)) int32_t ZoneMinute;

  /// @brief Field typeCodes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_typeCodes, put = setStaticF_typeCodes)) ::ArrayW<::System::Xml::Schema::XmlTypeCode, ::Array<::System::Xml::Schema::XmlTypeCode>*> typeCodes;

  /// @brief Method InitiateXsdDateTime, addr 0x42ff0f0, size 0xbc, virtual false, abstract: false, final false
  inline void InitiateXsdDateTime(::System::Xml::Schema::XsdDateTime_Parser parser);

  /// @brief Method IntToCharArray, addr 0x4300a80, size 0x68, virtual false, abstract: false, final false
  inline void IntToCharArray(::ArrayW<char16_t, ::Array<char16_t>*> text, int32_t start, int32_t value, int32_t digits);

  /// @brief Method PrintDate, addr 0x43006e8, size 0x144, virtual false, abstract: false, final false
  inline void PrintDate(::System::Text::StringBuilder* sb);

  /// @brief Method PrintTime, addr 0x430082c, size 0x254, virtual false, abstract: false, final false
  inline void PrintTime(::System::Text::StringBuilder* sb);

  /// @brief Method PrintZone, addr 0x4300b50, size 0x1a0, virtual false, abstract: false, final false
  inline void PrintZone(::System::Text::StringBuilder* sb);

  /// @brief Method ShortToCharArray, addr 0x4300ae8, size 0x68, virtual false, abstract: false, final false
  inline void ShortToCharArray(::ArrayW<char16_t, ::Array<char16_t>*> text, int32_t start, int32_t value);

  /// @brief Method ToString, addr 0x43002a4, size 0x444, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParse, addr 0x42ff240, size 0xc0, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW text, ::System::Xml::Schema::XsdDateTimeFlags kinds, ::ByRef<::System::Xml::Schema::XsdDateTime> result);

  /// @brief Method .ctor, addr 0x42ff300, size 0x1c4, virtual false, abstract: false, final false
  inline void _ctor(::System::DateTime dateTime, ::System::Xml::Schema::XsdDateTimeFlags kinds);

  /// @brief Method .ctor, addr 0x42ff4c4, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::DateTimeOffset dateTimeOffset);

  /// @brief Method .ctor, addr 0x42ff534, size 0x190, virtual false, abstract: false, final false
  inline void _ctor(::System::DateTimeOffset dateTimeOffset, ::System::Xml::Schema::XsdDateTimeFlags kinds);

  /// @brief Method .ctor, addr 0x42ff1ac, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XsdDateTime_Parser parser);

  /// @brief Method .ctor, addr 0x42fe404, size 0x1a8, virtual false, abstract: false, final false
  inline void _ctor(::StringW text, ::System::Xml::Schema::XsdDateTimeFlags kinds);

  static inline int32_t getStaticF_LzHH();

  static inline int32_t getStaticF_LzHH_();

  static inline int32_t getStaticF_LzHH_mm();

  static inline int32_t getStaticF_LzHH_mm_();

  static inline int32_t getStaticF_LzHH_mm_ss();

  static inline int32_t getStaticF_Lz_();

  static inline int32_t getStaticF_Lz__();

  static inline int32_t getStaticF_Lz___();

  static inline int32_t getStaticF_Lz___dd();

  static inline int32_t getStaticF_Lz__mm();

  static inline int32_t getStaticF_Lz__mm_();

  static inline int32_t getStaticF_Lz__mm__();

  static inline int32_t getStaticF_Lz__mm_dd();

  static inline int32_t getStaticF_Lz_zz();

  static inline int32_t getStaticF_Lz_zz_();

  static inline int32_t getStaticF_Lz_zz_zz();

  static inline int32_t getStaticF_Lzyyyy();

  static inline int32_t getStaticF_Lzyyyy_();

  static inline int32_t getStaticF_Lzyyyy_MM();

  static inline int32_t getStaticF_Lzyyyy_MM_();

  static inline int32_t getStaticF_Lzyyyy_MM_dd();

  static inline int32_t getStaticF_Lzyyyy_MM_ddT();

  static inline ::ArrayW<::System::Xml::Schema::XmlTypeCode, ::Array<::System::Xml::Schema::XmlTypeCode>*> getStaticF_typeCodes();

  /// @brief Method get_Day, addr 0x42ff784, size 0x58, virtual false, abstract: false, final false
  inline int32_t get_Day();

  /// @brief Method get_Fraction, addr 0x42ff8e4, size 0x118, virtual false, abstract: false, final false
  inline int32_t get_Fraction();

  /// @brief Method get_Hour, addr 0x42ff7dc, size 0x58, virtual false, abstract: false, final false
  inline int32_t get_Hour();

  /// @brief Method get_InternalKind, addr 0x42ff6cc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XsdDateTime_XsdDateTimeKind get_InternalKind();

  /// @brief Method get_InternalTypeCode, addr 0x42ff6c4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XsdDateTime_DateTimeTypeCode get_InternalTypeCode();

  /// @brief Method get_Minute, addr 0x42ff834, size 0x58, virtual false, abstract: false, final false
  inline int32_t get_Minute();

  /// @brief Method get_Month, addr 0x42ff72c, size 0x58, virtual false, abstract: false, final false
  inline int32_t get_Month();

  /// @brief Method get_Second, addr 0x42ff88c, size 0x58, virtual false, abstract: false, final false
  inline int32_t get_Second();

  /// @brief Method get_Year, addr 0x42ff6d4, size 0x58, virtual false, abstract: false, final false
  inline int32_t get_Year();

  /// @brief Method get_ZoneHour, addr 0x42ff9fc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ZoneHour();

  /// @brief Method get_ZoneMinute, addr 0x42ffa04, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ZoneMinute();

  /// @brief Method op_Implicit, addr 0x42ffa0c, size 0x53c, virtual false, abstract: false, final false
  static inline ::System::DateTime op_Implicit___System__DateTime(::System::Xml::Schema::XsdDateTime xdt);

  /// @brief Method op_Implicit, addr 0x42fff48, size 0x35c, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset op_Implicit___System__DateTimeOffset(::System::Xml::Schema::XsdDateTime xdt);

  static inline void setStaticF_LzHH(int32_t value);

  static inline void setStaticF_LzHH_(int32_t value);

  static inline void setStaticF_LzHH_mm(int32_t value);

  static inline void setStaticF_LzHH_mm_(int32_t value);

  static inline void setStaticF_LzHH_mm_ss(int32_t value);

  static inline void setStaticF_Lz_(int32_t value);

  static inline void setStaticF_Lz__(int32_t value);

  static inline void setStaticF_Lz___(int32_t value);

  static inline void setStaticF_Lz___dd(int32_t value);

  static inline void setStaticF_Lz__mm(int32_t value);

  static inline void setStaticF_Lz__mm_(int32_t value);

  static inline void setStaticF_Lz__mm__(int32_t value);

  static inline void setStaticF_Lz__mm_dd(int32_t value);

  static inline void setStaticF_Lz_zz(int32_t value);

  static inline void setStaticF_Lz_zz_(int32_t value);

  static inline void setStaticF_Lz_zz_zz(int32_t value);

  static inline void setStaticF_Lzyyyy(int32_t value);

  static inline void setStaticF_Lzyyyy_(int32_t value);

  static inline void setStaticF_Lzyyyy_MM(int32_t value);

  static inline void setStaticF_Lzyyyy_MM_(int32_t value);

  static inline void setStaticF_Lzyyyy_MM_dd(int32_t value);

  static inline void setStaticF_Lzyyyy_MM_ddT(int32_t value);

  static inline void setStaticF_typeCodes(::ArrayW<::System::Xml::Schema::XmlTypeCode, ::Array<::System::Xml::Schema::XmlTypeCode>*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XsdDateTime();

  // Ctor Parameters [CppParam { name: "dt", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "extra", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr XsdDateTime(::System::DateTime dt, uint32_t extra) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7765 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field dt, offset: 0x0, size: 0x8, def value: None
  ::System::DateTime dt;

  /// @brief Field extra, offset: 0x8, size: 0x4, def value: None
  uint32_t extra;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XsdDateTime, dt) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDateTime, extra) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XsdDateTime, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdDateTime_DateTimeTypeCode, "System.Xml.Schema", "XsdDateTime/DateTimeTypeCode");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdDateTime_XsdDateTimeKind, "System.Xml.Schema", "XsdDateTime/XsdDateTimeKind");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdDateTime, "System.Xml.Schema", "XsdDateTime");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdDateTime_Parser, "System.Xml.Schema", "XsdDateTime/Parser");
