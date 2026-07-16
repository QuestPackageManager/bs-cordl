#pragma once
// IWYU pragma private; include "System/TimeZoneInfo.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__DayOfWeek_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/zzzz__TimeZoneInfo_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Globalization/zzzz__DaylightTimeStruct_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__DateTimeKind_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__TimeZoneInfoOptions_def.hpp"
#include "System/zzzz__TimeZoneInfo_def.hpp"
//  Writing Method size for method: ::System::TimeZoneInfo_TZifType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo_TZifType::*)(::ArrayW<uint8_t>, int32_t)>(&::System::TimeZoneInfo_TZifType::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5ba3c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TZifType>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::TimeZoneInfo_TZifType::_ctor(::ArrayW<uint8_t> data, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TZifType>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, index);
}
// Ctor Parameters [CppParam { name: "UtcOffset", ty: "::System::TimeSpan", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsDst", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "AbbreviationIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::TimeZoneInfo_TZifType::TimeZoneInfo_TZifType(::System::TimeSpan UtcOffset, bool IsDst, uint8_t AbbreviationIndex) noexcept {
  this->UtcOffset = UtcOffset;
  this->IsDst = IsDst;
  this->AbbreviationIndex = AbbreviationIndex;
}
// Ctor Parameters []
constexpr ::System::TimeZoneInfo_TZifType::TimeZoneInfo_TZifType() {}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::TimeZoneInfo_TZVersion::TimeZoneInfo_TZVersion(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::TimeZoneInfo_TZVersion::TimeZoneInfo_TZVersion() {}
constexpr ::System::TimeZoneInfo_TZVersion System::TimeZoneInfo_TZVersion::V1{ static_cast<uint8_t>(0x0u) };
constexpr ::System::TimeZoneInfo_TZVersion System::TimeZoneInfo_TZVersion::V2{ static_cast<uint8_t>(0x1u) };
constexpr ::System::TimeZoneInfo_TZVersion System::TimeZoneInfo_TZVersion::V3{ static_cast<uint8_t>(0x2u) };
//  Writing Method size for method: ::System::TimeZoneInfo_TZifHead._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo_TZifHead::*)(::ArrayW<uint8_t>, int32_t)>(&::System::TimeZoneInfo_TZifHead::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5ba3ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TZifHead>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::TimeZoneInfo_TZifHead::_ctor(::ArrayW<uint8_t> data, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TZifHead>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, index);
}
// Ctor Parameters [CppParam { name: "Magic", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Version", ty: "::System::TimeZoneInfo_TZVersion", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "IsGmtCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsStdCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "LeapCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "TimeCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "TypeCount", ty:
// "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "CharCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::TimeZoneInfo_TZifHead::TimeZoneInfo_TZifHead(uint32_t Magic, ::System::TimeZoneInfo_TZVersion Version, uint32_t IsGmtCount, uint32_t IsStdCount, uint32_t LeapCount,
                                                                 uint32_t TimeCount, uint32_t TypeCount, uint32_t CharCount) noexcept {
  this->Magic = Magic;
  this->Version = Version;
  this->IsGmtCount = IsGmtCount;
  this->IsStdCount = IsStdCount;
  this->LeapCount = LeapCount;
  this->TimeCount = TimeCount;
  this->TypeCount = TypeCount;
  this->CharCount = CharCount;
}
// Ctor Parameters []
constexpr ::System::TimeZoneInfo_TZifHead::TimeZoneInfo_TZifHead() {}
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.get_TimeOfDay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::TimeZoneInfo_TransitionTime::*)()>(&::System::TimeZoneInfo_TransitionTime::get_TimeOfDay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ba9bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), { "get_TimeOfDay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.get_Month
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeZoneInfo_TransitionTime::*)()>(&::System::TimeZoneInfo_TransitionTime::get_Month)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ba9bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), { "get_Month", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.get_Week
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeZoneInfo_TransitionTime::*)()>(&::System::TimeZoneInfo_TransitionTime::get_Week)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ba9bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), { "get_Week", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.get_Day
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeZoneInfo_TransitionTime::*)()>(&::System::TimeZoneInfo_TransitionTime::get_Day)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ba9bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), { "get_Day", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.get_DayOfWeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DayOfWeek (::System::TimeZoneInfo_TransitionTime::*)()>(&::System::TimeZoneInfo_TransitionTime::get_DayOfWeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ba9be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), { "get_DayOfWeek", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.get_IsFixedDateRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo_TransitionTime::*)()>(&::System::TimeZoneInfo_TransitionTime::get_IsFixedDateRule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ba9be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), { "get_IsFixedDateRule", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo_TransitionTime::*)(::System::Object*)>(&::System::TimeZoneInfo_TransitionTime::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ba9bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), { ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::TimeZoneInfo_TransitionTime, ::System::TimeZoneInfo_TransitionTime)>(&::System::TimeZoneInfo_TransitionTime::op_Inequality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ba8cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo_TransitionTime::*)(::System::TimeZoneInfo_TransitionTime)>(&::System::TimeZoneInfo_TransitionTime::Equals)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5ba8d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), { "Equals", {}, { ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeZoneInfo_TransitionTime::*)()>(&::System::TimeZoneInfo_TransitionTime::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ba9c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), { ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo_TransitionTime::*)(::System::DateTime, int32_t, int32_t, int32_t, ::System::DayOfWeek, bool)>(
    &::System::TimeZoneInfo_TransitionTime::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ba9c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), { ".ctor",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                       ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DayOfWeek>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.CreateFixedDateRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_TransitionTime (*)(::System::DateTime, int32_t, int32_t)>(&::System::TimeZoneInfo_TransitionTime::CreateFixedDateRule)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b9f3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                                                             { "CreateFixedDateRule", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.CreateFloatingDateRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_TransitionTime (*)(::System::DateTime, int32_t, int32_t, ::System::DayOfWeek)>(
    &::System::TimeZoneInfo_TransitionTime::CreateFloatingDateRule)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ba2fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                            { "CreateFloatingDateRule", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DayOfWeek>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.ValidateTransitionTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::DateTime, int32_t, int32_t, int32_t, ::System::DayOfWeek)>(&::System::TimeZoneInfo_TransitionTime::ValidateTransitionTime)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5ba9cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                            { "ValidateTransitionTime",
                              {},
                              { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DayOfWeek>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo_TransitionTime::*)(::System::Object*)>(
    &::System::TimeZoneInfo_TransitionTime::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5ba9fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                                                             { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::TimeZoneInfo_TransitionTime::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
        &::System::TimeZoneInfo_TransitionTime::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5baa09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                                                { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_TransitionTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo_TransitionTime::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::TimeZoneInfo_TransitionTime::_ctor)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x5baa24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
inline ::System::DateTime System::TimeZoneInfo_TransitionTime::get_TimeOfDay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), { "get_TimeOfDay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method);
}
inline int32_t System::TimeZoneInfo_TransitionTime::get_Month() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), { "get_Month", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::TimeZoneInfo_TransitionTime::get_Week() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), { "get_Week", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t System::TimeZoneInfo_TransitionTime::get_Day() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), { "get_Day", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::DayOfWeek System::TimeZoneInfo_TransitionTime::get_DayOfWeek() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), { "get_DayOfWeek", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DayOfWeek>(*this, ___internal_method);
}
inline bool System::TimeZoneInfo_TransitionTime::get_IsFixedDateRule() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), { "get_IsFixedDateRule", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool System::TimeZoneInfo_TransitionTime::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool System::TimeZoneInfo_TransitionTime::op_Inequality(::System::TimeZoneInfo_TransitionTime t1, ::System::TimeZoneInfo_TransitionTime t2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t1, t2);
}
inline bool System::TimeZoneInfo_TransitionTime::Equals(::System::TimeZoneInfo_TransitionTime other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), { "Equals", {}, { ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t System::TimeZoneInfo_TransitionTime::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void System::TimeZoneInfo_TransitionTime::_ctor(::System::DateTime timeOfDay, int32_t month, int32_t week, int32_t day, ::System::DayOfWeek dayOfWeek, bool isFixedDateRule) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), { ".ctor",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                     ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DayOfWeek>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, timeOfDay, month, week, day, dayOfWeek, isFixedDateRule);
}
inline ::System::TimeZoneInfo_TransitionTime System::TimeZoneInfo_TransitionTime::CreateFixedDateRule(::System::DateTime timeOfDay, int32_t month, int32_t day) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                                                           { "CreateFixedDateRule", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_TransitionTime>(nullptr, ___internal_method, timeOfDay, month, day);
}
inline ::System::TimeZoneInfo_TransitionTime System::TimeZoneInfo_TransitionTime::CreateFloatingDateRule(::System::DateTime timeOfDay, int32_t month, int32_t week, ::System::DayOfWeek dayOfWeek) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                          { "CreateFloatingDateRule", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DayOfWeek>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_TransitionTime>(nullptr, ___internal_method, timeOfDay, month, week, dayOfWeek);
}
inline void System::TimeZoneInfo_TransitionTime::ValidateTransitionTime(::System::DateTime timeOfDay, int32_t month, int32_t week, int32_t day, ::System::DayOfWeek dayOfWeek) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(), { "ValidateTransitionTime",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                                            ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DayOfWeek>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, timeOfDay, month, week, day, dayOfWeek);
}
inline void System::TimeZoneInfo_TransitionTime::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                                                           { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sender);
}
inline void System::TimeZoneInfo_TransitionTime::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                          ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                                              { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, info, context);
}
inline void System::TimeZoneInfo_TransitionTime::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_TransitionTime>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, info, context);
}
/// @brief Convert operator to "::System::IEquatable_1<::System::TimeZoneInfo_TransitionTime>"
constexpr System::TimeZoneInfo_TransitionTime::operator ::System::IEquatable_1<::System::TimeZoneInfo_TransitionTime>*() {
  return static_cast<::System::IEquatable_1<::System::TimeZoneInfo_TransitionTime>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::TimeZoneInfo_TransitionTime>"
constexpr ::System::IEquatable_1<::System::TimeZoneInfo_TransitionTime>* System::TimeZoneInfo_TransitionTime::i___System__IEquatable_1___System__TimeZoneInfo_TransitionTime_() {
  return static_cast<::System::IEquatable_1<::System::TimeZoneInfo_TransitionTime>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::TimeZoneInfo_TransitionTime::operator ::System::Runtime::Serialization::ISerializable*() {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::TimeZoneInfo_TransitionTime::i___System__Runtime__Serialization__ISerializable() {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr System::TimeZoneInfo_TransitionTime::operator ::System::Runtime::Serialization::IDeserializationCallback*() {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::TimeZoneInfo_TransitionTime::i___System__Runtime__Serialization__IDeserializationCallback() {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_timeOfDay", ty: "::System::DateTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "_month", ty: "uint8_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_week", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_day", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_dayOfWeek", ty:
// "::System::DayOfWeek", modifiers: "", def_value: Some("{}") }, CppParam { name: "_isFixedDateRule", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::TimeZoneInfo_TransitionTime::TimeZoneInfo_TransitionTime(::System::DateTime _timeOfDay, uint8_t _month, uint8_t _week, uint8_t _day, ::System::DayOfWeek _dayOfWeek,
                                                                             bool _isFixedDateRule) noexcept {
  this->_timeOfDay = _timeOfDay;
  this->_month = _month;
  this->_week = _week;
  this->_day = _day;
  this->_dayOfWeek = _dayOfWeek;
  this->_isFixedDateRule = _isFixedDateRule;
}
// Ctor Parameters []
constexpr ::System::TimeZoneInfo_TransitionTime::TimeZoneInfo_TransitionTime() {}
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.get_DateStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::TimeZoneInfo_AdjustmentRule::*)()>(&::System::TimeZoneInfo_AdjustmentRule::get_DateStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ba8cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { "get_DateStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.get_DateEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::TimeZoneInfo_AdjustmentRule::*)()>(&::System::TimeZoneInfo_AdjustmentRule::get_DateEnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ba8cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { "get_DateEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.get_DaylightDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::TimeZoneInfo_AdjustmentRule::*)()>(&::System::TimeZoneInfo_AdjustmentRule::get_DaylightDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ba8cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { "get_DaylightDelta", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.get_DaylightTransitionStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_TransitionTime (::System::TimeZoneInfo_AdjustmentRule::*)()>(
    &::System::TimeZoneInfo_AdjustmentRule::get_DaylightTransitionStart)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ba8cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { "get_DaylightTransitionStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.get_DaylightTransitionEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_TransitionTime (::System::TimeZoneInfo_AdjustmentRule::*)()>(
    &::System::TimeZoneInfo_AdjustmentRule::get_DaylightTransitionEnd)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ba8cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { "get_DaylightTransitionEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.get_BaseUtcOffsetDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::TimeZoneInfo_AdjustmentRule::*)()>(&::System::TimeZoneInfo_AdjustmentRule::get_BaseUtcOffsetDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ba8cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { "get_BaseUtcOffsetDelta", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.get_NoDaylightTransitions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo_AdjustmentRule::*)()>(&::System::TimeZoneInfo_AdjustmentRule::get_NoDaylightTransitions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ba8cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { "get_NoDaylightTransitions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.get_HasDaylightSaving
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo_AdjustmentRule::*)()>(&::System::TimeZoneInfo_AdjustmentRule::get_HasDaylightSaving)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5ba4ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { "get_HasDaylightSaving", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo_AdjustmentRule::*)(::System::TimeZoneInfo_AdjustmentRule*)>(&::System::TimeZoneInfo_AdjustmentRule::Equals)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5ba5ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { "Equals", {}, { ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeZoneInfo_AdjustmentRule::*)()>(&::System::TimeZoneInfo_AdjustmentRule::GetHashCode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ba8e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo_AdjustmentRule::*)(
    ::System::DateTime, ::System::DateTime, ::System::TimeSpan, ::System::TimeZoneInfo_TransitionTime, ::System::TimeZoneInfo_TransitionTime, ::System::TimeSpan, bool)>(
    &::System::TimeZoneInfo_AdjustmentRule::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5ba8e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(),
                                                                 ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(),
                                                                 ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.CreateAdjustmentRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::TimeZoneInfo_AdjustmentRule* (*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan, ::System::TimeZoneInfo_TransitionTime, ::System::TimeZoneInfo_TransitionTime)>(
        &::System::TimeZoneInfo_AdjustmentRule::CreateAdjustmentRule)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5b9f428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                                                             { "CreateAdjustmentRule",
                                                               {},
                                                               { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(),
                                                                 ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.CreateAdjustmentRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_AdjustmentRule* (*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan, ::System::TimeZoneInfo_TransitionTime,
                                                                                                  ::System::TimeZoneInfo_TransitionTime, ::System::TimeSpan, bool)>(
    &::System::TimeZoneInfo_AdjustmentRule::CreateAdjustmentRule)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5ba1e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                                                             { "CreateAdjustmentRule",
                                                               {},
                                                               { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(),
                                                                 ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(),
                                                                 ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.IsStartDateMarkerForBeginningOfYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo_AdjustmentRule::*)()>(&::System::TimeZoneInfo_AdjustmentRule::IsStartDateMarkerForBeginningOfYear)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5ba6f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { "IsStartDateMarkerForBeginningOfYear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.IsEndDateMarkerForEndOfYear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo_AdjustmentRule::*)()>(&::System::TimeZoneInfo_AdjustmentRule::IsEndDateMarkerForEndOfYear)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5ba705c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { "IsEndDateMarkerForEndOfYear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.ValidateAdjustmentRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan, ::System::TimeZoneInfo_TransitionTime,
                                                                ::System::TimeZoneInfo_TransitionTime, bool)>(&::System::TimeZoneInfo_AdjustmentRule::ValidateAdjustmentRule)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x5ba8f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                                                { "ValidateAdjustmentRule",
                                                  {},
                                                  { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(),
                                                    ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo_AdjustmentRule::*)(::System::Object*)>(
    &::System::TimeZoneInfo_AdjustmentRule::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5ba9438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                                                             { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::TimeZoneInfo_AdjustmentRule::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
        &::System::TimeZoneInfo_AdjustmentRule::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5ba9550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                                                { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo_AdjustmentRule::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::TimeZoneInfo_AdjustmentRule::_ctor)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x5ba9798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_AdjustmentRule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo_AdjustmentRule::*)()>(&::System::TimeZoneInfo_AdjustmentRule::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ba9b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__dateStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateStart;
}
constexpr ::System::DateTime const& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__dateStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateStart;
}
constexpr void System::TimeZoneInfo_AdjustmentRule::__cordl_internal_set__dateStart(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateStart = value;
}
constexpr ::System::DateTime& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__dateEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateEnd;
}
constexpr ::System::DateTime const& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__dateEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateEnd;
}
constexpr void System::TimeZoneInfo_AdjustmentRule::__cordl_internal_set__dateEnd(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateEnd = value;
}
constexpr ::System::TimeSpan& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__daylightDelta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____daylightDelta;
}
constexpr ::System::TimeSpan const& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__daylightDelta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____daylightDelta;
}
constexpr void System::TimeZoneInfo_AdjustmentRule::__cordl_internal_set__daylightDelta(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____daylightDelta = value;
}
constexpr ::System::TimeZoneInfo_TransitionTime& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__daylightTransitionStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____daylightTransitionStart;
}
constexpr ::System::TimeZoneInfo_TransitionTime const& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__daylightTransitionStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____daylightTransitionStart;
}
constexpr void System::TimeZoneInfo_AdjustmentRule::__cordl_internal_set__daylightTransitionStart(::System::TimeZoneInfo_TransitionTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____daylightTransitionStart = value;
}
constexpr ::System::TimeZoneInfo_TransitionTime& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__daylightTransitionEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____daylightTransitionEnd;
}
constexpr ::System::TimeZoneInfo_TransitionTime const& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__daylightTransitionEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____daylightTransitionEnd;
}
constexpr void System::TimeZoneInfo_AdjustmentRule::__cordl_internal_set__daylightTransitionEnd(::System::TimeZoneInfo_TransitionTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____daylightTransitionEnd = value;
}
constexpr ::System::TimeSpan& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__baseUtcOffsetDelta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseUtcOffsetDelta;
}
constexpr ::System::TimeSpan const& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__baseUtcOffsetDelta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseUtcOffsetDelta;
}
constexpr void System::TimeZoneInfo_AdjustmentRule::__cordl_internal_set__baseUtcOffsetDelta(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseUtcOffsetDelta = value;
}
constexpr bool& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__noDaylightTransitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noDaylightTransitions;
}
constexpr bool const& System::TimeZoneInfo_AdjustmentRule::__cordl_internal_get__noDaylightTransitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noDaylightTransitions;
}
constexpr void System::TimeZoneInfo_AdjustmentRule::__cordl_internal_set__noDaylightTransitions(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noDaylightTransitions = value;
}
inline ::System::DateTime System::TimeZoneInfo_AdjustmentRule::get_DateStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { "get_DateStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime System::TimeZoneInfo_AdjustmentRule::get_DateEnd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { "get_DateEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::TimeSpan System::TimeZoneInfo_AdjustmentRule::get_DaylightDelta() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { "get_DaylightDelta", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::TimeZoneInfo_TransitionTime System::TimeZoneInfo_AdjustmentRule::get_DaylightTransitionStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { "get_DaylightTransitionStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_TransitionTime>(this, ___internal_method);
}
inline ::System::TimeZoneInfo_TransitionTime System::TimeZoneInfo_AdjustmentRule::get_DaylightTransitionEnd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { "get_DaylightTransitionEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_TransitionTime>(this, ___internal_method);
}
inline ::System::TimeSpan System::TimeZoneInfo_AdjustmentRule::get_BaseUtcOffsetDelta() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { "get_BaseUtcOffsetDelta", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline bool System::TimeZoneInfo_AdjustmentRule::get_NoDaylightTransitions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { "get_NoDaylightTransitions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::TimeZoneInfo_AdjustmentRule::get_HasDaylightSaving() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { "get_HasDaylightSaving", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::TimeZoneInfo_AdjustmentRule::Equals(::System::TimeZoneInfo_AdjustmentRule* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { "Equals", {}, { ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline int32_t System::TimeZoneInfo_AdjustmentRule::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::TimeZoneInfo_AdjustmentRule::_ctor(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta,
                                                       ::System::TimeZoneInfo_TransitionTime daylightTransitionStart, ::System::TimeZoneInfo_TransitionTime daylightTransitionEnd,
                                                       ::System::TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(),
                              ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd, baseUtcOffsetDelta,
                                                   noDaylightTransitions);
}
inline ::System::TimeZoneInfo_AdjustmentRule* System::TimeZoneInfo_AdjustmentRule::CreateAdjustmentRule(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta,
                                                                                                        ::System::TimeZoneInfo_TransitionTime daylightTransitionStart,
                                                                                                        ::System::TimeZoneInfo_TransitionTime daylightTransitionEnd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                                                           { "CreateAdjustmentRule",
                                                             {},
                                                             { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(),
                                                               ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_AdjustmentRule*>(nullptr, ___internal_method, dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd);
}
inline ::System::TimeZoneInfo_AdjustmentRule* System::TimeZoneInfo_AdjustmentRule::CreateAdjustmentRule(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta,
                                                                                                        ::System::TimeZoneInfo_TransitionTime daylightTransitionStart,
                                                                                                        ::System::TimeZoneInfo_TransitionTime daylightTransitionEnd,
                                                                                                        ::System::TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                          { "CreateAdjustmentRule",
                            {},
                            { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(),
                              ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_AdjustmentRule*>(nullptr, ___internal_method, dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd,
                                                                                     baseUtcOffsetDelta, noDaylightTransitions);
}
inline bool System::TimeZoneInfo_AdjustmentRule::IsStartDateMarkerForBeginningOfYear() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { "IsStartDateMarkerForBeginningOfYear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::TimeZoneInfo_AdjustmentRule::IsEndDateMarkerForEndOfYear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { "IsEndDateMarkerForEndOfYear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::TimeZoneInfo_AdjustmentRule::ValidateAdjustmentRule(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta,
                                                                        ::System::TimeZoneInfo_TransitionTime daylightTransitionStart, ::System::TimeZoneInfo_TransitionTime daylightTransitionEnd,
                                                                        bool noDaylightTransitions) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                                              { "ValidateAdjustmentRule",
                                                {},
                                                { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(),
                                                  ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd, noDaylightTransitions);
}
inline void System::TimeZoneInfo_AdjustmentRule::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                                                           { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline void System::TimeZoneInfo_AdjustmentRule::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                          ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                                              { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::TimeZoneInfo_AdjustmentRule::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::TimeZoneInfo_AdjustmentRule::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_AdjustmentRule*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::TimeZoneInfo_AdjustmentRule* System::TimeZoneInfo_AdjustmentRule::New_ctor(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta,
                                                                                            ::System::TimeZoneInfo_TransitionTime daylightTransitionStart,
                                                                                            ::System::TimeZoneInfo_TransitionTime daylightTransitionEnd, ::System::TimeSpan baseUtcOffsetDelta,
                                                                                            bool noDaylightTransitions) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneInfo_AdjustmentRule*>(dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd, baseUtcOffsetDelta,
                                                                                                  noDaylightTransitions));
}
inline ::System::TimeZoneInfo_AdjustmentRule* System::TimeZoneInfo_AdjustmentRule::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                            ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneInfo_AdjustmentRule*>(info, context));
}
inline ::System::TimeZoneInfo_AdjustmentRule* System::TimeZoneInfo_AdjustmentRule::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneInfo_AdjustmentRule*>());
}
/// @brief Convert operator to "::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>"
constexpr System::TimeZoneInfo_AdjustmentRule::operator ::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>*() noexcept {
  return static_cast<::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>"
constexpr ::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>* System::TimeZoneInfo_AdjustmentRule::i___System__IEquatable_1___System__TimeZoneInfo_AdjustmentRule__() noexcept {
  return static_cast<::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::TimeZoneInfo_AdjustmentRule::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::TimeZoneInfo_AdjustmentRule::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr System::TimeZoneInfo_AdjustmentRule::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::TimeZoneInfo_AdjustmentRule::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::TimeZoneInfo_AdjustmentRule::TimeZoneInfo_AdjustmentRule() {}
//  Writing Method size for method: ::System::TimeZoneInfo_CachedData.CreateLocal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo* (::System::TimeZoneInfo_CachedData::*)()>(&::System::TimeZoneInfo_CachedData::CreateLocal)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5baa584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_CachedData*>(), { "CreateLocal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_CachedData.get_Local
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo* (::System::TimeZoneInfo_CachedData::*)()>(&::System::TimeZoneInfo_CachedData::get_Local)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ba4200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_CachedData*>(), { "get_Local", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_CachedData.GetCorrespondingKind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeKind (::System::TimeZoneInfo_CachedData::*)(::System::TimeZoneInfo*)>(
    &::System::TimeZoneInfo_CachedData::GetCorrespondingKind)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ba4294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_CachedData*>(), { "GetCorrespondingKind", {}, { ::i2c::type_of<::System::TimeZoneInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo_CachedData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo_CachedData::*)()>(&::System::TimeZoneInfo_CachedData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ba8c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_CachedData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::TimeZoneInfo*& System::TimeZoneInfo_CachedData::__cordl_internal_get__localTimeZone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localTimeZone;
}
constexpr ::System::TimeZoneInfo* const& System::TimeZoneInfo_CachedData::__cordl_internal_get__localTimeZone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localTimeZone;
}
constexpr void System::TimeZoneInfo_CachedData::__cordl_internal_set__localTimeZone(::System::TimeZoneInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localTimeZone = value;
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo_CachedData::CreateLocal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_CachedData*>(), { "CreateLocal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*>(this, ___internal_method);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo_CachedData::get_Local() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_CachedData*>(), { "get_Local", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*>(this, ___internal_method);
}
inline ::System::DateTimeKind System::TimeZoneInfo_CachedData::GetCorrespondingKind(::System::TimeZoneInfo* timeZone) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_CachedData*>(), { "GetCorrespondingKind", {}, { ::i2c::type_of<::System::TimeZoneInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeKind>(this, ___internal_method, timeZone);
}
inline void System::TimeZoneInfo_CachedData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo_CachedData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::TimeZoneInfo_CachedData* System::TimeZoneInfo_CachedData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneInfo_CachedData*>());
}
// Ctor Parameters []
constexpr ::System::TimeZoneInfo_CachedData::TimeZoneInfo_CachedData() {}
//  Writing Method size for method: ::System::TimeZoneInfo___c__DisplayClass16_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo___c__DisplayClass16_0::*)()>(&::System::TimeZoneInfo___c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ba070c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo___c__DisplayClass16_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo___c__DisplayClass16_0._FindTimeZoneId_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo___c__DisplayClass16_0::*)(::StringW)>(&::System::TimeZoneInfo___c__DisplayClass16_0::_FindTimeZoneId_b__0)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5baa704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo___c__DisplayClass16_0*>(), { "<FindTimeZoneId>b__0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::TimeZoneInfo___c__DisplayClass16_0::__cordl_internal_get_localtimeFilePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localtimeFilePath;
}
constexpr ::StringW const& System::TimeZoneInfo___c__DisplayClass16_0::__cordl_internal_get_localtimeFilePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localtimeFilePath;
}
constexpr void System::TimeZoneInfo___c__DisplayClass16_0::__cordl_internal_set_localtimeFilePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localtimeFilePath = value;
}
constexpr ::StringW& System::TimeZoneInfo___c__DisplayClass16_0::__cordl_internal_get_posixrulesFilePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___posixrulesFilePath;
}
constexpr ::StringW const& System::TimeZoneInfo___c__DisplayClass16_0::__cordl_internal_get_posixrulesFilePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___posixrulesFilePath;
}
constexpr void System::TimeZoneInfo___c__DisplayClass16_0::__cordl_internal_set_posixrulesFilePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___posixrulesFilePath = value;
}
constexpr ::ArrayW<uint8_t>& System::TimeZoneInfo___c__DisplayClass16_0::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::ArrayW<uint8_t> const& System::TimeZoneInfo___c__DisplayClass16_0::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void System::TimeZoneInfo___c__DisplayClass16_0::__cordl_internal_set_buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buffer = value;
}
constexpr ::ArrayW<uint8_t>& System::TimeZoneInfo___c__DisplayClass16_0::__cordl_internal_get_rawData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rawData;
}
constexpr ::ArrayW<uint8_t> const& System::TimeZoneInfo___c__DisplayClass16_0::__cordl_internal_get_rawData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rawData;
}
constexpr void System::TimeZoneInfo___c__DisplayClass16_0::__cordl_internal_set_rawData(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rawData = value;
}
constexpr ::StringW& System::TimeZoneInfo___c__DisplayClass16_0::__cordl_internal_get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr ::StringW const& System::TimeZoneInfo___c__DisplayClass16_0::__cordl_internal_get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr void System::TimeZoneInfo___c__DisplayClass16_0::__cordl_internal_set_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___id = value;
}
constexpr ::StringW& System::TimeZoneInfo___c__DisplayClass16_0::__cordl_internal_get_timeZoneDirectory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeZoneDirectory;
}
constexpr ::StringW const& System::TimeZoneInfo___c__DisplayClass16_0::__cordl_internal_get_timeZoneDirectory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeZoneDirectory;
}
constexpr void System::TimeZoneInfo___c__DisplayClass16_0::__cordl_internal_set_timeZoneDirectory(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeZoneDirectory = value;
}
inline void System::TimeZoneInfo___c__DisplayClass16_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo___c__DisplayClass16_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::TimeZoneInfo___c__DisplayClass16_0::_FindTimeZoneId_b__0(::StringW filePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo___c__DisplayClass16_0*>(), { "<FindTimeZoneId>b__0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, filePath);
}
inline ::System::TimeZoneInfo___c__DisplayClass16_0* System::TimeZoneInfo___c__DisplayClass16_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneInfo___c__DisplayClass16_0*>());
}
// Ctor Parameters []
constexpr ::System::TimeZoneInfo___c__DisplayClass16_0::TimeZoneInfo___c__DisplayClass16_0() {}
//  Writing Method size for method: ::System::TimeZoneInfo___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo___c::*)()>(&::System::TimeZoneInfo___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5baa860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo___c._TZif_ParsePosixName_b__34_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo___c::*)(char16_t)>(&::System::TimeZoneInfo___c::_TZif_ParsePosixName_b__34_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5baa864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo___c*>(), { "<TZif_ParsePosixName>b__34_1", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo___c._TZif_ParsePosixName_b__34_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo___c::*)(char16_t)>(&::System::TimeZoneInfo___c::_TZif_ParsePosixName_b__34_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5baa874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo___c*>(), { "<TZif_ParsePosixName>b__34_0", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo___c._TZif_ParsePosixOffset_b__35_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo___c::*)(char16_t)>(&::System::TimeZoneInfo___c::_TZif_ParsePosixOffset_b__35_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5baa91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo___c*>(), { "<TZif_ParsePosixOffset>b__35_0", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo___c._TZif_ParsePosixDate_b__37_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo___c::*)(char16_t)>(&::System::TimeZoneInfo___c::_TZif_ParsePosixDate_b__37_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5baa978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo___c*>(), { "<TZif_ParsePosixDate>b__37_0", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo___c._TZif_ParsePosixTime_b__38_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo___c::*)(char16_t)>(&::System::TimeZoneInfo___c::_TZif_ParsePosixTime_b__38_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5baa990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo___c*>(), { "<TZif_ParsePosixTime>b__38_0", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo___c._CreateLocalUnity_b__161_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeZoneInfo___c::*)(::System::TimeZoneInfo_AdjustmentRule*, ::System::TimeZoneInfo_AdjustmentRule*)>(
    &::System::TimeZoneInfo___c::_CreateLocalUnity_b__161_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5baa9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo___c*>(),
                            { "<CreateLocalUnity>b__161_0", {}, { ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>() } })));
    return ___internal_method;
  }
};
inline void System::TimeZoneInfo___c::setStaticF___9(::System::TimeZoneInfo___c* value) {
  ::cordl_internals::setStaticField<::System::TimeZoneInfo___c*, "<>9", ::System::TimeZoneInfo___c*>(std::forward<::System::TimeZoneInfo___c*>(value));
}
inline ::System::TimeZoneInfo___c* System::TimeZoneInfo___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::TimeZoneInfo___c*, "<>9", ::System::TimeZoneInfo___c*>();
}
inline void System::TimeZoneInfo___c::setStaticF___9__34_1(::System::Func_2<char16_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<char16_t, bool>*, "<>9__34_1", ::System::TimeZoneInfo___c*>(std::forward<::System::Func_2<char16_t, bool>*>(value));
}
inline ::System::Func_2<char16_t, bool>* System::TimeZoneInfo___c::getStaticF___9__34_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<char16_t, bool>*, "<>9__34_1", ::System::TimeZoneInfo___c*>();
}
inline void System::TimeZoneInfo___c::setStaticF___9__34_0(::System::Func_2<char16_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<char16_t, bool>*, "<>9__34_0", ::System::TimeZoneInfo___c*>(std::forward<::System::Func_2<char16_t, bool>*>(value));
}
inline ::System::Func_2<char16_t, bool>* System::TimeZoneInfo___c::getStaticF___9__34_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<char16_t, bool>*, "<>9__34_0", ::System::TimeZoneInfo___c*>();
}
inline void System::TimeZoneInfo___c::setStaticF___9__35_0(::System::Func_2<char16_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<char16_t, bool>*, "<>9__35_0", ::System::TimeZoneInfo___c*>(std::forward<::System::Func_2<char16_t, bool>*>(value));
}
inline ::System::Func_2<char16_t, bool>* System::TimeZoneInfo___c::getStaticF___9__35_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<char16_t, bool>*, "<>9__35_0", ::System::TimeZoneInfo___c*>();
}
inline void System::TimeZoneInfo___c::setStaticF___9__37_0(::System::Func_2<char16_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<char16_t, bool>*, "<>9__37_0", ::System::TimeZoneInfo___c*>(std::forward<::System::Func_2<char16_t, bool>*>(value));
}
inline ::System::Func_2<char16_t, bool>* System::TimeZoneInfo___c::getStaticF___9__37_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<char16_t, bool>*, "<>9__37_0", ::System::TimeZoneInfo___c*>();
}
inline void System::TimeZoneInfo___c::setStaticF___9__38_0(::System::Func_2<char16_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<char16_t, bool>*, "<>9__38_0", ::System::TimeZoneInfo___c*>(std::forward<::System::Func_2<char16_t, bool>*>(value));
}
inline ::System::Func_2<char16_t, bool>* System::TimeZoneInfo___c::getStaticF___9__38_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<char16_t, bool>*, "<>9__38_0", ::System::TimeZoneInfo___c*>();
}
inline void System::TimeZoneInfo___c::setStaticF___9__161_0(::System::Comparison_1<::System::TimeZoneInfo_AdjustmentRule*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::System::TimeZoneInfo_AdjustmentRule*>*, "<>9__161_0", ::System::TimeZoneInfo___c*>(
      std::forward<::System::Comparison_1<::System::TimeZoneInfo_AdjustmentRule*>*>(value));
}
inline ::System::Comparison_1<::System::TimeZoneInfo_AdjustmentRule*>* System::TimeZoneInfo___c::getStaticF___9__161_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::System::TimeZoneInfo_AdjustmentRule*>*, "<>9__161_0", ::System::TimeZoneInfo___c*>();
}
inline void System::TimeZoneInfo___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::TimeZoneInfo___c::_TZif_ParsePosixName_b__34_1(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo___c*>(), { "<TZif_ParsePosixName>b__34_1", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline bool System::TimeZoneInfo___c::_TZif_ParsePosixName_b__34_0(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo___c*>(), { "<TZif_ParsePosixName>b__34_0", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline bool System::TimeZoneInfo___c::_TZif_ParsePosixOffset_b__35_0(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo___c*>(), { "<TZif_ParsePosixOffset>b__35_0", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline bool System::TimeZoneInfo___c::_TZif_ParsePosixDate_b__37_0(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo___c*>(), { "<TZif_ParsePosixDate>b__37_0", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline bool System::TimeZoneInfo___c::_TZif_ParsePosixTime_b__38_0(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo___c*>(), { "<TZif_ParsePosixTime>b__38_0", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline int32_t System::TimeZoneInfo___c::_CreateLocalUnity_b__161_0(::System::TimeZoneInfo_AdjustmentRule* rule1, ::System::TimeZoneInfo_AdjustmentRule* rule2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo___c*>(),
                                       { "<CreateLocalUnity>b__161_0", {}, { ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, rule1, rule2);
}
inline ::System::TimeZoneInfo___c* System::TimeZoneInfo___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneInfo___c*>());
}
// Ctor Parameters []
constexpr ::System::TimeZoneInfo___c::TimeZoneInfo___c() {}
//  Writing Method size for method: ::System::TimeZoneInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo::*)(::ArrayW<uint8_t>, ::StringW, bool)>(&::System::TimeZoneInfo::_ctor)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x5b9e084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetAdjustmentRules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*> (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::GetAdjustmentRules)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x5b9ef5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetAdjustmentRules", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetLocalTimeZone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo* (*)(::System::TimeZoneInfo_CachedData*)>(&::System::TimeZoneInfo::GetLocalTimeZone)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b9f540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetLocalTimeZone", {}, { ::i2c::type_of<::System::TimeZoneInfo_CachedData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TryGetLocalTzFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::ArrayW<uint8_t>>, ::by_ref<::StringW>)>(&::System::TimeZoneInfo::TryGetLocalTzFile)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5b9f6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TryGetLocalTzFile", {}, { ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetTzEnvironmentVariable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::TimeZoneInfo::GetTzEnvironmentVariable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5b9f8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetTzEnvironmentVariable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TryLoadTzFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::ArrayW<uint8_t>>, ::by_ref<::StringW>)>(&::System::TimeZoneInfo::TryLoadTzFile)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5b9f948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                { "TryLoadTzFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.FindTimeZoneIdUsingReadLink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::TimeZoneInfo::FindTimeZoneIdUsingReadLink)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5b9fc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "FindTimeZoneIdUsingReadLink", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetDirectoryEntryFullPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<::GlobalNamespace::Sys_Interop_DirectoryEntry>, ::StringW)>(&::System::TimeZoneInfo::GetDirectoryEntryFullPath)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5b9ffec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                { "GetDirectoryEntryFullPath", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::Sys_Interop_DirectoryEntry>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.EnumerateFilesRecursively
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Predicate_1<::StringW>*)>(&::System::TimeZoneInfo::EnumerateFilesRecursively)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x5ba016c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "EnumerateFilesRecursively", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Predicate_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.FindTimeZoneId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::System::TimeZoneInfo::FindTimeZoneId)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5b9fd58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "FindTimeZoneId", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CompareTimeZoneFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::TimeZoneInfo::CompareTimeZoneFile)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x5ba0710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                { "CompareTimeZoneFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetLocalTimeZoneFromTzFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo* (*)()>(&::System::TimeZoneInfo::GetLocalTimeZoneFromTzFile)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5b9f590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetLocalTimeZoneFromTzFile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetTimeZoneFromTzData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo* (*)(::ArrayW<uint8_t>, ::StringW)>(&::System::TimeZoneInfo::GetTimeZoneFromTzData)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5ba0aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetTimeZoneFromTzData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetTimeZoneDirectory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::TimeZoneInfo::GetTimeZoneDirectory)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5b9fae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetTimeZoneDirectory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetDateTimeNowUtcOffsetFromUtc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::by_ref<bool>)>(&::System::TimeZoneInfo::GetDateTimeNowUtcOffsetFromUtc)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ba118c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetDateTimeNowUtcOffsetFromUtc", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_GenerateAdjustmentRules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>>, ::System::TimeSpan, ::ArrayW<::System::DateTime>, ::ArrayW<uint8_t>,
                                                                ::ArrayW<::System::TimeZoneInfo_TZifType>, ::ArrayW<bool>, ::ArrayW<bool>, ::StringW)>(
    &::System::TimeZoneInfo::TZif_GenerateAdjustmentRules)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5b9eaac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                { "TZif_GenerateAdjustmentRules",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>>>(), ::i2c::type_of<::System::TimeSpan>(),
                                                    ::i2c::type_of<::ArrayW<::System::DateTime>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<::System::TimeZoneInfo_TZifType>>(),
                                                    ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_GenerateAdjustmentRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int32_t>, ::System::TimeSpan, ::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>*,
                                                                ::ArrayW<::System::DateTime>, ::ArrayW<uint8_t>, ::ArrayW<::System::TimeZoneInfo_TZifType>, ::ArrayW<bool>, ::ArrayW<bool>, ::StringW)>(
    &::System::TimeZoneInfo::TZif_GenerateAdjustmentRule)> {
  constexpr static std::size_t size = 0x6e8;
  constexpr static std::size_t addrs = 0x5ba1578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                { "TZif_GenerateAdjustmentRule",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::TimeSpan>(),
                                                    ::i2c::type_of<::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>*>(), ::i2c::type_of<::ArrayW<::System::DateTime>>(),
                                                    ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<::System::TimeZoneInfo_TZifType>>(), ::i2c::type_of<::ArrayW<bool>>(),
                                                    ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_CalculateTransitionOffsetFromBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::TimeSpan, ::System::TimeSpan)>(&::System::TimeZoneInfo::TZif_CalculateTransitionOffsetFromBase)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5ba1d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                             { "TZif_CalculateTransitionOffsetFromBase", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_GetEarlyDateTransitionType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_TZifType (*)(::ArrayW<::System::TimeZoneInfo_TZifType>)>(&::System::TimeZoneInfo::TZif_GetEarlyDateTransitionType)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5ba1c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_GetEarlyDateTransitionType", {}, { ::i2c::type_of<::ArrayW<::System::TimeZoneInfo_TZifType>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_CreateAdjustmentRuleForPosixFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_AdjustmentRule* (*)(::StringW, ::System::DateTime, ::System::TimeSpan)>(
    &::System::TimeZoneInfo::TZif_CreateAdjustmentRuleForPosixFormat)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x5ba21cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                            { "TZif_CreateAdjustmentRuleForPosixFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParseOffsetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::TimeSpan> (*)(::StringW)>(&::System::TimeZoneInfo::TZif_ParseOffsetString)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5ba2780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_ParseOffsetString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ParseTimeOfDay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW)>(&::System::TimeZoneInfo::ParseTimeOfDay)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x5ba2b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "ParseTimeOfDay", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_CreateTransitionTimeFromPosixRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::TimeZoneInfo_TransitionTime> (*)(::StringW, ::StringW)>(
    &::System::TimeZoneInfo::TZif_CreateTransitionTimeFromPosixRule)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5ba2958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_CreateTransitionTimeFromPosixRule", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParseJulianDay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::TimeZoneInfo::TZif_ParseJulianDay)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5ba3024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                { "TZif_ParseJulianDay", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParseMDateRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<::System::DayOfWeek>)>(&::System::TimeZoneInfo::TZif_ParseMDateRule)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5ba2dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_ParseMDateRule",
                                                                                              {},
                                                                                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                                ::i2c::type_of<::by_ref<::System::DayOfWeek>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParsePosixFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::StringW>, ::by_ref<::StringW>, ::by_ref<::StringW>, ::by_ref<::StringW>, ::by_ref<::StringW>, ::by_ref<::StringW>,
                                                                ::by_ref<::StringW>, ::by_ref<::StringW>)>(&::System::TimeZoneInfo::TZif_ParsePosixFormat)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5ba2584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_ParsePosixFormat",
                                                                          {},
                                                                          { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                                                            ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                                                            ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParsePosixName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::by_ref<int32_t>)>(&::System::TimeZoneInfo::TZif_ParsePosixName)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5ba31d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_ParsePosixName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParsePosixOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::by_ref<int32_t>)>(&::System::TimeZoneInfo::TZif_ParsePosixOffset)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5ba3418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_ParsePosixOffset", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParsePosixDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<int32_t>, ::by_ref<::StringW>, ::by_ref<::StringW>)>(&::System::TimeZoneInfo::TZif_ParsePosixDateTime)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ba352c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::TimeZoneInfo*>(),
            { "TZif_ParsePosixDateTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParsePosixDate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::by_ref<int32_t>)>(&::System::TimeZoneInfo::TZif_ParsePosixDate)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5ba36b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_ParsePosixDate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParsePosixTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::by_ref<int32_t>)>(&::System::TimeZoneInfo::TZif_ParsePosixTime)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5ba37cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_ParsePosixTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParsePosixString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::by_ref<int32_t>, ::System::Func_2<char16_t, bool>*)>(&::System::TimeZoneInfo::TZif_ParsePosixString)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ba3614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                         { "TZif_ParsePosixString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Func_2<char16_t, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_GetZoneAbbreviation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, int32_t)>(&::System::TimeZoneInfo::TZif_GetZoneAbbreviation)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b9ea48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_GetZoneAbbreviation", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ToInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::System::TimeZoneInfo::TZif_ToInt32)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ba38e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_ToInt32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ToInt64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::ArrayW<uint8_t>, int32_t)>(&::System::TimeZoneInfo::TZif_ToInt64)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ba3910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_ToInt64", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ToUnixTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::ArrayW<uint8_t>, int32_t, ::System::TimeZoneInfo_TZVersion)>(&::System::TimeZoneInfo::TZif_ToUnixTime)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ba3940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                { "TZif_ToUnixTime", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeZoneInfo_TZVersion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_UnixTimeToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(int64_t)>(&::System::TimeZoneInfo::TZif_UnixTimeToDateTime)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5ba39dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_UnixTimeToDateTime", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParseRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, ::by_ref<::System::TimeZoneInfo_TZifHead>, ::by_ref<::ArrayW<::System::DateTime>>, ::by_ref<::ArrayW<uint8_t>>,
                                                                ::by_ref<::ArrayW<::System::TimeZoneInfo_TZifType>>, ::by_ref<::StringW>, ::by_ref<::ArrayW<bool>>, ::by_ref<::ArrayW<bool>>,
                                                                ::by_ref<::StringW>)>(&::System::TimeZoneInfo::TZif_ParseRaw)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x5b9e534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                            { "TZif_ParseRaw",
                              {},
                              { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::System::TimeZoneInfo_TZifHead>>(), ::i2c::type_of<::by_ref<::ArrayW<::System::DateTime>>>(),
                                ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<::System::TimeZoneInfo_TZifType>>>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                ::i2c::type_of<::by_ref<::ArrayW<bool>>>(), ::i2c::type_of<::by_ref<::ArrayW<bool>>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_DisplayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::get_DisplayName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ba3dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "get_DisplayName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_StandardName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::get_StandardName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ba3df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "get_StandardName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_DaylightName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::get_DaylightName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ba3e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "get_DaylightName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_BaseUtcOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::get_BaseUtcOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ba3e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "get_BaseUtcOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_SupportsDaylightSavingTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::get_SupportsDaylightSavingTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ba3e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "get_SupportsDaylightSavingTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetPreviousAdjustmentRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_AdjustmentRule* (::System::TimeZoneInfo::*)(::System::TimeZoneInfo_AdjustmentRule*, ::System::Nullable_1<int32_t>)>(
    &::System::TimeZoneInfo::GetPreviousAdjustmentRule)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5ba3e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                { "GetPreviousAdjustmentRule", {}, { ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)(::System::DateTime)>(&::System::TimeZoneInfo::GetUtcOffset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ba3f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetUtcOffset", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetLocalUtcOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::System::TimeZoneInfoOptions)>(&::System::TimeZoneInfo::GetLocalUtcOffset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ba4168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetLocalUtcOffset", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfoOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)(::System::DateTime, ::System::TimeZoneInfoOptions)>(&::System::TimeZoneInfo::GetUtcOffset)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ba4218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetUtcOffset", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfoOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)(::System::DateTime, ::System::TimeZoneInfoOptions, ::System::TimeZoneInfo_CachedData*)>(
    &::System::TimeZoneInfo::GetUtcOffset)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5ba3fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                            { "GetUtcOffset", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfoOptions>(), ::i2c::type_of<::System::TimeZoneInfo_CachedData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::DateTime, ::System::TimeZoneInfo*, ::System::TimeZoneInfo*, ::System::TimeZoneInfoOptions)>(
    &::System::TimeZoneInfo::ConvertTime)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ba4324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "ConvertTime",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>(),
                                                                                                ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::System::TimeZoneInfoOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::DateTime, ::System::TimeZoneInfo*, ::System::TimeZoneInfo*, ::System::TimeZoneInfoOptions,
                                                                              ::System::TimeZoneInfo_CachedData*)>(&::System::TimeZoneInfo::ConvertTime)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x5ba45c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "ConvertTime",
                                                                          {},
                                                                          { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::System::TimeZoneInfo*>(),
                                                                            ::i2c::type_of<::System::TimeZoneInfoOptions>(), ::i2c::type_of<::System::TimeZoneInfo_CachedData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertTimeToUtc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::DateTime, ::System::TimeZoneInfoOptions)>(&::System::TimeZoneInfo::ConvertTimeToUtc)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5ba56ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "ConvertTimeToUtc", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfoOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo::*)(::System::TimeZoneInfo*)>(&::System::TimeZoneInfo::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5ba57e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "Equals", {}, { ::i2c::type_of<::System::TimeZoneInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo::*)(::System::Object*)>(&::System::TimeZoneInfo::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ba59a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { ::i2c::class_of<::System::TimeZoneInfo*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::GetHashCode)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ba5a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { ::i2c::class_of<::System::TimeZoneInfo*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.HasSameRules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::TimeZoneInfo::*)(::System::TimeZoneInfo*)>(&::System::TimeZoneInfo::HasSameRules)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5ba5834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "HasSameRules", {}, { ::i2c::type_of<::System::TimeZoneInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_Local
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo* (*)()>(&::System::TimeZoneInfo::get_Local)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ba1204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "get_Local", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ba5c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { ::i2c::class_of<::System::TimeZoneInfo*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_Utc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo* (*)()>(&::System::TimeZoneInfo::get_Utc)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ba5c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "get_Utc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo::*)(::StringW, ::System::TimeSpan, ::StringW, ::StringW, ::StringW,
                                                                                        ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>, bool)>(&::System::TimeZoneInfo::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5ba5c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CreateCustomTimeZone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo* (*)(::StringW, ::System::TimeSpan, ::StringW, ::StringW)>(&::System::TimeZoneInfo::CreateCustomTimeZone)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ba5d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                            { "CreateCustomTimeZone", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CreateCustomTimeZone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo* (*)(::StringW, ::System::TimeSpan, ::StringW, ::StringW, ::StringW, ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>,
                                                                                   bool)>(&::System::TimeZoneInfo::CreateCustomTimeZone)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5ba5e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                             { "CreateCustomTimeZone",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo::*)(::System::Object*)>(
    &::System::TimeZoneInfo::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5ba5f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::TimeZoneInfo::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5ba610c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::TimeZoneInfo::_ctor)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x5ba62e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetAdjustmentRuleForTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_AdjustmentRule* (::System::TimeZoneInfo::*)(::System::DateTime, ::by_ref<::System::Nullable_1<int32_t>>)>(
    &::System::TimeZoneInfo::GetAdjustmentRuleForTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ba4abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                             { "GetAdjustmentRuleForTime", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::by_ref<::System::Nullable_1<int32_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetAdjustmentRuleForTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo_AdjustmentRule* (::System::TimeZoneInfo::*)(::System::DateTime, bool, ::by_ref<::System::Nullable_1<int32_t>>)>(
    &::System::TimeZoneInfo::GetAdjustmentRuleForTime)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5ba66b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                            { "GetAdjustmentRuleForTime", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Nullable_1<int32_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CompareAdjustmentRuleToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TimeZoneInfo::*)(::System::TimeZoneInfo_AdjustmentRule*, ::System::TimeZoneInfo_AdjustmentRule*, ::System::DateTime,
                                                                                           ::System::DateTime, bool)>(&::System::TimeZoneInfo::CompareAdjustmentRuleToDateTime)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5ba686c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "CompareAdjustmentRuleToDateTime",
                                                                          {},
                                                                          { ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                                                                            ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertToUtc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::TimeZoneInfo::*)(::System::DateTime, ::System::TimeSpan, ::System::TimeSpan)>(
    &::System::TimeZoneInfo::ConvertToUtc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ba6a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                { "ConvertToUtc", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertFromUtc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::TimeZoneInfo::*)(::System::DateTime, ::System::TimeSpan, ::System::TimeSpan)>(
    &::System::TimeZoneInfo::ConvertFromUtc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ba6bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                { "ConvertFromUtc", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertToFromUtc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::TimeZoneInfo::*)(::System::DateTime, ::System::TimeSpan, ::System::TimeSpan, bool)>(
    &::System::TimeZoneInfo::ConvertToFromUtc)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5ba6a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                            { "ConvertToFromUtc", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertUtcToTimeZone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(int64_t, ::System::TimeZoneInfo*, ::by_ref<bool>)>(&::System::TimeZoneInfo::ConvertUtcToTimeZone)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5ba54c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                { "ConvertUtcToTimeZone", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetDaylightTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::DaylightTimeStruct (::System::TimeZoneInfo::*)(
    int32_t, ::System::TimeZoneInfo_AdjustmentRule*, ::System::Nullable_1<int32_t>)>(&::System::TimeZoneInfo::GetDaylightTime)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5ba4c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                            { "GetDaylightTime", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetIsDaylightSavings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::TimeZoneInfo_AdjustmentRule*, ::System::Globalization::DaylightTimeStruct,
                                                                ::System::TimeZoneInfoOptions)>(&::System::TimeZoneInfo::GetIsDaylightSavings)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5ba50fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetIsDaylightSavings",
                                                                          {},
                                                                          { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                                                                            ::i2c::type_of<::System::Globalization::DaylightTimeStruct>(), ::i2c::type_of<::System::TimeZoneInfoOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetDaylightSavingsStartOffsetFromUtc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)(::System::TimeSpan, ::System::TimeZoneInfo_AdjustmentRule*, ::System::Nullable_1<int32_t>)>(
    &::System::TimeZoneInfo::GetDaylightSavingsStartOffsetFromUtc)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5ba777c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                         { "GetDaylightSavingsStartOffsetFromUtc",
                                           {},
                                           { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetDaylightSavingsEndOffsetFromUtc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)(::System::TimeSpan, ::System::TimeZoneInfo_AdjustmentRule*)>(
    &::System::TimeZoneInfo::GetDaylightSavingsEndOffsetFromUtc)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ba7854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                { "GetDaylightSavingsEndOffsetFromUtc", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetIsDaylightSavingsFromUtc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, int32_t, ::System::TimeSpan, ::System::TimeZoneInfo_AdjustmentRule*, ::System::Nullable_1<int32_t>, ::by_ref<bool>,
                                                                ::System::TimeZoneInfo*)>(&::System::TimeZoneInfo::GetIsDaylightSavingsFromUtc)> {
  constexpr static std::size_t size = 0x7bc;
  constexpr static std::size_t addrs = 0x5ba78d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetIsDaylightSavingsFromUtc",
                                                                                       {},
                                                                                       { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeSpan>(),
                                                                                         ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(),
                                                                                         ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::System::TimeZoneInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CheckIsDst
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::DateTime, ::System::DateTime, bool, ::System::TimeZoneInfo_AdjustmentRule*)>(
    &::System::TimeZoneInfo::CheckIsDst)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5ba717c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "CheckIsDst",
                                                                          {},
                                                                          { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(),
                                                                            ::i2c::type_of<bool>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetIsAmbiguousTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::TimeZoneInfo_AdjustmentRule*, ::System::Globalization::DaylightTimeStruct)>(
    &::System::TimeZoneInfo::GetIsAmbiguousTime)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x5ba73cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetIsAmbiguousTime",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                                                                                                ::i2c::type_of<::System::Globalization::DaylightTimeStruct>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetIsInvalidTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::TimeZoneInfo_AdjustmentRule*, ::System::Globalization::DaylightTimeStruct)>(
    &::System::TimeZoneInfo::GetIsInvalidTime)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x5ba4d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetIsInvalidTime",
                                                                                              {},
                                                                                              { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                                                                                                ::i2c::type_of<::System::Globalization::DaylightTimeStruct>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::System::TimeZoneInfo*, ::System::TimeZoneInfoOptions)>(&::System::TimeZoneInfo::GetUtcOffset)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5ba4420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                            { "GetUtcOffset", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::System::TimeZoneInfoOptions>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffsetFromUtc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::System::TimeZoneInfo*)>(&::System::TimeZoneInfo::GetUtcOffsetFromUtc)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ba43b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetUtcOffsetFromUtc", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffsetFromUtc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::System::TimeZoneInfo*, ::by_ref<bool>)>(&::System::TimeZoneInfo::GetUtcOffsetFromUtc)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ba6be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                { "GetUtcOffsetFromUtc", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffsetFromUtc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::System::TimeZoneInfo*, ::by_ref<bool>, ::by_ref<bool>)>(
    &::System::TimeZoneInfo::GetUtcOffsetFromUtc)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5ba1284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::TimeZoneInfo*>(),
            { "GetUtcOffsetFromUtc", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TransitionTimeToDateTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(int32_t, ::System::TimeZoneInfo_TransitionTime)>(&::System::TimeZoneInfo::TransitionTimeToDateTime)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5ba6c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TransitionTimeToDateTime", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ValidateTimeZoneInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::TimeSpan, ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>, ::by_ref<bool>)>(
    &::System::TimeZoneInfo::ValidateTimeZoneInfo)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5b9ec04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "ValidateTimeZoneInfo",
                                                                                       {},
                                                                                       { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::TimeSpan>(),
                                                                                         ::i2c::type_of<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.UtcOffsetOutOfRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::TimeSpan)>(&::System::TimeZoneInfo::UtcOffsetOutOfRange)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5ba8094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "UtcOffsetOutOfRange", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::TimeSpan, ::System::TimeZoneInfo_AdjustmentRule*)>(&::System::TimeZoneInfo::GetUtcOffset)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5ba81a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetUtcOffset", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.IsValidAdjustmentRuleOffest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::TimeSpan, ::System::TimeZoneInfo_AdjustmentRule*)>(&::System::TimeZoneInfo::IsValidAdjustmentRuleOffest)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ba1f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                { "IsValidAdjustmentRuleOffest", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.NormalizeAdjustmentRuleOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::TimeSpan, ::by_ref<::System::TimeZoneInfo_AdjustmentRule*>)>(&::System::TimeZoneInfo::NormalizeAdjustmentRuleOffset)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5ba1f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                         { "NormalizeAdjustmentRuleOffset", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::by_ref<::System::TimeZoneInfo_AdjustmentRule*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetTimeZoneDirectoryUnity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::System::TimeZoneInfo::GetTimeZoneDirectoryUnity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5ba8274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetTimeZoneDirectoryUnity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CreateAdjustmentRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>* (*)(int32_t, ::by_ref<::ArrayW<int64_t>>, ::by_ref<::ArrayW<::StringW>>)>(
        &::System::TimeZoneInfo::CreateAdjustmentRule)> {
  constexpr static std::size_t size = 0x87c;
  constexpr static std::size_t addrs = 0x5ba8288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                            { "CreateAdjustmentRule", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<int64_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CreateLocalUnity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo* (*)()>(&::System::TimeZoneInfo::CreateLocalUnity)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x5ba0c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "CreateLocalUnity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ba8c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::TimeZoneInfo::__cordl_internal_get__id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr ::StringW const& System::TimeZoneInfo::__cordl_internal_get__id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr void System::TimeZoneInfo::__cordl_internal_set__id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id = value;
}
constexpr ::StringW& System::TimeZoneInfo::__cordl_internal_get__displayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName;
}
constexpr ::StringW const& System::TimeZoneInfo::__cordl_internal_get__displayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName;
}
constexpr void System::TimeZoneInfo::__cordl_internal_set__displayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____displayName = value;
}
constexpr ::StringW& System::TimeZoneInfo::__cordl_internal_get__standardDisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardDisplayName;
}
constexpr ::StringW const& System::TimeZoneInfo::__cordl_internal_get__standardDisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardDisplayName;
}
constexpr void System::TimeZoneInfo::__cordl_internal_set__standardDisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____standardDisplayName = value;
}
constexpr ::StringW& System::TimeZoneInfo::__cordl_internal_get__daylightDisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____daylightDisplayName;
}
constexpr ::StringW const& System::TimeZoneInfo::__cordl_internal_get__daylightDisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____daylightDisplayName;
}
constexpr void System::TimeZoneInfo::__cordl_internal_set__daylightDisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____daylightDisplayName = value;
}
constexpr ::System::TimeSpan& System::TimeZoneInfo::__cordl_internal_get__baseUtcOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseUtcOffset;
}
constexpr ::System::TimeSpan const& System::TimeZoneInfo::__cordl_internal_get__baseUtcOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseUtcOffset;
}
constexpr void System::TimeZoneInfo::__cordl_internal_set__baseUtcOffset(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseUtcOffset = value;
}
constexpr bool& System::TimeZoneInfo::__cordl_internal_get__supportsDaylightSavingTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____supportsDaylightSavingTime;
}
constexpr bool const& System::TimeZoneInfo::__cordl_internal_get__supportsDaylightSavingTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____supportsDaylightSavingTime;
}
constexpr void System::TimeZoneInfo::__cordl_internal_set__supportsDaylightSavingTime(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____supportsDaylightSavingTime = value;
}
constexpr ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>& System::TimeZoneInfo::__cordl_internal_get__adjustmentRules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____adjustmentRules;
}
constexpr ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*> const& System::TimeZoneInfo::__cordl_internal_get__adjustmentRules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____adjustmentRules;
}
constexpr void System::TimeZoneInfo::__cordl_internal_set__adjustmentRules(::ArrayW<::System::TimeZoneInfo_AdjustmentRule*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____adjustmentRules = value;
}
inline void System::TimeZoneInfo::setStaticF_s_utcTimeZone(::System::TimeZoneInfo* value) {
  ::cordl_internals::setStaticField<::System::TimeZoneInfo*, "s_utcTimeZone", ::System::TimeZoneInfo*>(std::forward<::System::TimeZoneInfo*>(value));
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::getStaticF_s_utcTimeZone() {
  return ::cordl_internals::getStaticField<::System::TimeZoneInfo*, "s_utcTimeZone", ::System::TimeZoneInfo*>();
}
inline void System::TimeZoneInfo::setStaticF_s_cachedData(::System::TimeZoneInfo_CachedData* value) {
  ::cordl_internals::setStaticField<::System::TimeZoneInfo_CachedData*, "s_cachedData", ::System::TimeZoneInfo*>(std::forward<::System::TimeZoneInfo_CachedData*>(value));
}
inline ::System::TimeZoneInfo_CachedData* System::TimeZoneInfo::getStaticF_s_cachedData() {
  return ::cordl_internals::getStaticField<::System::TimeZoneInfo_CachedData*, "s_cachedData", ::System::TimeZoneInfo*>();
}
inline void System::TimeZoneInfo::setStaticF_s_maxDateOnly(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "s_maxDateOnly", ::System::TimeZoneInfo*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::TimeZoneInfo::getStaticF_s_maxDateOnly() {
  return ::cordl_internals::getStaticField<::System::DateTime, "s_maxDateOnly", ::System::TimeZoneInfo*>();
}
inline void System::TimeZoneInfo::setStaticF_s_minDateOnly(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "s_minDateOnly", ::System::TimeZoneInfo*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::TimeZoneInfo::getStaticF_s_minDateOnly() {
  return ::cordl_internals::getStaticField<::System::DateTime, "s_minDateOnly", ::System::TimeZoneInfo*>();
}
inline void System::TimeZoneInfo::setStaticF_MaxOffset(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "MaxOffset", ::System::TimeZoneInfo*>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::TimeZoneInfo::getStaticF_MaxOffset() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "MaxOffset", ::System::TimeZoneInfo*>();
}
inline void System::TimeZoneInfo::setStaticF_MinOffset(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "MinOffset", ::System::TimeZoneInfo*>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::TimeZoneInfo::getStaticF_MinOffset() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "MinOffset", ::System::TimeZoneInfo*>();
}
inline void System::TimeZoneInfo::_ctor(::ArrayW<uint8_t> data, ::StringW id, bool dstDisabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, id, dstDisabled);
}
inline ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*> System::TimeZoneInfo::GetAdjustmentRules() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetAdjustmentRules", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>>(this, ___internal_method);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::GetLocalTimeZone(::System::TimeZoneInfo_CachedData* cachedData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetLocalTimeZone", {}, { ::i2c::type_of<::System::TimeZoneInfo_CachedData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*>(nullptr, ___internal_method, cachedData);
}
inline bool System::TimeZoneInfo::TryGetLocalTzFile(::by_ref<::ArrayW<uint8_t>> rawData, ::by_ref<::StringW> id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TryGetLocalTzFile", {}, { ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rawData, id);
}
inline ::StringW System::TimeZoneInfo::GetTzEnvironmentVariable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetTzEnvironmentVariable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline bool System::TimeZoneInfo::TryLoadTzFile(::StringW tzFilePath, ::by_ref<::ArrayW<uint8_t>> rawData, ::by_ref<::StringW> id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                              { "TryLoadTzFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tzFilePath, rawData, id);
}
inline ::StringW System::TimeZoneInfo::FindTimeZoneIdUsingReadLink(::StringW tzFilePath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "FindTimeZoneIdUsingReadLink", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, tzFilePath);
}
inline ::StringW System::TimeZoneInfo::GetDirectoryEntryFullPath(::by_ref<::GlobalNamespace::Sys_Interop_DirectoryEntry> dirent, ::StringW currentPath) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                              { "GetDirectoryEntryFullPath", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::Sys_Interop_DirectoryEntry>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, dirent, currentPath);
}
inline void System::TimeZoneInfo::EnumerateFilesRecursively(::StringW path, ::System::Predicate_1<::StringW>* condition) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "EnumerateFilesRecursively", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Predicate_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, condition);
}
inline ::StringW System::TimeZoneInfo::FindTimeZoneId(::ArrayW<uint8_t> rawData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "FindTimeZoneId", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, rawData);
}
inline bool System::TimeZoneInfo::CompareTimeZoneFile(::StringW filePath, ::ArrayW<uint8_t> buffer, ::ArrayW<uint8_t> rawData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                           { "CompareTimeZoneFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, filePath, buffer, rawData);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::GetLocalTimeZoneFromTzFile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetLocalTimeZoneFromTzFile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*>(nullptr, ___internal_method);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::GetTimeZoneFromTzData(::ArrayW<uint8_t> rawData, ::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetTimeZoneFromTzData", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*>(nullptr, ___internal_method, rawData, id);
}
inline ::StringW System::TimeZoneInfo::GetTimeZoneDirectory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetTimeZoneDirectory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetDateTimeNowUtcOffsetFromUtc(::System::DateTime time, ::by_ref<bool> isAmbiguousLocalDst) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetDateTimeNowUtcOffsetFromUtc", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, time, isAmbiguousLocalDst);
}
inline void System::TimeZoneInfo::TZif_GenerateAdjustmentRules(::by_ref<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>> rules, ::System::TimeSpan baseUtcOffset, ::ArrayW<::System::DateTime> dts,
                                                               ::ArrayW<uint8_t> typeOfLocalTime, ::ArrayW<::System::TimeZoneInfo_TZifType> transitionType, ::ArrayW<bool> StandardTime,
                                                               ::ArrayW<bool> GmtTime, ::StringW futureTransitionsPosixFormat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                              { "TZif_GenerateAdjustmentRules",
                                                {},
                                                { ::i2c::type_of<::by_ref<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>>>(), ::i2c::type_of<::System::TimeSpan>(),
                                                  ::i2c::type_of<::ArrayW<::System::DateTime>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<::System::TimeZoneInfo_TZifType>>(),
                                                  ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rules, baseUtcOffset, dts, typeOfLocalTime, transitionType, StandardTime, GmtTime, futureTransitionsPosixFormat);
}
inline void System::TimeZoneInfo::TZif_GenerateAdjustmentRule(::by_ref<int32_t> index, ::System::TimeSpan timeZoneBaseUtcOffset,
                                                              ::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>* rulesList, ::ArrayW<::System::DateTime> dts,
                                                              ::ArrayW<uint8_t> typeOfLocalTime, ::ArrayW<::System::TimeZoneInfo_TZifType> transitionTypes, ::ArrayW<bool> StandardTime,
                                                              ::ArrayW<bool> GmtTime, ::StringW futureTransitionsPosixFormat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                              { "TZif_GenerateAdjustmentRule",
                                                {},
                                                { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::TimeSpan>(),
                                                  ::i2c::type_of<::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>*>(), ::i2c::type_of<::ArrayW<::System::DateTime>>(),
                                                  ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<::System::TimeZoneInfo_TZifType>>(), ::i2c::type_of<::ArrayW<bool>>(),
                                                  ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index, timeZoneBaseUtcOffset, rulesList, dts, typeOfLocalTime, transitionTypes, StandardTime, GmtTime,
                                                   futureTransitionsPosixFormat);
}
inline ::System::TimeSpan System::TimeZoneInfo::TZif_CalculateTransitionOffsetFromBase(::System::TimeSpan transitionOffset, ::System::TimeSpan timeZoneBaseUtcOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                           { "TZif_CalculateTransitionOffsetFromBase", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, transitionOffset, timeZoneBaseUtcOffset);
}
inline ::System::TimeZoneInfo_TZifType System::TimeZoneInfo::TZif_GetEarlyDateTransitionType(::ArrayW<::System::TimeZoneInfo_TZifType> transitionTypes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_GetEarlyDateTransitionType", {}, { ::i2c::type_of<::ArrayW<::System::TimeZoneInfo_TZifType>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_TZifType>(nullptr, ___internal_method, transitionTypes);
}
inline ::System::TimeZoneInfo_AdjustmentRule* System::TimeZoneInfo::TZif_CreateAdjustmentRuleForPosixFormat(::StringW posixFormat, ::System::DateTime startTransitionDate,
                                                                                                            ::System::TimeSpan timeZoneBaseUtcOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                          { "TZif_CreateAdjustmentRuleForPosixFormat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_AdjustmentRule*>(nullptr, ___internal_method, posixFormat, startTransitionDate, timeZoneBaseUtcOffset);
}
inline ::System::Nullable_1<::System::TimeSpan> System::TimeZoneInfo::TZif_ParseOffsetString(::StringW offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_ParseOffsetString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::TimeSpan>>(nullptr, ___internal_method, offset);
}
inline ::System::DateTime System::TimeZoneInfo::ParseTimeOfDay(::StringW time) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "ParseTimeOfDay", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, time);
}
inline ::System::Nullable_1<::System::TimeZoneInfo_TransitionTime> System::TimeZoneInfo::TZif_CreateTransitionTimeFromPosixRule(::StringW date, ::StringW time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_CreateTransitionTimeFromPosixRule", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::TimeZoneInfo_TransitionTime>>(nullptr, ___internal_method, date, time);
}
inline void System::TimeZoneInfo::TZif_ParseJulianDay(::StringW date, ::by_ref<int32_t> month, ::by_ref<int32_t> day) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                           { "TZif_ParseJulianDay", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, date, month, day);
}
inline bool System::TimeZoneInfo::TZif_ParseMDateRule(::StringW dateRule, ::by_ref<int32_t> month, ::by_ref<int32_t> week, ::by_ref<::System::DayOfWeek> dayOfWeek) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::TimeZoneInfo*>(),
          { "TZif_ParseMDateRule", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::DayOfWeek>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dateRule, month, week, dayOfWeek);
}
inline bool System::TimeZoneInfo::TZif_ParsePosixFormat(::StringW posixFormat, ::by_ref<::StringW> standardName, ::by_ref<::StringW> standardOffset, ::by_ref<::StringW> daylightSavingsName,
                                                        ::by_ref<::StringW> daylightSavingsOffset, ::by_ref<::StringW> start, ::by_ref<::StringW> startTime, ::by_ref<::StringW> end,
                                                        ::by_ref<::StringW> endTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_ParsePosixFormat",
                                                                        {},
                                                                        { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                                                          ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                                                          ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, posixFormat, standardName, standardOffset, daylightSavingsName, daylightSavingsOffset, start, startTime, end, endTime);
}
inline ::StringW System::TimeZoneInfo::TZif_ParsePosixName(::StringW posixFormat, ::by_ref<int32_t> index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_ParsePosixName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, posixFormat, index);
}
inline ::StringW System::TimeZoneInfo::TZif_ParsePosixOffset(::StringW posixFormat, ::by_ref<int32_t> index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_ParsePosixOffset", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, posixFormat, index);
}
inline void System::TimeZoneInfo::TZif_ParsePosixDateTime(::StringW posixFormat, ::by_ref<int32_t> index, ::by_ref<::StringW> date, ::by_ref<::StringW> time) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::TimeZoneInfo*>(),
          { "TZif_ParsePosixDateTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, posixFormat, index, date, time);
}
inline ::StringW System::TimeZoneInfo::TZif_ParsePosixDate(::StringW posixFormat, ::by_ref<int32_t> index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_ParsePosixDate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, posixFormat, index);
}
inline ::StringW System::TimeZoneInfo::TZif_ParsePosixTime(::StringW posixFormat, ::by_ref<int32_t> index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_ParsePosixTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, posixFormat, index);
}
inline ::StringW System::TimeZoneInfo::TZif_ParsePosixString(::StringW posixFormat, ::by_ref<int32_t> index, ::System::Func_2<char16_t, bool>* breakCondition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                       { "TZif_ParsePosixString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Func_2<char16_t, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, posixFormat, index, breakCondition);
}
inline ::StringW System::TimeZoneInfo::TZif_GetZoneAbbreviation(::StringW zoneAbbreviations, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_GetZoneAbbreviation", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, zoneAbbreviations, index);
}
inline int32_t System::TimeZoneInfo::TZif_ToInt32(::ArrayW<uint8_t> value, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_ToInt32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, startIndex);
}
inline int64_t System::TimeZoneInfo::TZif_ToInt64(::ArrayW<uint8_t> value, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_ToInt64", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value, startIndex);
}
inline int64_t System::TimeZoneInfo::TZif_ToUnixTime(::ArrayW<uint8_t> value, int32_t startIndex, ::System::TimeZoneInfo_TZVersion version) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                              { "TZif_ToUnixTime", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeZoneInfo_TZVersion>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value, startIndex, version);
}
inline ::System::DateTime System::TimeZoneInfo::TZif_UnixTimeToDateTime(int64_t unixTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TZif_UnixTimeToDateTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, unixTime);
}
inline void System::TimeZoneInfo::TZif_ParseRaw(::ArrayW<uint8_t> data, ::by_ref<::System::TimeZoneInfo_TZifHead> t, ::by_ref<::ArrayW<::System::DateTime>> dts,
                                                ::by_ref<::ArrayW<uint8_t>> typeOfLocalTime, ::by_ref<::ArrayW<::System::TimeZoneInfo_TZifType>> transitionType, ::by_ref<::StringW> zoneAbbreviations,
                                                ::by_ref<::ArrayW<bool>> StandardTime, ::by_ref<::ArrayW<bool>> GmtTime, ::by_ref<::StringW> futureTransitionsPosixFormat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                       { "TZif_ParseRaw",
                                         {},
                                         { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::System::TimeZoneInfo_TZifHead>>(), ::i2c::type_of<::by_ref<::ArrayW<::System::DateTime>>>(),
                                           ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<::System::TimeZoneInfo_TZifType>>>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                           ::i2c::type_of<::by_ref<::ArrayW<bool>>>(), ::i2c::type_of<::by_ref<::ArrayW<bool>>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, t, dts, typeOfLocalTime, transitionType, zoneAbbreviations, StandardTime, GmtTime, futureTransitionsPosixFormat);
}
inline ::StringW System::TimeZoneInfo::get_DisplayName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "get_DisplayName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::TimeZoneInfo::get_StandardName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "get_StandardName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::TimeZoneInfo::get_DaylightName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "get_DaylightName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::TimeSpan System::TimeZoneInfo::get_BaseUtcOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "get_BaseUtcOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline bool System::TimeZoneInfo::get_SupportsDaylightSavingTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "get_SupportsDaylightSavingTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::TimeZoneInfo_AdjustmentRule* System::TimeZoneInfo::GetPreviousAdjustmentRule(::System::TimeZoneInfo_AdjustmentRule* rule, ::System::Nullable_1<int32_t> ruleIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                              { "GetPreviousAdjustmentRule", {}, { ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_AdjustmentRule*>(this, ___internal_method, rule, ruleIndex);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffset(::System::DateTime dateTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetUtcOffset", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method, dateTime);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetLocalUtcOffset(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetLocalUtcOffset", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfoOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, dateTime, flags);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffset(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetUtcOffset", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfoOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method, dateTime, flags);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffset(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags, ::System::TimeZoneInfo_CachedData* cachedData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                          { "GetUtcOffset", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfoOptions>(), ::i2c::type_of<::System::TimeZoneInfo_CachedData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method, dateTime, flags, cachedData);
}
inline ::System::DateTime System::TimeZoneInfo::ConvertTime(::System::DateTime dateTime, ::System::TimeZoneInfo* sourceTimeZone, ::System::TimeZoneInfo* destinationTimeZone,
                                                            ::System::TimeZoneInfoOptions flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "ConvertTime",
                                                                                            {},
                                                                                            { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>(),
                                                                                              ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::System::TimeZoneInfoOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, dateTime, sourceTimeZone, destinationTimeZone, flags);
}
inline ::System::DateTime System::TimeZoneInfo::ConvertTime(::System::DateTime dateTime, ::System::TimeZoneInfo* sourceTimeZone, ::System::TimeZoneInfo* destinationTimeZone,
                                                            ::System::TimeZoneInfoOptions flags, ::System::TimeZoneInfo_CachedData* cachedData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "ConvertTime",
                                                                        {},
                                                                        { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::System::TimeZoneInfo*>(),
                                                                          ::i2c::type_of<::System::TimeZoneInfoOptions>(), ::i2c::type_of<::System::TimeZoneInfo_CachedData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, dateTime, sourceTimeZone, destinationTimeZone, flags, cachedData);
}
inline ::System::DateTime System::TimeZoneInfo::ConvertTimeToUtc(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "ConvertTimeToUtc", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfoOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, dateTime, flags);
}
inline bool System::TimeZoneInfo::Equals(::System::TimeZoneInfo* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "Equals", {}, { ::i2c::type_of<::System::TimeZoneInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline bool System::TimeZoneInfo::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::TimeZoneInfo*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::TimeZoneInfo::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::TimeZoneInfo*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::TimeZoneInfo::HasSameRules(::System::TimeZoneInfo* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "HasSameRules", {}, { ::i2c::type_of<::System::TimeZoneInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::get_Local() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "get_Local", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*>(nullptr, ___internal_method);
}
inline ::StringW System::TimeZoneInfo::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::TimeZoneInfo*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::get_Utc() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "get_Utc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*>(nullptr, ___internal_method);
}
inline void System::TimeZoneInfo::_ctor(::StringW id, ::System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName, ::StringW daylightDisplayName,
                                        ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*> adjustmentRules, bool disableDaylightSavingTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, baseUtcOffset, displayName, standardDisplayName, daylightDisplayName, adjustmentRules, disableDaylightSavingTime);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::CreateCustomTimeZone(::StringW id, ::System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                          { "CreateCustomTimeZone", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*>(nullptr, ___internal_method, id, baseUtcOffset, displayName, standardDisplayName);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::CreateCustomTimeZone(::StringW id, ::System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName,
                                                                          ::StringW daylightDisplayName, ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*> adjustmentRules,
                                                                          bool disableDaylightSavingTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                           { "CreateCustomTimeZone",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*>(nullptr, ___internal_method, id, baseUtcOffset, displayName, standardDisplayName, daylightDisplayName, adjustmentRules,
                                                                      disableDaylightSavingTime);
}
inline void System::TimeZoneInfo::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline void System::TimeZoneInfo::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                           ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                              { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::TimeZoneInfo::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::TimeZoneInfo_AdjustmentRule* System::TimeZoneInfo::GetAdjustmentRuleForTime(::System::DateTime dateTime, ::by_ref<::System::Nullable_1<int32_t>> ruleIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                           { "GetAdjustmentRuleForTime", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::by_ref<::System::Nullable_1<int32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_AdjustmentRule*>(this, ___internal_method, dateTime, ruleIndex);
}
inline ::System::TimeZoneInfo_AdjustmentRule* System::TimeZoneInfo::GetAdjustmentRuleForTime(::System::DateTime dateTime, bool dateTimeisUtc, ::by_ref<::System::Nullable_1<int32_t>> ruleIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                          { "GetAdjustmentRuleForTime", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Nullable_1<int32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo_AdjustmentRule*>(this, ___internal_method, dateTime, dateTimeisUtc, ruleIndex);
}
inline int32_t System::TimeZoneInfo::CompareAdjustmentRuleToDateTime(::System::TimeZoneInfo_AdjustmentRule* rule, ::System::TimeZoneInfo_AdjustmentRule* previousRule, ::System::DateTime dateTime,
                                                                     ::System::DateTime dateOnly, bool dateTimeisUtc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "CompareAdjustmentRuleToDateTime",
                                                                        {},
                                                                        { ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                                                                          ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, rule, previousRule, dateTime, dateOnly, dateTimeisUtc);
}
inline ::System::DateTime System::TimeZoneInfo::ConvertToUtc(::System::DateTime dateTime, ::System::TimeSpan daylightDelta, ::System::TimeSpan baseUtcOffsetDelta) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                              { "ConvertToUtc", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, dateTime, daylightDelta, baseUtcOffsetDelta);
}
inline ::System::DateTime System::TimeZoneInfo::ConvertFromUtc(::System::DateTime dateTime, ::System::TimeSpan daylightDelta, ::System::TimeSpan baseUtcOffsetDelta) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                              { "ConvertFromUtc", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, dateTime, daylightDelta, baseUtcOffsetDelta);
}
inline ::System::DateTime System::TimeZoneInfo::ConvertToFromUtc(::System::DateTime dateTime, ::System::TimeSpan daylightDelta, ::System::TimeSpan baseUtcOffsetDelta, bool convertToUtc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                          { "ConvertToFromUtc", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, dateTime, daylightDelta, baseUtcOffsetDelta, convertToUtc);
}
inline ::System::DateTime System::TimeZoneInfo::ConvertUtcToTimeZone(int64_t ticks, ::System::TimeZoneInfo* destinationTimeZone, ::by_ref<bool> isAmbiguousLocalDst) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                              { "ConvertUtcToTimeZone", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, ticks, destinationTimeZone, isAmbiguousLocalDst);
}
inline ::System::Globalization::DaylightTimeStruct System::TimeZoneInfo::GetDaylightTime(int32_t year, ::System::TimeZoneInfo_AdjustmentRule* rule, ::System::Nullable_1<int32_t> ruleIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                          { "GetDaylightTime", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DaylightTimeStruct>(this, ___internal_method, year, rule, ruleIndex);
}
inline bool System::TimeZoneInfo::GetIsDaylightSavings(::System::DateTime time, ::System::TimeZoneInfo_AdjustmentRule* rule, ::System::Globalization::DaylightTimeStruct daylightTime,
                                                       ::System::TimeZoneInfoOptions flags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetIsDaylightSavings",
                                                                        {},
                                                                        { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                                                                          ::i2c::type_of<::System::Globalization::DaylightTimeStruct>(), ::i2c::type_of<::System::TimeZoneInfoOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, time, rule, daylightTime, flags);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetDaylightSavingsStartOffsetFromUtc(::System::TimeSpan baseUtcOffset, ::System::TimeZoneInfo_AdjustmentRule* rule,
                                                                                     ::System::Nullable_1<int32_t> ruleIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                       { "GetDaylightSavingsStartOffsetFromUtc",
                                         {},
                                         { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method, baseUtcOffset, rule, ruleIndex);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetDaylightSavingsEndOffsetFromUtc(::System::TimeSpan baseUtcOffset, ::System::TimeZoneInfo_AdjustmentRule* rule) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                              { "GetDaylightSavingsEndOffsetFromUtc", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method, baseUtcOffset, rule);
}
inline bool System::TimeZoneInfo::GetIsDaylightSavingsFromUtc(::System::DateTime time, int32_t year, ::System::TimeSpan utc, ::System::TimeZoneInfo_AdjustmentRule* rule,
                                                              ::System::Nullable_1<int32_t> ruleIndex, ::by_ref<bool> isAmbiguousLocalDst, ::System::TimeZoneInfo* zone) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetIsDaylightSavingsFromUtc",
                                                                                            {},
                                                                                            { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeSpan>(),
                                                                                              ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(),
                                                                                              ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::System::TimeZoneInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, time, year, utc, rule, ruleIndex, isAmbiguousLocalDst, zone);
}
inline bool System::TimeZoneInfo::CheckIsDst(::System::DateTime startTime, ::System::DateTime time, ::System::DateTime endTime, bool ignoreYearAdjustment,
                                             ::System::TimeZoneInfo_AdjustmentRule* rule) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "CheckIsDst",
                                                                                     {},
                                                                                     { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::DateTime>(),
                                                                                       ::i2c::type_of<bool>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, startTime, time, endTime, ignoreYearAdjustment, rule);
}
inline bool System::TimeZoneInfo::GetIsAmbiguousTime(::System::DateTime time, ::System::TimeZoneInfo_AdjustmentRule* rule, ::System::Globalization::DaylightTimeStruct daylightTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetIsAmbiguousTime",
                                                                                            {},
                                                                                            { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                                                                                              ::i2c::type_of<::System::Globalization::DaylightTimeStruct>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, time, rule, daylightTime);
}
inline bool System::TimeZoneInfo::GetIsInvalidTime(::System::DateTime time, ::System::TimeZoneInfo_AdjustmentRule* rule, ::System::Globalization::DaylightTimeStruct daylightTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetIsInvalidTime",
                                                                                            {},
                                                                                            { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>(),
                                                                                              ::i2c::type_of<::System::Globalization::DaylightTimeStruct>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, time, rule, daylightTime);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffset(::System::DateTime time, ::System::TimeZoneInfo* zone, ::System::TimeZoneInfoOptions flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                       { "GetUtcOffset", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::System::TimeZoneInfoOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, time, zone, flags);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffsetFromUtc(::System::DateTime time, ::System::TimeZoneInfo* zone) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetUtcOffsetFromUtc", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, time, zone);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffsetFromUtc(::System::DateTime time, ::System::TimeZoneInfo* zone, ::by_ref<bool> isDaylightSavings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                              { "GetUtcOffsetFromUtc", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, time, zone, isDaylightSavings);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffsetFromUtc(::System::DateTime time, ::System::TimeZoneInfo* zone, ::by_ref<bool> isDaylightSavings, ::by_ref<bool> isAmbiguousLocalDst) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::TimeZoneInfo*>(),
          { "GetUtcOffsetFromUtc", {}, { ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeZoneInfo*>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, time, zone, isDaylightSavings, isAmbiguousLocalDst);
}
inline ::System::DateTime System::TimeZoneInfo::TransitionTimeToDateTime(int32_t year, ::System::TimeZoneInfo_TransitionTime transitionTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "TransitionTimeToDateTime", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeZoneInfo_TransitionTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, year, transitionTime);
}
inline void System::TimeZoneInfo::ValidateTimeZoneInfo(::StringW id, ::System::TimeSpan baseUtcOffset, ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*> adjustmentRules,
                                                       ::by_ref<bool> adjustmentRulesSupportDst) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "ValidateTimeZoneInfo",
                                                                                     {},
                                                                                     { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::TimeSpan>(),
                                                                                       ::i2c::type_of<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id, baseUtcOffset, adjustmentRules, adjustmentRulesSupportDst);
}
inline bool System::TimeZoneInfo::UtcOffsetOutOfRange(::System::TimeSpan offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "UtcOffsetOutOfRange", {}, { ::i2c::type_of<::System::TimeSpan>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, offset);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffset(::System::TimeSpan baseUtcOffset, ::System::TimeZoneInfo_AdjustmentRule* adjustmentRule) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetUtcOffset", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, baseUtcOffset, adjustmentRule);
}
inline bool System::TimeZoneInfo::IsValidAdjustmentRuleOffest(::System::TimeSpan baseUtcOffset, ::System::TimeZoneInfo_AdjustmentRule* adjustmentRule) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                                           { "IsValidAdjustmentRuleOffest", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::TimeZoneInfo_AdjustmentRule*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, baseUtcOffset, adjustmentRule);
}
inline void System::TimeZoneInfo::NormalizeAdjustmentRuleOffset(::System::TimeSpan baseUtcOffset, ::by_ref<::System::TimeZoneInfo_AdjustmentRule*> adjustmentRule) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                              { "NormalizeAdjustmentRuleOffset", {}, { ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::by_ref<::System::TimeZoneInfo_AdjustmentRule*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, baseUtcOffset, adjustmentRule);
}
inline ::StringW System::TimeZoneInfo::GetTimeZoneDirectoryUnity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "GetTimeZoneDirectoryUnity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>* System::TimeZoneInfo::CreateAdjustmentRule(int32_t year, ::by_ref<::ArrayW<int64_t>> data,
                                                                                                                                  ::by_ref<::ArrayW<::StringW>> names) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(),
                                       { "CreateAdjustmentRule", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ArrayW<int64_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<::StringW>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>*>(nullptr, ___internal_method, year, data, names);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::CreateLocalUnity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { "CreateLocalUnity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*>(nullptr, ___internal_method);
}
inline void System::TimeZoneInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TimeZoneInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::New_ctor(::ArrayW<uint8_t> data, ::StringW id, bool dstDisabled) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneInfo*>(data, id, dstDisabled));
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::New_ctor(::StringW id, ::System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName, ::StringW daylightDisplayName,
                                                              ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*> adjustmentRules, bool disableDaylightSavingTime) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::System::TimeZoneInfo*>(id, baseUtcOffset, displayName, standardDisplayName, daylightDisplayName, adjustmentRules, disableDaylightSavingTime));
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneInfo*>(info, context));
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZoneInfo*>());
}
/// @brief Convert operator to "::System::IEquatable_1<::System::TimeZoneInfo*>"
constexpr System::TimeZoneInfo::operator ::System::IEquatable_1<::System::TimeZoneInfo*>*() noexcept {
  return static_cast<::System::IEquatable_1<::System::TimeZoneInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::System::TimeZoneInfo*>"
constexpr ::System::IEquatable_1<::System::TimeZoneInfo*>* System::TimeZoneInfo::i___System__IEquatable_1___System__TimeZoneInfo__() noexcept {
  return static_cast<::System::IEquatable_1<::System::TimeZoneInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::TimeZoneInfo::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::TimeZoneInfo::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr System::TimeZoneInfo::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::TimeZoneInfo::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::TimeZoneInfo::TimeZoneInfo() {}
