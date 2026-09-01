#pragma once
// IWYU pragma private; include "UnityEditor\Analytics\StallMarkerAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEditor/Analytics/zzzz__StallMarkerAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::StallMarkerAnalytic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEditor::Analytics::StallMarkerAnalytic::*)()>(&::UnityEditor::Analytics::StallMarkerAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e25e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::StallMarkerAnalytic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::StallMarkerAnalytic.CreateStallMarkerAnalytic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEditor::Analytics::StallMarkerAnalytic* (*)()>(&::UnityEditor::Analytics::StallMarkerAnalytic::CreateStallMarkerAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e25ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::StallMarkerAnalytic*>(), { "CreateStallMarkerAnalytic", {}, {} })));
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
  this->___Name = value;
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::StallMarkerAnalytic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::StallMarkerAnalytic* UnityEditor::Analytics::StallMarkerAnalytic::CreateStallMarkerAnalytic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::StallMarkerAnalytic*>(), { "CreateStallMarkerAnalytic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::StallMarkerAnalytic*>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::StallMarkerAnalytic* UnityEditor::Analytics::StallMarkerAnalytic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEditor::Analytics::StallMarkerAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::StallMarkerAnalytic::StallMarkerAnalytic() {}
