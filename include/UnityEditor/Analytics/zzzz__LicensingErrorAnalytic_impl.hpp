#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/LicensingErrorAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEditor/Analytics/zzzz__LicensingErrorAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::LicensingErrorAnalytic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEditor::Analytics::LicensingErrorAnalytic::*)()>(
    &::UnityEditor::Analytics::LicensingErrorAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6c595f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::LicensingErrorAnalytic*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::LicensingErrorAnalytic.CreateLicensingErrorAnalytic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEditor::Analytics::LicensingErrorAnalytic* (*)()>(
    &::UnityEditor::Analytics::LicensingErrorAnalytic::CreateLicensingErrorAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c59668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::LicensingErrorAnalytic*>::get(),
                                                                               "CreateLicensingErrorAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___licensingErrorType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___additionalData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___errorMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___correlationId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sessionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEditor::Analytics::LicensingErrorAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::LicensingErrorAnalytic*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::LicensingErrorAnalytic* UnityEditor::Analytics::LicensingErrorAnalytic::CreateLicensingErrorAnalytic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::LicensingErrorAnalytic*>::get(),
                                                                             "CreateLicensingErrorAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::LicensingErrorAnalytic*, false>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::LicensingErrorAnalytic* UnityEditor::Analytics::LicensingErrorAnalytic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEditor::Analytics::LicensingErrorAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::LicensingErrorAnalytic::LicensingErrorAnalytic() {}
