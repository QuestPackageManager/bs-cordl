#pragma once
// IWYU pragma private; include "System/TimeZoneInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeZoneInfo)
namespace GlobalNamespace {
struct Sys_Interop_DirectoryEntry;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Globalization {
struct DaylightTimeStruct;
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
class TimeZoneInfo_AdjustmentRule;
}
namespace System {
class TimeZoneInfo_CachedData;
}
namespace System {
struct TimeZoneInfo_TZVersion;
}
namespace System {
struct TimeZoneInfo_TZifHead;
}
namespace System {
struct TimeZoneInfo_TZifType;
}
namespace System {
struct TimeZoneInfo_TransitionTime;
}
namespace System {
class TimeZoneInfo___c;
}
namespace System {
class TimeZoneInfo___c__DisplayClass16_0;
}
// Forward declare root types
namespace System {
struct TimeZoneInfo_TZVersion;
}
namespace System {
class TimeZoneInfo;
}
namespace System {
class TimeZoneInfo_AdjustmentRule;
}
namespace System {
class TimeZoneInfo_CachedData;
}
namespace System {
class TimeZoneInfo___c;
}
namespace System {
class TimeZoneInfo___c__DisplayClass16_0;
}
namespace System {
struct TimeZoneInfo_TZifHead;
}
namespace System {
struct TimeZoneInfo_TZifType;
}
namespace System {
struct TimeZoneInfo_TransitionTime;
}
// Write type traits
MARK_VAL_T(::System::TimeZoneInfo_TZVersion);
MARK_REF_PTR_T(::System::TimeZoneInfo);
MARK_REF_PTR_T(::System::TimeZoneInfo_AdjustmentRule);
MARK_REF_PTR_T(::System::TimeZoneInfo_CachedData);
MARK_REF_PTR_T(::System::TimeZoneInfo___c);
MARK_REF_PTR_T(::System::TimeZoneInfo___c__DisplayClass16_0);
MARK_VAL_T(::System::TimeZoneInfo_TZifHead);
MARK_VAL_T(::System::TimeZoneInfo_TZifType);
MARK_VAL_T(::System::TimeZoneInfo_TransitionTime);
// Dependencies System.TimeSpan
namespace System {
// Is value type: true
// CS Name: System.TimeZoneInfo/TZifType
struct CORDL_TYPE TimeZoneInfo_TZifType {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3d51e18, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t index);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeZoneInfo_TZifType();

  // Ctor Parameters [CppParam { name: "UtcOffset", ty: "::System::TimeSpan", modifiers: "", def_value: None }, CppParam { name: "IsDst", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "AbbreviationIndex", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr TimeZoneInfo_TZifType(::System::TimeSpan UtcOffset, bool IsDst, uint8_t AbbreviationIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2313 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field UtcOffset, offset: 0x0, size: 0x8, def value: None
  ::System::TimeSpan UtcOffset;

  /// @brief Field IsDst, offset: 0x8, size: 0x1, def value: None
  bool IsDst;

  /// @brief Field AbbreviationIndex, offset: 0x9, size: 0x1, def value: None
  uint8_t AbbreviationIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::TimeZoneInfo_TZifType, UtcOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_TZifType, IsDst) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_TZifType, AbbreviationIndex) == 0x9, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::TimeZoneInfo_TZifType, 0x10>, "Size mismatch!");

} // namespace System
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.TimeZoneInfo/TZVersion
struct CORDL_TYPE TimeZoneInfo_TZVersion {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __TimeZoneInfo_TZVersion_Unwrapped
  enum struct __TimeZoneInfo_TZVersion_Unwrapped : uint8_t {
    __E_V1 = static_cast<uint8_t>(0x0u),
    __E_V2 = static_cast<uint8_t>(0x1u),
    __E_V3 = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TimeZoneInfo_TZVersion_Unwrapped() const noexcept {
    return static_cast<__TimeZoneInfo_TZVersion_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeZoneInfo_TZVersion();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr TimeZoneInfo_TZVersion(uint8_t value__) noexcept;

  /// @brief Field V1 value: U8(0)
  static ::System::TimeZoneInfo_TZVersion const V1;

  /// @brief Field V2 value: U8(1)
  static ::System::TimeZoneInfo_TZVersion const V2;

  /// @brief Field V3 value: U8(2)
  static ::System::TimeZoneInfo_TZVersion const V3;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2315 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::TimeZoneInfo_TZVersion, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::TimeZoneInfo_TZVersion, 0x1>, "Size mismatch!");

} // namespace System
// Dependencies System.TimeZoneInfo::TZVersion
namespace System {
// Is value type: true
// CS Name: System.TimeZoneInfo/TZifHead
struct CORDL_TYPE TimeZoneInfo_TZifHead {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x3d51c6c, size 0x1ac, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t index);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeZoneInfo_TZifHead();

  // Ctor Parameters [CppParam { name: "Magic", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Version", ty: "::System::TimeZoneInfo_TZVersion", modifiers: "", def_value: None },
  // CppParam { name: "IsGmtCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "IsStdCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "LeapCount", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "TimeCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "TypeCount", ty: "uint32_t", modifiers: "",
  // def_value: None }, CppParam { name: "CharCount", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr TimeZoneInfo_TZifHead(uint32_t Magic, ::System::TimeZoneInfo_TZVersion Version, uint32_t IsGmtCount, uint32_t IsStdCount, uint32_t LeapCount, uint32_t TimeCount, uint32_t TypeCount,
                                  uint32_t CharCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2314 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field Magic, offset: 0x0, size: 0x4, def value: None
  uint32_t Magic;

  /// @brief Field Version, offset: 0x4, size: 0x1, def value: None
  ::System::TimeZoneInfo_TZVersion Version;

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::TimeZoneInfo_TZifHead, Magic) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_TZifHead, Version) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_TZifHead, IsGmtCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_TZifHead, IsStdCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_TZifHead, LeapCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_TZifHead, TimeCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_TZifHead, TypeCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_TZifHead, CharCount) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::TimeZoneInfo_TZifHead, 0x20>, "Size mismatch!");

} // namespace System
// Dependencies System.DateTime, System.DayOfWeek, System.IEquatable`1<T>, System.Runtime.Serialization.IDeserializationCallback, System.Runtime.Serialization.ISerializable
namespace System {
// Is value type: true
// CS Name: System.TimeZoneInfo/TransitionTime
struct CORDL_TYPE TimeZoneInfo_TransitionTime {
public:
  // Declarations
  __declspec(property(get = get_Day)) int32_t Day;

  __declspec(property(get = get_DayOfWeek)) ::System::DayOfWeek DayOfWeek;

  __declspec(property(get = get_IsFixedDateRule)) bool IsFixedDateRule;

  __declspec(property(get = get_Month)) int32_t Month;

  __declspec(property(get = get_TimeOfDay)) ::System::DateTime TimeOfDay;

  __declspec(property(get = get_Week)) int32_t Week;

  /// @brief Convert operator to "::System::IEquatable_1<::System::TimeZoneInfo_TransitionTime>"
  constexpr operator ::System::IEquatable_1<::System::TimeZoneInfo_TransitionTime>*();

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*();

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*();

  /// @brief Method CreateFixedDateRule, addr 0x3d4d618, size 0x60, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo_TransitionTime CreateFixedDateRule(::System::DateTime timeOfDay, int32_t month, int32_t day);

  /// @brief Method CreateFloatingDateRule, addr 0x3d51190, size 0x68, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo_TransitionTime CreateFloatingDateRule(::System::DateTime timeOfDay, int32_t month, int32_t week, ::System::DayOfWeek dayOfWeek);

  /// @brief Method Equals, addr 0x3d57f0c, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x3d57020, size 0xd8, virtual true, abstract: false, final true
  inline bool Equals(::System::TimeZoneInfo_TransitionTime other);

  /// @brief Method GetHashCode, addr 0x3d57f9c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x3d582c0, size 0xec, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x3d583ac, size 0x1a8, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ValidateTransitionTime, addr 0x3d58014, size 0x2ac, virtual false, abstract: false, final false
  static inline void ValidateTransitionTime(::System::DateTime timeOfDay, int32_t month, int32_t week, int32_t day, ::System::DayOfWeek dayOfWeek);

  /// @brief Method .ctor, addr 0x3d58554, size 0x378, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3d57fa4, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::DateTime timeOfDay, int32_t month, int32_t week, int32_t day, ::System::DayOfWeek dayOfWeek, bool isFixedDateRule);

  /// @brief Method get_Day, addr 0x3d57ef4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Day();

  /// @brief Method get_DayOfWeek, addr 0x3d57efc, size 0x8, virtual false, abstract: false, final false
  inline ::System::DayOfWeek get_DayOfWeek();

  /// @brief Method get_IsFixedDateRule, addr 0x3d57f04, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsFixedDateRule();

  /// @brief Method get_Month, addr 0x3d57ee4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Month();

  /// @brief Method get_TimeOfDay, addr 0x3d57edc, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_TimeOfDay();

  /// @brief Method get_Week, addr 0x3d57eec, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Week();

  /// @brief Convert to "::System::IEquatable_1<::System::TimeZoneInfo_TransitionTime>"
  constexpr ::System::IEquatable_1<::System::TimeZoneInfo_TransitionTime>* i___System__IEquatable_1___System__TimeZoneInfo_TransitionTime_();

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable();

  /// @brief Method op_Inequality, addr 0x3d56fec, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::TimeZoneInfo_TransitionTime t1, ::System::TimeZoneInfo_TransitionTime t2);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeZoneInfo_TransitionTime();

  // Ctor Parameters [CppParam { name: "_timeOfDay", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "_month", ty: "uint8_t", modifiers: "", def_value: None }, CppParam {
  // name: "_week", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_day", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_dayOfWeek", ty: "::System::DayOfWeek",
  // modifiers: "", def_value: None }, CppParam { name: "_isFixedDateRule", ty: "bool", modifiers: "", def_value: None }]
  constexpr TimeZoneInfo_TransitionTime(::System::DateTime _timeOfDay, uint8_t _month, uint8_t _week, uint8_t _day, ::System::DayOfWeek _dayOfWeek, bool _isFixedDateRule) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2317 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::TimeZoneInfo_TransitionTime, _timeOfDay) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_TransitionTime, _month) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_TransitionTime, _week) == 0x9, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_TransitionTime, _day) == 0xa, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_TransitionTime, _dayOfWeek) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_TransitionTime, _isFixedDateRule) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::TimeZoneInfo_TransitionTime, 0x18>, "Size mismatch!");

} // namespace System
// Dependencies System.DateTime, System.IEquatable`1<T>, System.Object, System.Runtime.Serialization.IDeserializationCallback, System.Runtime.Serialization.ISerializable, System.TimeSpan,
// System.TimeZoneInfo::TransitionTime
namespace System {
// Is value type: false
// CS Name: System.TimeZoneInfo/AdjustmentRule
class CORDL_TYPE TimeZoneInfo_AdjustmentRule : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BaseUtcOffsetDelta)) ::System::TimeSpan BaseUtcOffsetDelta;

  __declspec(property(get = get_DateEnd)) ::System::DateTime DateEnd;

  __declspec(property(get = get_DateStart)) ::System::DateTime DateStart;

  __declspec(property(get = get_DaylightDelta)) ::System::TimeSpan DaylightDelta;

  __declspec(property(get = get_DaylightTransitionEnd)) ::System::TimeZoneInfo_TransitionTime DaylightTransitionEnd;

  __declspec(property(get = get_DaylightTransitionStart)) ::System::TimeZoneInfo_TransitionTime DaylightTransitionStart;

  __declspec(property(get = get_HasDaylightSaving)) bool HasDaylightSaving;

  __declspec(property(get = get_NoDaylightTransitions)) bool NoDaylightTransitions;

  /// @brief Field _baseUtcOffsetDelta, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__baseUtcOffsetDelta, put = __cordl_internal_set__baseUtcOffsetDelta)) ::System::TimeSpan _baseUtcOffsetDelta;

  /// @brief Field _dateEnd, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__dateEnd, put = __cordl_internal_set__dateEnd)) ::System::DateTime _dateEnd;

  /// @brief Field _dateStart, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dateStart, put = __cordl_internal_set__dateStart)) ::System::DateTime _dateStart;

  /// @brief Field _daylightDelta, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__daylightDelta, put = __cordl_internal_set__daylightDelta)) ::System::TimeSpan _daylightDelta;

  /// @brief Field _daylightTransitionEnd, offset 0x40, size 0x18
  __declspec(property(get = __cordl_internal_get__daylightTransitionEnd, put = __cordl_internal_set__daylightTransitionEnd)) ::System::TimeZoneInfo_TransitionTime _daylightTransitionEnd;

  /// @brief Field _daylightTransitionStart, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get__daylightTransitionStart, put = __cordl_internal_set__daylightTransitionStart)) ::System::TimeZoneInfo_TransitionTime _daylightTransitionStart;

  /// @brief Field _noDaylightTransitions, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__noDaylightTransitions, put = __cordl_internal_set__noDaylightTransitions)) bool _noDaylightTransitions;

  /// @brief Convert operator to "::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>"
  constexpr operator ::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method CreateAdjustmentRule, addr 0x3d4d678, size 0x108, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo_AdjustmentRule* CreateAdjustmentRule(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta,
                                                                            ::System::TimeZoneInfo_TransitionTime daylightTransitionStart, ::System::TimeZoneInfo_TransitionTime daylightTransitionEnd);

  /// @brief Method CreateAdjustmentRule, addr 0x3d4fff4, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo_AdjustmentRule* CreateAdjustmentRule(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta,
                                                                            ::System::TimeZoneInfo_TransitionTime daylightTransitionStart, ::System::TimeZoneInfo_TransitionTime daylightTransitionEnd,
                                                                            ::System::TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions);

  /// @brief Method Equals, addr 0x3d53d2c, size 0x164, virtual true, abstract: false, final true
  inline bool Equals(::System::TimeZoneInfo_AdjustmentRule* other);

  /// @brief Method GetHashCode, addr 0x3d570f8, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsEndDateMarkerForEndOfYear, addr 0x3d552e4, size 0x118, virtual false, abstract: false, final false
  inline bool IsEndDateMarkerForEndOfYear();

  /// @brief Method IsStartDateMarkerForBeginningOfYear, addr 0x3d551cc, size 0x118, virtual false, abstract: false, final false
  inline bool IsStartDateMarkerForBeginningOfYear();

  static inline ::System::TimeZoneInfo_AdjustmentRule* New_ctor();

  static inline ::System::TimeZoneInfo_AdjustmentRule* New_ctor(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta,
                                                                ::System::TimeZoneInfo_TransitionTime daylightTransitionStart, ::System::TimeZoneInfo_TransitionTime daylightTransitionEnd,
                                                                ::System::TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions);

  static inline ::System::TimeZoneInfo_AdjustmentRule* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x3d5773c, size 0x114, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x3d57850, size 0x240, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ValidateAdjustmentRule, addr 0x3d57218, size 0x4e8, virtual false, abstract: false, final false
  static inline void ValidateAdjustmentRule(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta, ::System::TimeZoneInfo_TransitionTime daylightTransitionStart,
                                            ::System::TimeZoneInfo_TransitionTime daylightTransitionEnd, bool noDaylightTransitions);

  constexpr ::System::TimeSpan const& __cordl_internal_get__baseUtcOffsetDelta() const;

  constexpr ::System::TimeSpan& __cordl_internal_get__baseUtcOffsetDelta();

  constexpr ::System::DateTime const& __cordl_internal_get__dateEnd() const;

  constexpr ::System::DateTime& __cordl_internal_get__dateEnd();

  constexpr ::System::DateTime const& __cordl_internal_get__dateStart() const;

  constexpr ::System::DateTime& __cordl_internal_get__dateStart();

  constexpr ::System::TimeSpan const& __cordl_internal_get__daylightDelta() const;

  constexpr ::System::TimeSpan& __cordl_internal_get__daylightDelta();

  constexpr ::System::TimeZoneInfo_TransitionTime const& __cordl_internal_get__daylightTransitionEnd() const;

  constexpr ::System::TimeZoneInfo_TransitionTime& __cordl_internal_get__daylightTransitionEnd();

  constexpr ::System::TimeZoneInfo_TransitionTime const& __cordl_internal_get__daylightTransitionStart() const;

  constexpr ::System::TimeZoneInfo_TransitionTime& __cordl_internal_get__daylightTransitionStart();

  constexpr bool const& __cordl_internal_get__noDaylightTransitions() const;

  constexpr bool& __cordl_internal_get__noDaylightTransitions();

  constexpr void __cordl_internal_set__baseUtcOffsetDelta(::System::TimeSpan value);

  constexpr void __cordl_internal_set__dateEnd(::System::DateTime value);

  constexpr void __cordl_internal_set__dateStart(::System::DateTime value);

  constexpr void __cordl_internal_set__daylightDelta(::System::TimeSpan value);

  constexpr void __cordl_internal_set__daylightTransitionEnd(::System::TimeZoneInfo_TransitionTime value);

  constexpr void __cordl_internal_set__daylightTransitionStart(::System::TimeZoneInfo_TransitionTime value);

  constexpr void __cordl_internal_set__noDaylightTransitions(bool value);

  /// @brief Method .ctor, addr 0x3d57ea4, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d57150, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta, ::System::TimeZoneInfo_TransitionTime daylightTransitionStart,
                    ::System::TimeZoneInfo_TransitionTime daylightTransitionEnd, ::System::TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions);

  /// @brief Method .ctor, addr 0x3d57a90, size 0x414, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_BaseUtcOffsetDelta, addr 0x3d56fdc, size 0x8, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_BaseUtcOffsetDelta();

  /// @brief Method get_DateEnd, addr 0x3d56fa4, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_DateEnd();

  /// @brief Method get_DateStart, addr 0x3d56f9c, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_DateStart();

  /// @brief Method get_DaylightDelta, addr 0x3d56fac, size 0x8, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_DaylightDelta();

  /// @brief Method get_DaylightTransitionEnd, addr 0x3d56fc8, size 0x14, virtual false, abstract: false, final false
  inline ::System::TimeZoneInfo_TransitionTime get_DaylightTransitionEnd();

  /// @brief Method get_DaylightTransitionStart, addr 0x3d56fb4, size 0x14, virtual false, abstract: false, final false
  inline ::System::TimeZoneInfo_TransitionTime get_DaylightTransitionStart();

  /// @brief Method get_HasDaylightSaving, addr 0x3d52d28, size 0x168, virtual false, abstract: false, final false
  inline bool get_HasDaylightSaving();

  /// @brief Method get_NoDaylightTransitions, addr 0x3d56fe4, size 0x8, virtual false, abstract: false, final false
  inline bool get_NoDaylightTransitions();

  /// @brief Convert to "::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>"
  constexpr ::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>* i___System__IEquatable_1___System__TimeZoneInfo_AdjustmentRule__() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeZoneInfo_AdjustmentRule();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo_AdjustmentRule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeZoneInfo_AdjustmentRule(TimeZoneInfo_AdjustmentRule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo_AdjustmentRule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeZoneInfo_AdjustmentRule(TimeZoneInfo_AdjustmentRule const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2316 };

  /// @brief Field _dateStart, offset: 0x10, size: 0x8, def value: None
  ::System::DateTime ____dateStart;

  /// @brief Field _dateEnd, offset: 0x18, size: 0x8, def value: None
  ::System::DateTime ____dateEnd;

  /// @brief Field _daylightDelta, offset: 0x20, size: 0x8, def value: None
  ::System::TimeSpan ____daylightDelta;

  /// @brief Field _daylightTransitionStart, offset: 0x28, size: 0x18, def value: None
  ::System::TimeZoneInfo_TransitionTime ____daylightTransitionStart;

  /// @brief Field _daylightTransitionEnd, offset: 0x40, size: 0x18, def value: None
  ::System::TimeZoneInfo_TransitionTime ____daylightTransitionEnd;

  /// @brief Field _baseUtcOffsetDelta, offset: 0x58, size: 0x8, def value: None
  ::System::TimeSpan ____baseUtcOffsetDelta;

  /// @brief Field _noDaylightTransitions, offset: 0x60, size: 0x1, def value: None
  bool ____noDaylightTransitions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::TimeZoneInfo_AdjustmentRule, ____dateStart) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_AdjustmentRule, ____dateEnd) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_AdjustmentRule, ____daylightDelta) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_AdjustmentRule, ____daylightTransitionStart) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_AdjustmentRule, ____daylightTransitionEnd) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_AdjustmentRule, ____baseUtcOffsetDelta) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_AdjustmentRule, ____noDaylightTransitions) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::TimeZoneInfo_AdjustmentRule, 0x68>, "Size mismatch!");

} // namespace System
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.TimeZoneInfo/CachedData
class CORDL_TYPE TimeZoneInfo_CachedData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Local)) ::System::TimeZoneInfo* Local;

  /// @brief Field _localTimeZone, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__localTimeZone, put = __cordl_internal_set__localTimeZone)) ::System::TimeZoneInfo* _localTimeZone;

  /// @brief Method CreateLocal, addr 0x3d588cc, size 0x184, virtual false, abstract: false, final false
  inline ::System::TimeZoneInfo* CreateLocal();

  /// @brief Method GetCorrespondingKind, addr 0x3d524dc, size 0x8c, virtual false, abstract: false, final false
  inline ::System::DateTimeKind GetCorrespondingKind(::System::TimeZoneInfo* timeZone);

  static inline ::System::TimeZoneInfo_CachedData* New_ctor();

  constexpr ::System::TimeZoneInfo* const& __cordl_internal_get__localTimeZone() const;

  constexpr ::System::TimeZoneInfo*& __cordl_internal_get__localTimeZone();

  constexpr void __cordl_internal_set__localTimeZone(::System::TimeZoneInfo* value);

  /// @brief Method .ctor, addr 0x3d56f5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Local, addr 0x3d5242c, size 0x38, virtual false, abstract: false, final false
  inline ::System::TimeZoneInfo* get_Local();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeZoneInfo_CachedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo_CachedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeZoneInfo_CachedData(TimeZoneInfo_CachedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo_CachedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeZoneInfo_CachedData(TimeZoneInfo_CachedData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2318 };

  /// @brief Field _localTimeZone, offset: 0x10, size: 0x8, def value: None
  ::System::TimeZoneInfo* ____localTimeZone;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::TimeZoneInfo_CachedData, ____localTimeZone) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::TimeZoneInfo_CachedData, 0x18>, "Size mismatch!");

} // namespace System
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.TimeZoneInfo/<>c__DisplayClass16_0
class CORDL_TYPE TimeZoneInfo___c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field buffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field id, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id)) ::StringW id;

  /// @brief Field localtimeFilePath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_localtimeFilePath, put = __cordl_internal_set_localtimeFilePath)) ::StringW localtimeFilePath;

  /// @brief Field posixrulesFilePath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_posixrulesFilePath, put = __cordl_internal_set_posixrulesFilePath)) ::StringW posixrulesFilePath;

  /// @brief Field rawData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_rawData, put = __cordl_internal_set_rawData)) ::ArrayW<uint8_t, ::Array<uint8_t>*> rawData;

  /// @brief Field timeZoneDirectory, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_timeZoneDirectory, put = __cordl_internal_set_timeZoneDirectory)) ::StringW timeZoneDirectory;

  static inline ::System::TimeZoneInfo___c__DisplayClass16_0* New_ctor();

  /// @brief Method <FindTimeZoneId>b__0, addr 0x3d58a50, size 0xf4, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x3d4e91c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeZoneInfo___c__DisplayClass16_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo___c__DisplayClass16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeZoneInfo___c__DisplayClass16_0(TimeZoneInfo___c__DisplayClass16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo___c__DisplayClass16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeZoneInfo___c__DisplayClass16_0(TimeZoneInfo___c__DisplayClass16_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2319 };

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
static_assert(offsetof(::System::TimeZoneInfo___c__DisplayClass16_0, ___localtimeFilePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo___c__DisplayClass16_0, ___posixrulesFilePath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo___c__DisplayClass16_0, ___buffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo___c__DisplayClass16_0, ___rawData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo___c__DisplayClass16_0, ___id) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo___c__DisplayClass16_0, ___timeZoneDirectory) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::TimeZoneInfo___c__DisplayClass16_0, 0x40>, "Size mismatch!");

} // namespace System
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.TimeZoneInfo/<>c
class CORDL_TYPE TimeZoneInfo___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::TimeZoneInfo___c* __9;

  /// @brief Field <>9__161_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__161_0, put = setStaticF___9__161_0)) ::System::Comparison_1<::System::TimeZoneInfo_AdjustmentRule*>* __9__161_0;

  /// @brief Field <>9__34_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__34_0, put = setStaticF___9__34_0)) ::System::Func_2<char16_t, bool>* __9__34_0;

  /// @brief Field <>9__34_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__34_1, put = setStaticF___9__34_1)) ::System::Func_2<char16_t, bool>* __9__34_1;

  /// @brief Field <>9__35_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__35_0, put = setStaticF___9__35_0)) ::System::Func_2<char16_t, bool>* __9__35_0;

  /// @brief Field <>9__37_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__37_0, put = setStaticF___9__37_0)) ::System::Func_2<char16_t, bool>* __9__37_0;

  /// @brief Field <>9__38_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__38_0, put = setStaticF___9__38_0)) ::System::Func_2<char16_t, bool>* __9__38_0;

  static inline ::System::TimeZoneInfo___c* New_ctor();

  /// @brief Method <CreateLocalUnity>b__161_0, addr 0x3d58d58, size 0x84, virtual false, abstract: false, final false
  inline int32_t _CreateLocalUnity_b__161_0(::System::TimeZoneInfo_AdjustmentRule* rule1, ::System::TimeZoneInfo_AdjustmentRule* rule2);

  /// @brief Method <TZif_ParsePosixDate>b__37_0, addr 0x3d58d2c, size 0x1c, virtual false, abstract: false, final false
  inline bool _TZif_ParsePosixDate_b__37_0(char16_t c);

  /// @brief Method <TZif_ParsePosixName>b__34_0, addr 0x3d58bb8, size 0x70, virtual false, abstract: false, final false
  inline bool _TZif_ParsePosixName_b__34_0(char16_t c);

  /// @brief Method <TZif_ParsePosixName>b__34_1, addr 0x3d58ba8, size 0x10, virtual false, abstract: false, final false
  inline bool _TZif_ParsePosixName_b__34_1(char16_t c);

  /// @brief Method <TZif_ParsePosixOffset>b__35_0, addr 0x3d58cac, size 0x80, virtual false, abstract: false, final false
  inline bool _TZif_ParsePosixOffset_b__35_0(char16_t c);

  /// @brief Method <TZif_ParsePosixTime>b__38_0, addr 0x3d58d48, size 0x10, virtual false, abstract: false, final false
  inline bool _TZif_ParsePosixTime_b__38_0(char16_t c);

  /// @brief Method .ctor, addr 0x3d58ba0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::TimeZoneInfo___c* getStaticF___9();

  static inline ::System::Comparison_1<::System::TimeZoneInfo_AdjustmentRule*>* getStaticF___9__161_0();

  static inline ::System::Func_2<char16_t, bool>* getStaticF___9__34_0();

  static inline ::System::Func_2<char16_t, bool>* getStaticF___9__34_1();

  static inline ::System::Func_2<char16_t, bool>* getStaticF___9__35_0();

  static inline ::System::Func_2<char16_t, bool>* getStaticF___9__37_0();

  static inline ::System::Func_2<char16_t, bool>* getStaticF___9__38_0();

  static inline void setStaticF___9(::System::TimeZoneInfo___c* value);

  static inline void setStaticF___9__161_0(::System::Comparison_1<::System::TimeZoneInfo_AdjustmentRule*>* value);

  static inline void setStaticF___9__34_0(::System::Func_2<char16_t, bool>* value);

  static inline void setStaticF___9__34_1(::System::Func_2<char16_t, bool>* value);

  static inline void setStaticF___9__35_0(::System::Func_2<char16_t, bool>* value);

  static inline void setStaticF___9__37_0(::System::Func_2<char16_t, bool>* value);

  static inline void setStaticF___9__38_0(::System::Func_2<char16_t, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeZoneInfo___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeZoneInfo___c(TimeZoneInfo___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeZoneInfo___c(TimeZoneInfo___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2320 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TimeZoneInfo___c, 0x10>, "Size mismatch!");

} // namespace System
// Dependencies System.DateTime, System.IEquatable`1<T>, System.Object, System.Runtime.Serialization.IDeserializationCallback, System.Runtime.Serialization.ISerializable, System.TimeSpan
namespace System {
// Is value type: false
// CS Name: System.TimeZoneInfo
class CORDL_TYPE TimeZoneInfo : public ::System::Object {
public:
  // Declarations
  using AdjustmentRule = ::System::TimeZoneInfo_AdjustmentRule;

  using CachedData = ::System::TimeZoneInfo_CachedData;

  using TZVersion = ::System::TimeZoneInfo_TZVersion;

  using TZifHead = ::System::TimeZoneInfo_TZifHead;

  using TZifType = ::System::TimeZoneInfo_TZifType;

  using TransitionTime = ::System::TimeZoneInfo_TransitionTime;

  using __c = ::System::TimeZoneInfo___c;

  using __c__DisplayClass16_0 = ::System::TimeZoneInfo___c__DisplayClass16_0;

  __declspec(property(get = get_BaseUtcOffset)) ::System::TimeSpan BaseUtcOffset;

  __declspec(property(get = get_DaylightName)) ::StringW DaylightName;

  __declspec(property(get = get_DisplayName)) ::StringW DisplayName;

  /// @brief Field MaxOffset, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MaxOffset, put = setStaticF_MaxOffset)) ::System::TimeSpan MaxOffset;

  /// @brief Field MinOffset, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MinOffset, put = setStaticF_MinOffset)) ::System::TimeSpan MinOffset;

  __declspec(property(get = get_StandardName)) ::StringW StandardName;

  __declspec(property(get = get_SupportsDaylightSavingTime)) bool SupportsDaylightSavingTime;

  /// @brief Field _adjustmentRules, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__adjustmentRules,
                      put = __cordl_internal_set__adjustmentRules)) ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*, ::Array<::System::TimeZoneInfo_AdjustmentRule*>*>
      _adjustmentRules;

  /// @brief Field _baseUtcOffset, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__baseUtcOffset, put = __cordl_internal_set__baseUtcOffset)) ::System::TimeSpan _baseUtcOffset;

  /// @brief Field _daylightDisplayName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__daylightDisplayName, put = __cordl_internal_set__daylightDisplayName)) ::StringW _daylightDisplayName;

  /// @brief Field _displayName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__displayName, put = __cordl_internal_set__displayName)) ::StringW _displayName;

  /// @brief Field _id, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__id, put = __cordl_internal_set__id)) ::StringW _id;

  /// @brief Field _standardDisplayName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__standardDisplayName, put = __cordl_internal_set__standardDisplayName)) ::StringW _standardDisplayName;

  /// @brief Field _supportsDaylightSavingTime, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__supportsDaylightSavingTime, put = __cordl_internal_set__supportsDaylightSavingTime)) bool _supportsDaylightSavingTime;

  /// @brief Field s_cachedData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_cachedData, put = setStaticF_s_cachedData)) ::System::TimeZoneInfo_CachedData* s_cachedData;

  /// @brief Field s_maxDateOnly, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_maxDateOnly, put = setStaticF_s_maxDateOnly)) ::System::DateTime s_maxDateOnly;

  /// @brief Field s_minDateOnly, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_minDateOnly, put = setStaticF_s_minDateOnly)) ::System::DateTime s_minDateOnly;

  /// @brief Field s_utcTimeZone, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_utcTimeZone, put = setStaticF_s_utcTimeZone)) ::System::TimeZoneInfo* s_utcTimeZone;

  /// @brief Convert operator to "::System::IEquatable_1<::System::TimeZoneInfo*>"
  constexpr operator ::System::IEquatable_1<::System::TimeZoneInfo*>*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method CheckIsDst, addr 0x3d553fc, size 0x228, virtual false, abstract: false, final false
  static inline bool CheckIsDst(::System::DateTime startTime, ::System::DateTime time, ::System::DateTime endTime, bool ignoreYearAdjustment, ::System::TimeZoneInfo_AdjustmentRule* rule);

  /// @brief Method CompareAdjustmentRuleToDateTime, addr 0x3d54b24, size 0x1ac, virtual false, abstract: false, final false
  inline int32_t CompareAdjustmentRuleToDateTime(::System::TimeZoneInfo_AdjustmentRule* rule, ::System::TimeZoneInfo_AdjustmentRule* previousRule, ::System::DateTime dateTime,
                                                 ::System::DateTime dateOnly, bool dateTimeisUtc);

  /// @brief Method CompareTimeZoneFile, addr 0x3d4e924, size 0x3b0, virtual false, abstract: false, final false
  static inline bool CompareTimeZoneFile(::StringW filePath, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawData);

  /// @brief Method ConvertFromUtc, addr 0x3d54e78, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime ConvertFromUtc(::System::DateTime dateTime, ::System::TimeSpan daylightDelta, ::System::TimeSpan baseUtcOffsetDelta);

  /// @brief Method ConvertTime, addr 0x3d52568, size 0x88, virtual false, abstract: false, final false
  static inline ::System::DateTime ConvertTime(::System::DateTime dateTime, ::System::TimeZoneInfo* sourceTimeZone, ::System::TimeZoneInfo* destinationTimeZone, ::System::TimeZoneInfoOptions flags);

  /// @brief Method ConvertTime, addr 0x3d52810, size 0x46c, virtual false, abstract: false, final false
  static inline ::System::DateTime ConvertTime(::System::DateTime dateTime, ::System::TimeZoneInfo* sourceTimeZone, ::System::TimeZoneInfo* destinationTimeZone, ::System::TimeZoneInfoOptions flags,
                                               ::System::TimeZoneInfo_CachedData* cachedData);

  /// @brief Method ConvertTimeToUtc, addr 0x3d53980, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::DateTime ConvertTimeToUtc(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags);

  /// @brief Method ConvertToFromUtc, addr 0x3d54cd8, size 0x1a0, virtual false, abstract: false, final false
  inline ::System::DateTime ConvertToFromUtc(::System::DateTime dateTime, ::System::TimeSpan daylightDelta, ::System::TimeSpan baseUtcOffsetDelta, bool convertToUtc);

  /// @brief Method ConvertToUtc, addr 0x3d54cd0, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime ConvertToUtc(::System::DateTime dateTime, ::System::TimeSpan daylightDelta, ::System::TimeSpan baseUtcOffsetDelta);

  /// @brief Method ConvertUtcToTimeZone, addr 0x3d53778, size 0x208, virtual false, abstract: false, final false
  static inline ::System::DateTime ConvertUtcToTimeZone(int64_t ticks, ::System::TimeZoneInfo* destinationTimeZone, ::ByRef<bool> isAmbiguousLocalDst);

  /// @brief Method CreateAdjustmentRule, addr 0x3d5654c, size 0x8a4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>* CreateAdjustmentRule(int32_t year, ::ByRef<::ArrayW<int64_t, ::Array<int64_t>*>> data,
                                                                                                                     ::ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> names);

  /// @brief Method CreateCustomTimeZone, addr 0x3d5401c, size 0x94, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo* CreateCustomTimeZone(::StringW id, ::System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName);

  /// @brief Method CreateCustomTimeZone, addr 0x3d540b0, size 0x104, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo* CreateCustomTimeZone(::StringW id, ::System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName, ::StringW daylightDisplayName,
                                                             ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*, ::Array<::System::TimeZoneInfo_AdjustmentRule*>*> adjustmentRules,
                                                             bool disableDaylightSavingTime);

  /// @brief Method CreateLocalUnity, addr 0x3d4ee7c, size 0x4c4, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo* CreateLocalUnity();

  /// @brief Method EnumerateFilesRecursively, addr 0x3d4e364, size 0x5b8, virtual false, abstract: false, final false
  static inline void EnumerateFilesRecursively(::StringW path, ::System::Predicate_1<::StringW>* condition);

  /// @brief Method Equals, addr 0x3d53c28, size 0x64, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x3d53a74, size 0x50, virtual true, abstract: false, final true
  inline bool Equals(::System::TimeZoneInfo* other);

  /// @brief Method FindTimeZoneId, addr 0x3d4df8c, size 0x26c, virtual false, abstract: false, final false
  static inline ::StringW FindTimeZoneId(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData);

  /// @brief Method FindTimeZoneIdUsingReadLink, addr 0x3d4de80, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW FindTimeZoneIdUsingReadLink(::StringW tzFilePath);

  /// @brief Method GetAdjustmentRuleForTime, addr 0x3d54970, size 0x1b4, virtual false, abstract: false, final false
  inline ::System::TimeZoneInfo_AdjustmentRule* GetAdjustmentRuleForTime(::System::DateTime dateTime, bool dateTimeisUtc, ::ByRef<::System::Nullable_1<int32_t>> ruleIndex);

  /// @brief Method GetAdjustmentRuleForTime, addr 0x3d52d1c, size 0xc, virtual false, abstract: false, final false
  inline ::System::TimeZoneInfo_AdjustmentRule* GetAdjustmentRuleForTime(::System::DateTime dateTime, ::ByRef<::System::Nullable_1<int32_t>> ruleIndex);

  /// @brief Method GetAdjustmentRules, addr 0x3d4d1a8, size 0x470, virtual false, abstract: false, final false
  inline ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*, ::Array<::System::TimeZoneInfo_AdjustmentRule*>*> GetAdjustmentRules();

  /// @brief Method GetDateTimeNowUtcOffsetFromUtc, addr 0x3d4f39c, size 0x78, virtual false, abstract: false, final false
  static inline ::System::TimeSpan GetDateTimeNowUtcOffsetFromUtc(::System::DateTime time, ::ByRef<bool> isAmbiguousLocalDst);

  /// @brief Method GetDaylightSavingsEndOffsetFromUtc, addr 0x3d55ab0, size 0x78, virtual false, abstract: false, final false
  inline ::System::TimeSpan GetDaylightSavingsEndOffsetFromUtc(::System::TimeSpan baseUtcOffset, ::System::TimeZoneInfo_AdjustmentRule* rule);

  /// @brief Method GetDaylightSavingsStartOffsetFromUtc, addr 0x3d559e8, size 0xc8, virtual false, abstract: false, final false
  inline ::System::TimeSpan GetDaylightSavingsStartOffsetFromUtc(::System::TimeSpan baseUtcOffset, ::System::TimeZoneInfo_AdjustmentRule* rule, ::System::Nullable_1<int32_t> ruleIndex);

  /// @brief Method GetDaylightTime, addr 0x3d52e90, size 0x13c, virtual false, abstract: false, final false
  inline ::System::Globalization::DaylightTimeStruct GetDaylightTime(int32_t year, ::System::TimeZoneInfo_AdjustmentRule* rule, ::System::Nullable_1<int32_t> ruleIndex);

  /// @brief Method GetDirectoryEntryFullPath, addr 0x3d4e1f8, size 0x16c, virtual false, abstract: false, final false
  static inline ::StringW GetDirectoryEntryFullPath(::ByRef<::GlobalNamespace::Sys_Interop_DirectoryEntry> dirent, ::StringW currentPath);

  /// @brief Method GetHashCode, addr 0x3d53c8c, size 0xa0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetIsAmbiguousTime, addr 0x3d55624, size 0x3c4, virtual false, abstract: false, final false
  static inline bool GetIsAmbiguousTime(::System::DateTime time, ::System::TimeZoneInfo_AdjustmentRule* rule, ::System::Globalization::DaylightTimeStruct daylightTime);

  /// @brief Method GetIsDaylightSavings, addr 0x3d53398, size 0x3e0, virtual false, abstract: false, final false
  static inline bool GetIsDaylightSavings(::System::DateTime time, ::System::TimeZoneInfo_AdjustmentRule* rule, ::System::Globalization::DaylightTimeStruct daylightTime,
                                          ::System::TimeZoneInfoOptions flags);

  /// @brief Method GetIsDaylightSavingsFromUtc, addr 0x3d55b28, size 0x7ec, virtual false, abstract: false, final false
  static inline bool GetIsDaylightSavingsFromUtc(::System::DateTime time, int32_t year, ::System::TimeSpan utc, ::System::TimeZoneInfo_AdjustmentRule* rule, ::System::Nullable_1<int32_t> ruleIndex,
                                                 ::ByRef<bool> isAmbiguousLocalDst, ::System::TimeZoneInfo* zone);

  /// @brief Method GetIsInvalidTime, addr 0x3d52fcc, size 0x3cc, virtual false, abstract: false, final false
  static inline bool GetIsInvalidTime(::System::DateTime time, ::System::TimeZoneInfo_AdjustmentRule* rule, ::System::Globalization::DaylightTimeStruct daylightTime);

  /// @brief Method GetLocalTimeZone, addr 0x3d4d780, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo* GetLocalTimeZone(::System::TimeZoneInfo_CachedData* cachedData);

  /// @brief Method GetLocalTimeZoneFromTzFile, addr 0x3d4d7cc, size 0x164, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo* GetLocalTimeZoneFromTzFile();

  /// @brief Method GetLocalUtcOffset, addr 0x3d52390, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::TimeSpan GetLocalUtcOffset(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags);

  /// @brief Method GetPreviousAdjustmentRule, addr 0x3d52060, size 0x124, virtual false, abstract: false, final false
  inline ::System::TimeZoneInfo_AdjustmentRule* GetPreviousAdjustmentRule(::System::TimeZoneInfo_AdjustmentRule* rule, ::System::Nullable_1<int32_t> ruleIndex);

  /// @brief Method GetTimeZoneDirectory, addr 0x3d4dd10, size 0x170, virtual false, abstract: false, final false
  static inline ::StringW GetTimeZoneDirectory();

  /// @brief Method GetTimeZoneDirectoryUnity, addr 0x3d56504, size 0x48, virtual false, abstract: false, final false
  static inline ::StringW GetTimeZoneDirectoryUnity();

  /// @brief Method GetTimeZoneFromTzData, addr 0x3d4ecd4, size 0x1a8, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo* GetTimeZoneFromTzData(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData, ::StringW id);

  /// @brief Method GetTzEnvironmentVariable, addr 0x3d4dae8, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW GetTzEnvironmentVariable();

  /// @brief Method GetUtcOffset, addr 0x3d5643c, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::TimeSpan GetUtcOffset(::System::TimeSpan baseUtcOffset, ::System::TimeZoneInfo_AdjustmentRule* adjustmentRule);

  /// @brief Method GetUtcOffset, addr 0x3d52184, size 0x74, virtual false, abstract: false, final false
  inline ::System::TimeSpan GetUtcOffset(::System::DateTime dateTime);

  /// @brief Method GetUtcOffset, addr 0x3d52464, size 0x78, virtual false, abstract: false, final false
  inline ::System::TimeSpan GetUtcOffset(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags);

  /// @brief Method GetUtcOffset, addr 0x3d521f8, size 0x198, virtual false, abstract: false, final false
  inline ::System::TimeSpan GetUtcOffset(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags, ::System::TimeZoneInfo_CachedData* cachedData);

  /// @brief Method GetUtcOffset, addr 0x3d52660, size 0x1b0, virtual false, abstract: false, final false
  static inline ::System::TimeSpan GetUtcOffset(::System::DateTime time, ::System::TimeZoneInfo* zone, ::System::TimeZoneInfoOptions flags);

  /// @brief Method GetUtcOffsetFromUtc, addr 0x3d525f0, size 0x70, virtual false, abstract: false, final false
  static inline ::System::TimeSpan GetUtcOffsetFromUtc(::System::DateTime time, ::System::TimeZoneInfo* zone);

  /// @brief Method GetUtcOffsetFromUtc, addr 0x3d54e80, size 0x80, virtual false, abstract: false, final false
  static inline ::System::TimeSpan GetUtcOffsetFromUtc(::System::DateTime time, ::System::TimeZoneInfo* zone, ::ByRef<bool> isDaylightSavings);

  /// @brief Method GetUtcOffsetFromUtc, addr 0x3d4f494, size 0x2d0, virtual false, abstract: false, final false
  static inline ::System::TimeSpan GetUtcOffsetFromUtc(::System::DateTime time, ::System::TimeZoneInfo* zone, ::ByRef<bool> isDaylightSavings, ::ByRef<bool> isAmbiguousLocalDst);

  /// @brief Method HasSameRules, addr 0x3d53ac4, size 0x164, virtual false, abstract: false, final false
  inline bool HasSameRules(::System::TimeZoneInfo* other);

  /// @brief Method IsValidAdjustmentRuleOffest, addr 0x3d500bc, size 0x74, virtual false, abstract: false, final false
  static inline bool IsValidAdjustmentRuleOffest(::System::TimeSpan baseUtcOffset, ::System::TimeZoneInfo_AdjustmentRule* adjustmentRule);

  static inline ::System::TimeZoneInfo* New_ctor();

  static inline ::System::TimeZoneInfo* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW id, bool dstDisabled);

  static inline ::System::TimeZoneInfo* New_ctor(::StringW id, ::System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName, ::StringW daylightDisplayName,
                                                 ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*, ::Array<::System::TimeZoneInfo_AdjustmentRule*>*> adjustmentRules, bool disableDaylightSavingTime);

  static inline ::System::TimeZoneInfo* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method NormalizeAdjustmentRuleOffset, addr 0x3d50130, size 0x240, virtual false, abstract: false, final false
  static inline void NormalizeAdjustmentRuleOffset(::System::TimeSpan baseUtcOffset, ::ByRef<::System::TimeZoneInfo_AdjustmentRule*> adjustmentRule);

  /// @brief Method ParseTimeOfDay, addr 0x3d50d40, size 0x254, virtual false, abstract: false, final false
  static inline ::System::DateTime ParseTimeOfDay(::StringW time);

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x3d541b4, size 0x1d4, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x3d54388, size 0x1d8, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method TZif_CalculateTransitionOffsetFromBase, addr 0x3d4ff04, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::TimeSpan TZif_CalculateTransitionOffsetFromBase(::System::TimeSpan transitionOffset, ::System::TimeSpan timeZoneBaseUtcOffset);

  /// @brief Method TZif_CreateAdjustmentRuleForPosixFormat, addr 0x3d50370, size 0x368, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo_AdjustmentRule* TZif_CreateAdjustmentRuleForPosixFormat(::StringW posixFormat, ::System::DateTime startTransitionDate, ::System::TimeSpan timeZoneBaseUtcOffset);

  /// @brief Method TZif_CreateTransitionTimeFromPosixRule, addr 0x3d50ae8, size 0x258, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo_TransitionTime TZif_CreateTransitionTimeFromPosixRule(::StringW date, ::StringW time);

  /// @brief Method TZif_GenerateAdjustmentRule, addr 0x3d4f764, size 0x6f0, virtual false, abstract: false, final false
  static inline void TZif_GenerateAdjustmentRule(::ByRef<int32_t> index, ::System::TimeSpan timeZoneBaseUtcOffset,
                                                 ::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>* rulesList,
                                                 ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*> dts, ::ArrayW<uint8_t, ::Array<uint8_t>*> typeOfLocalTime,
                                                 ::ArrayW<::System::TimeZoneInfo_TZifType, ::Array<::System::TimeZoneInfo_TZifType>*> transitionTypes, ::ArrayW<bool, ::Array<bool>*> StandardTime,
                                                 ::ArrayW<bool, ::Array<bool>*> GmtTime, ::StringW futureTransitionsPosixFormat);

  /// @brief Method TZif_GenerateAdjustmentRules, addr 0x3d4cd18, size 0x148, virtual false, abstract: false, final false
  static inline void TZif_GenerateAdjustmentRules(::ByRef<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*, ::Array<::System::TimeZoneInfo_AdjustmentRule*>*>> rules, ::System::TimeSpan baseUtcOffset,
                                                  ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*> dts, ::ArrayW<uint8_t, ::Array<uint8_t>*> typeOfLocalTime,
                                                  ::ArrayW<::System::TimeZoneInfo_TZifType, ::Array<::System::TimeZoneInfo_TZifType>*> transitionType, ::ArrayW<bool, ::Array<bool>*> StandardTime,
                                                  ::ArrayW<bool, ::Array<bool>*> GmtTime, ::StringW futureTransitionsPosixFormat);

  /// @brief Method TZif_GetEarlyDateTransitionType, addr 0x3d4fe54, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo_TZifType TZif_GetEarlyDateTransitionType(::ArrayW<::System::TimeZoneInfo_TZifType, ::Array<::System::TimeZoneInfo_TZifType>*> transitionTypes);

  /// @brief Method TZif_GetZoneAbbreviation, addr 0x3d4ccb4, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW TZif_GetZoneAbbreviation(::StringW zoneAbbreviations, int32_t index);

  /// @brief Method TZif_ParseJulianDay, addr 0x3d511f8, size 0x1c8, virtual false, abstract: false, final false
  static inline void TZif_ParseJulianDay(::StringW date, ::ByRef<int32_t> month, ::ByRef<int32_t> day);

  /// @brief Method TZif_ParseMDateRule, addr 0x3d50f94, size 0x1fc, virtual false, abstract: false, final false
  static inline bool TZif_ParseMDateRule(::StringW dateRule, ::ByRef<int32_t> month, ::ByRef<int32_t> week, ::ByRef<::System::DayOfWeek> dayOfWeek);

  /// @brief Method TZif_ParseOffsetString, addr 0x3d508d4, size 0x214, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::System::TimeSpan> TZif_ParseOffsetString(::StringW offset);

  /// @brief Method TZif_ParsePosixDate, addr 0x3d51874, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW TZif_ParsePosixDate(::StringW posixFormat, ::ByRef<int32_t> index);

  /// @brief Method TZif_ParsePosixDateTime, addr 0x3d51700, size 0xdc, virtual false, abstract: false, final false
  static inline void TZif_ParsePosixDateTime(::StringW posixFormat, ::ByRef<int32_t> index, ::ByRef<::StringW> date, ::ByRef<::StringW> time);

  /// @brief Method TZif_ParsePosixFormat, addr 0x3d506d8, size 0x1fc, virtual false, abstract: false, final false
  static inline bool TZif_ParsePosixFormat(::StringW posixFormat, ::ByRef<::StringW> standardName, ::ByRef<::StringW> standardOffset, ::ByRef<::StringW> daylightSavingsName,
                                           ::ByRef<::StringW> daylightSavingsOffset, ::ByRef<::StringW> start, ::ByRef<::StringW> startTime, ::ByRef<::StringW> end, ::ByRef<::StringW> endTime);

  /// @brief Method TZif_ParsePosixName, addr 0x3d513c0, size 0x234, virtual false, abstract: false, final false
  static inline ::StringW TZif_ParsePosixName(::StringW posixFormat, ::ByRef<int32_t> index);

  /// @brief Method TZif_ParsePosixOffset, addr 0x3d515f4, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW TZif_ParsePosixOffset(::StringW posixFormat, ::ByRef<int32_t> index);

  /// @brief Method TZif_ParsePosixString, addr 0x3d517dc, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW TZif_ParsePosixString(::StringW posixFormat, ::ByRef<int32_t> index, ::System::Func_2<char16_t, bool>* breakCondition);

  /// @brief Method TZif_ParsePosixTime, addr 0x3d51980, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW TZif_ParsePosixTime(::StringW posixFormat, ::ByRef<int32_t> index);

  /// @brief Method TZif_ParseRaw, addr 0x3d4c78c, size 0x528, virtual false, abstract: false, final false
  static inline void TZif_ParseRaw(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ByRef<::System::TimeZoneInfo_TZifHead> t, ::ByRef<::ArrayW<::System::DateTime, ::Array<::System::DateTime>*>> dts,
                                   ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> typeOfLocalTime,
                                   ::ByRef<::ArrayW<::System::TimeZoneInfo_TZifType, ::Array<::System::TimeZoneInfo_TZifType>*>> transitionType, ::ByRef<::StringW> zoneAbbreviations,
                                   ::ByRef<::ArrayW<bool, ::Array<bool>*>> StandardTime, ::ByRef<::ArrayW<bool, ::Array<bool>*>> GmtTime, ::ByRef<::StringW> futureTransitionsPosixFormat);

  /// @brief Method TZif_ToInt32, addr 0x3d51a8c, size 0x30, virtual false, abstract: false, final false
  static inline int32_t TZif_ToInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t startIndex);

  /// @brief Method TZif_ToInt64, addr 0x3d51abc, size 0x30, virtual false, abstract: false, final false
  static inline int64_t TZif_ToInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t startIndex);

  /// @brief Method TZif_ToUnixTime, addr 0x3d51aec, size 0x88, virtual false, abstract: false, final false
  static inline int64_t TZif_ToUnixTime(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t startIndex, ::System::TimeZoneInfo_TZVersion version);

  /// @brief Method TZif_UnixTimeToDateTime, addr 0x3d51b74, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::DateTime TZif_UnixTimeToDateTime(int64_t unixTime);

  /// @brief Method ToString, addr 0x3d53e90, size 0x54, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TransitionTimeToDateTime, addr 0x3d54f00, size 0x2cc, virtual false, abstract: false, final false
  static inline ::System::DateTime TransitionTimeToDateTime(int32_t year, ::System::TimeZoneInfo_TransitionTime transitionTime);

  /// @brief Method TryGetLocalTzFile, addr 0x3d4d930, size 0x1b8, virtual false, abstract: false, final false
  static inline bool TryGetLocalTzFile(::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> rawData, ::ByRef<::StringW> id);

  /// @brief Method TryLoadTzFile, addr 0x3d4db80, size 0x190, virtual false, abstract: false, final false
  static inline bool TryLoadTzFile(::StringW tzFilePath, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> rawData, ::ByRef<::StringW> id);

  /// @brief Method UtcOffsetOutOfRange, addr 0x3d56314, size 0xf0, virtual false, abstract: false, final false
  static inline bool UtcOffsetOutOfRange(::System::TimeSpan offset);

  /// @brief Method ValidateTimeZoneInfo, addr 0x3d4ce60, size 0x348, virtual false, abstract: false, final false
  static inline void ValidateTimeZoneInfo(::StringW id, ::System::TimeSpan baseUtcOffset,
                                          ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*, ::Array<::System::TimeZoneInfo_AdjustmentRule*>*> adjustmentRules, ::ByRef<bool> adjustmentRulesSupportDst);

  constexpr ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*, ::Array<::System::TimeZoneInfo_AdjustmentRule*>*> const& __cordl_internal_get__adjustmentRules() const;

  constexpr ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*, ::Array<::System::TimeZoneInfo_AdjustmentRule*>*>& __cordl_internal_get__adjustmentRules();

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

  constexpr void __cordl_internal_set__adjustmentRules(::ArrayW<::System::TimeZoneInfo_AdjustmentRule*, ::Array<::System::TimeZoneInfo_AdjustmentRule*>*> value);

  constexpr void __cordl_internal_set__baseUtcOffset(::System::TimeSpan value);

  constexpr void __cordl_internal_set__daylightDisplayName(::StringW value);

  constexpr void __cordl_internal_set__displayName(::StringW value);

  constexpr void __cordl_internal_set__id(::StringW value);

  constexpr void __cordl_internal_set__standardDisplayName(::StringW value);

  constexpr void __cordl_internal_set__supportsDaylightSavingTime(bool value);

  /// @brief Method .ctor, addr 0x3d56f64, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d4c340, size 0x44c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW id, bool dstDisabled);

  /// @brief Method .ctor, addr 0x3d53f3c, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::StringW id, ::System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName, ::StringW daylightDisplayName,
                    ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*, ::Array<::System::TimeZoneInfo_AdjustmentRule*>*> adjustmentRules, bool disableDaylightSavingTime);

  /// @brief Method .ctor, addr 0x3d54560, size 0x410, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::TimeSpan getStaticF_MaxOffset();

  static inline ::System::TimeSpan getStaticF_MinOffset();

  static inline ::System::TimeZoneInfo_CachedData* getStaticF_s_cachedData();

  static inline ::System::DateTime getStaticF_s_maxDateOnly();

  static inline ::System::DateTime getStaticF_s_minDateOnly();

  static inline ::System::TimeZoneInfo* getStaticF_s_utcTimeZone();

  /// @brief Method get_BaseUtcOffset, addr 0x3d52050, size 0x8, virtual false, abstract: false, final false
  inline ::System::TimeSpan get_BaseUtcOffset();

  /// @brief Method get_DaylightName, addr 0x3d51ffc, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_DaylightName();

  /// @brief Method get_DisplayName, addr 0x3d51f54, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_DisplayName();

  /// @brief Method get_Local, addr 0x3d4f414, size 0x80, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo* get_Local();

  /// @brief Method get_StandardName, addr 0x3d51fa8, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_StandardName();

  /// @brief Method get_SupportsDaylightSavingTime, addr 0x3d52058, size 0x8, virtual false, abstract: false, final false
  inline bool get_SupportsDaylightSavingTime();

  /// @brief Method get_Utc, addr 0x3d53ee4, size 0x58, virtual false, abstract: false, final false
  static inline ::System::TimeZoneInfo* get_Utc();

  /// @brief Convert to "::System::IEquatable_1<::System::TimeZoneInfo*>"
  constexpr ::System::IEquatable_1<::System::TimeZoneInfo*>* i___System__IEquatable_1___System__TimeZoneInfo__() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  static inline void setStaticF_MaxOffset(::System::TimeSpan value);

  static inline void setStaticF_MinOffset(::System::TimeSpan value);

  static inline void setStaticF_s_cachedData(::System::TimeZoneInfo_CachedData* value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2321 };

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
  ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*, ::Array<::System::TimeZoneInfo_AdjustmentRule*>*> ____adjustmentRules;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::TimeZoneInfo, ____id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____displayName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____standardDisplayName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____daylightDisplayName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____baseUtcOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____supportsDaylightSavingTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____adjustmentRules) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::TimeZoneInfo, 0x48>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::TimeZoneInfo_TZVersion, "System", "TimeZoneInfo/TZVersion");
NEED_NO_BOX(::System::TimeZoneInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::TimeZoneInfo*, "System", "TimeZoneInfo");
NEED_NO_BOX(::System::TimeZoneInfo_AdjustmentRule);
DEFINE_IL2CPP_ARG_TYPE(::System::TimeZoneInfo_AdjustmentRule*, "System", "TimeZoneInfo/AdjustmentRule");
NEED_NO_BOX(::System::TimeZoneInfo_CachedData);
DEFINE_IL2CPP_ARG_TYPE(::System::TimeZoneInfo_CachedData*, "System", "TimeZoneInfo/CachedData");
NEED_NO_BOX(::System::TimeZoneInfo___c);
DEFINE_IL2CPP_ARG_TYPE(::System::TimeZoneInfo___c*, "System", "TimeZoneInfo/<>c");
NEED_NO_BOX(::System::TimeZoneInfo___c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::System::TimeZoneInfo___c__DisplayClass16_0*, "System", "TimeZoneInfo/<>c__DisplayClass16_0");
DEFINE_IL2CPP_ARG_TYPE(::System::TimeZoneInfo_TZifHead, "System", "TimeZoneInfo/TZifHead");
DEFINE_IL2CPP_ARG_TYPE(::System::TimeZoneInfo_TZifType, "System", "TimeZoneInfo/TZifType");
DEFINE_IL2CPP_ARG_TYPE(::System::TimeZoneInfo_TransitionTime, "System", "TimeZoneInfo/TransitionTime");
