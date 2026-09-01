#pragma once
// IWYU pragma private; include "UnityEditor\Analytics\LicensingErrorAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEditor/Analytics/zzzz__LicensingErrorAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::LicensingErrorAnalytic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEditor::Analytics::LicensingErrorAnalytic::*)()>(&::UnityEditor::Analytics::LicensingErrorAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e24eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::LicensingErrorAnalytic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::LicensingErrorAnalytic.CreateLicensingErrorAnalytic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEditor::Analytics::LicensingErrorAnalytic* (*)()>(&::UnityEditor::Analytics::LicensingErrorAnalytic::CreateLicensingErrorAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e24f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::LicensingErrorAnalytic*>(), { "CreateLicensingErrorAnalytic", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEditor::Analytics::LicensingErrorAnalytic::__cordl_internal_get_licensingErrorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___licensingErrorType;
}
constexpr ::StringW const& UnityEditor::Analytics::LicensingErrorAnalytic::__cordl_internal_get_licensingErrorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___licensingErrorType;
}
constexpr void UnityEditor::Analytics::LicensingErrorAnalytic::__cordl_internal_set_licensingErrorType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___licensingErrorType = value;
}
constexpr ::StringW& UnityEditor::Analytics::LicensingErrorAnalytic::__cordl_internal_get_additionalData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionalData;
}
constexpr ::StringW const& UnityEditor::Analytics::LicensingErrorAnalytic::__cordl_internal_get_additionalData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___additionalData;
}
constexpr void UnityEditor::Analytics::LicensingErrorAnalytic::__cordl_internal_set_additionalData(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___additionalData = value;
}
constexpr ::StringW& UnityEditor::Analytics::LicensingErrorAnalytic::__cordl_internal_get_errorMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorMessage;
}
constexpr ::StringW const& UnityEditor::Analytics::LicensingErrorAnalytic::__cordl_internal_get_errorMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorMessage;
}
constexpr void UnityEditor::Analytics::LicensingErrorAnalytic::__cordl_internal_set_errorMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___errorMessage = value;
}
constexpr ::StringW& UnityEditor::Analytics::LicensingErrorAnalytic::__cordl_internal_get_correlationId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___correlationId;
}
constexpr ::StringW const& UnityEditor::Analytics::LicensingErrorAnalytic::__cordl_internal_get_correlationId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___correlationId;
}
constexpr void UnityEditor::Analytics::LicensingErrorAnalytic::__cordl_internal_set_correlationId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___correlationId = value;
}
constexpr ::StringW& UnityEditor::Analytics::LicensingErrorAnalytic::__cordl_internal_get_sessionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sessionId;
}
constexpr ::StringW const& UnityEditor::Analytics::LicensingErrorAnalytic::__cordl_internal_get_sessionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sessionId;
}
constexpr void UnityEditor::Analytics::LicensingErrorAnalytic::__cordl_internal_set_sessionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sessionId = value;
}
inline void UnityEditor::Analytics::LicensingErrorAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::LicensingErrorAnalytic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::LicensingErrorAnalytic* UnityEditor::Analytics::LicensingErrorAnalytic::CreateLicensingErrorAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::LicensingErrorAnalytic*>(), { "CreateLicensingErrorAnalytic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::LicensingErrorAnalytic*>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::LicensingErrorAnalytic* UnityEditor::Analytics::LicensingErrorAnalytic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEditor::Analytics::LicensingErrorAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::LicensingErrorAnalytic::LicensingErrorAnalytic() {}
