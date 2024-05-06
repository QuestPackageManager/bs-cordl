#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BinXmlDateTime)
namespace System::Text {
class StringBuilder;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Xml {
class BinXmlDateTime;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::BinXmlDateTime);
// Type: System.Xml::BinXmlDateTime
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::BinXmlDateTime*
class CORDL_TYPE BinXmlDateTime : public ::System::Object {
public:
  // Declarations
  /// @brief Field KatmaiTimeScaleMultiplicator, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_KatmaiTimeScaleMultiplicator, put = setStaticF_KatmaiTimeScaleMultiplicator))::ArrayW<int32_t, ::Array<int32_t>*> KatmaiTimeScaleMultiplicator;

  /// @brief Field SQLTicksPerDay, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_SQLTicksPerDay, put = setStaticF_SQLTicksPerDay)) int32_t SQLTicksPerDay;

  /// @brief Field SQLTicksPerHour, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_SQLTicksPerHour, put = setStaticF_SQLTicksPerHour)) int32_t SQLTicksPerHour;

  /// @brief Field SQLTicksPerMillisecond, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SQLTicksPerMillisecond, put = setStaticF_SQLTicksPerMillisecond)) double_t SQLTicksPerMillisecond;

  /// @brief Field SQLTicksPerMinute, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_SQLTicksPerMinute, put = setStaticF_SQLTicksPerMinute)) int32_t SQLTicksPerMinute;

  /// @brief Field SQLTicksPerSecond, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_SQLTicksPerSecond, put = setStaticF_SQLTicksPerSecond)) int32_t SQLTicksPerSecond;

  /// @brief Method BreakDownXsdDate, addr 0x2d89bf4, size 0x16c, virtual false, abstract: false, final false
  static inline void BreakDownXsdDate(int64_t val, ByRef<int32_t> yr, ByRef<int32_t> mnth, ByRef<int32_t> day, ByRef<bool> negTimeZone, ByRef<int32_t> hr, ByRef<int32_t> min);

  /// @brief Method BreakDownXsdDateTime, addr 0x2d89a20, size 0x1d4, virtual false, abstract: false, final false
  static inline void BreakDownXsdDateTime(int64_t val, ByRef<int32_t> yr, ByRef<int32_t> mnth, ByRef<int32_t> day, ByRef<int32_t> hr, ByRef<int32_t> min, ByRef<int32_t> sec, ByRef<int32_t> ms);

  /// @brief Method BreakDownXsdTime, addr 0x2d89d60, size 0x10c, virtual false, abstract: false, final false
  static inline void BreakDownXsdTime(int64_t val, ByRef<int32_t> hr, ByRef<int32_t> min, ByRef<int32_t> sec, ByRef<int32_t> ms);

  /// @brief Method GetFractions, addr 0x2d8ac64, size 0xd8, virtual false, abstract: false, final false
  static inline int32_t GetFractions(::System::DateTime dt);

  /// @brief Method GetFractions, addr 0x2d8b0dc, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t GetFractions(::System::DateTimeOffset dt);

  /// @brief Method GetKatmaiDateTicks, addr 0x2d8a4b8, size 0x74, virtual false, abstract: false, final false
  static inline int64_t GetKatmaiDateTicks(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ByRef<int32_t> pos);

  /// @brief Method GetKatmaiTimeTicks, addr 0x2d8a5bc, size 0x22c, virtual false, abstract: false, final false
  static inline int64_t GetKatmaiTimeTicks(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ByRef<int32_t> pos);

  /// @brief Method GetKatmaiTimeZoneTicks, addr 0x2d8a958, size 0x54, virtual false, abstract: false, final false
  static inline int64_t GetKatmaiTimeZoneTicks(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t pos);

  /// @brief Method SqlDateTimeToDateTime, addr 0x2d8a22c, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::DateTime SqlDateTimeToDateTime(int32_t dateticks, uint32_t timeticks);

  /// @brief Method SqlDateTimeToString, addr 0x2d8a130, size 0xfc, virtual false, abstract: false, final false
  static inline ::StringW SqlDateTimeToString(int32_t dateticks, uint32_t timeticks);

  /// @brief Method SqlSmallDateTimeToDateTime, addr 0x2d8a3c4, size 0x74, virtual false, abstract: false, final false
  static inline ::System::DateTime SqlSmallDateTimeToDateTime(int16_t dateticks, uint16_t timeticks);

  /// @brief Method SqlSmallDateTimeToString, addr 0x2d8a2fc, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW SqlSmallDateTimeToString(int16_t dateticks, uint16_t timeticks);

  /// @brief Method Write2Dig, addr 0x2d8935c, size 0x5c, virtual false, abstract: false, final false
  static inline void Write2Dig(::System::Text::StringBuilder* sb, int32_t val);

  /// @brief Method Write3Dec, addr 0x2d8945c, size 0xac, virtual false, abstract: false, final false
  static inline void Write3Dec(::System::Text::StringBuilder* sb, int32_t val);

  /// @brief Method Write4DigNeg, addr 0x2d893b8, size 0xa4, virtual false, abstract: false, final false
  static inline void Write4DigNeg(::System::Text::StringBuilder* sb, int32_t val);

  /// @brief Method WriteDate, addr 0x2d89508, size 0xb4, virtual false, abstract: false, final false
  static inline void WriteDate(::System::Text::StringBuilder* sb, int32_t yr, int32_t mnth, int32_t day);

  /// @brief Method WriteTime, addr 0x2d895bc, size 0xec, virtual false, abstract: false, final false
  static inline void WriteTime(::System::Text::StringBuilder* sb, int32_t hr, int32_t min, int32_t sec, int32_t ms);

  /// @brief Method WriteTimeFullPrecision, addr 0x2d896a8, size 0x1ec, virtual false, abstract: false, final false
  static inline void WriteTimeFullPrecision(::System::Text::StringBuilder* sb, int32_t hr, int32_t min, int32_t sec, int32_t fraction);

  /// @brief Method WriteTimeZone, addr 0x2d8994c, size 0xd4, virtual false, abstract: false, final false
  static inline void WriteTimeZone(::System::Text::StringBuilder* sb, bool negTimeZone, int32_t hr, int32_t min);

  /// @brief Method WriteTimeZone, addr 0x2d89894, size 0xb8, virtual false, abstract: false, final false
  static inline void WriteTimeZone(::System::Text::StringBuilder* sb, ::System::TimeSpan zone);

  /// @brief Method XsdDateTimeToString, addr 0x2d89e6c, size 0x108, virtual false, abstract: false, final false
  static inline ::StringW XsdDateTimeToString(int64_t val);

  /// @brief Method XsdDateToString, addr 0x2d89f74, size 0xe4, virtual false, abstract: false, final false
  static inline ::StringW XsdDateToString(int64_t val);

  /// @brief Method XsdKatmaiDateOffsetToDateTimeOffset, addr 0x2d8a84c, size 0x64, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset XsdKatmaiDateOffsetToDateTimeOffset(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset);

  /// @brief Method XsdKatmaiDateOffsetToString, addr 0x2d8ae48, size 0x118, virtual false, abstract: false, final false
  static inline ::StringW XsdKatmaiDateOffsetToString(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset);

  /// @brief Method XsdKatmaiDateTimeOffsetToDateTimeOffset, addr 0x2d8a8b0, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset XsdKatmaiDateTimeOffsetToDateTimeOffset(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset);

  /// @brief Method XsdKatmaiDateTimeOffsetToString, addr 0x2d8af60, size 0x17c, virtual false, abstract: false, final false
  static inline ::StringW XsdKatmaiDateTimeOffsetToString(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset);

  /// @brief Method XsdKatmaiDateTimeToDateTime, addr 0x2d8a52c, size 0x90, virtual false, abstract: false, final false
  static inline ::System::DateTime XsdKatmaiDateTimeToDateTime(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset);

  /// @brief Method XsdKatmaiDateTimeToString, addr 0x2d8ab08, size 0x15c, virtual false, abstract: false, final false
  static inline ::StringW XsdKatmaiDateTimeToString(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset);

  /// @brief Method XsdKatmaiDateToDateTime, addr 0x2d8a438, size 0x80, virtual false, abstract: false, final false
  static inline ::System::DateTime XsdKatmaiDateToDateTime(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset);

  /// @brief Method XsdKatmaiDateToString, addr 0x2d8aa10, size 0xf8, virtual false, abstract: false, final false
  static inline ::StringW XsdKatmaiDateToString(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset);

  /// @brief Method XsdKatmaiTimeOffsetToDateTimeOffset, addr 0x2d8a9ac, size 0x64, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset XsdKatmaiTimeOffsetToDateTimeOffset(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset);

  /// @brief Method XsdKatmaiTimeOffsetToString, addr 0x2d8b1b8, size 0x12c, virtual false, abstract: false, final false
  static inline ::StringW XsdKatmaiTimeOffsetToString(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset);

  /// @brief Method XsdKatmaiTimeToDateTime, addr 0x2d8a7e8, size 0x64, virtual false, abstract: false, final false
  static inline ::System::DateTime XsdKatmaiTimeToDateTime(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset);

  /// @brief Method XsdKatmaiTimeToString, addr 0x2d8ad3c, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW XsdKatmaiTimeToString(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset);

  /// @brief Method XsdTimeToString, addr 0x2d8a058, size 0xd8, virtual false, abstract: false, final false
  static inline ::StringW XsdTimeToString(int64_t val);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_KatmaiTimeScaleMultiplicator();

  static inline int32_t getStaticF_SQLTicksPerDay();

  static inline int32_t getStaticF_SQLTicksPerHour();

  static inline double_t getStaticF_SQLTicksPerMillisecond();

  static inline int32_t getStaticF_SQLTicksPerMinute();

  static inline int32_t getStaticF_SQLTicksPerSecond();

  static inline void setStaticF_KatmaiTimeScaleMultiplicator(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_SQLTicksPerDay(int32_t value);

  static inline void setStaticF_SQLTicksPerHour(int32_t value);

  static inline void setStaticF_SQLTicksPerMillisecond(double_t value);

  static inline void setStaticF_SQLTicksPerMinute(int32_t value);

  static inline void setStaticF_SQLTicksPerSecond(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinXmlDateTime();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BinXmlDateTime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinXmlDateTime(BinXmlDateTime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinXmlDateTime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinXmlDateTime(BinXmlDateTime const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::BinXmlDateTime, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::BinXmlDateTime);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::BinXmlDateTime*, "System.Xml", "BinXmlDateTime");
