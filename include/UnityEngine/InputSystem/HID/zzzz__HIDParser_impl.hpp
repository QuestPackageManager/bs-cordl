#pragma once
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_impl.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HIDParser_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HIDParser_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::__HIDParser__HIDReportData.FindOrAddReport
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Nullable_1<int32_t>, ::UnityEngine::InputSystem::HID::__HID__HIDReportType,
                                                                                              ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::__HIDParser__HIDReportData>*)>(
    &::UnityEngine::InputSystem::HID::__HIDParser__HIDReportData::FindOrAddReport)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2bc6744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::__HIDParser__HIDReportData>::get(), "FindOrAddReport", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::HID::__HID__HIDReportType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::__HIDParser__HIDReportData>*>::get() })));
    return ___internal_method;
  }
};
inline int32_t
UnityEngine::InputSystem::HID::__HIDParser__HIDReportData::FindOrAddReport(::System::Nullable_1<int32_t> reportId, ::UnityEngine::InputSystem::HID::__HID__HIDReportType reportType,
                                                                           ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::__HIDParser__HIDReportData>* reports) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::__HIDParser__HIDReportData>::get(), "FindOrAddReport", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::HID::__HID__HIDReportType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::__HIDParser__HIDReportData>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, reportId, reportType, reports);
}
// Ctor Parameters [CppParam { name: "reportId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "reportType", ty: "::UnityEngine::InputSystem::HID::__HID__HIDReportType",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "currentBitOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDReportData::__HIDParser__HIDReportData(int32_t reportId, ::UnityEngine::InputSystem::HID::__HID__HIDReportType reportType,
                                                                                                  int32_t currentBitOffset) noexcept {
  this->reportId = reportId;
  this->reportType = reportType;
  this->currentBitOffset = currentBitOffset;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDReportData::__HIDParser__HIDReportData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::__HIDParser__HIDItemTypeAndTag(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::__HIDParser__HIDItemTypeAndTag() {}
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::Input{ static_cast<int32_t>(0x80) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::Output{ static_cast<int32_t>(0x90) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::Feature{ static_cast<int32_t>(0xb0) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::Collection{ static_cast<int32_t>(0xa0) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::EndCollection{ static_cast<int32_t>(0xc0) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::UsagePage{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::LogicalMinimum{ static_cast<int32_t>(0x14) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::LogicalMaximum{ static_cast<int32_t>(0x24) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::PhysicalMinimum{ static_cast<int32_t>(0x34) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::PhysicalMaximum{ static_cast<int32_t>(0x44) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::UnitExponent{ static_cast<int32_t>(0x54) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::Unit{ static_cast<int32_t>(0x64) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::ReportSize{ static_cast<int32_t>(0x74) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::ReportID{ static_cast<int32_t>(0x84) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::ReportCount{ static_cast<int32_t>(0x94) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::Push{ static_cast<int32_t>(0xa4) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::Pop{ static_cast<int32_t>(0xb4) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::Usage{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::UsageMinimum{ static_cast<int32_t>(0x18) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::UsageMaximum{ static_cast<int32_t>(0x28) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::DesignatorIndex{ static_cast<int32_t>(0x38) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::DesignatorMinimum{ static_cast<int32_t>(0x48) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::DesignatorMaximum{ static_cast<int32_t>(0x58) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::StringIndex{ static_cast<int32_t>(0x78) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::StringMinimum{ static_cast<int32_t>(0x88) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::StringMaximum{ static_cast<int32_t>(0x98) };
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag::Delimiter{ static_cast<int32_t>(0xa8) };
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal>)>(
    &::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal::Reset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2bc66e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal>::get(), "Reset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal.SetUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal::*)(int32_t)>(
    &::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal::SetUsage)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2bc63e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal>::get(), "SetUsage",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal.GetUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal::*)(int32_t)>(
    &::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal::GetUsage)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2bc65cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal>::get(), "GetUsage",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal::Reset(ByRef<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal> state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal>::get(), "Reset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state);
}
inline void UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal::SetUsage(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal>::get(), "SetUsage",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal::GetUsage(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal>::get(), "GetUsage",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "usage", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "usageMinimum", ty: "::System::Nullable_1<int32_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "usageMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "designatorIndex", ty:
// "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "designatorMinimum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "designatorMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "stringIndex", ty: "::System::Nullable_1<int32_t>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "stringMinimum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "stringMaximum", ty:
// "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "usageList", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal::__HIDParser__HIDItemStateLocal(::System::Nullable_1<int32_t> usage, ::System::Nullable_1<int32_t> usageMinimum,
                                                                                                          ::System::Nullable_1<int32_t> usageMaximum, ::System::Nullable_1<int32_t> designatorIndex,
                                                                                                          ::System::Nullable_1<int32_t> designatorMinimum,
                                                                                                          ::System::Nullable_1<int32_t> designatorMaximum, ::System::Nullable_1<int32_t> stringIndex,
                                                                                                          ::System::Nullable_1<int32_t> stringMinimum, ::System::Nullable_1<int32_t> stringMaximum,
                                                                                                          ::System::Collections::Generic::List_1<int32_t>* usageList) noexcept {
  this->usage = usage;
  this->usageMinimum = usageMinimum;
  this->usageMaximum = usageMaximum;
  this->designatorIndex = designatorIndex;
  this->designatorMinimum = designatorMinimum;
  this->designatorMaximum = designatorMaximum;
  this->stringIndex = stringIndex;
  this->stringMinimum = stringMinimum;
  this->stringMaximum = stringMaximum;
  this->usageList = usageList;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal::__HIDParser__HIDItemStateLocal() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal.GetUsagePage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::HID::__HID__UsagePage (
    ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal::*)(int32_t, ByRef<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal>)>(
    &::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal::GetUsagePage)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2bc6540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal>::get(), "GetUsagePage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal.GetPhysicalMin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal::*)()>(
    &::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal::GetPhysicalMin)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2bc68d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal>::get(), "GetPhysicalMin",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal.GetPhysicalMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal::*)()>(
    &::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal::GetPhysicalMax)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2bc6994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal>::get(), "GetPhysicalMax",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::HID::__HID__UsagePage
UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal::GetUsagePage(int32_t index, ByRef<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal> localItemState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal>::get(), "GetUsagePage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::HID::__HID__UsagePage, false>(this, ___internal_method, index, localItemState);
}
inline int32_t UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal::GetPhysicalMin() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal>::get(), "GetPhysicalMin",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal::GetPhysicalMax() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal>::get(), "GetPhysicalMax",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "usagePage", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "logicalMinimum", ty: "::System::Nullable_1<int32_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "logicalMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "physicalMinimum", ty:
// "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "physicalMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "unitExponent", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "unit", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "reportSize", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "reportCount", ty: "::System::Nullable_1<int32_t>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "reportId", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal::__HIDParser__HIDItemStateGlobal(::System::Nullable_1<int32_t> usagePage, ::System::Nullable_1<int32_t> logicalMinimum,
                                                                                                            ::System::Nullable_1<int32_t> logicalMaximum, ::System::Nullable_1<int32_t> physicalMinimum,
                                                                                                            ::System::Nullable_1<int32_t> physicalMaximum, ::System::Nullable_1<int32_t> unitExponent,
                                                                                                            ::System::Nullable_1<int32_t> unit, ::System::Nullable_1<int32_t> reportSize,
                                                                                                            ::System::Nullable_1<int32_t> reportCount,
                                                                                                            ::System::Nullable_1<int32_t> reportId) noexcept {
  this->usagePage = usagePage;
  this->logicalMinimum = logicalMinimum;
  this->logicalMaximum = logicalMaximum;
  this->physicalMinimum = physicalMinimum;
  this->physicalMaximum = physicalMaximum;
  this->unitExponent = unitExponent;
  this->unit = unit;
  this->reportSize = reportSize;
  this->reportCount = reportCount;
  this->reportId = reportId;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal::__HIDParser__HIDItemStateGlobal() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDParser.ParseReportDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ByRef<::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor>)>(
    &::UnityEngine::InputSystem::HID::HIDParser::ParseReportDescriptor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2bc6300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDParser*>::get(), "ParseReportDescriptor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDParser.ParseReportDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::cordl_internals::Ptr<uint8_t>, int32_t, ByRef<::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor>)>(&::UnityEngine::InputSystem::HID::HIDParser::ParseReportDescriptor)> {
  constexpr static std::size_t size = 0xc44;
  constexpr static std::size_t addrs = 0x2bc2c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDParser*>::get(), "ParseReportDescriptor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::HID::HIDParser.ReadData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, ::cordl_internals::Ptr<uint8_t>, ::cordl_internals::Ptr<uint8_t>)>(
    &::UnityEngine::InputSystem::HID::HIDParser::ReadData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2bc6370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDParser*>::get(), "ReadData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::InputSystem::HID::HIDParser::ParseReportDescriptor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer,
                                                                            ByRef<::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor> deviceDescriptor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDParser*>::get(), "ParseReportDescriptor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, buffer, deviceDescriptor);
}
inline bool UnityEngine::InputSystem::HID::HIDParser::ParseReportDescriptor(::cordl_internals::Ptr<uint8_t> bufferPtr, int32_t bufferLength,
                                                                            ByRef<::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor> deviceDescriptor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDParser*>::get(), "ParseReportDescriptor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, bufferPtr, bufferLength, deviceDescriptor);
}
inline int32_t UnityEngine::InputSystem::HID::HIDParser::ReadData(int32_t itemSize, ::cordl_internals::Ptr<uint8_t> currentPtr, ::cordl_internals::Ptr<uint8_t> endPtr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::HID::HIDParser*>::get(), "ReadData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, itemSize, currentPtr, endPtr);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::HID::HIDParser::HIDParser() {}
