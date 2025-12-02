#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/LicensingInitAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEditor/Analytics/zzzz__LicensingInitAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::LicensingInitAnalytic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEditor::Analytics::LicensingInitAnalytic::*)()>(
    &::UnityEditor::Analytics::LicensingInitAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6bf0838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::LicensingInitAnalytic*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::LicensingInitAnalytic.CreateLicensingInitAnalytic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEditor::Analytics::LicensingInitAnalytic* (*)()>(
    &::UnityEditor::Analytics::LicensingInitAnalytic::CreateLicensingInitAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bf08b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::LicensingInitAnalytic*>::get(),
                                                                               "CreateLicensingInitAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___licensingProtocolVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___licensingClientVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___channelType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___correlationId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEditor::Analytics::LicensingInitAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::LicensingInitAnalytic*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::LicensingInitAnalytic* UnityEditor::Analytics::LicensingInitAnalytic::CreateLicensingInitAnalytic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::LicensingInitAnalytic*>::get(),
                                                                             "CreateLicensingInitAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::LicensingInitAnalytic*, false>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::LicensingInitAnalytic* UnityEditor::Analytics::LicensingInitAnalytic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEditor::Analytics::LicensingInitAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::LicensingInitAnalytic::LicensingInitAnalytic() {}
