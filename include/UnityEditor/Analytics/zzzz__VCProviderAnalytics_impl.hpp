#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/VCProviderAnalytics.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEditor/Analytics/zzzz__VCProviderAnalytics_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::VCProviderAnalytics._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEditor::Analytics::VCProviderAnalytics::*)()>(&::UnityEditor::Analytics::VCProviderAnalytics::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x72c1218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::VCProviderAnalytics*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::VCProviderAnalytics.CreateVCProviderAnalytics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEditor::Analytics::VCProviderAnalytics* (*)()>(&::UnityEditor::Analytics::VCProviderAnalytics::CreateVCProviderAnalytics)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x72c1290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::VCProviderAnalytics*>(), { "CreateVCProviderAnalytics", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEditor::Analytics::VCProviderAnalytics::__cordl_internal_get_Mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Mode;
}
constexpr ::StringW const& UnityEditor::Analytics::VCProviderAnalytics::__cordl_internal_get_Mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Mode;
}
constexpr void UnityEditor::Analytics::VCProviderAnalytics::__cordl_internal_set_Mode(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Mode = value;
}
inline void UnityEditor::Analytics::VCProviderAnalytics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::VCProviderAnalytics*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::VCProviderAnalytics* UnityEditor::Analytics::VCProviderAnalytics::CreateVCProviderAnalytics() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::VCProviderAnalytics*>(), { "CreateVCProviderAnalytics", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::VCProviderAnalytics*>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::VCProviderAnalytics* UnityEditor::Analytics::VCProviderAnalytics::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEditor::Analytics::VCProviderAnalytics*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::VCProviderAnalytics::VCProviderAnalytics() {}
