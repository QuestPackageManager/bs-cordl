#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/ProjectSettingsInformationAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEditor/Analytics/zzzz__ProjectSettingsInformationAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::ProjectSettingsInformationAnalytic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEditor::Analytics::ProjectSettingsInformationAnalytic::*)()>(
    &::UnityEditor::Analytics::ProjectSettingsInformationAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e21c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::ProjectSettingsInformationAnalytic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::ProjectSettingsInformationAnalytic.CreateProjectSettingsInformationAnalytic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEditor::Analytics::ProjectSettingsInformationAnalytic* (*)()>(
    &::UnityEditor::Analytics::ProjectSettingsInformationAnalytic::CreateProjectSettingsInformationAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e21cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::ProjectSettingsInformationAnalytic*>(), { "CreateProjectSettingsInformationAnalytic", {}, {} })));
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::ProjectSettingsInformationAnalytic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::ProjectSettingsInformationAnalytic* UnityEditor::Analytics::ProjectSettingsInformationAnalytic::CreateProjectSettingsInformationAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::ProjectSettingsInformationAnalytic*>(), { "CreateProjectSettingsInformationAnalytic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::ProjectSettingsInformationAnalytic*>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::ProjectSettingsInformationAnalytic* UnityEditor::Analytics::ProjectSettingsInformationAnalytic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEditor::Analytics::ProjectSettingsInformationAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::ProjectSettingsInformationAnalytic::ProjectSettingsInformationAnalytic() {}
