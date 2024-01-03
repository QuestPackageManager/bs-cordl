#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__DayOfWeek_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/zzzz__TimeZoneInfo_impl.hpp"
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
//  Writing Method size for method: ::System::__TimeZoneInfo__TZifType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__TimeZoneInfo__TZifType::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::__TimeZoneInfo__TZifType::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x25186b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TZifType>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void System::__TimeZoneInfo__TZifType::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TZifType>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, index);
}
// Ctor Parameters [CppParam { name: "UtcOffset", ty: "::System::TimeSpan", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsDst", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "AbbreviationIndex", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::__TimeZoneInfo__TZifType::__TimeZoneInfo__TZifType(::System::TimeSpan UtcOffset, bool IsDst, uint8_t AbbreviationIndex) noexcept {
  this->UtcOffset = UtcOffset;
  this->IsDst = IsDst;
  this->AbbreviationIndex = AbbreviationIndex;
}
// Ctor Parameters []
constexpr ::System::__TimeZoneInfo__TZifType::__TimeZoneInfo__TZifType() {}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::__TimeZoneInfo__TZVersion::__TimeZoneInfo__TZVersion(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::__TimeZoneInfo__TZVersion::__TimeZoneInfo__TZVersion() {}
constexpr ::System::__TimeZoneInfo__TZVersion System::__TimeZoneInfo__TZVersion::V1{ static_cast<uint8_t>(0x0u) };
constexpr ::System::__TimeZoneInfo__TZVersion System::__TimeZoneInfo__TZVersion::V2{ static_cast<uint8_t>(0x1u) };
constexpr ::System::__TimeZoneInfo__TZVersion System::__TimeZoneInfo__TZVersion::V3{ static_cast<uint8_t>(0x2u) };
//  Writing Method size for method: ::System::__TimeZoneInfo__TZifHead._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__TimeZoneInfo__TZifHead::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::__TimeZoneInfo__TZifHead::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x25184fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TZifHead>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void System::__TimeZoneInfo__TZifHead::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TZifHead>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, index);
}
// Ctor Parameters [CppParam { name: "Magic", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Version", ty: "::System::__TimeZoneInfo__TZVersion", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "IsGmtCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsStdCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "LeapCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "TimeCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "TypeCount", ty:
// "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "CharCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::__TimeZoneInfo__TZifHead::__TimeZoneInfo__TZifHead(uint32_t Magic, ::System::__TimeZoneInfo__TZVersion Version, uint32_t IsGmtCount, uint32_t IsStdCount, uint32_t LeapCount,
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
constexpr ::System::__TimeZoneInfo__TZifHead::__TimeZoneInfo__TZifHead() {}
//  Writing Method size for method: ::System::__TimeZoneInfo__TransitionTime.get_TimeOfDay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::__TimeZoneInfo__TransitionTime::*)()>(
    &::System::__TimeZoneInfo__TransitionTime::get_TimeOfDay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x251e218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), "get_TimeOfDay",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__TransitionTime.get_Month
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::__TimeZoneInfo__TransitionTime::*)()>(&::System::__TimeZoneInfo__TransitionTime::get_Month)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x251e220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), "get_Month",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__TransitionTime.get_Week
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::__TimeZoneInfo__TransitionTime::*)()>(&::System::__TimeZoneInfo__TransitionTime::get_Week)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x251e228;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), "get_Week",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__TransitionTime.get_Day
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::__TimeZoneInfo__TransitionTime::*)()>(&::System::__TimeZoneInfo__TransitionTime::get_Day)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x251e230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), "get_Day",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__TransitionTime.get_DayOfWeek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DayOfWeek (::System::__TimeZoneInfo__TransitionTime::*)()>(
    &::System::__TimeZoneInfo__TransitionTime::get_DayOfWeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x251e238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), "get_DayOfWeek",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__TransitionTime.get_IsFixedDateRule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::__TimeZoneInfo__TransitionTime::*)()>(
    &::System::__TimeZoneInfo__TransitionTime::get_IsFixedDateRule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x251e240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(),
                                                                               "get_IsFixedDateRule", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__TransitionTime.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::__TimeZoneInfo__TransitionTime::*)(::System::Object*)>(
    &::System::__TimeZoneInfo__TransitionTime::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x251e248;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__TransitionTime.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::__TimeZoneInfo__TransitionTime, ::System::__TimeZoneInfo__TransitionTime)>(
    &::System::__TimeZoneInfo__TransitionTime::op_Inequality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x251d404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), "op_Inequality", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__TransitionTime.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::__TimeZoneInfo__TransitionTime::*)(::System::__TimeZoneInfo__TransitionTime)>(
    &::System::__TimeZoneInfo__TransitionTime::Equals)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x251d438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), "Equals", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__TransitionTime.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::__TimeZoneInfo__TransitionTime::*)()>(&::System::__TimeZoneInfo__TransitionTime::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x251e2d8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__TransitionTime._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::__TimeZoneInfo__TransitionTime::*)(::System::DateTime, int32_t, int32_t, int32_t, ::System::DayOfWeek, bool)>(&::System::__TimeZoneInfo__TransitionTime::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x251e2ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DayOfWeek>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__TransitionTime.CreateFixedDateRule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::__TimeZoneInfo__TransitionTime (*)(::System::DateTime, int32_t, int32_t)>(
    &::System::__TimeZoneInfo__TransitionTime::CreateFixedDateRule)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2513f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), "CreateFixedDateRule", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__TransitionTime.CreateFloatingDateRule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::__TimeZoneInfo__TransitionTime (*)(::System::DateTime, int32_t, int32_t, ::System::DayOfWeek)>(
    &::System::__TimeZoneInfo__TransitionTime::CreateFloatingDateRule)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2517a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), "CreateFloatingDateRule", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DayOfWeek>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__TransitionTime.ValidateTransitionTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::DateTime, int32_t, int32_t, int32_t, ::System::DayOfWeek)>(
    &::System::__TimeZoneInfo__TransitionTime::ValidateTransitionTime)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x251e35c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), "ValidateTransitionTime", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DayOfWeek>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__TransitionTime.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__TimeZoneInfo__TransitionTime::*)(::System::Object*)>(
    &::System::__TimeZoneInfo__TransitionTime::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x251e5a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(),
                                                                               "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::vector<Il2CppClass*>{},
                                                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__TransitionTime.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::__TimeZoneInfo__TransitionTime::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
        &::System::__TimeZoneInfo__TransitionTime::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x251e698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), "System.Runtime.Serialization.ISerializable.GetObjectData",
                                    std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__TransitionTime._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__TimeZoneInfo__TransitionTime::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::__TimeZoneInfo__TransitionTime::_ctor)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x251e844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::System::__TimeZoneInfo__TransitionTime>"
constexpr System::__TimeZoneInfo__TransitionTime::operator ::System::IEquatable_1<::System::__TimeZoneInfo__TransitionTime>*() {
  return static_cast<::System::IEquatable_1<::System::__TimeZoneInfo__TransitionTime>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::System::__TimeZoneInfo__TransitionTime>"
constexpr ::System::IEquatable_1<::System::__TimeZoneInfo__TransitionTime>* System::__TimeZoneInfo__TransitionTime::i___System__IEquatable_1___System____TimeZoneInfo__TransitionTime_() {
  return static_cast<::System::IEquatable_1<::System::__TimeZoneInfo__TransitionTime>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::__TimeZoneInfo__TransitionTime::operator ::System::Runtime::Serialization::ISerializable*() {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::__TimeZoneInfo__TransitionTime::i___System__Runtime__Serialization__ISerializable() {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr System::__TimeZoneInfo__TransitionTime::operator ::System::Runtime::Serialization::IDeserializationCallback*() {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::__TimeZoneInfo__TransitionTime::i___System__Runtime__Serialization__IDeserializationCallback() {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline ::System::DateTime System::__TimeZoneInfo__TransitionTime::get_TimeOfDay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), "get_TimeOfDay",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline int32_t System::__TimeZoneInfo__TransitionTime::get_Month() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), "get_Month",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::__TimeZoneInfo__TransitionTime::get_Week() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), "get_Week",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::__TimeZoneInfo__TransitionTime::get_Day() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), "get_Day",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::DayOfWeek System::__TimeZoneInfo__TransitionTime::get_DayOfWeek() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), "get_DayOfWeek",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::DayOfWeek, false>(this, ___internal_method);
}
inline bool System::__TimeZoneInfo__TransitionTime::get_IsFixedDateRule() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(),
                                                                             "get_IsFixedDateRule", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::__TimeZoneInfo__TransitionTime::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool System::__TimeZoneInfo__TransitionTime::op_Inequality(::System::__TimeZoneInfo__TransitionTime t1, ::System::__TimeZoneInfo__TransitionTime t2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), "op_Inequality", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, t1, t2);
}
inline bool System::__TimeZoneInfo__TransitionTime::Equals(::System::__TimeZoneInfo__TransitionTime other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t System::__TimeZoneInfo__TransitionTime::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::__TimeZoneInfo__TransitionTime::_ctor(::System::DateTime timeOfDay, int32_t month, int32_t week, int32_t day, ::System::DayOfWeek dayOfWeek, bool isFixedDateRule) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DayOfWeek>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeOfDay, month, week, day, dayOfWeek, isFixedDateRule);
}
inline ::System::__TimeZoneInfo__TransitionTime System::__TimeZoneInfo__TransitionTime::CreateFixedDateRule(::System::DateTime timeOfDay, int32_t month, int32_t day) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), "CreateFixedDateRule", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::__TimeZoneInfo__TransitionTime, false>(nullptr, ___internal_method, timeOfDay, month, day);
}
inline ::System::__TimeZoneInfo__TransitionTime System::__TimeZoneInfo__TransitionTime::CreateFloatingDateRule(::System::DateTime timeOfDay, int32_t month, int32_t week,
                                                                                                               ::System::DayOfWeek dayOfWeek) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), "CreateFloatingDateRule", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DayOfWeek>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::__TimeZoneInfo__TransitionTime, false>(nullptr, ___internal_method, timeOfDay, month, week, dayOfWeek);
}
inline void System::__TimeZoneInfo__TransitionTime::ValidateTransitionTime(::System::DateTime timeOfDay, int32_t month, int32_t week, int32_t day, ::System::DayOfWeek dayOfWeek) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), "ValidateTransitionTime", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DayOfWeek>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, timeOfDay, month, week, day, dayOfWeek);
}
inline void System::__TimeZoneInfo__TransitionTime::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(),
                                                                             "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender);
}
inline void System::__TimeZoneInfo__TransitionTime::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                             ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline void System::__TimeZoneInfo__TransitionTime::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__TransitionTime>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
// Ctor Parameters [CppParam { name: "_timeOfDay", ty: "::System::DateTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "_month", ty: "uint8_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_week", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_day", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_dayOfWeek", ty:
// "::System::DayOfWeek", modifiers: "", def_value: Some("{}") }, CppParam { name: "_isFixedDateRule", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::__TimeZoneInfo__TransitionTime::__TimeZoneInfo__TransitionTime(::System::DateTime _timeOfDay, uint8_t _month, uint8_t _week, uint8_t _day, ::System::DayOfWeek _dayOfWeek,
                                                                                   bool _isFixedDateRule) noexcept {
  this->_timeOfDay = _timeOfDay;
  this->_month = _month;
  this->_week = _week;
  this->_day = _day;
  this->_dayOfWeek = _dayOfWeek;
  this->_isFixedDateRule = _isFixedDateRule;
}
// Ctor Parameters []
constexpr ::System::__TimeZoneInfo__TransitionTime::__TimeZoneInfo__TransitionTime() {}
//  Writing Method size for method: ::System::__TimeZoneInfo__AdjustmentRule.get_DateStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::__TimeZoneInfo__AdjustmentRule::*)()>(
    &::System::__TimeZoneInfo__AdjustmentRule::get_DateStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x251d3b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                               "get_DateStart", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__AdjustmentRule.get_DateEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::__TimeZoneInfo__AdjustmentRule::*)()>(
    &::System::__TimeZoneInfo__AdjustmentRule::get_DateEnd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x251d3bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(), "get_DateEnd",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__AdjustmentRule.get_DaylightDelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::__TimeZoneInfo__AdjustmentRule::*)()>(
    &::System::__TimeZoneInfo__AdjustmentRule::get_DaylightDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x251d3c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                               "get_DaylightDelta", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__AdjustmentRule.get_DaylightTransitionStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::__TimeZoneInfo__TransitionTime (::System::__TimeZoneInfo__AdjustmentRule::*)()>(
    &::System::__TimeZoneInfo__AdjustmentRule::get_DaylightTransitionStart)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x251d3cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                               "get_DaylightTransitionStart", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__AdjustmentRule.get_DaylightTransitionEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::__TimeZoneInfo__TransitionTime (::System::__TimeZoneInfo__AdjustmentRule::*)()>(
    &::System::__TimeZoneInfo__AdjustmentRule::get_DaylightTransitionEnd)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x251d3e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                               "get_DaylightTransitionEnd", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__AdjustmentRule.get_BaseUtcOffsetDelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::__TimeZoneInfo__AdjustmentRule::*)()>(
    &::System::__TimeZoneInfo__AdjustmentRule::get_BaseUtcOffsetDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x251d3f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                               "get_BaseUtcOffsetDelta", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__AdjustmentRule.get_NoDaylightTransitions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::__TimeZoneInfo__AdjustmentRule::*)()>(
    &::System::__TimeZoneInfo__AdjustmentRule::get_NoDaylightTransitions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x251d3fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                               "get_NoDaylightTransitions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__AdjustmentRule.get_HasDaylightSaving
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::__TimeZoneInfo__AdjustmentRule::*)()>(
    &::System::__TimeZoneInfo__AdjustmentRule::get_HasDaylightSaving)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x25194e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                               "get_HasDaylightSaving", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__AdjustmentRule.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::__TimeZoneInfo__AdjustmentRule::*)(::System::__TimeZoneInfo__AdjustmentRule*)>(
    &::System::__TimeZoneInfo__AdjustmentRule::Equals)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x251a41c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__AdjustmentRule.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::__TimeZoneInfo__AdjustmentRule::*)()>(&::System::__TimeZoneInfo__AdjustmentRule::GetHashCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x251d510;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__AdjustmentRule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__TimeZoneInfo__AdjustmentRule::*)(
    ::System::DateTime, ::System::DateTime, ::System::TimeSpan, ::System::__TimeZoneInfo__TransitionTime, ::System::__TimeZoneInfo__TransitionTime, ::System::TimeSpan, bool)>(
    &::System::__TimeZoneInfo__AdjustmentRule::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x251d51c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__AdjustmentRule.CreateAdjustmentRule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::__TimeZoneInfo__AdjustmentRule* (*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan, ::System::__TimeZoneInfo__TransitionTime,
                                                              ::System::__TimeZoneInfo__TransitionTime)>(&::System::__TimeZoneInfo__AdjustmentRule::CreateAdjustmentRule)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2513f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(), "CreateAdjustmentRule", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__AdjustmentRule.CreateAdjustmentRule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::__TimeZoneInfo__AdjustmentRule* (*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan, ::System::__TimeZoneInfo__TransitionTime,
                                                              ::System::__TimeZoneInfo__TransitionTime, ::System::TimeSpan, bool)>(&::System::__TimeZoneInfo__AdjustmentRule::CreateAdjustmentRule)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x25168d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(), "CreateAdjustmentRule", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__AdjustmentRule.IsStartDateMarkerForBeginningOfYear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::__TimeZoneInfo__AdjustmentRule::*)()>(
    &::System::__TimeZoneInfo__AdjustmentRule::IsStartDateMarkerForBeginningOfYear)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x251b874;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                               "IsStartDateMarkerForBeginningOfYear", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__AdjustmentRule.IsEndDateMarkerForEndOfYear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::__TimeZoneInfo__AdjustmentRule::*)()>(
    &::System::__TimeZoneInfo__AdjustmentRule::IsEndDateMarkerForEndOfYear)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x251b924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                               "IsEndDateMarkerForEndOfYear", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__AdjustmentRule.ValidateAdjustmentRule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan, ::System::__TimeZoneInfo__TransitionTime, ::System::__TimeZoneInfo__TransitionTime, bool)>(
        &::System::__TimeZoneInfo__AdjustmentRule::ValidateAdjustmentRule)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x251d5e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(), "ValidateAdjustmentRule", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__AdjustmentRule.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__TimeZoneInfo__AdjustmentRule::*)(::System::Object*)>(
    &::System::__TimeZoneInfo__AdjustmentRule::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x251da6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                               "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::vector<Il2CppClass*>{},
                                                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__AdjustmentRule.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::__TimeZoneInfo__AdjustmentRule::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
        &::System::__TimeZoneInfo__AdjustmentRule::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x251db84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                    "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__AdjustmentRule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__TimeZoneInfo__AdjustmentRule::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::__TimeZoneInfo__AdjustmentRule::_ctor)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x251ddc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__AdjustmentRule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__TimeZoneInfo__AdjustmentRule::*)()>(&::System::__TimeZoneInfo__AdjustmentRule::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x251e1e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::System::__TimeZoneInfo__AdjustmentRule*>"
constexpr System::__TimeZoneInfo__AdjustmentRule::operator ::System::IEquatable_1<::System::__TimeZoneInfo__AdjustmentRule*>*() noexcept {
  return static_cast<::System::IEquatable_1<::System::__TimeZoneInfo__AdjustmentRule*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::System::__TimeZoneInfo__AdjustmentRule*>"
constexpr ::System::IEquatable_1<::System::__TimeZoneInfo__AdjustmentRule*>* System::__TimeZoneInfo__AdjustmentRule::i___System__IEquatable_1___System____TimeZoneInfo__AdjustmentRule__() noexcept {
  return static_cast<::System::IEquatable_1<::System::__TimeZoneInfo__AdjustmentRule*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::__TimeZoneInfo__AdjustmentRule::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::__TimeZoneInfo__AdjustmentRule::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr System::__TimeZoneInfo__AdjustmentRule::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::__TimeZoneInfo__AdjustmentRule::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
constexpr ::System::DateTime& System::__TimeZoneInfo__AdjustmentRule::__get__dateStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateStart;
}
constexpr ::System::DateTime const& System::__TimeZoneInfo__AdjustmentRule::__get__dateStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateStart;
}
constexpr void System::__TimeZoneInfo__AdjustmentRule::__set__dateStart(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateStart = value;
}
constexpr ::System::DateTime& System::__TimeZoneInfo__AdjustmentRule::__get__dateEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateEnd;
}
constexpr ::System::DateTime const& System::__TimeZoneInfo__AdjustmentRule::__get__dateEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dateEnd;
}
constexpr void System::__TimeZoneInfo__AdjustmentRule::__set__dateEnd(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dateEnd = value;
}
constexpr ::System::TimeSpan& System::__TimeZoneInfo__AdjustmentRule::__get__daylightDelta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____daylightDelta;
}
constexpr ::System::TimeSpan const& System::__TimeZoneInfo__AdjustmentRule::__get__daylightDelta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____daylightDelta;
}
constexpr void System::__TimeZoneInfo__AdjustmentRule::__set__daylightDelta(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____daylightDelta = value;
}
constexpr ::System::__TimeZoneInfo__TransitionTime& System::__TimeZoneInfo__AdjustmentRule::__get__daylightTransitionStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____daylightTransitionStart;
}
constexpr ::System::__TimeZoneInfo__TransitionTime const& System::__TimeZoneInfo__AdjustmentRule::__get__daylightTransitionStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____daylightTransitionStart;
}
constexpr void System::__TimeZoneInfo__AdjustmentRule::__set__daylightTransitionStart(::System::__TimeZoneInfo__TransitionTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____daylightTransitionStart = value;
}
constexpr ::System::__TimeZoneInfo__TransitionTime& System::__TimeZoneInfo__AdjustmentRule::__get__daylightTransitionEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____daylightTransitionEnd;
}
constexpr ::System::__TimeZoneInfo__TransitionTime const& System::__TimeZoneInfo__AdjustmentRule::__get__daylightTransitionEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____daylightTransitionEnd;
}
constexpr void System::__TimeZoneInfo__AdjustmentRule::__set__daylightTransitionEnd(::System::__TimeZoneInfo__TransitionTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____daylightTransitionEnd = value;
}
constexpr ::System::TimeSpan& System::__TimeZoneInfo__AdjustmentRule::__get__baseUtcOffsetDelta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseUtcOffsetDelta;
}
constexpr ::System::TimeSpan const& System::__TimeZoneInfo__AdjustmentRule::__get__baseUtcOffsetDelta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseUtcOffsetDelta;
}
constexpr void System::__TimeZoneInfo__AdjustmentRule::__set__baseUtcOffsetDelta(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseUtcOffsetDelta = value;
}
constexpr bool& System::__TimeZoneInfo__AdjustmentRule::__get__noDaylightTransitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noDaylightTransitions;
}
constexpr bool const& System::__TimeZoneInfo__AdjustmentRule::__get__noDaylightTransitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noDaylightTransitions;
}
constexpr void System::__TimeZoneInfo__AdjustmentRule::__set__noDaylightTransitions(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noDaylightTransitions = value;
}
inline ::System::DateTime System::__TimeZoneInfo__AdjustmentRule::get_DateStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(), "get_DateStart",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::System::DateTime System::__TimeZoneInfo__AdjustmentRule::get_DateEnd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(), "get_DateEnd",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::System::TimeSpan System::__TimeZoneInfo__AdjustmentRule::get_DaylightDelta() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                             "get_DaylightDelta", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
inline ::System::__TimeZoneInfo__TransitionTime System::__TimeZoneInfo__AdjustmentRule::get_DaylightTransitionStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                             "get_DaylightTransitionStart", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::__TimeZoneInfo__TransitionTime, false>(this, ___internal_method);
}
inline ::System::__TimeZoneInfo__TransitionTime System::__TimeZoneInfo__AdjustmentRule::get_DaylightTransitionEnd() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                             "get_DaylightTransitionEnd", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::__TimeZoneInfo__TransitionTime, false>(this, ___internal_method);
}
inline ::System::TimeSpan System::__TimeZoneInfo__AdjustmentRule::get_BaseUtcOffsetDelta() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                             "get_BaseUtcOffsetDelta", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
inline bool System::__TimeZoneInfo__AdjustmentRule::get_NoDaylightTransitions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                             "get_NoDaylightTransitions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::__TimeZoneInfo__AdjustmentRule::get_HasDaylightSaving() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                             "get_HasDaylightSaving", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::__TimeZoneInfo__AdjustmentRule::Equals(::System::__TimeZoneInfo__AdjustmentRule* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t System::__TimeZoneInfo__AdjustmentRule::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::__TimeZoneInfo__AdjustmentRule* System::__TimeZoneInfo__AdjustmentRule::New_ctor(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta,
                                                                                                  ::System::__TimeZoneInfo__TransitionTime daylightTransitionStart,
                                                                                                  ::System::__TimeZoneInfo__TransitionTime daylightTransitionEnd, ::System::TimeSpan baseUtcOffsetDelta,
                                                                                                  bool noDaylightTransitions) {
  return THROW_UNLESS(
      ::il2cpp_utils::New<::System::__TimeZoneInfo__AdjustmentRule*>(dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd, baseUtcOffsetDelta, noDaylightTransitions));
}
inline void System::__TimeZoneInfo__AdjustmentRule::_ctor(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta,
                                                          ::System::__TimeZoneInfo__TransitionTime daylightTransitionStart, ::System::__TimeZoneInfo__TransitionTime daylightTransitionEnd,
                                                          ::System::TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd, baseUtcOffsetDelta,
                                                          noDaylightTransitions);
}
inline ::System::__TimeZoneInfo__AdjustmentRule* System::__TimeZoneInfo__AdjustmentRule::CreateAdjustmentRule(::System::DateTime dateStart, ::System::DateTime dateEnd,
                                                                                                              ::System::TimeSpan daylightDelta,
                                                                                                              ::System::__TimeZoneInfo__TransitionTime daylightTransitionStart,
                                                                                                              ::System::__TimeZoneInfo__TransitionTime daylightTransitionEnd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(), "CreateAdjustmentRule", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::__TimeZoneInfo__AdjustmentRule*, false>(nullptr, ___internal_method, dateStart, dateEnd, daylightDelta, daylightTransitionStart,
                                                                                               daylightTransitionEnd);
}
inline ::System::__TimeZoneInfo__AdjustmentRule* System::__TimeZoneInfo__AdjustmentRule::CreateAdjustmentRule(::System::DateTime dateStart, ::System::DateTime dateEnd,
                                                                                                              ::System::TimeSpan daylightDelta,
                                                                                                              ::System::__TimeZoneInfo__TransitionTime daylightTransitionStart,
                                                                                                              ::System::__TimeZoneInfo__TransitionTime daylightTransitionEnd,
                                                                                                              ::System::TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(), "CreateAdjustmentRule", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::__TimeZoneInfo__AdjustmentRule*, false>(nullptr, ___internal_method, dateStart, dateEnd, daylightDelta, daylightTransitionStart,
                                                                                               daylightTransitionEnd, baseUtcOffsetDelta, noDaylightTransitions);
}
inline bool System::__TimeZoneInfo__AdjustmentRule::IsStartDateMarkerForBeginningOfYear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                             "IsStartDateMarkerForBeginningOfYear", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::__TimeZoneInfo__AdjustmentRule::IsEndDateMarkerForEndOfYear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                             "IsEndDateMarkerForEndOfYear", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::__TimeZoneInfo__AdjustmentRule::ValidateAdjustmentRule(::System::DateTime dateStart, ::System::DateTime dateEnd, ::System::TimeSpan daylightDelta,
                                                                           ::System::__TimeZoneInfo__TransitionTime daylightTransitionStart,
                                                                           ::System::__TimeZoneInfo__TransitionTime daylightTransitionEnd, bool noDaylightTransitions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(), "ValidateAdjustmentRule", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dateStart, dateEnd, daylightDelta, daylightTransitionStart, daylightTransitionEnd, noDaylightTransitions);
}
inline void System::__TimeZoneInfo__AdjustmentRule::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                             "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender);
}
inline void System::__TimeZoneInfo__AdjustmentRule::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                             ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::System::__TimeZoneInfo__AdjustmentRule* System::__TimeZoneInfo__AdjustmentRule::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                  ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::__TimeZoneInfo__AdjustmentRule*>(info, context));
}
inline void System::__TimeZoneInfo__AdjustmentRule::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::System::__TimeZoneInfo__AdjustmentRule* System::__TimeZoneInfo__AdjustmentRule::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::__TimeZoneInfo__AdjustmentRule*>());
}
inline void System::__TimeZoneInfo__AdjustmentRule::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__AdjustmentRule*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::__TimeZoneInfo__AdjustmentRule::__TimeZoneInfo__AdjustmentRule() {}
//  Writing Method size for method: ::System::__TimeZoneInfo__CachedData.CreateLocal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZoneInfo* (::System::__TimeZoneInfo__CachedData::*)()>(
    &::System::__TimeZoneInfo__CachedData::CreateLocal)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x251ebc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__CachedData*>::get(), "CreateLocal",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__CachedData.get_Local
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZoneInfo* (::System::__TimeZoneInfo__CachedData::*)()>(
    &::System::__TimeZoneInfo__CachedData::get_Local)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2518c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__CachedData*>::get(), "get_Local",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__CachedData.GetCorrespondingKind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTimeKind (::System::__TimeZoneInfo__CachedData::*)(::System::TimeZoneInfo*)>(
    &::System::__TimeZoneInfo__CachedData::GetCorrespondingKind)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2518d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__CachedData*>::get(), "GetCorrespondingKind", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo__CachedData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__TimeZoneInfo__CachedData::*)()>(&::System::__TimeZoneInfo__CachedData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x251d374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__CachedData*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::TimeZoneInfo*& System::__TimeZoneInfo__CachedData::__get__localTimeZone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localTimeZone;
}
constexpr ::cordl_internals::to_const_pointer<::System::TimeZoneInfo*> const& System::__TimeZoneInfo__CachedData::__get__localTimeZone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localTimeZone;
}
constexpr void System::__TimeZoneInfo__CachedData::__set__localTimeZone(::System::TimeZoneInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localTimeZone)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::TimeZoneInfo* System::__TimeZoneInfo__CachedData::CreateLocal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__CachedData*>::get(), "CreateLocal",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*, false>(this, ___internal_method);
}
inline ::System::TimeZoneInfo* System::__TimeZoneInfo__CachedData::get_Local() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__CachedData*>::get(), "get_Local",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*, false>(this, ___internal_method);
}
inline ::System::DateTimeKind System::__TimeZoneInfo__CachedData::GetCorrespondingKind(::System::TimeZoneInfo* timeZone) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__CachedData*>::get(), "GetCorrespondingKind", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeKind, false>(this, ___internal_method, timeZone);
}
inline ::System::__TimeZoneInfo__CachedData* System::__TimeZoneInfo__CachedData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::__TimeZoneInfo__CachedData*>());
}
inline void System::__TimeZoneInfo__CachedData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo__CachedData*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::__TimeZoneInfo__CachedData::__TimeZoneInfo__CachedData() {}
//  Writing Method size for method: ::System::__TimeZoneInfo____c__DisplayClass16_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__TimeZoneInfo____c__DisplayClass16_0::*)()>(
    &::System::__TimeZoneInfo____c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2515274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c__DisplayClass16_0*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo____c__DisplayClass16_0._FindTimeZoneId_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::__TimeZoneInfo____c__DisplayClass16_0::*)(::StringW)>(
    &::System::__TimeZoneInfo____c__DisplayClass16_0::_FindTimeZoneId_b__0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x251ed50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c__DisplayClass16_0*>::get(), "<FindTimeZoneId>b__0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::__TimeZoneInfo____c__DisplayClass16_0::__get_localtimeFilePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localtimeFilePath;
}
constexpr ::StringW const& System::__TimeZoneInfo____c__DisplayClass16_0::__get_localtimeFilePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localtimeFilePath;
}
constexpr void System::__TimeZoneInfo____c__DisplayClass16_0::__set_localtimeFilePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localtimeFilePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::__TimeZoneInfo____c__DisplayClass16_0::__get_posixrulesFilePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___posixrulesFilePath;
}
constexpr ::StringW const& System::__TimeZoneInfo____c__DisplayClass16_0::__get_posixrulesFilePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___posixrulesFilePath;
}
constexpr void System::__TimeZoneInfo____c__DisplayClass16_0::__set_posixrulesFilePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___posixrulesFilePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::__TimeZoneInfo____c__DisplayClass16_0::__get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::__TimeZoneInfo____c__DisplayClass16_0::__get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void System::__TimeZoneInfo____c__DisplayClass16_0::__set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::__TimeZoneInfo____c__DisplayClass16_0::__get_rawData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rawData;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::__TimeZoneInfo____c__DisplayClass16_0::__get_rawData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rawData;
}
constexpr void System::__TimeZoneInfo____c__DisplayClass16_0::__set_rawData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rawData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::__TimeZoneInfo____c__DisplayClass16_0::__get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr ::StringW const& System::__TimeZoneInfo____c__DisplayClass16_0::__get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr void System::__TimeZoneInfo____c__DisplayClass16_0::__set_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::__TimeZoneInfo____c__DisplayClass16_0::__get_timeZoneDirectory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeZoneDirectory;
}
constexpr ::StringW const& System::__TimeZoneInfo____c__DisplayClass16_0::__get_timeZoneDirectory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeZoneDirectory;
}
constexpr void System::__TimeZoneInfo____c__DisplayClass16_0::__set_timeZoneDirectory(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___timeZoneDirectory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::__TimeZoneInfo____c__DisplayClass16_0* System::__TimeZoneInfo____c__DisplayClass16_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::__TimeZoneInfo____c__DisplayClass16_0*>());
}
inline void System::__TimeZoneInfo____c__DisplayClass16_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c__DisplayClass16_0*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::__TimeZoneInfo____c__DisplayClass16_0::_FindTimeZoneId_b__0(::StringW filePath) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c__DisplayClass16_0*>::get(), "<FindTimeZoneId>b__0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, filePath);
}
// Ctor Parameters []
constexpr ::System::__TimeZoneInfo____c__DisplayClass16_0::__TimeZoneInfo____c__DisplayClass16_0() {}
//  Writing Method size for method: ::System::__TimeZoneInfo____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__TimeZoneInfo____c::*)()>(&::System::__TimeZoneInfo____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x251eea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo____c._TZif_ParsePosixName_b__34_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::__TimeZoneInfo____c::*)(char16_t)>(&::System::__TimeZoneInfo____c::_TZif_ParsePosixName_b__34_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x251eeb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get(), "<TZif_ParsePosixName>b__34_1",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo____c._TZif_ParsePosixName_b__34_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::__TimeZoneInfo____c::*)(char16_t)>(&::System::__TimeZoneInfo____c::_TZif_ParsePosixName_b__34_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x251eec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get(), "<TZif_ParsePosixName>b__34_0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo____c._TZif_ParsePosixOffset_b__35_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::__TimeZoneInfo____c::*)(char16_t)>(&::System::__TimeZoneInfo____c::_TZif_ParsePosixOffset_b__35_0)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x251efc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get(), "<TZif_ParsePosixOffset>b__35_0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo____c._TZif_ParsePosixDate_b__37_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::__TimeZoneInfo____c::*)(char16_t)>(&::System::__TimeZoneInfo____c::_TZif_ParsePosixDate_b__37_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x251f04c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get(), "<TZif_ParsePosixDate>b__37_0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo____c._TZif_ParsePosixTime_b__38_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::__TimeZoneInfo____c::*)(char16_t)>(&::System::__TimeZoneInfo____c::_TZif_ParsePosixTime_b__38_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x251f068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get(), "<TZif_ParsePosixTime>b__38_0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TimeZoneInfo____c._CreateLocalUnity_b__161_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::__TimeZoneInfo____c::*)(
    ::System::__TimeZoneInfo__AdjustmentRule*, ::System::__TimeZoneInfo__AdjustmentRule*)>(&::System::__TimeZoneInfo____c::_CreateLocalUnity_b__161_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x251f078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get(), "<CreateLocalUnity>b__161_0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get() })));
    return ___internal_method;
  }
};
inline void System::__TimeZoneInfo____c::setStaticF___9(::System::__TimeZoneInfo____c* value) {
  ::cordl_internals::setStaticField<::System::__TimeZoneInfo____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get>(
      std::forward<::System::__TimeZoneInfo____c*>(value));
}
inline ::System::__TimeZoneInfo____c* System::__TimeZoneInfo____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::__TimeZoneInfo____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get>();
}
inline void System::__TimeZoneInfo____c::setStaticF___9__34_1(::System::Func_2<char16_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<char16_t, bool>*, "<>9__34_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get>(
      std::forward<::System::Func_2<char16_t, bool>*>(value));
}
inline ::System::Func_2<char16_t, bool>* System::__TimeZoneInfo____c::getStaticF___9__34_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<char16_t, bool>*, "<>9__34_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get>();
}
inline void System::__TimeZoneInfo____c::setStaticF___9__34_0(::System::Func_2<char16_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<char16_t, bool>*, "<>9__34_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get>(
      std::forward<::System::Func_2<char16_t, bool>*>(value));
}
inline ::System::Func_2<char16_t, bool>* System::__TimeZoneInfo____c::getStaticF___9__34_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<char16_t, bool>*, "<>9__34_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get>();
}
inline void System::__TimeZoneInfo____c::setStaticF___9__35_0(::System::Func_2<char16_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<char16_t, bool>*, "<>9__35_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get>(
      std::forward<::System::Func_2<char16_t, bool>*>(value));
}
inline ::System::Func_2<char16_t, bool>* System::__TimeZoneInfo____c::getStaticF___9__35_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<char16_t, bool>*, "<>9__35_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get>();
}
inline void System::__TimeZoneInfo____c::setStaticF___9__37_0(::System::Func_2<char16_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<char16_t, bool>*, "<>9__37_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get>(
      std::forward<::System::Func_2<char16_t, bool>*>(value));
}
inline ::System::Func_2<char16_t, bool>* System::__TimeZoneInfo____c::getStaticF___9__37_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<char16_t, bool>*, "<>9__37_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get>();
}
inline void System::__TimeZoneInfo____c::setStaticF___9__38_0(::System::Func_2<char16_t, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<char16_t, bool>*, "<>9__38_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get>(
      std::forward<::System::Func_2<char16_t, bool>*>(value));
}
inline ::System::Func_2<char16_t, bool>* System::__TimeZoneInfo____c::getStaticF___9__38_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<char16_t, bool>*, "<>9__38_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get>();
}
inline void System::__TimeZoneInfo____c::setStaticF___9__161_0(::System::Comparison_1<::System::__TimeZoneInfo__AdjustmentRule*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::System::__TimeZoneInfo__AdjustmentRule*>*, "<>9__161_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get>(
      std::forward<::System::Comparison_1<::System::__TimeZoneInfo__AdjustmentRule*>*>(value));
}
inline ::System::Comparison_1<::System::__TimeZoneInfo__AdjustmentRule*>* System::__TimeZoneInfo____c::getStaticF___9__161_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::System::__TimeZoneInfo__AdjustmentRule*>*, "<>9__161_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get>();
}
inline ::System::__TimeZoneInfo____c* System::__TimeZoneInfo____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::__TimeZoneInfo____c*>());
}
inline void System::__TimeZoneInfo____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::__TimeZoneInfo____c::_TZif_ParsePosixName_b__34_1(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get(), "<TZif_ParsePosixName>b__34_1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
inline bool System::__TimeZoneInfo____c::_TZif_ParsePosixName_b__34_0(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get(), "<TZif_ParsePosixName>b__34_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
inline bool System::__TimeZoneInfo____c::_TZif_ParsePosixOffset_b__35_0(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get(), "<TZif_ParsePosixOffset>b__35_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
inline bool System::__TimeZoneInfo____c::_TZif_ParsePosixDate_b__37_0(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get(), "<TZif_ParsePosixDate>b__37_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
inline bool System::__TimeZoneInfo____c::_TZif_ParsePosixTime_b__38_0(char16_t c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get(), "<TZif_ParsePosixTime>b__38_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
inline int32_t System::__TimeZoneInfo____c::_CreateLocalUnity_b__161_0(::System::__TimeZoneInfo__AdjustmentRule* rule1, ::System::__TimeZoneInfo__AdjustmentRule* rule2) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TimeZoneInfo____c*>::get(), "<CreateLocalUnity>b__161_0", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, rule1, rule2);
}
// Ctor Parameters []
constexpr ::System::__TimeZoneInfo____c::__TimeZoneInfo____c() {}
//  Writing Method size for method: ::System::TimeZoneInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::TimeZoneInfo::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::StringW, bool)>(
    &::System::TimeZoneInfo::_ctor)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x2512d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetAdjustmentRules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*> (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::GetAdjustmentRules)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x2513b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetAdjustmentRules",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetLocalTimeZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZoneInfo* (*)(::System::__TimeZoneInfo__CachedData*)>(&::System::TimeZoneInfo::GetLocalTimeZone)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x25140a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetLocalTimeZone", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__CachedData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TryGetLocalTzFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>, ByRef<::StringW>)>(
    &::System::TimeZoneInfo::TryGetLocalTzFile)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2514254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TryGetLocalTzFile", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetTzEnvironmentVariable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::TimeZoneInfo::GetTzEnvironmentVariable)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2514404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetTzEnvironmentVariable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TryLoadTzFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>, ByRef<::StringW>)>(
    &::System::TimeZoneInfo::TryLoadTzFile)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x251449c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TryLoadTzFile", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.FindTimeZoneIdUsingReadLink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::TimeZoneInfo::FindTimeZoneIdUsingReadLink)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2514778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "FindTimeZoneIdUsingReadLink", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetDirectoryEntryFullPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(ByRef<::GlobalNamespace::__Interop__Sys__DirectoryEntry>, ::StringW)>(
    &::System::TimeZoneInfo::GetDirectoryEntryFullPath)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2514af8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetDirectoryEntryFullPath", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__Interop__Sys__DirectoryEntry>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.EnumerateFilesRecursively
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::System::Predicate_1<::StringW>*)>(&::System::TimeZoneInfo::EnumerateFilesRecursively)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x2514c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "EnumerateFilesRecursively", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Predicate_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.FindTimeZoneId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::System::TimeZoneInfo::FindTimeZoneId)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2514884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "FindTimeZoneId", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CompareTimeZoneFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::TimeZoneInfo::CompareTimeZoneFile)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x251527c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "CompareTimeZoneFile", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetLocalTimeZoneFromTzFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZoneInfo* (*)()>(&::System::TimeZoneInfo::GetLocalTimeZoneFromTzFile)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x25140f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetLocalTimeZoneFromTzFile",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetTimeZoneFromTzData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZoneInfo* (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::StringW)>(
    &::System::TimeZoneInfo::GetTimeZoneFromTzData)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2515608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetTimeZoneFromTzData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetTimeZoneDirectory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::TimeZoneInfo::GetTimeZoneDirectory)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x251462c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetTimeZoneDirectory",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetDateTimeNowUtcOffsetFromUtc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::System::DateTime, ByRef<bool>)>(&::System::TimeZoneInfo::GetDateTimeNowUtcOffsetFromUtc)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2515cc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetDateTimeNowUtcOffsetFromUtc", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_GenerateAdjustmentRules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ByRef<::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>>, ::System::TimeSpan, ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*>,
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<::System::__TimeZoneInfo__TZifType, ::Array<::System::__TimeZoneInfo__TZifType>*>, ::ArrayW<bool, ::Array<bool>*>, ::ArrayW<bool, ::Array<bool>*>,
    ::StringW)>(&::System::TimeZoneInfo::TZif_GenerateAdjustmentRules)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x25136e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_GenerateAdjustmentRules", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::DateTime, ::Array<::System::DateTime>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::__TimeZoneInfo__TZifType, ::Array<::System::__TimeZoneInfo__TZifType>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_GenerateAdjustmentRule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ByRef<int32_t>, ::System::TimeSpan, ::System::Collections::Generic::List_1<::System::__TimeZoneInfo__AdjustmentRule*>*, ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*>,
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<::System::__TimeZoneInfo__TZifType, ::Array<::System::__TimeZoneInfo__TZifType>*>, ::ArrayW<bool, ::Array<bool>*>, ::ArrayW<bool, ::Array<bool>*>,
    ::StringW)>(&::System::TimeZoneInfo::TZif_GenerateAdjustmentRule)> {
  constexpr static std::size_t size = 0x6c8;
  constexpr static std::size_t addrs = 0x251608c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_GenerateAdjustmentRule", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::__TimeZoneInfo__AdjustmentRule*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::DateTime, ::Array<::System::DateTime>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::__TimeZoneInfo__TZifType, ::Array<::System::__TimeZoneInfo__TZifType>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_CalculateTransitionOffsetFromBase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::System::TimeSpan, ::System::TimeSpan)>(
    &::System::TimeZoneInfo::TZif_CalculateTransitionOffsetFromBase)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x25167f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_CalculateTransitionOffsetFromBase", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_GetEarlyDateTransitionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::__TimeZoneInfo__TZifType (*)(
    ::ArrayW<::System::__TimeZoneInfo__TZifType, ::Array<::System::__TimeZoneInfo__TZifType>*>)>(&::System::TimeZoneInfo::TZif_GetEarlyDateTransitionType)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2516754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_GetEarlyDateTransitionType", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::__TimeZoneInfo__TZifType, ::Array<::System::__TimeZoneInfo__TZifType>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_CreateAdjustmentRuleForPosixFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::__TimeZoneInfo__AdjustmentRule* (*)(::StringW, ::System::DateTime, ::System::TimeSpan)>(
    &::System::TimeZoneInfo::TZif_CreateAdjustmentRuleForPosixFormat)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x2516c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_CreateAdjustmentRuleForPosixFormat", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParseOffsetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::TimeSpan> (*)(::StringW)>(&::System::TimeZoneInfo::TZif_ParseOffsetString)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2517194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ParseOffsetString", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ParseTimeOfDay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(::StringW)>(&::System::TimeZoneInfo::ParseTimeOfDay)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x25175e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "ParseTimeOfDay", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_CreateTransitionTimeFromPosixRule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::__TimeZoneInfo__TransitionTime (*)(::StringW, ::StringW)>(
    &::System::TimeZoneInfo::TZif_CreateTransitionTimeFromPosixRule)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x251738c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_CreateTransitionTimeFromPosixRule", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParseJulianDay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<int32_t>, ByRef<int32_t>)>(&::System::TimeZoneInfo::TZif_ParseJulianDay)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2517a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ParseJulianDay", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParseMDateRule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<int32_t>, ByRef<int32_t>, ByRef<::System::DayOfWeek>)>(
    &::System::TimeZoneInfo::TZif_ParseMDateRule)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2517824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ParseMDateRule", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DayOfWeek>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParsePosixFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::StringW>, ByRef<::StringW>, ByRef<::StringW>, ByRef<::StringW>, ByRef<::StringW>,
                                                                                           ByRef<::StringW>, ByRef<::StringW>, ByRef<::StringW>)>(&::System::TimeZoneInfo::TZif_ParsePosixFormat)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2516f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ParsePosixFormat", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParsePosixName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ByRef<int32_t>)>(&::System::TimeZoneInfo::TZif_ParsePosixName)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2517c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ParsePosixName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParsePosixOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ByRef<int32_t>)>(&::System::TimeZoneInfo::TZif_ParsePosixOffset)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2517e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ParsePosixOffset", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParsePosixDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<int32_t>, ByRef<::StringW>, ByRef<::StringW>)>(
    &::System::TimeZoneInfo::TZif_ParsePosixDateTime)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2517f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ParsePosixDateTime", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParsePosixDate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ByRef<int32_t>)>(&::System::TimeZoneInfo::TZif_ParsePosixDate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2518108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ParsePosixDate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParsePosixTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ByRef<int32_t>)>(&::System::TimeZoneInfo::TZif_ParsePosixTime)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2518214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ParsePosixTime", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParsePosixString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ByRef<int32_t>, ::System::Func_2<char16_t, bool>*)>(
    &::System::TimeZoneInfo::TZif_ParsePosixString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2518070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ParsePosixString", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<char16_t, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_GetZoneAbbreviation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int32_t)>(&::System::TimeZoneInfo::TZif_GetZoneAbbreviation)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2513680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_GetZoneAbbreviation", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ToInt32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::System::TimeZoneInfo::TZif_ToInt32)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2518320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ToInt32", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ToInt64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::System::TimeZoneInfo::TZif_ToInt64)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2518350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ToInt64", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ToUnixTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::System::__TimeZoneInfo__TZVersion)>(
    &::System::TimeZoneInfo::TZif_ToUnixTime)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2518380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ToUnixTime", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TZVersion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_UnixTimeToDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(int64_t)>(&::System::TimeZoneInfo::TZif_UnixTimeToDateTime)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2518408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_UnixTimeToDateTime", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TZif_ParseRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ByRef<::System::__TimeZoneInfo__TZifHead>, ByRef<::ArrayW<::System::DateTime, ::Array<::System::DateTime>*>>,
                         ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>, ByRef<::ArrayW<::System::__TimeZoneInfo__TZifType, ::Array<::System::__TimeZoneInfo__TZifType>*>>, ByRef<::StringW>,
                         ByRef<::ArrayW<bool, ::Array<bool>*>>, ByRef<::ArrayW<bool, ::Array<bool>*>>, ByRef<::StringW>)>(&::System::TimeZoneInfo::TZif_ParseRaw)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0x2513168;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ParseRaw", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__TimeZoneInfo__TZifHead>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::DateTime, ::Array<::System::DateTime>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::__TimeZoneInfo__TZifType, ::Array<::System::__TimeZoneInfo__TZifType>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<bool, ::Array<bool>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<bool, ::Array<bool>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_DisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::get_DisplayName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x25187f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "get_DisplayName",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_StandardName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::get_StandardName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2518844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "get_StandardName",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_DaylightName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::get_DaylightName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2518898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "get_DaylightName",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_BaseUtcOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::get_BaseUtcOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25188ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "get_BaseUtcOffset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_SupportsDaylightSavingTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::get_SupportsDaylightSavingTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25188f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "get_SupportsDaylightSavingTime",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetPreviousAdjustmentRule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::__TimeZoneInfo__AdjustmentRule* (
    ::System::TimeZoneInfo::*)(::System::__TimeZoneInfo__AdjustmentRule*, ::System::Nullable_1<int32_t>)>(&::System::TimeZoneInfo::GetPreviousAdjustmentRule)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x25188fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetPreviousAdjustmentRule", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)(::System::DateTime)>(&::System::TimeZoneInfo::GetUtcOffset)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2518a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetUtcOffset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetLocalUtcOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::System::TimeZoneInfoOptions)>(
    &::System::TimeZoneInfo::GetLocalUtcOffset)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2518be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetLocalUtcOffset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)(::System::DateTime, ::System::TimeZoneInfoOptions)>(
    &::System::TimeZoneInfo::GetUtcOffset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2518cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetUtcOffset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)(::System::DateTime, ::System::TimeZoneInfoOptions, ::System::__TimeZoneInfo__CachedData*)>(&::System::TimeZoneInfo::GetUtcOffset)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2518a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetUtcOffset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__CachedData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::DateTime (*)(::System::DateTime, ::System::TimeZoneInfo*, ::System::TimeZoneInfo*, ::System::TimeZoneInfoOptions)>(&::System::TimeZoneInfo::ConvertTime)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2518dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "ConvertTime", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(
    ::System::DateTime, ::System::TimeZoneInfo*, ::System::TimeZoneInfo*, ::System::TimeZoneInfoOptions, ::System::__TimeZoneInfo__CachedData*)>(&::System::TimeZoneInfo::ConvertTime)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x251904c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "ConvertTime", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__CachedData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertTimeToUtc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(::System::DateTime, ::System::TimeZoneInfoOptions)>(
    &::System::TimeZoneInfo::ConvertTimeToUtc)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x251a084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "ConvertTimeToUtc", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::TimeZoneInfo::*)(::System::TimeZoneInfo*)>(&::System::TimeZoneInfo::Equals)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x251a154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::TimeZoneInfo::*)(::System::Object*)>(&::System::TimeZoneInfo::Equals)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x251a318;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::GetHashCode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x251a37c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.HasSameRules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::TimeZoneInfo::*)(::System::TimeZoneInfo*)>(&::System::TimeZoneInfo::HasSameRules)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x251a1a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "HasSameRules", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_Local
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZoneInfo* (*)()>(&::System::TimeZoneInfo::get_Local)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2515d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "get_Local",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::ToString)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x251a580;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.get_Utc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZoneInfo* (*)()>(&::System::TimeZoneInfo::get_Utc)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x251a5d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "get_Utc",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::TimeZoneInfo::*)(
    ::StringW, ::System::TimeSpan, ::StringW, ::StringW, ::StringW, ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>, bool)>(
    &::System::TimeZoneInfo::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x251a62c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CreateCustomTimeZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZoneInfo* (*)(::StringW, ::System::TimeSpan, ::StringW, ::StringW)>(
    &::System::TimeZoneInfo::CreateCustomTimeZone)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x251a718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "CreateCustomTimeZone", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CreateCustomTimeZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::TimeZoneInfo* (*)(::StringW, ::System::TimeSpan, ::StringW, ::StringW, ::StringW,
                                ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>, bool)>(&::System::TimeZoneInfo::CreateCustomTimeZone)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x251a7b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "CreateCustomTimeZone", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::TimeZoneInfo::*)(::System::Object*)>(
    &::System::TimeZoneInfo::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x251a8c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::TimeZoneInfo::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::TimeZoneInfo::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x251aaa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::TimeZoneInfo::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::TimeZoneInfo::_ctor)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x251ac80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetAdjustmentRuleForTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::__TimeZoneInfo__AdjustmentRule* (::System::TimeZoneInfo::*)(::System::DateTime, ByRef<::System::Nullable_1<int32_t>>)>(&::System::TimeZoneInfo::GetAdjustmentRuleForTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x25194d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetAdjustmentRuleForTime", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Nullable_1<int32_t>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetAdjustmentRuleForTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::__TimeZoneInfo__AdjustmentRule* (
    ::System::TimeZoneInfo::*)(::System::DateTime, bool, ByRef<::System::Nullable_1<int32_t>>)>(&::System::TimeZoneInfo::GetAdjustmentRuleForTime)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x251b094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetAdjustmentRuleForTime", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Nullable_1<int32_t>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CompareAdjustmentRuleToDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::TimeZoneInfo::*)(
    ::System::__TimeZoneInfo__AdjustmentRule*, ::System::__TimeZoneInfo__AdjustmentRule*, ::System::DateTime, ::System::DateTime, bool)>(&::System::TimeZoneInfo::CompareAdjustmentRuleToDateTime)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x251b244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "CompareAdjustmentRuleToDateTime", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertToUtc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::TimeZoneInfo::*)(::System::DateTime, ::System::TimeSpan, ::System::TimeSpan)>(
    &::System::TimeZoneInfo::ConvertToUtc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x251b3d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "ConvertToUtc", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertFromUtc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::TimeZoneInfo::*)(::System::DateTime, ::System::TimeSpan, ::System::TimeSpan)>(
    &::System::TimeZoneInfo::ConvertFromUtc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x251b560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "ConvertFromUtc", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertToFromUtc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::TimeZoneInfo::*)(::System::DateTime, ::System::TimeSpan, ::System::TimeSpan, bool)>(
    &::System::TimeZoneInfo::ConvertToFromUtc)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x251b3dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "ConvertToFromUtc", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ConvertUtcToTimeZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(int64_t, ::System::TimeZoneInfo*, ByRef<bool>)>(
    &::System::TimeZoneInfo::ConvertUtcToTimeZone)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2519ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "ConvertUtcToTimeZone", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetDaylightTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::DaylightTimeStruct (::System::TimeZoneInfo::*)(
    int32_t, ::System::__TimeZoneInfo__AdjustmentRule*, ::System::Nullable_1<int32_t>)>(&::System::TimeZoneInfo::GetDaylightTime)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x251963c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetDaylightTime", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetIsDaylightSavings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::DateTime, ::System::__TimeZoneInfo__AdjustmentRule*, ::System::Globalization::DaylightTimeStruct,
                                                                                           ::System::TimeZoneInfoOptions)>(&::System::TimeZoneInfo::GetIsDaylightSavings)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x2519b24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetIsDaylightSavings", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DaylightTimeStruct>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetDaylightSavingsStartOffsetFromUtc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)(
    ::System::TimeSpan, ::System::__TimeZoneInfo__AdjustmentRule*, ::System::Nullable_1<int32_t>)>(&::System::TimeZoneInfo::GetDaylightSavingsStartOffsetFromUtc)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x251bf60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetDaylightSavingsStartOffsetFromUtc", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetDaylightSavingsEndOffsetFromUtc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::TimeZoneInfo::*)(::System::TimeSpan, ::System::__TimeZoneInfo__AdjustmentRule*)>(
    &::System::TimeZoneInfo::GetDaylightSavingsEndOffsetFromUtc)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x251c028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetDaylightSavingsEndOffsetFromUtc", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetIsDaylightSavingsFromUtc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::DateTime, int32_t, ::System::TimeSpan, ::System::__TimeZoneInfo__AdjustmentRule*, ::System::Nullable_1<int32_t>, ByRef<bool>, ::System::TimeZoneInfo*)>(
        &::System::TimeZoneInfo::GetIsDaylightSavingsFromUtc)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x251c0a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetIsDaylightSavingsFromUtc", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CheckIsDst
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::DateTime, ::System::DateTime, ::System::DateTime, bool, ::System::__TimeZoneInfo__AdjustmentRule*)>(&::System::TimeZoneInfo::CheckIsDst)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x251b9d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "CheckIsDst", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetIsAmbiguousTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::DateTime, ::System::__TimeZoneInfo__AdjustmentRule*, ::System::Globalization::DaylightTimeStruct)>(
    &::System::TimeZoneInfo::GetIsAmbiguousTime)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x251bbb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetIsAmbiguousTime", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DaylightTimeStruct>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetIsInvalidTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::DateTime, ::System::__TimeZoneInfo__AdjustmentRule*, ::System::Globalization::DaylightTimeStruct)>(
    &::System::TimeZoneInfo::GetIsInvalidTime)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x2519778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetIsInvalidTime", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DaylightTimeStruct>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::System::TimeZoneInfo*, ::System::TimeZoneInfoOptions)>(
    &::System::TimeZoneInfo::GetUtcOffset)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2518eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetUtcOffset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffsetFromUtc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::System::TimeZoneInfo*)>(&::System::TimeZoneInfo::GetUtcOffsetFromUtc)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2518e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetUtcOffsetFromUtc", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffsetFromUtc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::System::TimeZoneInfo*, ByRef<bool>)>(
    &::System::TimeZoneInfo::GetUtcOffsetFromUtc)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x251b568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetUtcOffsetFromUtc", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffsetFromUtc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::System::DateTime, ::System::TimeZoneInfo*, ByRef<bool>, ByRef<bool>)>(
    &::System::TimeZoneInfo::GetUtcOffsetFromUtc)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x2515dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetUtcOffsetFromUtc", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.TransitionTimeToDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(int32_t, ::System::__TimeZoneInfo__TransitionTime)>(
    &::System::TimeZoneInfo::TransitionTimeToDateTime)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x251b5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TransitionTimeToDateTime", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.ValidateTimeZoneInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::StringW, ::System::TimeSpan, ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>, ByRef<bool>)>(
        &::System::TimeZoneInfo::ValidateTimeZoneInfo)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x2513830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "ValidateTimeZoneInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.UtcOffsetOutOfRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::TimeSpan)>(&::System::TimeZoneInfo::UtcOffsetOutOfRange)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x251c820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "UtcOffsetOutOfRange", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetUtcOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::System::TimeSpan, ::System::__TimeZoneInfo__AdjustmentRule*)>(
    &::System::TimeZoneInfo::GetUtcOffset)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x251c948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetUtcOffset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.IsValidAdjustmentRuleOffest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::TimeSpan, ::System::__TimeZoneInfo__AdjustmentRule*)>(
    &::System::TimeZoneInfo::IsValidAdjustmentRuleOffest)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25169c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "IsValidAdjustmentRuleOffest", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.NormalizeAdjustmentRuleOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::TimeSpan, ByRef<::System::__TimeZoneInfo__AdjustmentRule*>)>(
    &::System::TimeZoneInfo::NormalizeAdjustmentRuleOffset)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x2516a34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "NormalizeAdjustmentRuleOffset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__TimeZoneInfo__AdjustmentRule*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.GetTimeZoneDirectoryUnity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::TimeZoneInfo::GetTimeZoneDirectoryUnity)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x251ca10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetTimeZoneDirectoryUnity",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CreateAdjustmentRule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::System::__TimeZoneInfo__AdjustmentRule*>* (*)(int32_t, ByRef<::ArrayW<int64_t, ::Array<int64_t>*>>, ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>,
                                                                                           ::StringW, ::StringW)>(&::System::TimeZoneInfo::CreateAdjustmentRule)> {
  constexpr static std::size_t size = 0x7a8;
  constexpr static std::size_t addrs = 0x251ca58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "CreateAdjustmentRule", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int64_t, ::Array<int64_t>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo.CreateLocalUnity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeZoneInfo* (*)()>(&::System::TimeZoneInfo::CreateLocalUnity)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x25157c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "CreateLocalUnity",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZoneInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::TimeZoneInfo::*)()>(&::System::TimeZoneInfo::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x251d37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
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
constexpr ::StringW& System::TimeZoneInfo::__get__id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr ::StringW const& System::TimeZoneInfo::__get__id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr void System::TimeZoneInfo::__set__id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::TimeZoneInfo::__get__displayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName;
}
constexpr ::StringW const& System::TimeZoneInfo::__get__displayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName;
}
constexpr void System::TimeZoneInfo::__set__displayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____displayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::TimeZoneInfo::__get__standardDisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardDisplayName;
}
constexpr ::StringW const& System::TimeZoneInfo::__get__standardDisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardDisplayName;
}
constexpr void System::TimeZoneInfo::__set__standardDisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____standardDisplayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::TimeZoneInfo::__get__daylightDisplayName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____daylightDisplayName;
}
constexpr ::StringW const& System::TimeZoneInfo::__get__daylightDisplayName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____daylightDisplayName;
}
constexpr void System::TimeZoneInfo::__set__daylightDisplayName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____daylightDisplayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::TimeSpan& System::TimeZoneInfo::__get__baseUtcOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseUtcOffset;
}
constexpr ::System::TimeSpan const& System::TimeZoneInfo::__get__baseUtcOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseUtcOffset;
}
constexpr void System::TimeZoneInfo::__set__baseUtcOffset(::System::TimeSpan value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseUtcOffset = value;
}
constexpr bool& System::TimeZoneInfo::__get__supportsDaylightSavingTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____supportsDaylightSavingTime;
}
constexpr bool const& System::TimeZoneInfo::__get__supportsDaylightSavingTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____supportsDaylightSavingTime;
}
constexpr void System::TimeZoneInfo::__set__supportsDaylightSavingTime(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____supportsDaylightSavingTime = value;
}
constexpr ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>& System::TimeZoneInfo::__get__adjustmentRules() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____adjustmentRules;
}
constexpr ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*> const& System::TimeZoneInfo::__get__adjustmentRules() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____adjustmentRules;
}
constexpr void System::TimeZoneInfo::__set__adjustmentRules(::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____adjustmentRules)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::TimeZoneInfo::setStaticF_s_utcTimeZone(::System::TimeZoneInfo* value) {
  ::cordl_internals::setStaticField<::System::TimeZoneInfo*, "s_utcTimeZone", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get>(
      std::forward<::System::TimeZoneInfo*>(value));
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::getStaticF_s_utcTimeZone() {
  return ::cordl_internals::getStaticField<::System::TimeZoneInfo*, "s_utcTimeZone", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get>();
}
inline void System::TimeZoneInfo::setStaticF_s_cachedData(::System::__TimeZoneInfo__CachedData* value) {
  ::cordl_internals::setStaticField<::System::__TimeZoneInfo__CachedData*, "s_cachedData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get>(
      std::forward<::System::__TimeZoneInfo__CachedData*>(value));
}
inline ::System::__TimeZoneInfo__CachedData* System::TimeZoneInfo::getStaticF_s_cachedData() {
  return ::cordl_internals::getStaticField<::System::__TimeZoneInfo__CachedData*, "s_cachedData", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get>();
}
inline void System::TimeZoneInfo::setStaticF_s_maxDateOnly(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "s_maxDateOnly", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::TimeZoneInfo::getStaticF_s_maxDateOnly() {
  return ::cordl_internals::getStaticField<::System::DateTime, "s_maxDateOnly", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get>();
}
inline void System::TimeZoneInfo::setStaticF_s_minDateOnly(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "s_minDateOnly", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::TimeZoneInfo::getStaticF_s_minDateOnly() {
  return ::cordl_internals::getStaticField<::System::DateTime, "s_minDateOnly", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get>();
}
inline void System::TimeZoneInfo::setStaticF_MaxOffset(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "MaxOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::TimeZoneInfo::getStaticF_MaxOffset() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "MaxOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get>();
}
inline void System::TimeZoneInfo::setStaticF_MinOffset(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "MinOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan System::TimeZoneInfo::getStaticF_MinOffset() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "MinOffset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get>();
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW id, bool dstDisabled) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::TimeZoneInfo*>(data, id, dstDisabled));
}
inline void System::TimeZoneInfo::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW id, bool dstDisabled) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, id, dstDisabled);
}
inline ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*> System::TimeZoneInfo::GetAdjustmentRules() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetAdjustmentRules",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>, false>(this, ___internal_method);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::GetLocalTimeZone(::System::__TimeZoneInfo__CachedData* cachedData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetLocalTimeZone", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__CachedData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*, false>(nullptr, ___internal_method, cachedData);
}
inline bool System::TimeZoneInfo::TryGetLocalTzFile(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> rawData, ByRef<::StringW> id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TryGetLocalTzFile", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawData, id);
}
inline ::StringW System::TimeZoneInfo::GetTzEnvironmentVariable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetTzEnvironmentVariable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline bool System::TimeZoneInfo::TryLoadTzFile(::StringW tzFilePath, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> rawData, ByRef<::StringW> id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TryLoadTzFile", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, tzFilePath, rawData, id);
}
inline ::StringW System::TimeZoneInfo::FindTimeZoneIdUsingReadLink(::StringW tzFilePath) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "FindTimeZoneIdUsingReadLink", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, tzFilePath);
}
inline ::StringW System::TimeZoneInfo::GetDirectoryEntryFullPath(ByRef<::GlobalNamespace::__Interop__Sys__DirectoryEntry> dirent, ::StringW currentPath) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetDirectoryEntryFullPath", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__Interop__Sys__DirectoryEntry>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, dirent, currentPath);
}
inline void System::TimeZoneInfo::EnumerateFilesRecursively(::StringW path, ::System::Predicate_1<::StringW>* condition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "EnumerateFilesRecursively", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Predicate_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, path, condition);
}
inline ::StringW System::TimeZoneInfo::FindTimeZoneId(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "FindTimeZoneId", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, rawData);
}
inline bool System::TimeZoneInfo::CompareTimeZoneFile(::StringW filePath, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "CompareTimeZoneFile", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, filePath, buffer, rawData);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::GetLocalTimeZoneFromTzFile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetLocalTimeZoneFromTzFile",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*, false>(nullptr, ___internal_method);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::GetTimeZoneFromTzData(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData, ::StringW id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetTimeZoneFromTzData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*, false>(nullptr, ___internal_method, rawData, id);
}
inline ::StringW System::TimeZoneInfo::GetTimeZoneDirectory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetTimeZoneDirectory",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetDateTimeNowUtcOffsetFromUtc(::System::DateTime time, ByRef<bool> isAmbiguousLocalDst) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetDateTimeNowUtcOffsetFromUtc", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, time, isAmbiguousLocalDst);
}
inline void System::TimeZoneInfo::TZif_GenerateAdjustmentRules(ByRef<::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>> rules,
                                                               ::System::TimeSpan baseUtcOffset, ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*> dts,
                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*> typeOfLocalTime,
                                                               ::ArrayW<::System::__TimeZoneInfo__TZifType, ::Array<::System::__TimeZoneInfo__TZifType>*> transitionType,
                                                               ::ArrayW<bool, ::Array<bool>*> StandardTime, ::ArrayW<bool, ::Array<bool>*> GmtTime, ::StringW futureTransitionsPosixFormat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_GenerateAdjustmentRules", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::DateTime, ::Array<::System::DateTime>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::__TimeZoneInfo__TZifType, ::Array<::System::__TimeZoneInfo__TZifType>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rules, baseUtcOffset, dts, typeOfLocalTime, transitionType, StandardTime, GmtTime, futureTransitionsPosixFormat);
}
inline void System::TimeZoneInfo::TZif_GenerateAdjustmentRule(ByRef<int32_t> index, ::System::TimeSpan timeZoneBaseUtcOffset,
                                                              ::System::Collections::Generic::List_1<::System::__TimeZoneInfo__AdjustmentRule*>* rulesList,
                                                              ::ArrayW<::System::DateTime, ::Array<::System::DateTime>*> dts, ::ArrayW<uint8_t, ::Array<uint8_t>*> typeOfLocalTime,
                                                              ::ArrayW<::System::__TimeZoneInfo__TZifType, ::Array<::System::__TimeZoneInfo__TZifType>*> transitionTypes,
                                                              ::ArrayW<bool, ::Array<bool>*> StandardTime, ::ArrayW<bool, ::Array<bool>*> GmtTime, ::StringW futureTransitionsPosixFormat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_GenerateAdjustmentRule", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::__TimeZoneInfo__AdjustmentRule*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::DateTime, ::Array<::System::DateTime>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::__TimeZoneInfo__TZifType, ::Array<::System::__TimeZoneInfo__TZifType>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<bool, ::Array<bool>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, index, timeZoneBaseUtcOffset, rulesList, dts, typeOfLocalTime, transitionTypes, StandardTime, GmtTime,
                                                          futureTransitionsPosixFormat);
}
inline ::System::TimeSpan System::TimeZoneInfo::TZif_CalculateTransitionOffsetFromBase(::System::TimeSpan transitionOffset, ::System::TimeSpan timeZoneBaseUtcOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_CalculateTransitionOffsetFromBase", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, transitionOffset, timeZoneBaseUtcOffset);
}
inline ::System::__TimeZoneInfo__TZifType
System::TimeZoneInfo::TZif_GetEarlyDateTransitionType(::ArrayW<::System::__TimeZoneInfo__TZifType, ::Array<::System::__TimeZoneInfo__TZifType>*> transitionTypes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_GetEarlyDateTransitionType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::__TimeZoneInfo__TZifType, ::Array<::System::__TimeZoneInfo__TZifType>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::__TimeZoneInfo__TZifType, false>(nullptr, ___internal_method, transitionTypes);
}
inline ::System::__TimeZoneInfo__AdjustmentRule* System::TimeZoneInfo::TZif_CreateAdjustmentRuleForPosixFormat(::StringW posixFormat, ::System::DateTime startTransitionDate,
                                                                                                               ::System::TimeSpan timeZoneBaseUtcOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_CreateAdjustmentRuleForPosixFormat", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::__TimeZoneInfo__AdjustmentRule*, false>(nullptr, ___internal_method, posixFormat, startTransitionDate, timeZoneBaseUtcOffset);
}
inline ::System::Nullable_1<::System::TimeSpan> System::TimeZoneInfo::TZif_ParseOffsetString(::StringW offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ParseOffsetString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::TimeSpan>, false>(nullptr, ___internal_method, offset);
}
inline ::System::DateTime System::TimeZoneInfo::ParseTimeOfDay(::StringW time) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "ParseTimeOfDay", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, time);
}
inline ::System::__TimeZoneInfo__TransitionTime System::TimeZoneInfo::TZif_CreateTransitionTimeFromPosixRule(::StringW date, ::StringW time) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_CreateTransitionTimeFromPosixRule", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::__TimeZoneInfo__TransitionTime, false>(nullptr, ___internal_method, date, time);
}
inline void System::TimeZoneInfo::TZif_ParseJulianDay(::StringW date, ByRef<int32_t> month, ByRef<int32_t> day) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ParseJulianDay", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, date, month, day);
}
inline bool System::TimeZoneInfo::TZif_ParseMDateRule(::StringW dateRule, ByRef<int32_t> month, ByRef<int32_t> week, ByRef<::System::DayOfWeek> dayOfWeek) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ParseMDateRule", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::DayOfWeek>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, dateRule, month, week, dayOfWeek);
}
inline bool System::TimeZoneInfo::TZif_ParsePosixFormat(::StringW posixFormat, ByRef<::StringW> standardName, ByRef<::StringW> standardOffset, ByRef<::StringW> daylightSavingsName,
                                                        ByRef<::StringW> daylightSavingsOffset, ByRef<::StringW> start, ByRef<::StringW> startTime, ByRef<::StringW> end, ByRef<::StringW> endTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ParsePosixFormat", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, posixFormat, standardName, standardOffset, daylightSavingsName, daylightSavingsOffset, start, startTime, end,
                                                          endTime);
}
inline ::StringW System::TimeZoneInfo::TZif_ParsePosixName(::StringW posixFormat, ByRef<int32_t> index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ParsePosixName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, posixFormat, index);
}
inline ::StringW System::TimeZoneInfo::TZif_ParsePosixOffset(::StringW posixFormat, ByRef<int32_t> index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ParsePosixOffset", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, posixFormat, index);
}
inline void System::TimeZoneInfo::TZif_ParsePosixDateTime(::StringW posixFormat, ByRef<int32_t> index, ByRef<::StringW> date, ByRef<::StringW> time) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ParsePosixDateTime", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, posixFormat, index, date, time);
}
inline ::StringW System::TimeZoneInfo::TZif_ParsePosixDate(::StringW posixFormat, ByRef<int32_t> index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ParsePosixDate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, posixFormat, index);
}
inline ::StringW System::TimeZoneInfo::TZif_ParsePosixTime(::StringW posixFormat, ByRef<int32_t> index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ParsePosixTime", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, posixFormat, index);
}
inline ::StringW System::TimeZoneInfo::TZif_ParsePosixString(::StringW posixFormat, ByRef<int32_t> index, ::System::Func_2<char16_t, bool>* breakCondition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ParsePosixString", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<char16_t, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, posixFormat, index, breakCondition);
}
inline ::StringW System::TimeZoneInfo::TZif_GetZoneAbbreviation(::StringW zoneAbbreviations, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_GetZoneAbbreviation", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, zoneAbbreviations, index);
}
inline int32_t System::TimeZoneInfo::TZif_ToInt32(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ToInt32", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value, startIndex);
}
inline int64_t System::TimeZoneInfo::TZif_ToInt64(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t startIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ToInt64", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value, startIndex);
}
inline int64_t System::TimeZoneInfo::TZif_ToUnixTime(::ArrayW<uint8_t, ::Array<uint8_t>*> value, int32_t startIndex, ::System::__TimeZoneInfo__TZVersion version) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ToUnixTime", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TZVersion>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value, startIndex, version);
}
inline ::System::DateTime System::TimeZoneInfo::TZif_UnixTimeToDateTime(int64_t unixTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_UnixTimeToDateTime", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, unixTime);
}
inline void System::TimeZoneInfo::TZif_ParseRaw(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ByRef<::System::__TimeZoneInfo__TZifHead> t,
                                                ByRef<::ArrayW<::System::DateTime, ::Array<::System::DateTime>*>> dts, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> typeOfLocalTime,
                                                ByRef<::ArrayW<::System::__TimeZoneInfo__TZifType, ::Array<::System::__TimeZoneInfo__TZifType>*>> transitionType, ByRef<::StringW> zoneAbbreviations,
                                                ByRef<::ArrayW<bool, ::Array<bool>*>> StandardTime, ByRef<::ArrayW<bool, ::Array<bool>*>> GmtTime, ByRef<::StringW> futureTransitionsPosixFormat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TZif_ParseRaw", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__TimeZoneInfo__TZifHead>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::DateTime, ::Array<::System::DateTime>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::__TimeZoneInfo__TZifType, ::Array<::System::__TimeZoneInfo__TZifType>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<bool, ::Array<bool>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<bool, ::Array<bool>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data, t, dts, typeOfLocalTime, transitionType, zoneAbbreviations, StandardTime, GmtTime,
                                                          futureTransitionsPosixFormat);
}
inline ::StringW System::TimeZoneInfo::get_DisplayName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "get_DisplayName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::TimeZoneInfo::get_StandardName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "get_StandardName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::TimeZoneInfo::get_DaylightName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "get_DaylightName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::TimeSpan System::TimeZoneInfo::get_BaseUtcOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "get_BaseUtcOffset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
inline bool System::TimeZoneInfo::get_SupportsDaylightSavingTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "get_SupportsDaylightSavingTime",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::__TimeZoneInfo__AdjustmentRule* System::TimeZoneInfo::GetPreviousAdjustmentRule(::System::__TimeZoneInfo__AdjustmentRule* rule, ::System::Nullable_1<int32_t> ruleIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetPreviousAdjustmentRule", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::__TimeZoneInfo__AdjustmentRule*, false>(this, ___internal_method, rule, ruleIndex);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffset(::System::DateTime dateTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetUtcOffset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method, dateTime);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetLocalUtcOffset(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetLocalUtcOffset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, dateTime, flags);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffset(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetUtcOffset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method, dateTime, flags);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffset(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags, ::System::__TimeZoneInfo__CachedData* cachedData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetUtcOffset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__CachedData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method, dateTime, flags, cachedData);
}
inline ::System::DateTime System::TimeZoneInfo::ConvertTime(::System::DateTime dateTime, ::System::TimeZoneInfo* sourceTimeZone, ::System::TimeZoneInfo* destinationTimeZone,
                                                            ::System::TimeZoneInfoOptions flags) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "ConvertTime", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, dateTime, sourceTimeZone, destinationTimeZone, flags);
}
inline ::System::DateTime System::TimeZoneInfo::ConvertTime(::System::DateTime dateTime, ::System::TimeZoneInfo* sourceTimeZone, ::System::TimeZoneInfo* destinationTimeZone,
                                                            ::System::TimeZoneInfoOptions flags, ::System::__TimeZoneInfo__CachedData* cachedData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "ConvertTime", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__CachedData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, dateTime, sourceTimeZone, destinationTimeZone, flags, cachedData);
}
inline ::System::DateTime System::TimeZoneInfo::ConvertTimeToUtc(::System::DateTime dateTime, ::System::TimeZoneInfoOptions flags) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "ConvertTimeToUtc", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, dateTime, flags);
}
inline bool System::TimeZoneInfo::Equals(::System::TimeZoneInfo* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool System::TimeZoneInfo::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t System::TimeZoneInfo::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::TimeZoneInfo::HasSameRules(::System::TimeZoneInfo* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "HasSameRules", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::get_Local() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "get_Local",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*, false>(nullptr, ___internal_method);
}
inline ::StringW System::TimeZoneInfo::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::get_Utc() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "get_Utc", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*, false>(nullptr, ___internal_method);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::New_ctor(::StringW id, ::System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName, ::StringW daylightDisplayName,
                                                              ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*> adjustmentRules,
                                                              bool disableDaylightSavingTime) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::TimeZoneInfo*>(id, baseUtcOffset, displayName, standardDisplayName, daylightDisplayName, adjustmentRules, disableDaylightSavingTime));
}
inline void System::TimeZoneInfo::_ctor(::StringW id, ::System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName, ::StringW daylightDisplayName,
                                        ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*> adjustmentRules, bool disableDaylightSavingTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, baseUtcOffset, displayName, standardDisplayName, daylightDisplayName, adjustmentRules,
                                                          disableDaylightSavingTime);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::CreateCustomTimeZone(::StringW id, ::System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "CreateCustomTimeZone", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*, false>(nullptr, ___internal_method, id, baseUtcOffset, displayName, standardDisplayName);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::CreateCustomTimeZone(::StringW id, ::System::TimeSpan baseUtcOffset, ::StringW displayName, ::StringW standardDisplayName,
                                                                          ::StringW daylightDisplayName,
                                                                          ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*> adjustmentRules,
                                                                          bool disableDaylightSavingTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "CreateCustomTimeZone", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*, false>(nullptr, ___internal_method, id, baseUtcOffset, displayName, standardDisplayName, daylightDisplayName, adjustmentRules,
                                                                             disableDaylightSavingTime);
}
inline void System::TimeZoneInfo::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender);
}
inline void System::TimeZoneInfo::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                           ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::TimeZoneInfo*>(info, context));
}
inline void System::TimeZoneInfo::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::System::__TimeZoneInfo__AdjustmentRule* System::TimeZoneInfo::GetAdjustmentRuleForTime(::System::DateTime dateTime, ByRef<::System::Nullable_1<int32_t>> ruleIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetAdjustmentRuleForTime", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Nullable_1<int32_t>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::__TimeZoneInfo__AdjustmentRule*, false>(this, ___internal_method, dateTime, ruleIndex);
}
inline ::System::__TimeZoneInfo__AdjustmentRule* System::TimeZoneInfo::GetAdjustmentRuleForTime(::System::DateTime dateTime, bool dateTimeisUtc, ByRef<::System::Nullable_1<int32_t>> ruleIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetAdjustmentRuleForTime", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Nullable_1<int32_t>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::__TimeZoneInfo__AdjustmentRule*, false>(this, ___internal_method, dateTime, dateTimeisUtc, ruleIndex);
}
inline int32_t System::TimeZoneInfo::CompareAdjustmentRuleToDateTime(::System::__TimeZoneInfo__AdjustmentRule* rule, ::System::__TimeZoneInfo__AdjustmentRule* previousRule,
                                                                     ::System::DateTime dateTime, ::System::DateTime dateOnly, bool dateTimeisUtc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "CompareAdjustmentRuleToDateTime", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, rule, previousRule, dateTime, dateOnly, dateTimeisUtc);
}
inline ::System::DateTime System::TimeZoneInfo::ConvertToUtc(::System::DateTime dateTime, ::System::TimeSpan daylightDelta, ::System::TimeSpan baseUtcOffsetDelta) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "ConvertToUtc", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method, dateTime, daylightDelta, baseUtcOffsetDelta);
}
inline ::System::DateTime System::TimeZoneInfo::ConvertFromUtc(::System::DateTime dateTime, ::System::TimeSpan daylightDelta, ::System::TimeSpan baseUtcOffsetDelta) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "ConvertFromUtc", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method, dateTime, daylightDelta, baseUtcOffsetDelta);
}
inline ::System::DateTime System::TimeZoneInfo::ConvertToFromUtc(::System::DateTime dateTime, ::System::TimeSpan daylightDelta, ::System::TimeSpan baseUtcOffsetDelta, bool convertToUtc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "ConvertToFromUtc", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method, dateTime, daylightDelta, baseUtcOffsetDelta, convertToUtc);
}
inline ::System::DateTime System::TimeZoneInfo::ConvertUtcToTimeZone(int64_t ticks, ::System::TimeZoneInfo* destinationTimeZone, ByRef<bool> isAmbiguousLocalDst) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "ConvertUtcToTimeZone", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, ticks, destinationTimeZone, isAmbiguousLocalDst);
}
inline ::System::Globalization::DaylightTimeStruct System::TimeZoneInfo::GetDaylightTime(int32_t year, ::System::__TimeZoneInfo__AdjustmentRule* rule, ::System::Nullable_1<int32_t> ruleIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetDaylightTime", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DaylightTimeStruct, false>(this, ___internal_method, year, rule, ruleIndex);
}
inline bool System::TimeZoneInfo::GetIsDaylightSavings(::System::DateTime time, ::System::__TimeZoneInfo__AdjustmentRule* rule, ::System::Globalization::DaylightTimeStruct daylightTime,
                                                       ::System::TimeZoneInfoOptions flags) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetIsDaylightSavings", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DaylightTimeStruct>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, time, rule, daylightTime, flags);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetDaylightSavingsStartOffsetFromUtc(::System::TimeSpan baseUtcOffset, ::System::__TimeZoneInfo__AdjustmentRule* rule,
                                                                                     ::System::Nullable_1<int32_t> ruleIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetDaylightSavingsStartOffsetFromUtc", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method, baseUtcOffset, rule, ruleIndex);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetDaylightSavingsEndOffsetFromUtc(::System::TimeSpan baseUtcOffset, ::System::__TimeZoneInfo__AdjustmentRule* rule) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetDaylightSavingsEndOffsetFromUtc", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method, baseUtcOffset, rule);
}
inline bool System::TimeZoneInfo::GetIsDaylightSavingsFromUtc(::System::DateTime time, int32_t year, ::System::TimeSpan utc, ::System::__TimeZoneInfo__AdjustmentRule* rule,
                                                              ::System::Nullable_1<int32_t> ruleIndex, ByRef<bool> isAmbiguousLocalDst, ::System::TimeZoneInfo* zone) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetIsDaylightSavingsFromUtc", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, time, year, utc, rule, ruleIndex, isAmbiguousLocalDst, zone);
}
inline bool System::TimeZoneInfo::CheckIsDst(::System::DateTime startTime, ::System::DateTime time, ::System::DateTime endTime, bool ignoreYearAdjustment,
                                             ::System::__TimeZoneInfo__AdjustmentRule* rule) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "CheckIsDst", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, startTime, time, endTime, ignoreYearAdjustment, rule);
}
inline bool System::TimeZoneInfo::GetIsAmbiguousTime(::System::DateTime time, ::System::__TimeZoneInfo__AdjustmentRule* rule, ::System::Globalization::DaylightTimeStruct daylightTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetIsAmbiguousTime", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DaylightTimeStruct>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, time, rule, daylightTime);
}
inline bool System::TimeZoneInfo::GetIsInvalidTime(::System::DateTime time, ::System::__TimeZoneInfo__AdjustmentRule* rule, ::System::Globalization::DaylightTimeStruct daylightTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetIsInvalidTime", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DaylightTimeStruct>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, time, rule, daylightTime);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffset(::System::DateTime time, ::System::TimeZoneInfo* zone, ::System::TimeZoneInfoOptions flags) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetUtcOffset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfoOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, time, zone, flags);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffsetFromUtc(::System::DateTime time, ::System::TimeZoneInfo* zone) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetUtcOffsetFromUtc", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, time, zone);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffsetFromUtc(::System::DateTime time, ::System::TimeZoneInfo* zone, ByRef<bool> isDaylightSavings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetUtcOffsetFromUtc", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, time, zone, isDaylightSavings);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffsetFromUtc(::System::DateTime time, ::System::TimeZoneInfo* zone, ByRef<bool> isDaylightSavings, ByRef<bool> isAmbiguousLocalDst) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetUtcOffsetFromUtc", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeZoneInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, time, zone, isDaylightSavings, isAmbiguousLocalDst);
}
inline ::System::DateTime System::TimeZoneInfo::TransitionTimeToDateTime(int32_t year, ::System::__TimeZoneInfo__TransitionTime transitionTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "TransitionTimeToDateTime", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__TransitionTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, year, transitionTime);
}
inline void System::TimeZoneInfo::ValidateTimeZoneInfo(::StringW id, ::System::TimeSpan baseUtcOffset,
                                                       ::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*> adjustmentRules,
                                                       ByRef<bool> adjustmentRulesSupportDst) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "ValidateTimeZoneInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::__TimeZoneInfo__AdjustmentRule*, ::Array<::System::__TimeZoneInfo__AdjustmentRule*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, id, baseUtcOffset, adjustmentRules, adjustmentRulesSupportDst);
}
inline bool System::TimeZoneInfo::UtcOffsetOutOfRange(::System::TimeSpan offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "UtcOffsetOutOfRange", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, offset);
}
inline ::System::TimeSpan System::TimeZoneInfo::GetUtcOffset(::System::TimeSpan baseUtcOffset, ::System::__TimeZoneInfo__AdjustmentRule* adjustmentRule) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetUtcOffset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, baseUtcOffset, adjustmentRule);
}
inline bool System::TimeZoneInfo::IsValidAdjustmentRuleOffest(::System::TimeSpan baseUtcOffset, ::System::__TimeZoneInfo__AdjustmentRule* adjustmentRule) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "IsValidAdjustmentRuleOffest", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__TimeZoneInfo__AdjustmentRule*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, baseUtcOffset, adjustmentRule);
}
inline void System::TimeZoneInfo::NormalizeAdjustmentRuleOffset(::System::TimeSpan baseUtcOffset, ByRef<::System::__TimeZoneInfo__AdjustmentRule*> adjustmentRule) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "NormalizeAdjustmentRuleOffset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__TimeZoneInfo__AdjustmentRule*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, baseUtcOffset, adjustmentRule);
}
inline ::StringW System::TimeZoneInfo::GetTimeZoneDirectoryUnity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "GetTimeZoneDirectoryUnity",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::System::__TimeZoneInfo__AdjustmentRule*>* System::TimeZoneInfo::CreateAdjustmentRule(int32_t year, ByRef<::ArrayW<int64_t, ::Array<int64_t>*>> data,
                                                                                                                                     ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> names,
                                                                                                                                     ::StringW standardNameCurrentYear,
                                                                                                                                     ::StringW daylightNameCurrentYear) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "CreateAdjustmentRule", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int64_t, ::Array<int64_t>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::__TimeZoneInfo__AdjustmentRule*>*, false>(nullptr, ___internal_method, year, data, names,
                                                                                                                                        standardNameCurrentYear, daylightNameCurrentYear);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::CreateLocalUnity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), "CreateLocalUnity",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*, false>(nullptr, ___internal_method);
}
inline ::System::TimeZoneInfo* System::TimeZoneInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::TimeZoneInfo*>());
}
inline void System::TimeZoneInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TimeZoneInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::TimeZoneInfo::TimeZoneInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
