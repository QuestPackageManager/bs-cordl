#pragma once
// IWYU pragma private; include "UnityEditor\Analytics\PackageManagerBaseAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEditor/Analytics/zzzz__PackageManagerBaseAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::PackageManagerBaseAnalytic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEditor::Analytics::PackageManagerBaseAnalytic::*)(::StringW)>(&::UnityEditor::Analytics::PackageManagerBaseAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e25378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerBaseAnalytic*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr int64_t& UnityEditor::Analytics::PackageManagerBaseAnalytic::__cordl_internal_get_start_ts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___start_ts;
}
constexpr int64_t const& UnityEditor::Analytics::PackageManagerBaseAnalytic::__cordl_internal_get_start_ts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___start_ts;
}
constexpr void UnityEditor::Analytics::PackageManagerBaseAnalytic::__cordl_internal_set_start_ts(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___start_ts = value;
}
constexpr int64_t& UnityEditor::Analytics::PackageManagerBaseAnalytic::__cordl_internal_get_duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr int64_t const& UnityEditor::Analytics::PackageManagerBaseAnalytic::__cordl_internal_get_duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr void UnityEditor::Analytics::PackageManagerBaseAnalytic::__cordl_internal_set_duration(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___duration = value;
}
constexpr bool& UnityEditor::Analytics::PackageManagerBaseAnalytic::__cordl_internal_get_blocking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blocking;
}
constexpr bool const& UnityEditor::Analytics::PackageManagerBaseAnalytic::__cordl_internal_get_blocking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blocking;
}
constexpr void UnityEditor::Analytics::PackageManagerBaseAnalytic::__cordl_internal_set_blocking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blocking = value;
}
constexpr ::StringW& UnityEditor::Analytics::PackageManagerBaseAnalytic::__cordl_internal_get_package_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_id;
}
constexpr ::StringW const& UnityEditor::Analytics::PackageManagerBaseAnalytic::__cordl_internal_get_package_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_id;
}
constexpr void UnityEditor::Analytics::PackageManagerBaseAnalytic::__cordl_internal_set_package_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___package_id = value;
}
constexpr int32_t& UnityEditor::Analytics::PackageManagerBaseAnalytic::__cordl_internal_get_status_code() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status_code;
}
constexpr int32_t const& UnityEditor::Analytics::PackageManagerBaseAnalytic::__cordl_internal_get_status_code() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___status_code;
}
constexpr void UnityEditor::Analytics::PackageManagerBaseAnalytic::__cordl_internal_set_status_code(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___status_code = value;
}
constexpr ::StringW& UnityEditor::Analytics::PackageManagerBaseAnalytic::__cordl_internal_get_error_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error_message;
}
constexpr ::StringW const& UnityEditor::Analytics::PackageManagerBaseAnalytic::__cordl_internal_get_error_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error_message;
}
constexpr void UnityEditor::Analytics::PackageManagerBaseAnalytic::__cordl_internal_set_error_message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___error_message = value;
}
inline void UnityEditor::Analytics::PackageManagerBaseAnalytic::_ctor(::StringW eventName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerBaseAnalytic*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventName);
}
inline ::UnityEditor::Analytics::PackageManagerBaseAnalytic* UnityEditor::Analytics::PackageManagerBaseAnalytic::New_ctor(::StringW eventName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEditor::Analytics::PackageManagerBaseAnalytic*>(eventName));
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::PackageManagerBaseAnalytic::PackageManagerBaseAnalytic() {}
