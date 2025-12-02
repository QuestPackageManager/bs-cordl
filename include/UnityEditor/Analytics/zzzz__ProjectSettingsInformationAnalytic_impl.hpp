#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/ProjectSettingsInformationAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEditor/Analytics/zzzz__ProjectSettingsInformationAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::ProjectSettingsInformationAnalytic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEditor::Analytics::ProjectSettingsInformationAnalytic::*)()>(
    &::UnityEditor::Analytics::ProjectSettingsInformationAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6bf0a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::ProjectSettingsInformationAnalytic*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::ProjectSettingsInformationAnalytic.CreateProjectSettingsInformationAnalytic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEditor::Analytics::ProjectSettingsInformationAnalytic* (*)()>(
    &::UnityEditor::Analytics::ProjectSettingsInformationAnalytic::CreateProjectSettingsInformationAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bf0b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::ProjectSettingsInformationAnalytic*>::get(),
                                                 "CreateProjectSettingsInformationAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEditor::Analytics::ProjectSettingsInformationAnalytic::__cordl_internal_get_agent_types_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___agent_types_count;
}
constexpr int32_t const& UnityEditor::Analytics::ProjectSettingsInformationAnalytic::__cordl_internal_get_agent_types_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___agent_types_count;
}
constexpr void UnityEditor::Analytics::ProjectSettingsInformationAnalytic::__cordl_internal_set_agent_types_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___agent_types_count = value;
}
constexpr int32_t& UnityEditor::Analytics::ProjectSettingsInformationAnalytic::__cordl_internal_get_areas_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___areas_count;
}
constexpr int32_t const& UnityEditor::Analytics::ProjectSettingsInformationAnalytic::__cordl_internal_get_areas_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___areas_count;
}
constexpr void UnityEditor::Analytics::ProjectSettingsInformationAnalytic::__cordl_internal_set_areas_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___areas_count = value;
}
inline void UnityEditor::Analytics::ProjectSettingsInformationAnalytic::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::ProjectSettingsInformationAnalytic*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::ProjectSettingsInformationAnalytic* UnityEditor::Analytics::ProjectSettingsInformationAnalytic::CreateProjectSettingsInformationAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::ProjectSettingsInformationAnalytic*>::get(),
                                               "CreateProjectSettingsInformationAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::ProjectSettingsInformationAnalytic*, false>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::ProjectSettingsInformationAnalytic* UnityEditor::Analytics::ProjectSettingsInformationAnalytic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEditor::Analytics::ProjectSettingsInformationAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::ProjectSettingsInformationAnalytic::ProjectSettingsInformationAnalytic() {}
