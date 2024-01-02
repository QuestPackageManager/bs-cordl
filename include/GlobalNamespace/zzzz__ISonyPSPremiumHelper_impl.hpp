#pragma once
#include "GlobalNamespace/zzzz__ISonyPSPremiumHelper_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__ISonyPSPremiumHelper_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult() {}
constexpr ::GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult::OK{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult::Failed{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult::__ISonyPSPremiumHelper__GetPremiumStatusResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult::__ISonyPSPremiumHelper__GetPremiumStatusResult() {}
constexpr ::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult::Authorized{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult::Unauthorized{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult::Failed{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::ISonyPSPremiumHelper.DisplayJoinPremiumDialogAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult>* (
    ::GlobalNamespace::ISonyPSPremiumHelper::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::ISonyPSPremiumHelper::DisplayJoinPremiumDialogAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyPSPremiumHelper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyPSPremiumHelper*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ISonyPSPremiumHelper.GetPremiumStatusAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult>* (
    ::GlobalNamespace::ISonyPSPremiumHelper::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::ISonyPSPremiumHelper::GetPremiumStatusAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyPSPremiumHelper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyPSPremiumHelper*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ISonyPSPremiumHelper.NotifyPremiumFeature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ISonyPSPremiumHelper::*)(bool)>(
    &::GlobalNamespace::ISonyPSPremiumHelper::NotifyPremiumFeature)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyPSPremiumHelper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyPSPremiumHelper*>::get(), 2));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult>*
GlobalNamespace::ISonyPSPremiumHelper::DisplayJoinPremiumDialogAsync(::System::Threading::CancellationToken token) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyPSPremiumHelper*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult>*, false>(this, ___internal_method, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult>*
GlobalNamespace::ISonyPSPremiumHelper::GetPremiumStatusAsync(::System::Threading::CancellationToken token) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyPSPremiumHelper*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult>*, false>(this, ___internal_method, token);
}
inline void GlobalNamespace::ISonyPSPremiumHelper::NotifyPremiumFeature(bool isSpectator) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISonyPSPremiumHelper*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isSpectator);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
