#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeUtils)
namespace Newtonsoft::Json {
struct DateFormatHandling;
}
namespace System {
struct DateTime;
}
namespace System {
struct DateTimeKind;
}
namespace System::Xml {
struct XmlDateTimeSerializationMode;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System::IO {
class TextWriter;
}
namespace Newtonsoft::Json::Utilities {
struct DateTimeParser;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace System {
struct TimeSpan;
}
namespace Newtonsoft::Json::Utilities {
struct StringReference;
}
namespace System {
struct DateTimeOffset;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class DateTimeUtils;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::DateTimeUtils);
// Type: Newtonsoft.Json.Utilities::DateTimeUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11807))
// CS Name: ::Newtonsoft.Json.Utilities::DateTimeUtils*
class CORDL_TYPE DateTimeUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field InitialJavaScriptDateTicks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InitialJavaScriptDateTicks, put = setStaticF_InitialJavaScriptDateTicks)) int64_t InitialJavaScriptDateTicks;

  /// @brief Field DaysToMonth365, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DaysToMonth365, put = setStaticF_DaysToMonth365))::ArrayW<int32_t, ::Array<int32_t>*> DaysToMonth365;

  /// @brief Field DaysToMonth366, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DaysToMonth366, put = setStaticF_DaysToMonth366))::ArrayW<int32_t, ::Array<int32_t>*> DaysToMonth366;

  static inline void setStaticF_InitialJavaScriptDateTicks(int64_t value);

  static inline int64_t getStaticF_InitialJavaScriptDateTicks();

  static inline void setStaticF_DaysToMonth365(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_DaysToMonth365();

  static inline void setStaticF_DaysToMonth366(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_DaysToMonth366();

  /// @brief Method GetUtcOffset addr 0x24fb720 size 0x2c virtual false final false
  static inline ::System::TimeSpan GetUtcOffset(::System::DateTime d);

  /// @brief Method ToSerializationMode addr 0x24fb74c size 0x80 virtual false final false
  static inline ::System::Xml::XmlDateTimeSerializationMode ToSerializationMode(::System::DateTimeKind kind);

  /// @brief Method EnsureDateTime addr 0x24fb7cc size 0x128 virtual false final false
  static inline ::System::DateTime EnsureDateTime(::System::DateTime value, ::Newtonsoft::Json::DateTimeZoneHandling timeZone);

  /// @brief Method SwitchToLocalTime addr 0x24fb8f4 size 0x78 virtual false final false
  static inline ::System::DateTime SwitchToLocalTime(::System::DateTime value);

  /// @brief Method SwitchToUtcTime addr 0x24fb96c size 0x78 virtual false final false
  static inline ::System::DateTime SwitchToUtcTime(::System::DateTime value);

  /// @brief Method ToUniversalTicks addr 0x24fb9e4 size 0x8c virtual false final false
  static inline int64_t ToUniversalTicks(::System::DateTime dateTime);

  /// @brief Method ToUniversalTicks addr 0x24fba70 size 0x108 virtual false final false
  static inline int64_t ToUniversalTicks(::System::DateTime dateTime, ::System::TimeSpan offset);

  /// @brief Method ConvertDateTimeToJavaScriptTicks addr 0x24fbb78 size 0x68 virtual false final false
  static inline int64_t ConvertDateTimeToJavaScriptTicks(::System::DateTime dateTime, ::System::TimeSpan offset);

  /// @brief Method ConvertDateTimeToJavaScriptTicks addr 0x24fbc5c size 0x58 virtual false final false
  static inline int64_t ConvertDateTimeToJavaScriptTicks(::System::DateTime dateTime);

  /// @brief Method ConvertDateTimeToJavaScriptTicks addr 0x24fbcb4 size 0x98 virtual false final false
  static inline int64_t ConvertDateTimeToJavaScriptTicks(::System::DateTime dateTime, bool convertToUtc);

  /// @brief Method UniversialTicksToJavaScriptTicks addr 0x24fbbe0 size 0x7c virtual false final false
  static inline int64_t UniversialTicksToJavaScriptTicks(int64_t universialTicks);

  /// @brief Method ConvertJavaScriptTicksToDateTime addr 0x24f2bd4 size 0x88 virtual false final false
  static inline ::System::DateTime ConvertJavaScriptTicksToDateTime(int64_t javaScriptTicks);

  /// @brief Method TryParseDateTimeIso addr 0x24fbd4c size 0x36c virtual false final false
  static inline bool TryParseDateTimeIso(::Newtonsoft::Json::Utilities::StringReference text, ::Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ByRef<::System::DateTime> dt);

  /// @brief Method TryParseDateTimeOffsetIso addr 0x24fc138 size 0x1cc virtual false final false
  static inline bool TryParseDateTimeOffsetIso(::Newtonsoft::Json::Utilities::StringReference text, ByRef<::System::DateTimeOffset> dt);

  /// @brief Method CreateDateTime addr 0x24fc0b8 size 0x80 virtual false final false
  static inline ::System::DateTime CreateDateTime(::Newtonsoft::Json::Utilities::DateTimeParser dateTimeParser);

  /// @brief Method TryParseDateTime addr 0x24fc304 size 0x220 virtual false final false
  static inline bool TryParseDateTime(::Newtonsoft::Json::Utilities::StringReference s, ::Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ::StringW dateFormatString,
                                      ::System::Globalization::CultureInfo* culture, ByRef<::System::DateTime> dt);

  /// @brief Method TryParseDateTime addr 0x24fc770 size 0x2b4 virtual false final false
  static inline bool TryParseDateTime(::StringW s, ::Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ::StringW dateFormatString, ::System::Globalization::CultureInfo* culture,
                                      ByRef<::System::DateTime> dt);

  /// @brief Method TryParseDateTimeOffset addr 0x24fca24 size 0x210 virtual false final false
  static inline bool TryParseDateTimeOffset(::Newtonsoft::Json::Utilities::StringReference s, ::StringW dateFormatString, ::System::Globalization::CultureInfo* culture,
                                            ByRef<::System::DateTimeOffset> dt);

  /// @brief Method TryParseDateTimeOffset addr 0x24fce1c size 0x2b4 virtual false final false
  static inline bool TryParseDateTimeOffset(::StringW s, ::StringW dateFormatString, ::System::Globalization::CultureInfo* culture, ByRef<::System::DateTimeOffset> dt);

  /// @brief Method TryParseMicrosoftDate addr 0x24fd0d0 size 0x174 virtual false final false
  static inline bool TryParseMicrosoftDate(::Newtonsoft::Json::Utilities::StringReference text, ByRef<int64_t> ticks, ByRef<::System::TimeSpan> offset, ByRef<::System::DateTimeKind> kind);

  /// @brief Method TryParseDateTimeMicrosoft addr 0x24fc524 size 0x164 virtual false final false
  static inline bool TryParseDateTimeMicrosoft(::Newtonsoft::Json::Utilities::StringReference text, ::Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ByRef<::System::DateTime> dt);

  /// @brief Method TryParseDateTimeExact addr 0x24fc688 size 0xe8 virtual false final false
  static inline bool TryParseDateTimeExact(::StringW text, ::Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ::StringW dateFormatString, ::System::Globalization::CultureInfo* culture,
                                           ByRef<::System::DateTime> dt);

  /// @brief Method TryParseDateTimeOffsetMicrosoft addr 0x24fcc34 size 0x138 virtual false final false
  static inline bool TryParseDateTimeOffsetMicrosoft(::Newtonsoft::Json::Utilities::StringReference text, ByRef<::System::DateTimeOffset> dt);

  /// @brief Method TryParseDateTimeOffsetExact addr 0x24fcd6c size 0xb0 virtual false final false
  static inline bool TryParseDateTimeOffsetExact(::StringW text, ::StringW dateFormatString, ::System::Globalization::CultureInfo* culture, ByRef<::System::DateTimeOffset> dt);

  /// @brief Method TryReadOffset addr 0x24fd244 size 0x174 virtual false final false
  static inline bool TryReadOffset(::Newtonsoft::Json::Utilities::StringReference offsetText, int32_t startIndex, ByRef<::System::TimeSpan> offset);

  /// @brief Method WriteDateTimeString addr 0x24fd3b8 size 0x138 virtual false final false
  static inline void WriteDateTimeString(::System::IO::TextWriter* writer, ::System::DateTime value, ::Newtonsoft::Json::DateFormatHandling format, ::StringW formatString,
                                         ::System::Globalization::CultureInfo* culture);

  /// @brief Method WriteDateTimeString addr 0x24fd4f0 size 0x304 virtual false final false
  static inline int32_t WriteDateTimeString(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t start, ::System::DateTime value, ::System::Nullable_1<::System::TimeSpan> offset,
                                            ::System::DateTimeKind kind, ::Newtonsoft::Json::DateFormatHandling format);

  /// @brief Method WriteDefaultIsoDate addr 0x24fd96c size 0x298 virtual false final false
  static inline int32_t WriteDefaultIsoDate(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t start, ::System::DateTime dt);

  /// @brief Method CopyIntToCharArray addr 0x24fddfc size 0x68 virtual false final false
  static inline void CopyIntToCharArray(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t start, int32_t value, int32_t digits);

  /// @brief Method WriteDateTimeOffset addr 0x24fd7f4 size 0x178 virtual false final false
  static inline int32_t WriteDateTimeOffset(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t start, ::System::TimeSpan offset, ::Newtonsoft::Json::DateFormatHandling format);

  /// @brief Method WriteDateTimeOffsetString addr 0x24fde64 size 0x174 virtual false final false
  static inline void WriteDateTimeOffsetString(::System::IO::TextWriter* writer, ::System::DateTimeOffset value, ::Newtonsoft::Json::DateFormatHandling format, ::StringW formatString,
                                               ::System::Globalization::CultureInfo* culture);

  /// @brief Method GetDateValues addr 0x24fdc04 size 0x1f8 virtual false final false
  static inline void GetDateValues(::System::DateTime td, ByRef<int32_t> year, ByRef<int32_t> month, ByRef<int32_t> day);

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeUtils(DateTimeUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeUtils(DateTimeUtils const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeUtils();

public:
  /// @brief Field IsoDateFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString IsoDateFormat{ u"yyyy-MM-ddTHH:mm:ss.FFFFFFFK" };

  /// @brief Field DaysPer100Years offset 0xffffffff size 0x4
  static constexpr int32_t DaysPer100Years{ static_cast<int32_t>(0x8eac) };

  /// @brief Field DaysPer400Years offset 0xffffffff size 0x4
  static constexpr int32_t DaysPer400Years{ static_cast<int32_t>(0x23ab1) };

  /// @brief Field DaysPer4Years offset 0xffffffff size 0x4
  static constexpr int32_t DaysPer4Years{ static_cast<int32_t>(0x5b5) };

  /// @brief Field DaysPerYear offset 0xffffffff size 0x4
  static constexpr int32_t DaysPerYear{ static_cast<int32_t>(0x16d) };

  /// @brief Field TicksPerDay offset 0xffffffff size 0x8
  static constexpr int64_t TicksPerDay{ static_cast<int64_t>(0xc92a69c000) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::DateTimeUtils, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::DateTimeUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::DateTimeUtils*, "Newtonsoft.Json.Utilities", "DateTimeUtils");
