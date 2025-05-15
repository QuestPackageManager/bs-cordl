#pragma once
// IWYU pragma private; include "System/DateTimeRawInfo.hpp"
#include "System/zzzz__DateTimeParse_impl.hpp"
#include "System/zzzz__DateTimeRawInfo_def.hpp"
//  Writing Method size for method: ::System::DateTimeRawInfo.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DateTimeRawInfo::*)(::cordl_internals::Ptr<int32_t>)>(&::System::DateTimeRawInfo::Init)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3de43c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeRawInfo>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeRawInfo.AddNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DateTimeRawInfo::*)(int32_t)>(&::System::DateTimeRawInfo::AddNumber)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3de43e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeRawInfo>::get(), "AddNumber", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeRawInfo.GetNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::DateTimeRawInfo::*)(int32_t)>(&::System::DateTimeRawInfo::GetNumber)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3de4400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeRawInfo>::get(), "GetNumber", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void System::DateTimeRawInfo::Init(::cordl_internals::Ptr<int32_t> numberBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeRawInfo>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numberBuffer);
}
inline void System::DateTimeRawInfo::AddNumber(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeRawInfo>::get(), "AddNumber", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::DateTimeRawInfo::GetNumber(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DateTimeRawInfo>::get(), "GetNumber", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "num", ty: "::cordl_internals::Ptr<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "numCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "month", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "year", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "dayOfWeek", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "era", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeMark", ty:
// "::System::DateTimeParse_TM", modifiers: "", def_value: Some("{}") }, CppParam { name: "fraction", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "hasSameDateAndTimeSeparators", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DateTimeRawInfo::DateTimeRawInfo(::cordl_internals::Ptr<int32_t> num, int32_t numCount, int32_t month, int32_t year, int32_t dayOfWeek, int32_t era,
                                                     ::System::DateTimeParse_TM timeMark, double_t fraction, bool hasSameDateAndTimeSeparators) noexcept {
  this->num = num;
  this->numCount = numCount;
  this->month = month;
  this->year = year;
  this->dayOfWeek = dayOfWeek;
  this->era = era;
  this->timeMark = timeMark;
  this->fraction = fraction;
  this->hasSameDateAndTimeSeparators = hasSameDateAndTimeSeparators;
}
// Ctor Parameters []
constexpr ::System::DateTimeRawInfo::DateTimeRawInfo() {}
