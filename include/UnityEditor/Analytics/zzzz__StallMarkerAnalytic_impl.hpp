#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/StallMarkerAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEditor/Analytics/zzzz__StallMarkerAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::StallMarkerAnalytic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEditor::Analytics::StallMarkerAnalytic::*)()>(&::UnityEditor::Analytics::StallMarkerAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6c5a594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::StallMarkerAnalytic*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::StallMarkerAnalytic.CreateStallMarkerAnalytic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEditor::Analytics::StallMarkerAnalytic* (*)()>(
    &::UnityEditor::Analytics::StallMarkerAnalytic::CreateStallMarkerAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c5a60c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::StallMarkerAnalytic*>::get(),
                                                                               "CreateStallMarkerAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEditor::Analytics::StallMarkerAnalytic::__cordl_internal_get_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr ::StringW const& UnityEditor::Analytics::StallMarkerAnalytic::__cordl_internal_get_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Name;
}
constexpr void UnityEditor::Analytics::StallMarkerAnalytic::__cordl_internal_set_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEditor::Analytics::StallMarkerAnalytic::__cordl_internal_get_HasProgressMarkup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HasProgressMarkup;
}
constexpr bool const& UnityEditor::Analytics::StallMarkerAnalytic::__cordl_internal_get_HasProgressMarkup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HasProgressMarkup;
}
constexpr void UnityEditor::Analytics::StallMarkerAnalytic::__cordl_internal_set_HasProgressMarkup(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___HasProgressMarkup = value;
}
constexpr double_t& UnityEditor::Analytics::StallMarkerAnalytic::__cordl_internal_get_Duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Duration;
}
constexpr double_t const& UnityEditor::Analytics::StallMarkerAnalytic::__cordl_internal_get_Duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Duration;
}
constexpr void UnityEditor::Analytics::StallMarkerAnalytic::__cordl_internal_set_Duration(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Duration = value;
}
inline void UnityEditor::Analytics::StallMarkerAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::StallMarkerAnalytic*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::StallMarkerAnalytic* UnityEditor::Analytics::StallMarkerAnalytic::CreateStallMarkerAnalytic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::StallMarkerAnalytic*>::get(),
                                                                             "CreateStallMarkerAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::StallMarkerAnalytic*, false>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::StallMarkerAnalytic* UnityEditor::Analytics::StallMarkerAnalytic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEditor::Analytics::StallMarkerAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::StallMarkerAnalytic::StallMarkerAnalytic() {}
