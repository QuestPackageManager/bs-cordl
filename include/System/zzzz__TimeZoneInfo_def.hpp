#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__TimeZoneInfo_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeZoneInfo)
namespace GlobalNamespace {
struct __Interop__Sys__DirectoryEntry;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Globalization {
struct DaylightTimeStruct;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
struct DateTimeKind;
}
namespace System {
struct DateTime;
}
namespace System {
struct DayOfWeek;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace System {
struct TimeSpan;
}
namespace System {
struct TimeZoneInfoOptions;
}
namespace System {
class __TimeZoneInfo__AdjustmentRule;
}
namespace System {
class __TimeZoneInfo__CachedData;
}
namespace System {
struct __TimeZoneInfo__TZVersion;
}
namespace System {
struct __TimeZoneInfo__TZifHead;
}
namespace System {
struct __TimeZoneInfo__TZifType;
}
namespace System {
struct __TimeZoneInfo__TransitionTime;
}
namespace System {
class __TimeZoneInfo____c;
}
namespace System {
class __TimeZoneInfo____c__DisplayClass16_0;
}
// Forward declare root types
namespace System {
struct __TimeZoneInfo__TZVersion;
}
namespace System {
class TimeZoneInfo;
}
namespace System {
class __TimeZoneInfo__AdjustmentRule;
}
namespace System {
class __TimeZoneInfo__CachedData;
}
namespace System {
class __TimeZoneInfo____c;
}
namespace System {
class __TimeZoneInfo____c__DisplayClass16_0;
}
namespace System {
struct __TimeZoneInfo__TZifHead;
}
namespace System {
struct __TimeZoneInfo__TZifType;
}
namespace System {
struct __TimeZoneInfo__TransitionTime;
}
// Write type traits
MARK_VAL_T(::System::__TimeZoneInfo__TZVersion);
MARK_REF_PTR_T(::System::TimeZoneInfo);
MARK_REF_PTR_T(::System::__TimeZoneInfo__AdjustmentRule);
MARK_REF_PTR_T(::System::__TimeZoneInfo__CachedData);
MARK_REF_PTR_T(::System::__TimeZoneInfo____c);
MARK_REF_PTR_T(::System::__TimeZoneInfo____c__DisplayClass16_0);
MARK_VAL_T(::System::__TimeZoneInfo__TZifHead);
MARK_VAL_T(::System::__TimeZoneInfo__TZifType);
MARK_VAL_T(::System::__TimeZoneInfo__TransitionTime);
// Type: ::TZifType
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 26, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::TimeZoneInfo::TZifType
struct CORDL_TYPE __TimeZoneInfo__TZifType {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2608384, size 0x140, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t index);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeZoneInfo__TZifType();

  // Ctor Parameters [CppParam { name: "UtcOffset", ty: "::System::TimeSpan", modifiers: "", def_value: None }, CppParam { name: "IsDst", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "AbbreviationIndex", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __TimeZoneInfo__TZifType(::System::TimeSpan UtcOffset, bool IsDst, uint8_t AbbreviationIndex) noexcept;

  /// @brief Field UtcOffset, offset: 0x0, size: 0x8, def value: None
  ::System::TimeSpan UtcOffset;

  /// @brief Field IsDst, offset: 0x8, size: 0x1, def value: None
  bool IsDst;

  /// @brief Field AbbreviationIndex, offset: 0x9, size: 0x1, def value: None
  uint8_t AbbreviationIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__TimeZoneInfo__TZifType, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__TZifType, UtcOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__TZifType, IsDst) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__TZifType, AbbreviationIndex) == 0x9, "Offset mismatch!");

} // namespace System
// Type: ::TZVersion
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::TimeZoneInfo::TZVersion
struct CORDL_TYPE __TimeZoneInfo__TZVersion {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____TimeZoneInfo__TZVersion_Unwrapped
  enum struct ____TimeZoneInfo__TZVersion_Unwrapped : uint8_t {
    __E_V1 = static_cast<uint8_t>(0x0u),
    __E_V2 = static_cast<uint8_t>(0x1u),
    __E_V3 = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TimeZoneInfo__TZVersion_Unwrapped() const noexcept {
    return static_cast<____TimeZoneInfo__TZVersion_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator uint8_t() const noexcept {
    return static_cast<____TimeZoneInfo__TZVersion_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeZoneInfo__TZVersion();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __TimeZoneInfo__TZVersion(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field V1 value: static_cast<uint8_t>(0x0u)
  static ::System::__TimeZoneInfo__TZVersion const V1;

  /// @brief Field V2 value: static_cast<uint8_t>(0x1u)
  static ::System::__TimeZoneInfo__TZVersion const V2;

  /// @brief Field V3 value: static_cast<uint8_t>(0x2u)
  static ::System::__TimeZoneInfo__TZVersion const V3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__TimeZoneInfo__TZVersion, 0x1>, "Size mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__TZVersion, value__) == 0x0, "Offset mismatch!");

} // namespace System
// Type: ::TZifHead
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::TimeZoneInfo::TZifHead
struct CORDL_TYPE __TimeZoneInfo__TZifHead {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x26081d0, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t index);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeZoneInfo__TZifHead();

  // Ctor Parameters [CppParam { name: "Magic", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Version", ty: "::System::__TimeZoneInfo__TZVersion", modifiers: "", def_value: None
  // }, CppParam { name: "IsGmtCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "IsStdCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "LeapCount",
  // ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "TimeCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "TypeCount", ty: "uint32_t", modifiers: "",
  // def_value: None }, CppParam { name: "CharCount", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr __TimeZoneInfo__TZifHead(uint32_t Magic, ::System::__TimeZoneInfo__TZVersion Version, uint32_t IsGmtCount, uint32_t IsStdCount, uint32_t LeapCount, uint32_t TimeCount, uint32_t TypeCount,
                                     uint32_t CharCount) noexcept;

  /// @brief Field Magic, offset: 0x0, size: 0x4, def value: None
  uint32_t Magic;

  /// @brief Field Version, offset: 0x4, size: 0x1, def value: None
  ::System::__TimeZoneInfo__TZVersion Version;

  /// @brief Field IsGmtCount, offset: 0x8, size: 0x4, def value: None
  uint32_t IsGmtCount;

  /// @brief Field IsStdCount, offset: 0xc, size: 0x4, def value: None
  uint32_t IsStdCount;

  /// @brief Field LeapCount, offset: 0x10, size: 0x4, def value: None
  uint32_t LeapCount;

  /// @brief Field TimeCount, offset: 0x14, size: 0x4, def value: None
  uint32_t TimeCount;

  /// @brief Field TypeCount, offset: 0x18, size: 0x4, def value: None
  uint32_t TypeCount;

  /// @brief Field CharCount, offset: 0x1c, size: 0x4, def value: None
  uint32_t CharCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__TimeZoneInfo__TZifHead, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__TZifHead, Magic) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__TZifHead, Version) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__TZifHead, IsGmtCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__TZifHead, IsStdCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__TZifHead, LeapCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__TZifHead, TimeCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__TZifHead, TypeCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__TZifHead, CharCount) == 0x1c, "Offset mismatch!");

} // namespace System
// Type: ::TransitionTime
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::TimeZoneInfo::TransitionTime
struct CORDL_TYPE __TimeZoneInfo__TransitionTime {
public:
  // Declarations
  __declspec(property(get = get_Day)) int32_t Day;

  __declspec(property(get = get_DayOfWeek))::System::DayOfWeek DayOfWeek;

  __declspec(property(get = get_IsFixedDateRule)) bool IsFixedDateRule;

  __declspec(property(get = get_Month)) int32_t Month;

  __declspec(property(get = get_TimeOfDay))::System::DateTime TimeOfDay;

  __declspec(property(get = get_Week)) int32_t Week;

  /// @brief Convert operator to "::System::IEquatable_1<::System::__TimeZoneInfo__TransitionTime>"
  constexpr operator ::System::IEquatable_1<::System::__TimeZoneInfo__TransitionTime>*();

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*();

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*();

  /// @brief Method CreateFixedDateRule, addr 0x2603c08, size 0x60, virtual false, abstract: false, final false
  static inline ::System::__TimeZoneInfo__TransitionTime CreateFixedDateRule(::System::DateTime timeOfDay, int32_t month, int32_t day);

  /// @brief Method CreateFloatingDateRule, addr 0x26076f4, size 0x68, virtual false, abstract: false, final false
  static inline ::System::__TimeZoneInfo__TransitionTime CreateFloatingDateRule(::System::DateTime timeOfDay, int32_t month, int32_t week, ::System::DayOfWeek dayOfWeek);

  /// @brief Method Equals, addr 0x260df1c, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x260d10c, size 0xd8, virtual true, abstract: false, final true
  inline bool Equals(::System::__TimeZoneInfo__TransitionTime other);

  /// @brief Method GetHashCode, addr 0x260dfac, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x260e27c, size 0xf0, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x260e36c, size 0x1ac, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ValidateTransitionTime, addr 0x260e030, size 0x24c, virtual false, abstract: false, final false
  static inline void ValidateTransitionTime(::System::DateTime timeOfDay, int32_t month, int32_t week, int32_t day, ::System::DayOfWeek dayOfWeek);

  /// @brief Method .ctor, addr 0x260e518, size 0x37c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x260dfc0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::DateTime timeOfDay, int32_t month, int32_t week, int32_t day, ::System::DayOfWeek dayOfWeek, bool isFixedDateRule);

  /// @brief Method get_Day, addr 0x260df04, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Day();

  /// @brief Method get_DayOfWeek, addr 0x260df0c, size 0x8, virtual false, abstract: false, final false
  inline ::System::DayOfWeek get_DayOfWeek();

  /// @brief Method get_IsFixedDateRule, addr 0x260df14, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsFixedDateRule();

  /// @brief Method get_Month, addr 0x260def4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Month();

  /// @brief Method get_TimeOfDay, addr 0x260deec, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_TimeOfDay();

  /// @brief Method get_Week, addr 0x260defc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Week();

  /// @brief Convert to "::System::IEquatable_1<::System::__TimeZoneInfo__TransitionTime>"
  constexpr ::System::IEquatable_1<::System::__TimeZoneInfo__TransitionTime>* i___System__IEquatable_1___System____TimeZoneInfo__TransitionTime_();

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable();

  /// @brief Method op_Inequality, addr 0x260d0d8, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::__TimeZoneInfo__TransitionTime t1, ::System::__TimeZoneInfo__TransitionTime t2);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeZoneInfo__TransitionTime();

  // Ctor Parameters [CppParam { name: "_timeOfDay", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "_month", ty: "uint8_t", modifiers: "", def_value: None }, CppParam {
  // name: "_week", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_day", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_dayOfWeek", ty: "::System::DayOfWeek",
  // modifiers: "", def_value: None }, CppParam { name: "_isFixedDateRule", ty: "bool", modifiers: "", def_value: None }]
  constexpr __TimeZoneInfo__TransitionTime(::System::DateTime _timeOfDay, uint8_t _month, uint8_t _week, uint8_t _day, ::System::DayOfWeek _dayOfWeek, bool _isFixedDateRule) noexcept;

  /// @brief Field _timeOfDay, offset: 0x0, size: 0x8, def value: None
  ::System::DateTime _timeOfDay;

  /// @brief Field _month, offset: 0x8, size: 0x1, def value: None
  uint8_t _month;

  /// @brief Field _week, offset: 0x9, size: 0x1, def value: None
  uint8_t _week;

  /// @brief Field _day, offset: 0xa, size: 0x1, def value: None
  uint8_t _day;

  /// @brief Field _dayOfWeek, offset: 0xc, size: 0x4, def value: None
  ::System::DayOfWeek _dayOfWeek;

  /// @brief Field _isFixedDateRule, offset: 0x10, size: 0x1, def value: None
  bool _isFixedDateRule;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__TimeZoneInfo__TransitionTime, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__TransitionTime, _timeOfDay) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__TransitionTime, _month) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__TransitionTime, _week) == 0x9, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__TransitionTime, _day) == 0xa, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__TransitionTime, _dayOfWeek) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__TransitionTime, _isFixedDateRule) == 0x10, "Offset mismatch!");

} // namespace System
// Type: ::AdjustmentRule
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 97, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::TimeZoneInfo::AdjustmentRule*
class CORDL_TYPE __TimeZoneInfo__AdjustmentRule : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BaseUtcOffsetDelta))::System::TimeSpan BaseUtcOffsetDelta;

  __declspec(property(get = get_DateEnd))::System::DateTime DateEnd;

  __declspec(property(get = get_DateStart))::System::DateTime DateStart;

  __declspec(property(get = get_DaylightDelta))::System::TimeSpan DaylightDelta;

  __declspec(property(get = get_DaylightTransitionEnd))::System::__TimeZoneInfo__TransitionTime DaylightTransitionEnd;

  __declspec(property(get = get_DaylightTransitionStart))::System::__TimeZoneInfo__TransitionTime DaylightTransitionStart;

  __declspec(property(get = get_HasDaylightSaving)) bool HasDaylightSaving;

  __declspec(property(get = get_NoDaylightTransitions)) bool NoDaylightTransitions;

  /// @brief Field _baseUtcOffsetDelta, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__baseUtcOffsetDelta, put = __cordl_internal_set__baseUtcOffsetDelta))::System::TimeSpan _baseUtcOffsetDelta;

  /// @brief Field _dateEnd, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__dateEnd, put = __cordl_internal_set__dateEnd))::System::DateTime _dateEnd;

  /// @brief Field _dateStart, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dateStart, put = __cordl_internal_set__dateStart))::System::DateTime _dateStart;

  /// @brief Field _daylightDelta, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__daylightDelta, put = __cordl_internal_set__daylightDelta))::System::TimeSpan _daylightDelta;

  /// @brief Field _daylightTransitionEnd, offset 0x40, size 0x18
  __declspec(property(get = __cordl_internal_get__daylightTransitionEnd, put = __cordl_internal_set__daylightTransitionEnd))::System::__TimeZoneInfo__TransitionTime _daylightTransitionEnd;

  /// @brief Field _daylightTransitionStart, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get__daylightTransitionStart, put = __cordl_internal_set__daylightTransitionStart))::System::__TimeZoneInfo__TransitionTime _daylightTransitionStart;

  /// @brief Field _noDaylightTransitions, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__noDaylightTransitions, put = __cordl_internal_set__noDaylightTransitions)) bool _noDaylightTransitions;

  /// @brief Convert operator to "::System::IEquatable_1<::System::__TimeZoneInfo__AdjustmentRule*>"
  constexpr operator ::System::IEquatable_1<::System::__TimeZoneInfo__AdjustmentRule*>*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method CreateAdjustmentRule, addr 0x2603c68, size 0x110, virtual false, abstract: false, final false
  static inline ::System::__TimeZoneInfo__AdjustmentRule* CreateAdjustmentRule(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta,
                                                                               ::System::__TimeZoneInfo__TransitionTime daylightTransitionStart,
                                                                               ::System::__TimeZoneInfo__TransitionTime daylightTransitionEnd);

  /// @brief Method CreateAdjustmentRule, addr 0x26065a4, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::__TimeZoneInfo__AdjustmentRule* CreateAdjustmentRule(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta,
                                                                               ::System::__TimeZoneInfo__TransitionTime daylightTransitionStart,
                                                                               ::System::__TimeZoneInfo__TransitionTime daylightTransitionEnd, ::System::TimeSpan baseUtcOffsetDelta,
                                                                               bool noDaylightTransitions);

  /// @brief Method Equals, addr 0x260a0f0, size 0x164, virtual true, abstract: false, final true
  inline bool Equals(::System::__TimeZoneInfo__AdjustmentRule* other);

  /// @brief Method GetHashCode, addr 0x260d1e4, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsEndDateMarkerForEndOfYear, addr 0x260b5f8, size 0xb0, virtual false, abstract: false, final false
  inline bool IsEndDateMarkerForEndOfYear();

  /// @brief Method IsStartDateMarkerForBeginningOfYear, addr 0x260b548, size 0xb0, virtual false, abstract: false, final false
  inline bool IsStartDateMarkerForBeginningOfYear();

  static inline ::System::__TimeZoneInfo__AdjustmentRule* New_ctor();

  static inline ::System::__TimeZoneInfo__AdjustmentRule* New_ctor(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta,
                                                                   ::System::__TimeZoneInfo__TransitionTime daylightTransitionStart, ::System::__TimeZoneInfo__TransitionTime daylightTransitionEnd,
                                                                   ::System::TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions);

  static inline ::System::__TimeZoneInfo__AdjustmentRule* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x260d740, size 0x118, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x260d858, size 0x244, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ValidateAdjustmentRule, addr 0x260d2b8, size 0x44c, virtual false, abstract: false, final false
  static inline void ValidateAdjustmentRule(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta,
                                            ::System::__TimeZoneInfo__TransitionTime daylightTransitionStart, ::System::__TimeZoneInfo__TransitionTime daylightTransitionEnd,
                                            bool noDaylightTransitions);

  constexpr ::System::TimeSpan const& __cordl_internal_get__baseUtcOffsetDelta() const;

  constexpr ::System::TimeSpan& __cordl_internal_get__baseUtcOffsetDelta();

  constexpr ::System::DateTime const& __cordl_internal_get__dateEnd() const;

  constexpr ::System::DateTime& __cordl_internal_get__dateEnd();

  constexpr ::System::DateTime const& __cordl_internal_get__dateStart() const;

  constexpr ::System::DateTime& __cordl_internal_get__dateStart();

  constexpr ::System::TimeSpan const& __cordl_internal_get__daylightDelta() const;

  constexpr ::System::TimeSpan& __cordl_internal_get__daylightDelta();

  constexpr ::System::__TimeZoneInfo__TransitionTime const& __cordl_internal_get__daylightTransitionEnd() const;

  constexpr ::System::__TimeZoneInfo__TransitionTime& __cordl_internal_get__daylightTransitionEnd();

  constexpr ::System::__TimeZoneInfo__TransitionTime const& __cordl_internal_get__daylightTransitionStart() const;

  constexpr ::System::__TimeZoneInfo__TransitionTime& __cordl_internal_get__daylightTransitionStart();

  constexpr bool const& __cordl_internal_get__noDaylightTransitions() const;

  constexpr bool& __cordl_internal_get__noDaylightTransitions();

  constexpr void __cordl_internal_set__baseUtcOffsetDelta(::System::TimeSpan value);

  constexpr void __cordl_internal_set__dateEnd(::System::DateTime value);

  constexpr void __cordl_internal_set__dateStart(::System::DateTime value);

  constexpr void __cordl_internal_set__daylightDelta(::System::TimeSpan value);

  constexpr void __cordl_internal_set__daylightTransitionEnd(::System::__TimeZoneInfo__TransitionTime value);

  constexpr void __cordl_internal_set__daylightTransitionStart(::System::__TimeZoneInfo__TransitionTime value);

  constexpr void __cordl_internal_set__noDaylightTransitions(bool value);

  /// @brief Method .ctor, addr 0x260deb4, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x260d1f0, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta, ::System::__TimeZoneInfo__TransitionTime daylightTransitionStart,
                    ::System::__TimeZoneInfo__TransitionTime daylightTransitionEnd, ::System::TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions);

  /// @brief Method .ctor, addr 0x260da9c, size 0x418, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_BaseUtcOffsetDelta, addr 0x260d0c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_BaseUtcOffsetDelta();

  /// @brief Method get_DateEnd, addr 0x260d090, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_DateEnd();

  /// @brief Method get_DateStart, addr 0x260d088, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_DateStart();

  /// @brief Method get_DaylightDelta, addr 0x260d098, size 0x8, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_DaylightDelta();

  /// @brief Method get_DaylightTransitionEnd, addr 0x260d0b4, size 0x14, virtual false, abstract: false, final false
  inline ::System::__TimeZoneInfo__TransitionTime get_DaylightTransitionEnd();

  /// @brief Method get_DaylightTransitionStart, addr 0x260d0a0, size 0x14, virtual false, abstract: false, final false
  inline ::System::__TimeZoneInfo__TransitionTime get_DaylightTransitionStart();

  /// @brief Method get_HasDaylightSaving, addr 0x26091b4, size 0x15c, virtual false, abstract: false, final false
  inline bool get_HasDaylightSaving();

  /// @brief Method get_NoDaylightTransitions, addr 0x260d0d0, size 0x8, virtual false, abstract: false, final false
  inline bool get_NoDaylightTransitions();

  /// @brief Convert to "::System::IEquatable_1<::System::__TimeZoneInfo__AdjustmentRule*>"
  constexpr ::System::IEquatable_1<::System::__TimeZoneInfo__AdjustmentRule*>* i___System__IEquatable_1___System____TimeZoneInfo__AdjustmentRule__() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeZoneInfo__AdjustmentRule();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TimeZoneInfo__AdjustmentRule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimeZoneInfo__AdjustmentRule(__TimeZoneInfo__AdjustmentRule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimeZoneInfo__AdjustmentRule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimeZoneInfo__AdjustmentRule(__TimeZoneInfo__AdjustmentRule const&) = delete;

  /// @brief Field _dateStart, offset: 0x10, size: 0x8, def value: None
  ::System::DateTime ____dateStart;

  /// @brief Field _dateEnd, offset: 0x18, size: 0x8, def value: None
  ::System::DateTime ____dateEnd;

  /// @brief Field _daylightDelta, offset: 0x20, size: 0x8, def value: None
  ::System::TimeSpan ____daylightDelta;

  /// @brief Field _daylightTransitionStart, offset: 0x28, size: 0x18, def value: None
  ::System::__TimeZoneInfo__TransitionTime ____daylightTransitionStart;

  /// @brief Field _daylightTransitionEnd, offset: 0x40, size: 0x18, def value: None
  ::System::__TimeZoneInfo__TransitionTime ____daylightTransitionEnd;

  /// @brief Field _baseUtcOffsetDelta, offset: 0x58, size: 0x8, def value: None
  ::System::TimeSpan ____baseUtcOffsetDelta;

  /// @brief Field _noDaylightTransitions, offset: 0x60, size: 0x1, def value: None
  bool ____noDaylightTransitions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__TimeZoneInfo__AdjustmentRule, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__AdjustmentRule, ____dateStart) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__AdjustmentRule, ____dateEnd) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__AdjustmentRule, ____daylightDelta) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__AdjustmentRule, ____daylightTransitionStart) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__AdjustmentRule, ____daylightTransitionEnd) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__AdjustmentRule, ____baseUtcOffsetDelta) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__AdjustmentRule, ____noDaylightTransitions) == 0x60, "Offset mismatch!");

} // namespace System
// Type: ::CachedData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::TimeZoneInfo::CachedData*
class CORDL_TYPE __TimeZoneInfo__CachedData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Local))::System::TimeZoneInfo* Local;

  /// @brief Field _localTimeZone, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__localTimeZone, put = __cordl_internal_set__localTimeZone))::System::TimeZoneInfo* _localTimeZone;

  /// @brief Method CreateLocal, addr 0x260e894, size 0x190, virtual false, abstract: false, final false
  inline ::System::TimeZoneInfo* CreateLocal();

  /// @brief Method GetCorrespondingKind, addr 0x2608a08, size 0x8c, virtual false, abstract: false, final false
  inline ::System::DateTimeKind GetCorrespondingKind(::System::TimeZoneInfo* timeZone);

  static inline ::System::__TimeZoneInfo__CachedData* New_ctor();

  constexpr ::System::TimeZoneInfo*& __cordl_internal_get__localTimeZone();

  constexpr ::cordl_internals::to_const_pointer<::System::TimeZoneInfo*> const& __cordl_internal_get__localTimeZone() const;

  constexpr void __cordl_internal_set__localTimeZone(::System::TimeZoneInfo* value);

  /// @brief Method .ctor, addr 0x260d048, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Local, addr 0x2608958, size 0x38, virtual false, abstract: false, final false
  inline ::System::TimeZoneInfo* get_Local();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeZoneInfo__CachedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TimeZoneInfo__CachedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimeZoneInfo__CachedData(__TimeZoneInfo__CachedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimeZoneInfo__CachedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimeZoneInfo__CachedData(__TimeZoneInfo__CachedData const&) = delete;

  /// @brief Field _localTimeZone, offset: 0x10, size: 0x8, def value: None
  ::System::TimeZoneInfo* ____localTimeZone;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__TimeZoneInfo__CachedData, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo__CachedData, ____localTimeZone) == 0x10, "Offset mismatch!");

} // namespace System
// Type: ::<>c__DisplayClass16_0
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::TimeZoneInfo::<>c__DisplayClass16_0*
class CORDL_TYPE __TimeZoneInfo____c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field buffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field id, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id))::StringW id;

  /// @brief Field localtimeFilePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_localtimeFilePath, put = __cordl_internal_set_localtimeFilePath))::StringW localtimeFilePath;

  /// @brief Field posixrulesFilePath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_posixrulesFilePath, put = __cordl_internal_set_posixrulesFilePath))::StringW posixrulesFilePath;

  /// @brief Field rawData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_rawData, put = __cordl_internal_set_rawData))::ArrayW<uint8_t, ::Array<uint8_t>*> rawData;

  /// @brief Field timeZoneDirectory, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_timeZoneDirectory, put = __cordl_internal_set_timeZoneDirectory))::StringW timeZoneDirectory;

  static inline ::System::__TimeZoneInfo____c__DisplayClass16_0* New_ctor();

  /// @brief Method <FindTimeZoneId>b__0, addr 0x260ea24, size 0xf4, virtual false, abstract: false, final false
  inline bool _FindTimeZoneId_b__0(::StringW filePath);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buffer();

  constexpr ::StringW const& __cordl_internal_get_id() const;

  constexpr ::StringW& __cordl_internal_get_id();

  constexpr ::StringW const& __cordl_internal_get_localtimeFilePath() const;

  constexpr ::StringW& __cordl_internal_get_localtimeFilePath();

  constexpr ::StringW const& __cordl_internal_get_posixrulesFilePath() const;

  constexpr ::StringW& __cordl_internal_get_posixrulesFilePath();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_rawData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_rawData();

  constexpr ::StringW const& __cordl_internal_get_timeZoneDirectory() const;

  constexpr ::StringW& __cordl_internal_get_timeZoneDirectory();

  constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_id(::StringW value);

  constexpr void __cordl_internal_set_localtimeFilePath(::StringW value);

  constexpr void __cordl_internal_set_posixrulesFilePath(::StringW value);

  constexpr void __cordl_internal_set_rawData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_timeZoneDirectory(::StringW value);

  /// @brief Method .ctor, addr 0x2604f48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeZoneInfo____c__DisplayClass16_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TimeZoneInfo____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimeZoneInfo____c__DisplayClass16_0(__TimeZoneInfo____c__DisplayClass16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimeZoneInfo____c__DisplayClass16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimeZoneInfo____c__DisplayClass16_0(__TimeZoneInfo____c__DisplayClass16_0 const&) = delete;

  /// @brief Field localtimeFilePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___localtimeFilePath;

  /// @brief Field posixrulesFilePath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___posixrulesFilePath;

  /// @brief Field buffer, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buffer;

  /// @brief Field rawData, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___rawData;

  /// @brief Field id, offset: 0x30, size: 0x8, def value: None
  ::StringW ___id;

  /// @brief Field timeZoneDirectory, offset: 0x38, size: 0x8, def value: None
  ::StringW ___timeZoneDirectory;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__TimeZoneInfo____c__DisplayClass16_0, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo____c__DisplayClass16_0, ___localtimeFilePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo____c__DisplayClass16_0, ___posixrulesFilePath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo____c__DisplayClass16_0, ___buffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo____c__DisplayClass16_0, ___rawData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo____c__DisplayClass16_0, ___id) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::__TimeZoneInfo____c__DisplayClass16_0, ___timeZoneDirectory) == 0x38, "Offset mismatch!");

} // namespace System
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::TimeZoneInfo::<>c*
class CORDL_TYPE __TimeZoneInfo____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::__TimeZoneInfo____c* __9;

  /// @brief Field <>9__161_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__161_0, put = setStaticF___9__161_0))::System::Comparison_1<::System::__TimeZoneInfo__AdjustmentRule*>* __9__161_0;

  /// @brief Field <>9__34_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__34_0, put = setStaticF___9__34_0))::System::Func_2<char16_t, bool>* __9__34_0;

  /// @brief Field <>9__34_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__34_1, put = setStaticF___9__34_1))::System::Func_2<char16_t, bool>* __9__34_1;

  /// @brief Field <>9__35_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__35_0, put = setStaticF___9__35_0))::System::Func_2<char16_t, bool>* __9__35_0;

  /// @brief Field <>9__37_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__37_0, put = setStaticF___9__37_0))::System::Func_2<char16_t, bool>* __9__37_0;

  /// @brief Field <>9__38_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__38_0, put = setStaticF___9__38_0))::System::Func_2<char16_t, bool>* __9__38_0;

  static inline ::System::__TimeZoneInfo____c* New_ctor();

  /// @brief Method <CreateLocalUnity>b__161_0, addr 0x260ed4c, size 0x34, virtual false, abstract: false, final false
  inline int32_t _CreateLocalUnity_b__161_0(::System::__TimeZoneInfo__AdjustmentRule* rule1, ::System::__TimeZoneInfo__AdjustmentRule* rule2);

  /// @brief Method <TZif_ParsePosixDate>b__37_0, addr 0x260ed20, size 0x1c, virtual false, abstract: false, final false
  inline bool _TZif_ParsePosixDate_b__37_0(char16_t c);

  /// @brief Method <TZif_ParsePosixName>b__34_0, addr 0x260eb94, size 0x80, virtual false, abstract: false, final false
  inline bool _TZif_ParsePosixName_b__34_0(char16_t c);

  /// @brief Method <TZif_ParsePosixName>b__34_1, addr 0x260eb84, size 0x10, virtual false, abstract: false, final false
  inline bool _TZif_ParsePosixName_b__34_1(char16_t c);

  /// @brief Method <TZif_ParsePosixOffset>b__35_0, addr 0x260ec98, size 0x88, virtual false, abstract: false, final false
  inline bool _TZif_ParsePosixOffset_b__35_0(char16_t c);

  /// @brief Method <TZif_ParsePosixTime>b__38_0, addr 0x260ed3c, size 0x10, virtual false, abstract: false, final false
  inline bool _TZif_ParsePosixTime_b__38_0(char16_t c);

  /// @brief Method .ctor, addr 0x260eb7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::__TimeZoneInfo____c* getStaticF___9();

  static inline ::System::Comparison_1<::System::__TimeZoneInfo__AdjustmentRule*>* getStaticF___9__161_0();

  static inline ::System::Func_2<char16_t, bool>* getStaticF___9__34_0();

  static inline ::System::Func_2<char16_t, bool>* getStaticF___9__34_1();

  static inline ::System::Func_2<char16_t, bool>* getStaticF___9__35_0();

  static inline ::System::Func_2<char16_t, bool>* getStaticF___9__37_0();

  static inline ::System::Func_2<char16_t, bool>* getStaticF___9__38_0();

  static inline void setStaticF___9(::System::__TimeZoneInfo____c* value);

  static inline void setStaticF___9__161_0(::System::Comparison_1<::System::__TimeZoneInfo__AdjustmentRule*>* value);

  static inline void setStaticF___9__34_0(::System::Func_2<char16_t, bool>* value);

  static inline void setStaticF___9__34_1(::System::Func_2<char16_t, bool>* value);

  static inline void setStaticF___9__35_0(::System::Func_2<char16_t, bool>* value);

  static inline void setStaticF___9__37_0(::System::Func_2<char16_t, bool>* value);

  static inline void setStaticF___9__38_0(::System::Func_2<char16_t, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TimeZoneInfo____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TimeZoneInfo____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TimeZoneInfo____c(__TimeZoneInfo____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TimeZoneInfo____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TimeZoneInfo____c(__TimeZoneInfo____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__TimeZoneInfo____c, 0x10>, "Size mismatch!");

} // namespace System
// Type: System::TimeZoneInfo
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::TimeZoneInfo*
class CORDL_TYPE TimeZoneInfo : public ::System::Object {
public:
  // Declarations
  using AdjustmentRule = ::System::__TimeZoneInfo__AdjustmentRule;

  using CachedData = ::System::__TimeZoneInfo__CachedData;

  using TZVersion = ::System::__TimeZoneInfo__TZVersion;

  using TZifHead = ::System::__TimeZoneInfo__TZifHead;

  using TZifType = ::System::__TimeZoneInfo__TZifType;

  using TransitionTime = ::System::__TimeZoneInfo__TransitionTime;

  using __c = ::System::__TimeZoneInfo____c;

  using __c__DisplayClass16_0 = ::System::__TimeZoneInfo____c__DisplayClass16_0;

  __declspec(property(get = get_BaseUtcOffset))::System::TimeSpan BaseUtcOffset;

  __declspec(property(get = get_DaylightName))::StringW DaylightName;

  __declspec(property(get = get_DisplayName))::StringW DisplayName;

  /// @brief Field MaxOffset, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MaxOffset, put = setStaticF_MaxOffset))::System::TimeSpan MaxOffset;

  /// @brief Field MinOffset, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MinOffset, put = setStaticF_MinOffset))::System::TimeSpan MinOffset;

  __declspec(property(get = get_StandardName))::StringW StandardName;

  __declspec(property(get = get_SupportsDaylightSavingTime)) bool SupportsDaylightSavingTime;

  /// @brief Field _adjustmentRules, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__adjustmentRules,
                      put = __cordl_internal_set__adjustmentRules))::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*> _adjustmentRules;

  /// @brief Field _baseUtcOffset, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__baseUtcOffset, put = __cordl_internal_set__baseUtcOffset))::System::TimeSpan _baseUtcOffset;

  /// @brief Field _daylightDisplayName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__daylightDisplayName, put = __cordl_internal_set__daylightDisplayName))::StringW _daylightDisplayName;

  /// @brief Field _displayName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__displayName, put = __cordl_internal_set__displayName))::StringW _displayName;

  /// @brief Field _id, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__id, put = __cordl_internal_set__id))::StringW _id;

  /// @brief Field _standardDisplayName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__standardDisplayName, put = __cordl_internal_set__standardDisplayName))::StringW _standardDisplayName;

  /// @brief Field _supportsDaylightSavingTime, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__supportsDaylightSavingTime, put = __cordl_internal_set__supportsDaylightSavingTime)) bool _supportsDaylightSavingTime;

  /// @brief Field s_cachedData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cachedData, put = setStaticF_s_cachedData))::System::__TimeZoneInfo__CachedData* s_cachedData;

  /// @brief Field s_maxDateOnly, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_maxDateOnly, put = setStaticF_s_maxDateOnly))::System::DateTime s_maxDateOnly;

  /// @brief Field s_minDateOnly, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_minDateOnly, put = setStaticF_s_minDateOnly))::System::DateTime s_minDateOnly;

  /// @brief Field s_utcTimeZone, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_utcTimeZone, put = setStaticF_s_utcTimeZone))::System::TimeZoneInfo* s_utcTimeZone;

  /// @brief Convert operator to "::System::IEquatable_1<::System::TimeZoneInfo*>"
  constexpr operator ::System::IEquatable_1<::System::TimeZoneInfo*>*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method CheckIsDst, addr 0x260b6a8, size 0x1e0, virtual false, abstract: false, final false
  static inline bool CheckIsDst(::System::DateTime startTime, ::System::DateTime time, ::System::DateTime endTime, bool ignoreYearAdjustment, ::System::__TimeZoneInfo__AdjustmentRule* rule);

  /// @brief Method CompareAdjustmentRuleToDateTime, addr 0x260af18, size 0x190, virtual false, abstract: false, final false
  inline int32_t CompareAdjustmentRuleToDateTime(::System::__TimeZoneInfo__AdjustmentRule* rule, ::System::__TimeZoneInfo__AdjustmentRule* previousRule, ::System::DateTime dateTime,
                                                 ::System::DateTime dateOnly, bool dateTimeisUtc);

  /// @brief Method CompareTimeZoneFile, addr 0x2604f50, size 0x38c, virtual false, abstract: false, final false
  static inline bool CompareTimeZoneFile(::StringW filePath, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawData);

  /// @brief Method ConvertFromUtc, addr 0x260b234, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime ConvertFromUtc(::System::DateTime dateTime, ::System::TimeSpan daylightDelta, ::System::TimeSpan baseUtcOffsetDelta);

  /// @brief Method ConvertTime, addr 0x2608a94, size 0x88, virtual false, abstract: false, final false
  static inline ::System::DateTime ConvertTime(::System::DateTime dateTime, ::System::TimeZoneInfo* sourceTimeZone, ::System::TimeZoneInfo* destinationTimeZone, ::System::TimeZoneInfoOptions flags);

  /// @brief Method ConvertTime, addr 0x2608d20, size 0x3e8, virtual false, abstract: false, final false
  static inline ::System::DateTime ConvertTime(::System::DateTime dateTime, ::System::TimeZoneInfo* sourceTimeZone, ::System::TimeZoneInfo* destinationTimeZone, ::System::TimeZoneInfoOptions flags,
                                               ::System::__TimeZoneInfo__CachedData* cachedData);

  /// @brief Method ConvertTimeToUtc, addr 0x2609d58, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::DateTime ConvertTimeToUtc(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags);

  /// @brief Method ConvertToFromUtc, addr 0x260b0b0, size 0x184, virtual false, abstract: false, final false
  inline ::System::DateTime ConvertToFromUtc(::System::DateTime dateTime, ::System::TimeSpan daylightDelta, ::System::TimeSpan baseUtcOffsetDelta, bool convertToUtc);

  /// @brief Method ConvertToUtc, addr 0x260b0a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime ConvertToUtc(::System::DateTime dateTime, ::System::TimeSpan daylightDelta, ::System::TimeSpan baseUtcOffsetDelta);

  /// @brief Method ConvertUtcToTimeZone, addr 0x2609b74, size 0x1e4, virtual false, abstract: false, final false
  static inline ::System::DateTime ConvertUtcToTimeZone(int64_t ticks, ::System::TimeZoneInfo* destinationTimeZone, ByRef<bool> isAmbiguousLocalDst);

  /// @brief Method CreateAdjustmentRule, addr 0x260c72c, size 0x7a8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::__TimeZoneInfo__AdjustmentRule*>* CreateAdjustmentRule(int32_t year, ByRef<::ArrayW<int64_t, ::Array<int64_t>*>> data,
                                                                                                                        ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> names,
                                                                                                                        ::StringW standardNameCurrentYear, ::StringW daylightNameCurrentYear);

  /// @brief Method CreateCustomTimeZone, addr 0x260a3ec, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo* CreateCustomTimeZone(::StringW id, ::System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName);

  /// @brief Method CreateCustomTimeZone, addr 0x260a488, size 0x10c, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo* CreateCustomTimeZone(::StringW id, ::System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName, ::StringW daylightDisplayName,
                                                             ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*> adjustmentRules,
                                                             bool disableDaylightSavingTime);

  /// @brief Method CreateLocalUnity, addr 0x260549c, size 0x4a0, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo* CreateLocalUnity();

  /// @brief Method EnumerateFilesRecursively, addr 0x2604958, size 0x5f0, virtual false, abstract: false, final false
  static inline void EnumerateFilesRecursively(::StringW path, ::System::Predicate_1<::StringW>* condition);

  /// @brief Method Equals, addr 0x2609fec, size 0x64, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2609e28, size 0x50, virtual true, abstract: false, final true
  inline bool Equals(::System::TimeZoneInfo* other);

  /// @brief Method FindTimeZoneId, addr 0x2604558, size 0x274, virtual false, abstract: false, final false
  static inline ::StringW FindTimeZoneId(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData);

  /// @brief Method FindTimeZoneIdUsingReadLink, addr 0x260444c, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW FindTimeZoneIdUsingReadLink(::StringW tzFilePath);

  /// @brief Method GetAdjustmentRuleForTime, addr 0x260ad68, size 0x1b0, virtual false, abstract: false, final false
  inline ::System::__TimeZoneInfo__AdjustmentRule* GetAdjustmentRuleForTime(::System::DateTime dateTime, bool dateTimeisUtc, ByRef<::System::Nullable_1<int32_t>> ruleIndex);

  /// @brief Method GetAdjustmentRuleForTime, addr 0x26091a8, size 0xc, virtual false, abstract: false, final false
  inline ::System::__TimeZoneInfo__AdjustmentRule* GetAdjustmentRuleForTime(::System::DateTime dateTime, ByRef<::System::Nullable_1<int32_t>> ruleIndex);

  /// @brief Method GetAdjustmentRules, addr 0x2603838, size 0x3d0, virtual false, abstract: false, final false
  inline ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*> GetAdjustmentRules();

  /// @brief Method GetDateTimeNowUtcOffsetFromUtc, addr 0x2605998, size 0x78, virtual false, abstract: false, final false
  static inline ::System::TimeSpan GetDateTimeNowUtcOffsetFromUtc(::System::DateTime time, ByRef<bool> isAmbiguousLocalDst);

  /// @brief Method GetDaylightSavingsEndOffsetFromUtc, addr 0x260bcfc, size 0x78, virtual false, abstract: false, final false
  inline ::System::TimeSpan GetDaylightSavingsEndOffsetFromUtc(::System::TimeSpan baseUtcOffset, ::System::__TimeZoneInfo__AdjustmentRule* rule);

  /// @brief Method GetDaylightSavingsStartOffsetFromUtc, addr 0x260bc34, size 0xc8, virtual false, abstract: false, final false
  inline ::System::TimeSpan GetDaylightSavingsStartOffsetFromUtc(::System::TimeSpan baseUtcOffset, ::System::__TimeZoneInfo__AdjustmentRule* rule, ::System::Nullable_1<int32_t> ruleIndex);

  /// @brief Method GetDaylightTime, addr 0x2609310, size 0x13c, virtual false, abstract: false, final false
  inline ::System::Globalization::DaylightTimeStruct GetDaylightTime(int32_t year, ::System::__TimeZoneInfo__AdjustmentRule* rule, ::System::Nullable_1<int32_t> ruleIndex);

  /// @brief Method GetDirectoryEntryFullPath, addr 0x26047cc, size 0x18c, virtual false, abstract: false, final false
  static inline ::StringW GetDirectoryEntryFullPath(ByRef<::GlobalNamespace::__Interop__Sys__DirectoryEntry> dirent, ::StringW currentPath);

  /// @brief Method GetHashCode, addr 0x260a050, size 0xa0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetIsAmbiguousTime, addr 0x260b888, size 0x3ac, virtual false, abstract: false, final false
  static inline bool GetIsAmbiguousTime(::System::DateTime time, ::System::__TimeZoneInfo__AdjustmentRule* rule, ::System::Globalization::DaylightTimeStruct daylightTime);

  /// @brief Method GetIsDaylightSavings, addr 0x26097f8, size 0x37c, virtual false, abstract: false, final false
  static inline bool GetIsDaylightSavings(::System::DateTime time, ::System::__TimeZoneInfo__AdjustmentRule* rule, ::System::Globalization::DaylightTimeStruct daylightTime,
                                          ::System::TimeZoneInfoOptions flags);

  /// @brief Method GetIsDaylightSavingsFromUtc, addr 0x260bd74, size 0x780, virtual false, abstract: false, final false
  static inline bool GetIsDaylightSavingsFromUtc(::System::DateTime time, int32_t year, ::System::TimeSpan utc, ::System::__TimeZoneInfo__AdjustmentRule* rule, ::System::Nullable_1<int32_t> ruleIndex,
                                                 ByRef<bool> isAmbiguousLocalDst, ::System::TimeZoneInfo* zone);

  /// @brief Method GetIsInvalidTime, addr 0x260944c, size 0x3ac, virtual false, abstract: false, final false
  static inline bool GetIsInvalidTime(::System::DateTime time, ::System::__TimeZoneInfo__AdjustmentRule* rule, ::System::Globalization::DaylightTimeStruct daylightTime);

  /// @brief Method GetLocalTimeZone, addr 0x2603d78, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo* GetLocalTimeZone(::System::__TimeZoneInfo__CachedData* cachedData);

  /// @brief Method GetLocalTimeZoneFromTzFile, addr 0x2603dc4, size 0x164, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo* GetLocalTimeZoneFromTzFile();

  /// @brief Method GetLocalUtcOffset, addr 0x26088bc, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::TimeSpan GetLocalUtcOffset(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags);

  /// @brief Method GetPreviousAdjustmentRule, addr 0x26085d0, size 0x124, virtual false, abstract: false, final false
  inline ::System::__TimeZoneInfo__AdjustmentRule* GetPreviousAdjustmentRule(::System::__TimeZoneInfo__AdjustmentRule* rule, ::System::Nullable_1<int32_t> ruleIndex);

  /// @brief Method GetTimeZoneDirectory, addr 0x2604300, size 0x14c, virtual false, abstract: false, final false
  static inline ::StringW GetTimeZoneDirectory();

  /// @brief Method GetTimeZoneDirectoryUnity, addr 0x260c6e4, size 0x48, virtual false, abstract: false, final false
  static inline ::StringW GetTimeZoneDirectoryUnity();

  /// @brief Method GetTimeZoneFromTzData, addr 0x26052dc, size 0x1c0, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo* GetTimeZoneFromTzData(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData, ::StringW id);

  /// @brief Method GetTzEnvironmentVariable, addr 0x26040d8, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW GetTzEnvironmentVariable();

  /// @brief Method GetUtcOffset, addr 0x260c61c, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::TimeSpan GetUtcOffset(::System::TimeSpan baseUtcOffset, ::System::__TimeZoneInfo__AdjustmentRule* adjustmentRule);

  /// @brief Method GetUtcOffset, addr 0x26086f4, size 0x74, virtual false, abstract: false, final false
  inline ::System::TimeSpan GetUtcOffset(::System::DateTime dateTime);

  /// @brief Method GetUtcOffset, addr 0x2608990, size 0x78, virtual false, abstract: false, final false
  inline ::System::TimeSpan GetUtcOffset(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags);

  /// @brief Method GetUtcOffset, addr 0x2608768, size 0x154, virtual false, abstract: false, final false
  inline ::System::TimeSpan GetUtcOffset(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags, ::System::__TimeZoneInfo__CachedData* cachedData);

  /// @brief Method GetUtcOffset, addr 0x2608b8c, size 0x194, virtual false, abstract: false, final false
  static inline ::System::TimeSpan GetUtcOffset(::System::DateTime time, ::System::TimeZoneInfo* zone, ::System::TimeZoneInfoOptions flags);

  /// @brief Method GetUtcOffsetFromUtc, addr 0x2608b1c, size 0x70, virtual false, abstract: false, final false
  static inline ::System::TimeSpan GetUtcOffsetFromUtc(::System::DateTime time, ::System::TimeZoneInfo* zone);

  /// @brief Method GetUtcOffsetFromUtc, addr 0x260b23c, size 0x80, virtual false, abstract: false, final false
  static inline ::System::TimeSpan GetUtcOffsetFromUtc(::System::DateTime time, ::System::TimeZoneInfo* zone, ByRef<bool> isDaylightSavings);

  /// @brief Method GetUtcOffsetFromUtc, addr 0x2605a90, size 0x2d0, virtual false, abstract: false, final false
  static inline ::System::TimeSpan GetUtcOffsetFromUtc(::System::DateTime time, ::System::TimeZoneInfo* zone, ByRef<bool> isDaylightSavings, ByRef<bool> isAmbiguousLocalDst);

  /// @brief Method HasSameRules, addr 0x2609e78, size 0x174, virtual false, abstract: false, final false
  inline bool HasSameRules(::System::TimeZoneInfo* other);

  /// @brief Method IsValidAdjustmentRuleOffest, addr 0x2606694, size 0x74, virtual false, abstract: false, final false
  static inline bool IsValidAdjustmentRuleOffest(::System::TimeSpan baseUtcOffset, ::System::__TimeZoneInfo__AdjustmentRule* adjustmentRule);

  static inline ::System::TimeZoneInfo* New_ctor();

  static inline ::System::TimeZoneInfo* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW id, bool dstDisabled);

  static inline ::System::TimeZoneInfo* New_ctor(::StringW id, ::System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName, ::StringW daylightDisplayName,
                                                 ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*> adjustmentRules,
                                                 bool disableDaylightSavingTime);

  static inline ::System::TimeZoneInfo* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method NormalizeAdjustmentRuleOffset, addr 0x2606708, size 0x240, virtual false, abstract: false, final false
  static inline void NormalizeAdjustmentRuleOffset(::System::TimeSpan baseUtcOffset, ByRef<::System::__TimeZoneInfo__AdjustmentRule*> adjustmentRule);

  /// @brief Method ParseTimeOfDay, addr 0x26072bc, size 0x23c, virtual false, abstract: false, final false
  static inline ::System::DateTime ParseTimeOfDay(::StringW time);

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x260a594, size 0x1e4, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x260a778, size 0x1dc, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method TZif_CalculateTransitionOffsetFromBase, addr 0x26064cc, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::TimeSpan TZif_CalculateTransitionOffsetFromBase(::System::TimeSpan transitionOffset, ::System::TimeSpan timeZoneBaseUtcOffset);

  /// @brief Method TZif_CreateAdjustmentRuleForPosixFormat, addr 0x2606948, size 0x324, virtual false, abstract: false, final false
  static inline ::System::__TimeZoneInfo__AdjustmentRule* TZif_CreateAdjustmentRuleForPosixFormat(::StringW posixFormat, ::System::DateTime startTransitionDate,
                                                                                                  ::System::TimeSpan timeZoneBaseUtcOffset);

  /// @brief Method TZif_CreateTransitionTimeFromPosixRule, addr 0x2607060, size 0x25c, virtual false, abstract: false, final false
  static inline ::System::__TimeZoneInfo__TransitionTime TZif_CreateTransitionTimeFromPosixRule(::StringW date, ::StringW time);

  /// @brief Method TZif_GenerateAdjustmentRule, addr 0x2605d60, size 0x6c8, virtual false, abstract: false, final false
  static inline void TZif_GenerateAdjustmentRule(ByRef<int32_t> index, ::System::TimeSpan timeZoneBaseUtcOffset,
                                                 ::System::Collections::Generic::List_1<::System::__TimeZoneInfo__AdjustmentRule*>* rulesList,
                                                 ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*> dts, ::ArrayW<uint8_t, ::Array<uint8_t>*> typeOfLocalTime,
                                                 ::ArrayW<::System::__TimeZoneInfo__TZifType, ::Array<::System::__TimeZoneInfo__TZifType>*> transitionTypes,
                                                 ::ArrayW<bool, ::Array<bool>*> StandardTime, ::ArrayW<bool, ::Array<bool>*> GmtTime, ::StringW futureTransitionsPosixFormat);

  /// @brief Method TZif_GenerateAdjustmentRules, addr 0x26033b8, size 0x14c, virtual false, abstract: false, final false
  static inline void TZif_GenerateAdjustmentRules(ByRef<::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>> rules,
                                                  ::System::TimeSpan baseUtcOffset, ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*> dts,
                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> typeOfLocalTime,
                                                  ::ArrayW<::System::__TimeZoneInfo__TZifType, ::Array<::System::__TimeZoneInfo__TZifType>*> transitionType,
                                                  ::ArrayW<bool, ::Array<bool>*> StandardTime, ::ArrayW<bool, ::Array<bool>*> GmtTime, ::StringW futureTransitionsPosixFormat);

  /// @brief Method TZif_GetEarlyDateTransitionType, addr 0x2606428, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::__TimeZoneInfo__TZifType TZif_GetEarlyDateTransitionType(::ArrayW<::System::__TimeZoneInfo__TZifType, ::Array<::System::__TimeZoneInfo__TZifType>*> transitionTypes);

  /// @brief Method TZif_GetZoneAbbreviation, addr 0x2603354, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW TZif_GetZoneAbbreviation(::StringW zoneAbbreviations, int32_t index);

  /// @brief Method TZif_ParseJulianDay, addr 0x260775c, size 0x1cc, virtual false, abstract: false, final false
  static inline void TZif_ParseJulianDay(::StringW date, ByRef<int32_t> month, ByRef<int32_t> day);

  /// @brief Method TZif_ParseMDateRule, addr 0x26074f8, size 0x1fc, virtual false, abstract: false, final false
  static inline bool TZif_ParseMDateRule(::StringW dateRule, ByRef<int32_t> month, ByRef<int32_t> week, ByRef<::System::DayOfWeek> dayOfWeek);

  /// @brief Method TZif_ParseOffsetString, addr 0x2606e68, size 0x1f8, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::System::TimeSpan> TZif_ParseOffsetString(::StringW offset);

  /// @brief Method TZif_ParsePosixDate, addr 0x2607ddc, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW TZif_ParsePosixDate(::StringW posixFormat, ByRef<int32_t> index);

  /// @brief Method TZif_ParsePosixDateTime, addr 0x2607c68, size 0xdc, virtual false, abstract: false, final false
  static inline void TZif_ParsePosixDateTime(::StringW posixFormat, ByRef<int32_t> index, ByRef<::StringW> date, ByRef<::StringW> time);

  /// @brief Method TZif_ParsePosixFormat, addr 0x2606c6c, size 0x1fc, virtual false, abstract: false, final false
  static inline bool TZif_ParsePosixFormat(::StringW posixFormat, ByRef<::StringW> standardName, ByRef<::StringW> standardOffset, ByRef<::StringW> daylightSavingsName,
                                           ByRef<::StringW> daylightSavingsOffset, ByRef<::StringW> start, ByRef<::StringW> startTime, ByRef<::StringW> end, ByRef<::StringW> endTime);

  /// @brief Method TZif_ParsePosixName, addr 0x2607928, size 0x234, virtual false, abstract: false, final false
  static inline ::StringW TZif_ParsePosixName(::StringW posixFormat, ByRef<int32_t> index);

  /// @brief Method TZif_ParsePosixOffset, addr 0x2607b5c, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW TZif_ParsePosixOffset(::StringW posixFormat, ByRef<int32_t> index);

  /// @brief Method TZif_ParsePosixString, addr 0x2607d44, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW TZif_ParsePosixString(::StringW posixFormat, ByRef<int32_t> index, ::System::Func_2<char16_t, bool>* breakCondition);

  /// @brief Method TZif_ParsePosixTime, addr 0x2607ee8, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW TZif_ParsePosixTime(::StringW posixFormat, ByRef<int32_t> index);

  /// @brief Method TZif_ParseRaw, addr 0x2602e3c, size 0x518, virtual false, abstract: false, final false
  static inline void TZif_ParseRaw(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ByRef<::System::__TimeZoneInfo__TZifHead> t, ByRef<::ArrayW<::System::DateTime, ::Array<::System::DateTime>*>> dts,
                                   ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> typeOfLocalTime,
                                   ByRef<::ArrayW<::System::__TimeZoneInfo__TZifType, ::Array<::System::__TimeZoneInfo__TZifType>*>> transitionType, ByRef<::StringW> zoneAbbreviations,
                                   ByRef<::ArrayW<bool, ::Array<bool>*>> StandardTime, ByRef<::ArrayW<bool, ::Array<bool>*>> GmtTime, ByRef<::StringW> futureTransitionsPosixFormat);

  /// @brief Method TZif_ToInt32, addr 0x2607ff4, size 0x30, virtual false, abstract: false, final false
  static inline int32_t TZif_ToInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t startIndex);

  /// @brief Method TZif_ToInt64, addr 0x2608024, size 0x30, virtual false, abstract: false, final false
  static inline int64_t TZif_ToInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t startIndex);

  /// @brief Method TZif_ToUnixTime, addr 0x2608054, size 0x88, virtual false, abstract: false, final false
  static inline int64_t TZif_ToUnixTime(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t startIndex, ::System::__TimeZoneInfo__TZVersion version);

  /// @brief Method TZif_UnixTimeToDateTime, addr 0x26080dc, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::DateTime TZif_UnixTimeToDateTime(int64_t unixTime);

  /// @brief Method ToString, addr 0x260a254, size 0x54, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TransitionTimeToDateTime, addr 0x260b2bc, size 0x28c, virtual false, abstract: false, final false
  static inline ::System::DateTime TransitionTimeToDateTime(int32_t year, ::System::__TimeZoneInfo__TransitionTime transitionTime);

  /// @brief Method TryGetLocalTzFile, addr 0x2603f28, size 0x1b0, virtual false, abstract: false, final false
  static inline bool TryGetLocalTzFile(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> rawData, ByRef<::StringW> id);

  /// @brief Method TryLoadTzFile, addr 0x2604170, size 0x190, virtual false, abstract: false, final false
  static inline bool TryLoadTzFile(::StringW tzFilePath, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> rawData, ByRef<::StringW> id);

  /// @brief Method UtcOffsetOutOfRange, addr 0x260c4f4, size 0xf0, virtual false, abstract: false, final false
  static inline bool UtcOffsetOutOfRange(::System::TimeSpan offset);

  /// @brief Method ValidateTimeZoneInfo, addr 0x2603504, size 0x334, virtual false, abstract: false, final false
  static inline void ValidateTimeZoneInfo(::StringW id, ::System::TimeSpan baseUtcOffset,
                                          ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*> adjustmentRules,
                                          ByRef<bool> adjustmentRulesSupportDst);

  constexpr ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*> const& __cordl_internal_get__adjustmentRules() const;

  constexpr ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>& __cordl_internal_get__adjustmentRules();

  constexpr ::System::TimeSpan const& __cordl_internal_get__baseUtcOffset() const;

  constexpr ::System::TimeSpan& __cordl_internal_get__baseUtcOffset();

  constexpr ::StringW const& __cordl_internal_get__daylightDisplayName() const;

  constexpr ::StringW& __cordl_internal_get__daylightDisplayName();

  constexpr ::StringW const& __cordl_internal_get__displayName() const;

  constexpr ::StringW& __cordl_internal_get__displayName();

  constexpr ::StringW const& __cordl_internal_get__id() const;

  constexpr ::StringW& __cordl_internal_get__id();

  constexpr ::StringW const& __cordl_internal_get__standardDisplayName() const;

  constexpr ::StringW& __cordl_internal_get__standardDisplayName();

  constexpr bool const& __cordl_internal_get__supportsDaylightSavingTime() const;

  constexpr bool& __cordl_internal_get__supportsDaylightSavingTime();

  constexpr void __cordl_internal_set__adjustmentRules(::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*> value);

  constexpr void __cordl_internal_set__baseUtcOffset(::System::TimeSpan value);

  constexpr void __cordl_internal_set__daylightDisplayName(::StringW value);

  constexpr void __cordl_internal_set__displayName(::StringW value);

  constexpr void __cordl_internal_set__id(::StringW value);

  constexpr void __cordl_internal_set__standardDisplayName(::StringW value);

  constexpr void __cordl_internal_set__supportsDaylightSavingTime(bool value);

  /// @brief Method .ctor, addr 0x260d050, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2602a08, size 0x434, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW id, bool dstDisabled);

  /// @brief Method .ctor, addr 0x260a300, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::StringW id, ::System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName, ::StringW daylightDisplayName,
                    ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*> adjustmentRules, bool disableDaylightSavingTime);

  /// @brief Method .ctor, addr 0x260a954, size 0x414, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::TimeSpan getStaticF_MaxOffset();

  static inline ::System::TimeSpan getStaticF_MinOffset();

  static inline ::System::__TimeZoneInfo__CachedData* getStaticF_s_cachedData();

  static inline ::System::DateTime getStaticF_s_maxDateOnly();

  static inline ::System::DateTime getStaticF_s_minDateOnly();

  static inline ::System::TimeZoneInfo* getStaticF_s_utcTimeZone();

  /// @brief Method get_BaseUtcOffset, addr 0x26085c0, size 0x8, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_BaseUtcOffset();

  /// @brief Method get_DaylightName, addr 0x260856c, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_DaylightName();

  /// @brief Method get_DisplayName, addr 0x26084c4, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_DisplayName();

  /// @brief Method get_Local, addr 0x2605a10, size 0x80, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo* get_Local();

  /// @brief Method get_StandardName, addr 0x2608518, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_StandardName();

  /// @brief Method get_SupportsDaylightSavingTime, addr 0x26085c8, size 0x8, virtual false, abstract: false, final false
  inline bool get_SupportsDaylightSavingTime();

  /// @brief Method get_Utc, addr 0x260a2a8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo* get_Utc();

  /// @brief Convert to "::System::IEquatable_1<::System::TimeZoneInfo*>"
  constexpr ::System::IEquatable_1<::System::TimeZoneInfo*>* i___System__IEquatable_1___System__TimeZoneInfo__() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  static inline void setStaticF_MaxOffset(::System::TimeSpan value);

  static inline void setStaticF_MinOffset(::System::TimeSpan value);

  static inline void setStaticF_s_cachedData(::System::__TimeZoneInfo__CachedData* value);

  static inline void setStaticF_s_maxDateOnly(::System::DateTime value);

  static inline void setStaticF_s_minDateOnly(::System::DateTime value);

  static inline void setStaticF_s_utcTimeZone(::System::TimeZoneInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeZoneInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeZoneInfo(TimeZoneInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeZoneInfo(TimeZoneInfo const&) = delete;

  /// @brief Field _id, offset: 0x10, size: 0x8, def value: None
  ::StringW ____id;

  /// @brief Field _displayName, offset: 0x18, size: 0x8, def value: None
  ::StringW ____displayName;

  /// @brief Field _standardDisplayName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____standardDisplayName;

  /// @brief Field _daylightDisplayName, offset: 0x28, size: 0x8, def value: None
  ::StringW ____daylightDisplayName;

  /// @brief Field _baseUtcOffset, offset: 0x30, size: 0x8, def value: None
  ::System::TimeSpan ____baseUtcOffset;

  /// @brief Field _supportsDaylightSavingTime, offset: 0x38, size: 0x1, def value: None
  bool ____supportsDaylightSavingTime;

  /// @brief Field _adjustmentRules, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*> ____adjustmentRules;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TimeZoneInfo, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____displayName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____standardDisplayName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____daylightDisplayName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____baseUtcOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____supportsDaylightSavingTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____adjustmentRules) == 0x40, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::__TimeZoneInfo__TZVersion, "System", "TimeZoneInfo/TZVersion");
NEED_NO_BOX(::System::TimeZoneInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::TimeZoneInfo*, "System", "TimeZoneInfo");
NEED_NO_BOX(::System::__TimeZoneInfo__AdjustmentRule);
DEFINE_IL2CPP_ARG_TYPE(::System::__TimeZoneInfo__AdjustmentRule*, "System", "TimeZoneInfo/AdjustmentRule");
NEED_NO_BOX(::System::__TimeZoneInfo__CachedData);
DEFINE_IL2CPP_ARG_TYPE(::System::__TimeZoneInfo__CachedData*, "System", "TimeZoneInfo/CachedData");
NEED_NO_BOX(::System::__TimeZoneInfo____c);
DEFINE_IL2CPP_ARG_TYPE(::System::__TimeZoneInfo____c*, "System", "TimeZoneInfo/<>c");
NEED_NO_BOX(::System::__TimeZoneInfo____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::System::__TimeZoneInfo____c__DisplayClass16_0*, "System", "TimeZoneInfo/<>c__DisplayClass16_0");
DEFINE_IL2CPP_ARG_TYPE(::System::__TimeZoneInfo__TZifHead, "System", "TimeZoneInfo/TZifHead");
DEFINE_IL2CPP_ARG_TYPE(::System::__TimeZoneInfo__TZifType, "System", "TimeZoneInfo/TZifType");
DEFINE_IL2CPP_ARG_TYPE(::System::__TimeZoneInfo__TransitionTime, "System", "TimeZoneInfo/TransitionTime");
