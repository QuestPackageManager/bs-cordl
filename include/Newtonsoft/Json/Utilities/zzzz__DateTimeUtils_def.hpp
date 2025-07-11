#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/DateTimeUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeUtils)
namespace Newtonsoft::Json::Utilities {
struct DateTimeParser;
}
namespace Newtonsoft::Json::Utilities {
struct StringReference;
}
namespace Newtonsoft::Json {
struct DateFormatHandling;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::IO {
class TextWriter;
}
namespace System::Xml {
struct XmlDateTimeSerializationMode;
}
namespace System {
struct DateTimeKind;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class DateTimeUtils;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::DateTimeUtils);
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.DateTimeUtils
class CORDL_TYPE DateTimeUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field DaysToMonth365, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DaysToMonth365, put = setStaticF_DaysToMonth365)) ::ArrayW<int32_t, ::Array<int32_t>*> DaysToMonth365;

  /// @brief Field DaysToMonth366, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DaysToMonth366, put = setStaticF_DaysToMonth366)) ::ArrayW<int32_t, ::Array<int32_t>*> DaysToMonth366;

  /// @brief Field InitialJavaScriptDateTicks, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InitialJavaScriptDateTicks, put = setStaticF_InitialJavaScriptDateTicks)) int64_t InitialJavaScriptDateTicks;

  /// @brief Method ConvertDateTimeToJavaScriptTicks, addr 0x3ec5ee8, size 0x58, virtual false, abstract: false, final false
  static inline int64_t ConvertDateTimeToJavaScriptTicks(::System::DateTime dateTime);

  /// @brief Method ConvertDateTimeToJavaScriptTicks, addr 0x3ec5f40, size 0xbc, virtual false, abstract: false, final false
  static inline int64_t ConvertDateTimeToJavaScriptTicks(::System::DateTime dateTime, bool convertToUtc);

  /// @brief Method ConvertDateTimeToJavaScriptTicks, addr 0x3ec5e04, size 0x68, virtual false, abstract: false, final false
  static inline int64_t ConvertDateTimeToJavaScriptTicks(::System::DateTime dateTime, ::System::TimeSpan offset);

  /// @brief Method ConvertJavaScriptTicksToDateTime, addr 0x3ebcaa0, size 0x88, virtual false, abstract: false, final false
  static inline ::System::DateTime ConvertJavaScriptTicksToDateTime(int64_t javaScriptTicks);

  /// @brief Method CopyIntToCharArray, addr 0x3ec85bc, size 0x68, virtual false, abstract: false, final false
  static inline void CopyIntToCharArray(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t start, int32_t value, int32_t digits);

  /// @brief Method CreateDateTime, addr 0x3ec6440, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::DateTime CreateDateTime(::Newtonsoft::Json::Utilities::DateTimeParser dateTimeParser);

  /// @brief Method EnsureDateTime, addr 0x3ec58e8, size 0x150, virtual false, abstract: false, final false
  static inline ::System::DateTime EnsureDateTime(::System::DateTime value, ::Newtonsoft::Json::DateTimeZoneHandling timeZone);

  /// @brief Method GetDateValues, addr 0x3ec838c, size 0x230, virtual false, abstract: false, final false
  static inline void GetDateValues(::System::DateTime td, ::ByRef<int32_t> year, ::ByRef<int32_t> month, ::ByRef<int32_t> day);

  /// @brief Method GetUtcOffset, addr 0x3ec5704, size 0x68, virtual false, abstract: false, final false
  static inline ::System::TimeSpan GetUtcOffset(::System::DateTime d);

  /// @brief Method SwitchToLocalTime, addr 0x3ec5a38, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::DateTime SwitchToLocalTime(::System::DateTime value);

  /// @brief Method SwitchToUtcTime, addr 0x3ec5b10, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::DateTime SwitchToUtcTime(::System::DateTime value);

  /// @brief Method ToSerializationMode, addr 0x3ec576c, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlDateTimeSerializationMode ToSerializationMode(::System::DateTimeKind kind);

  /// @brief Method ToUniversalTicks, addr 0x3ec5be8, size 0xc0, virtual false, abstract: false, final false
  static inline int64_t ToUniversalTicks(::System::DateTime dateTime);

  /// @brief Method ToUniversalTicks, addr 0x3ec5ca8, size 0x15c, virtual false, abstract: false, final false
  static inline int64_t ToUniversalTicks(::System::DateTime dateTime, ::System::TimeSpan offset);

  /// @brief Method TryParseDateTime, addr 0x3ec67c8, size 0x230, virtual false, abstract: false, final false
  static inline bool TryParseDateTime(::Newtonsoft::Json::Utilities::StringReference s, ::Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ::StringW dateFormatString,
                                      ::System::Globalization::CultureInfo* culture, ::ByRef<::System::DateTime> dt);

  /// @brief Method TryParseDateTime, addr 0x3ec6c48, size 0x2d0, virtual false, abstract: false, final false
  static inline bool TryParseDateTime(::StringW s, ::Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ::StringW dateFormatString, ::System::Globalization::CultureInfo* culture,
                                      ::ByRef<::System::DateTime> dt);

  /// @brief Method TryParseDateTimeExact, addr 0x3ec6b64, size 0xe4, virtual false, abstract: false, final false
  static inline bool TryParseDateTimeExact(::StringW text, ::Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ::StringW dateFormatString, ::System::Globalization::CultureInfo* culture,
                                           ::ByRef<::System::DateTime> dt);

  /// @brief Method TryParseDateTimeIso, addr 0x3ec5ffc, size 0x444, virtual false, abstract: false, final false
  static inline bool TryParseDateTimeIso(::Newtonsoft::Json::Utilities::StringReference text, ::Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ::ByRef<::System::DateTime> dt);

  /// @brief Method TryParseDateTimeMicrosoft, addr 0x3ec69f8, size 0x16c, virtual false, abstract: false, final false
  static inline bool TryParseDateTimeMicrosoft(::Newtonsoft::Json::Utilities::StringReference text, ::Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ::ByRef<::System::DateTime> dt);

  /// @brief Method TryParseDateTimeOffset, addr 0x3ec6f18, size 0x220, virtual false, abstract: false, final false
  static inline bool TryParseDateTimeOffset(::Newtonsoft::Json::Utilities::StringReference s, ::StringW dateFormatString, ::System::Globalization::CultureInfo* culture,
                                            ::ByRef<::System::DateTimeOffset> dt);

  /// @brief Method TryParseDateTimeOffset, addr 0x3ec7348, size 0x2dc, virtual false, abstract: false, final false
  static inline bool TryParseDateTimeOffset(::StringW s, ::StringW dateFormatString, ::System::Globalization::CultureInfo* culture, ::ByRef<::System::DateTimeOffset> dt);

  /// @brief Method TryParseDateTimeOffsetExact, addr 0x3ec729c, size 0xac, virtual false, abstract: false, final false
  static inline bool TryParseDateTimeOffsetExact(::StringW text, ::StringW dateFormatString, ::System::Globalization::CultureInfo* culture, ::ByRef<::System::DateTimeOffset> dt);

  /// @brief Method TryParseDateTimeOffsetIso, addr 0x3ec6538, size 0x290, virtual false, abstract: false, final false
  static inline bool TryParseDateTimeOffsetIso(::Newtonsoft::Json::Utilities::StringReference text, ::ByRef<::System::DateTimeOffset> dt);

  /// @brief Method TryParseDateTimeOffsetMicrosoft, addr 0x3ec7138, size 0x164, virtual false, abstract: false, final false
  static inline bool TryParseDateTimeOffsetMicrosoft(::Newtonsoft::Json::Utilities::StringReference text, ::ByRef<::System::DateTimeOffset> dt);

  /// @brief Method TryParseMicrosoftDate, addr 0x3ec7624, size 0x17c, virtual false, abstract: false, final false
  static inline bool TryParseMicrosoftDate(::Newtonsoft::Json::Utilities::StringReference text, ::ByRef<int64_t> ticks, ::ByRef<::System::TimeSpan> offset, ::ByRef<::System::DateTimeKind> kind);

  /// @brief Method TryReadOffset, addr 0x3ec77a0, size 0x180, virtual false, abstract: false, final false
  static inline bool TryReadOffset(::Newtonsoft::Json::Utilities::StringReference offsetText, int32_t startIndex, ::ByRef<::System::TimeSpan> offset);

  /// @brief Method UniversalTicksToJavaScriptTicks, addr 0x3ec5e6c, size 0x7c, virtual false, abstract: false, final false
  static inline int64_t UniversalTicksToJavaScriptTicks(int64_t universalTicks);

  /// @brief Method WriteDateTimeOffset, addr 0x3ec7da8, size 0x1b8, virtual false, abstract: false, final false
  static inline int32_t WriteDateTimeOffset(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t start, ::System::TimeSpan offset, ::Newtonsoft::Json::DateFormatHandling format);

  /// @brief Method WriteDateTimeOffsetString, addr 0x3ec8624, size 0x1bc, virtual false, abstract: false, final false
  static inline void WriteDateTimeOffsetString(::System::IO::TextWriter* writer, ::System::DateTimeOffset value, ::Newtonsoft::Json::DateFormatHandling format, ::StringW formatString,
                                               ::System::Globalization::CultureInfo* culture);

  /// @brief Method WriteDateTimeString, addr 0x3ec7a98, size 0x310, virtual false, abstract: false, final false
  static inline int32_t WriteDateTimeString(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t start, ::System::DateTime value, ::System::Nullable_1<::System::TimeSpan> offset,
                                            ::System::DateTimeKind kind, ::Newtonsoft::Json::DateFormatHandling format);

  /// @brief Method WriteDateTimeString, addr 0x3ec7920, size 0x178, virtual false, abstract: false, final false
  static inline void WriteDateTimeString(::System::IO::TextWriter* writer, ::System::DateTime value, ::Newtonsoft::Json::DateFormatHandling format, ::StringW formatString,
                                         ::System::Globalization::CultureInfo* culture);

  /// @brief Method WriteDefaultIsoDate, addr 0x3ec7f60, size 0x42c, virtual false, abstract: false, final false
  static inline int32_t WriteDefaultIsoDate(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t start, ::System::DateTime dt);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_DaysToMonth365();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_DaysToMonth366();

  static inline int64_t getStaticF_InitialJavaScriptDateTicks();

  static inline void setStaticF_DaysToMonth365(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_DaysToMonth366(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_InitialJavaScriptDateTicks(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateTimeUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeUtils(DateTimeUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeUtils(DateTimeUtils const&) = delete;

  /// @brief Field DaysPer100Years offset 0xffffffff size 0x4
  static constexpr int32_t DaysPer100Years{ static_cast<int32_t>(0x8eac) };

  /// @brief Field DaysPer400Years offset 0xffffffff size 0x4
  static constexpr int32_t DaysPer400Years{ static_cast<int32_t>(0x23ab1) };

  /// @brief Field DaysPer4Years offset 0xffffffff size 0x4
  static constexpr int32_t DaysPer4Years{ static_cast<int32_t>(0x5b5) };

  /// @brief Field DaysPerYear offset 0xffffffff size 0x4
  static constexpr int32_t DaysPerYear{ static_cast<int32_t>(0x16d) };

  /// @brief Field IsoDateFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString IsoDateFormat{ u"yyyy-MM-ddTHH:mm:ss.FFFFFFFK" };

  /// @brief Field TicksPerDay offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerDay{ static_cast<int64_t>(0xc92a69c000) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10203 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::DateTimeUtils, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::DateTimeUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::DateTimeUtils*, "Newtonsoft.Json.Utilities", "DateTimeUtils");
