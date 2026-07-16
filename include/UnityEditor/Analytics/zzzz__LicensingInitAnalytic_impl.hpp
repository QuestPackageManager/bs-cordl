#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/LicensingInitAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEditor/Analytics/zzzz__LicensingInitAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::LicensingInitAnalytic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEditor::Analytics::LicensingInitAnalytic::*)()>(&::UnityEditor::Analytics::LicensingInitAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e219f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::LicensingInitAnalytic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::LicensingInitAnalytic.CreateLicensingInitAnalytic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEditor::Analytics::LicensingInitAnalytic* (*)()>(&::UnityEditor::Analytics::LicensingInitAnalytic::CreateLicensingInitAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e21a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::LicensingInitAnalytic*>(), { "CreateLicensingInitAnalytic", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEditor::Analytics::LicensingInitAnalytic::__cordl_internal_get_licensingProtocolVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___licensingProtocolVersion;
}
constexpr ::StringW const& UnityEditor::Analytics::LicensingInitAnalytic::__cordl_internal_get_licensingProtocolVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___licensingProtocolVersion;
}
constexpr void UnityEditor::Analytics::LicensingInitAnalytic::__cordl_internal_set_licensingProtocolVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___licensingProtocolVersion = value;
}
constexpr ::StringW& UnityEditor::Analytics::LicensingInitAnalytic::__cordl_internal_get_licensingClientVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___licensingClientVersion;
}
constexpr ::StringW const& UnityEditor::Analytics::LicensingInitAnalytic::__cordl_internal_get_licensingClientVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___licensingClientVersion;
}
constexpr void UnityEditor::Analytics::LicensingInitAnalytic::__cordl_internal_set_licensingClientVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___licensingClientVersion = value;
}
constexpr ::StringW& UnityEditor::Analytics::LicensingInitAnalytic::__cordl_internal_get_channelType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___channelType;
}
constexpr ::StringW const& UnityEditor::Analytics::LicensingInitAnalytic::__cordl_internal_get_channelType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___channelType;
}
constexpr void UnityEditor::Analytics::LicensingInitAnalytic::__cordl_internal_set_channelType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___channelType = value;
}
constexpr double_t& UnityEditor::Analytics::LicensingInitAnalytic::__cordl_internal_get_initTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initTime;
}
constexpr double_t const& UnityEditor::Analytics::LicensingInitAnalytic::__cordl_internal_get_initTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initTime;
}
constexpr void UnityEditor::Analytics::LicensingInitAnalytic::__cordl_internal_set_initTime(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initTime = value;
}
constexpr bool& UnityEditor::Analytics::LicensingInitAnalytic::__cordl_internal_get_isLegacy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLegacy;
}
constexpr bool const& UnityEditor::Analytics::LicensingInitAnalytic::__cordl_internal_get_isLegacy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isLegacy;
}
constexpr void UnityEditor::Analytics::LicensingInitAnalytic::__cordl_internal_set_isLegacy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isLegacy = value;
}
constexpr ::StringW& UnityEditor::Analytics::LicensingInitAnalytic::__cordl_internal_get_sessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sessionId;
}
constexpr ::StringW const& UnityEditor::Analytics::LicensingInitAnalytic::__cordl_internal_get_sessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sessionId;
}
constexpr void UnityEditor::Analytics::LicensingInitAnalytic::__cordl_internal_set_sessionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sessionId = value;
}
constexpr ::StringW& UnityEditor::Analytics::LicensingInitAnalytic::__cordl_internal_get_correlationId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___correlationId;
}
constexpr ::StringW const& UnityEditor::Analytics::LicensingInitAnalytic::__cordl_internal_get_correlationId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___correlationId;
}
constexpr void UnityEditor::Analytics::LicensingInitAnalytic::__cordl_internal_set_correlationId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___correlationId = value;
}
inline void UnityEditor::Analytics::LicensingInitAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::LicensingInitAnalytic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::LicensingInitAnalytic* UnityEditor::Analytics::LicensingInitAnalytic::CreateLicensingInitAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::LicensingInitAnalytic*>(), { "CreateLicensingInitAnalytic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::LicensingInitAnalytic*>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::LicensingInitAnalytic* UnityEditor::Analytics::LicensingInitAnalytic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEditor::Analytics::LicensingInitAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::LicensingInitAnalytic::LicensingInitAnalytic() {}
