#pragma once
// IWYU pragma private; include "System/Xml/BinXmlDateTime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::System::Xml::BinXmlDateTime*);
DEFINE_IL2CPP_CLASS(::System::Xml::BinXmlDateTime*, "System.Xml", "BinXmlDateTime");
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.BinXmlDateTime
class CORDL_TYPE BinXmlDateTime : public ::System::Object {
public:
  // Declarations
  /// @brief Field KatmaiTimeScaleMultiplicator, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_KatmaiTimeScaleMultiplicator, put = setStaticF_KatmaiTimeScaleMultiplicator)) ::ArrayW<int32_t> KatmaiTimeScaleMultiplicator;

  /// @brief Field SQLTicksPerDay, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_SQLTicksPerDay, put = setStaticF_SQLTicksPerDay)) int32_t SQLTicksPerDay;

  /// @brief Field SQLTicksPerHour, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_SQLTicksPerHour, put = setStaticF_SQLTicksPerHour)) int32_t SQLTicksPerHour;

  /// @brief Field SQLTicksPerMillisecond, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SQLTicksPerMillisecond, put = setStaticF_SQLTicksPerMillisecond)) double_t SQLTicksPerMillisecond;

  /// @brief Field SQLTicksPerMinute, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_SQLTicksPerMinute, put = setStaticF_SQLTicksPerMinute)) int32_t SQLTicksPerMinute;

  /// @brief Field SQLTicksPerSecond, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_SQLTicksPerSecond, put = setStaticF_SQLTicksPerSecond)) int32_t SQLTicksPerSecond;

  /// @brief Method BreakDownXsdDate, addr 0x65bc8fc, size 0x15c, virtual false, abstract: false, final false
  static inline void BreakDownXsdDate(int64_t val, ::by_ref<int32_t> yr, ::by_ref<int32_t> mnth, ::by_ref<int32_t> day, ::by_ref<bool> negTimeZone, ::by_ref<int32_t> hr, ::by_ref<int32_t> min);

  /// @brief Method BreakDownXsdDateTime, addr 0x65bc734, size 0x1c8, virtual false, abstract: false, final false
  static inline void BreakDownXsdDateTime(int64_t val, ::by_ref<int32_t> yr, ::by_ref<int32_t> mnth, ::by_ref<int32_t> day, ::by_ref<int32_t> hr, ::by_ref<int32_t> min, ::by_ref<int32_t> sec,
                                          ::by_ref<int32_t> ms);

  /// @brief Method BreakDownXsdTime, addr 0x65bca58, size 0x100, virtual false, abstract: false, final false
  static inline void BreakDownXsdTime(int64_t val, ::by_ref<int32_t> hr, ::by_ref<int32_t> min, ::by_ref<int32_t> sec, ::by_ref<int32_t> ms);

  /// @brief Method GetFractions, addr 0x65bdf3c, size 0x114, virtual false, abstract: false, final false
  static inline int32_t GetFractions(::System::DateTime dt);

  /// @brief Method GetFractions, addr 0x65be49c, size 0x140, virtual false, abstract: false, final false
  static inline int32_t GetFractions(::System::DateTimeOffset dt);

  /// @brief Method GetKatmaiDateTicks, addr 0x65bd514, size 0x74, virtual false, abstract: false, final false
  static inline int64_t GetKatmaiDateTicks(::ArrayW<uint8_t> data, ::by_ref<int32_t> pos);

  /// @brief Method GetKatmaiTimeTicks, addr 0x65bd620, size 0x22c, virtual false, abstract: false, final false
  static inline int64_t GetKatmaiTimeTicks(::ArrayW<uint8_t> data, ::by_ref<int32_t> pos);

  /// @brief Method GetKatmaiTimeZoneTicks, addr 0x65bdc40, size 0x54, virtual false, abstract: false, final false
  static inline int64_t GetKatmaiTimeZoneTicks(::ArrayW<uint8_t> data, int32_t pos);

  /// @brief Method SqlDateTimeToDateTime, addr 0x65bd21c, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::DateTime SqlDateTimeToDateTime(int32_t dateticks, uint32_t timeticks);

  /// @brief Method SqlDateTimeToString, addr 0x65bd0d4, size 0x148, virtual false, abstract: false, final false
  static inline ::StringW SqlDateTimeToString(int32_t dateticks, uint32_t timeticks);

  /// @brief Method SqlSmallDateTimeToDateTime, addr 0x65bd418, size 0x78, virtual false, abstract: false, final false
  static inline ::System::DateTime SqlSmallDateTimeToDateTime(int16_t dateticks, uint16_t timeticks);

  /// @brief Method SqlSmallDateTimeToString, addr 0x65bd318, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW SqlSmallDateTimeToString(int16_t dateticks, uint16_t timeticks);

  /// @brief Method Write2Dig, addr 0x65bbea8, size 0x54, virtual false, abstract: false, final false
  static inline void Write2Dig(::System::Text::StringBuilder* sb, int32_t val);

  /// @brief Method Write3Dec, addr 0x65bbfac, size 0x94, virtual false, abstract: false, final false
  static inline void Write3Dec(::System::Text::StringBuilder* sb, int32_t val);

  /// @brief Method Write4DigNeg, addr 0x65bbefc, size 0xb0, virtual false, abstract: false, final false
  static inline void Write4DigNeg(::System::Text::StringBuilder* sb, int32_t val);

  /// @brief Method WriteDate, addr 0x65bc040, size 0x100, virtual false, abstract: false, final false
  static inline void WriteDate(::System::Text::StringBuilder* sb, int32_t yr, int32_t mnth, int32_t day);

  /// @brief Method WriteTime, addr 0x65bc140, size 0x144, virtual false, abstract: false, final false
  static inline void WriteTime(::System::Text::StringBuilder* sb, int32_t hr, int32_t min, int32_t sec, int32_t ms);

  /// @brief Method WriteTimeFullPrecision, addr 0x65bc284, size 0x23c, virtual false, abstract: false, final false
  static inline void WriteTimeFullPrecision(::System::Text::StringBuilder* sb, int32_t hr, int32_t min, int32_t sec, int32_t fraction);

  /// @brief Method WriteTimeZone, addr 0x65bc618, size 0x11c, virtual false, abstract: false, final false
  static inline void WriteTimeZone(::System::Text::StringBuilder* sb, bool negTimeZone, int32_t hr, int32_t min);

  /// @brief Method WriteTimeZone, addr 0x65bc4c0, size 0x158, virtual false, abstract: false, final false
  static inline void WriteTimeZone(::System::Text::StringBuilder* sb, ::System::TimeSpan zone);

  /// @brief Method XsdDateTimeToDateTime, addr 0x65bcc60, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::DateTime XsdDateTimeToDateTime(int64_t val);

  /// @brief Method XsdDateTimeToString, addr 0x65bcb58, size 0x108, virtual false, abstract: false, final false
  static inline ::StringW XsdDateTimeToString(int64_t val);

  /// @brief Method XsdDateToDateTime, addr 0x65bce04, size 0x150, virtual false, abstract: false, final false
  static inline ::System::DateTime XsdDateToDateTime(int64_t val);

  /// @brief Method XsdDateToString, addr 0x65bcd18, size 0xec, virtual false, abstract: false, final false
  static inline ::StringW XsdDateToString(int64_t val);

  /// @brief Method XsdKatmaiDateOffsetToDateTime, addr 0x65bd8b4, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::DateTime XsdKatmaiDateOffsetToDateTime(::ArrayW<uint8_t> data, int32_t offset);

  /// @brief Method XsdKatmaiDateOffsetToDateTimeOffset, addr 0x65bd964, size 0x68, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset XsdKatmaiDateOffsetToDateTimeOffset(::ArrayW<uint8_t> data, int32_t offset);

  /// @brief Method XsdKatmaiDateOffsetToString, addr 0x65be188, size 0x154, virtual false, abstract: false, final false
  static inline ::StringW XsdKatmaiDateOffsetToString(::ArrayW<uint8_t> data, int32_t offset);

  /// @brief Method XsdKatmaiDateTimeOffsetToDateTime, addr 0x65bd9cc, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::DateTime XsdKatmaiDateTimeOffsetToDateTime(::ArrayW<uint8_t> data, int32_t offset);

  /// @brief Method XsdKatmaiDateTimeOffsetToDateTimeOffset, addr 0x65bda7c, size 0xac, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset XsdKatmaiDateTimeOffsetToDateTimeOffset(::ArrayW<uint8_t> data, int32_t offset);

  /// @brief Method XsdKatmaiDateTimeOffsetToString, addr 0x65be2dc, size 0x1c0, virtual false, abstract: false, final false
  static inline ::StringW XsdKatmaiDateTimeOffsetToString(::ArrayW<uint8_t> data, int32_t offset);

  /// @brief Method XsdKatmaiDateTimeToDateTime, addr 0x65bd588, size 0x98, virtual false, abstract: false, final false
  static inline ::System::DateTime XsdKatmaiDateTimeToDateTime(::ArrayW<uint8_t> data, int32_t offset);

  /// @brief Method XsdKatmaiDateTimeToString, addr 0x65bddb4, size 0x188, virtual false, abstract: false, final false
  static inline ::StringW XsdKatmaiDateTimeToString(::ArrayW<uint8_t> data, int32_t offset);

  /// @brief Method XsdKatmaiDateToDateTime, addr 0x65bd490, size 0x84, virtual false, abstract: false, final false
  static inline ::System::DateTime XsdKatmaiDateToDateTime(::ArrayW<uint8_t> data, int32_t offset);

  /// @brief Method XsdKatmaiDateToString, addr 0x65bdc94, size 0x120, virtual false, abstract: false, final false
  static inline ::StringW XsdKatmaiDateToString(::ArrayW<uint8_t> data, int32_t offset);

  /// @brief Method XsdKatmaiTimeOffsetToDateTime, addr 0x65bdb28, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::DateTime XsdKatmaiTimeOffsetToDateTime(::ArrayW<uint8_t> data, int32_t offset);

  /// @brief Method XsdKatmaiTimeOffsetToDateTimeOffset, addr 0x65bdbd8, size 0x68, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset XsdKatmaiTimeOffsetToDateTimeOffset(::ArrayW<uint8_t> data, int32_t offset);

  /// @brief Method XsdKatmaiTimeOffsetToString, addr 0x65be5dc, size 0x170, virtual false, abstract: false, final false
  static inline ::StringW XsdKatmaiTimeOffsetToString(::ArrayW<uint8_t> data, int32_t offset);

  /// @brief Method XsdKatmaiTimeToDateTime, addr 0x65bd84c, size 0x68, virtual false, abstract: false, final false
  static inline ::System::DateTime XsdKatmaiTimeToDateTime(::ArrayW<uint8_t> data, int32_t offset);

  /// @brief Method XsdKatmaiTimeToString, addr 0x65be050, size 0x138, virtual false, abstract: false, final false
  static inline ::StringW XsdKatmaiTimeToString(::ArrayW<uint8_t> data, int32_t offset);

  /// @brief Method XsdTimeToDateTime, addr 0x65bd02c, size 0xa8, virtual false, abstract: false, final false
  static inline ::System::DateTime XsdTimeToDateTime(int64_t val);

  /// @brief Method XsdTimeToString, addr 0x65bcf54, size 0xd8, virtual false, abstract: false, final false
  static inline ::StringW XsdTimeToString(int64_t val);

  static inline ::ArrayW<int32_t> getStaticF_KatmaiTimeScaleMultiplicator();

  static inline int32_t getStaticF_SQLTicksPerDay();

  static inline int32_t getStaticF_SQLTicksPerHour();

  static inline double_t getStaticF_SQLTicksPerMillisecond();

  static inline int32_t getStaticF_SQLTicksPerMinute();

  static inline int32_t getStaticF_SQLTicksPerSecond();

  static inline void setStaticF_KatmaiTimeScaleMultiplicator(::ArrayW<int32_t> value);

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
  // Ctor Parameters [CppParam { name: "", ty: "BinXmlDateTime", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinXmlDateTime(BinXmlDateTime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinXmlDateTime", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinXmlDateTime(BinXmlDateTime const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11216 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::BinXmlDateTime) == 0x10, "Size mismatch!");

} // namespace System::Xml
