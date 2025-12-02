#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/StallSummaryAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEditor/Analytics/zzzz__StallSummaryAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::StallSummaryAnalytic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEditor::Analytics::StallSummaryAnalytic::*)()>(&::UnityEditor::Analytics::StallSummaryAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6bf1644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::StallSummaryAnalytic*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::StallSummaryAnalytic.CreateStallSummaryAnalytic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEditor::Analytics::StallSummaryAnalytic* (*)()>(
    &::UnityEditor::Analytics::StallSummaryAnalytic::CreateStallSummaryAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bf16bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::StallSummaryAnalytic*>::get(),
                                                                               "CreateStallSummaryAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr double_t& UnityEditor::Analytics::StallSummaryAnalytic::__cordl_internal_get_Duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Duration;
}
constexpr double_t const& UnityEditor::Analytics::StallSummaryAnalytic::__cordl_internal_get_Duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Duration;
}
constexpr void UnityEditor::Analytics::StallSummaryAnalytic::__cordl_internal_set_Duration(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Duration = value;
}
inline void UnityEditor::Analytics::StallSummaryAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::StallSummaryAnalytic*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::StallSummaryAnalytic* UnityEditor::Analytics::StallSummaryAnalytic::CreateStallSummaryAnalytic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::StallSummaryAnalytic*>::get(),
                                                                             "CreateStallSummaryAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::StallSummaryAnalytic*, false>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::StallSummaryAnalytic* UnityEditor::Analytics::StallSummaryAnalytic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEditor::Analytics::StallSummaryAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::StallSummaryAnalytic::StallSummaryAnalytic() {}
