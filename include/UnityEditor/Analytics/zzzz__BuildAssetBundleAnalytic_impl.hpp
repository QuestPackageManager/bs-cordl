#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/BuildAssetBundleAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEditor/Analytics/zzzz__BuildAssetBundleAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::BuildAssetBundleAnalytic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEditor::Analytics::BuildAssetBundleAnalytic::*)()>(&::UnityEditor::Analytics::BuildAssetBundleAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e21790;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::BuildAssetBundleAnalytic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::BuildAssetBundleAnalytic.CreateBuildAssetBundleAnalytic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEditor::Analytics::BuildAssetBundleAnalytic* (*)()>(
    &::UnityEditor::Analytics::BuildAssetBundleAnalytic::CreateBuildAssetBundleAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e21808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::BuildAssetBundleAnalytic*>(), { "CreateBuildAssetBundleAnalytic", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEditor::Analytics::BuildAssetBundleAnalytic::__cordl_internal_get_success() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___success;
}
constexpr bool const& UnityEditor::Analytics::BuildAssetBundleAnalytic::__cordl_internal_get_success() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___success;
}
constexpr void UnityEditor::Analytics::BuildAssetBundleAnalytic::__cordl_internal_set_success(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___success = value;
}
constexpr ::StringW& UnityEditor::Analytics::BuildAssetBundleAnalytic::__cordl_internal_get_error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr ::StringW const& UnityEditor::Analytics::BuildAssetBundleAnalytic::__cordl_internal_get_error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr void UnityEditor::Analytics::BuildAssetBundleAnalytic::__cordl_internal_set_error(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___error = value;
}
inline void UnityEditor::Analytics::BuildAssetBundleAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::BuildAssetBundleAnalytic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::BuildAssetBundleAnalytic* UnityEditor::Analytics::BuildAssetBundleAnalytic::CreateBuildAssetBundleAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::BuildAssetBundleAnalytic*>(), { "CreateBuildAssetBundleAnalytic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::BuildAssetBundleAnalytic*>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::BuildAssetBundleAnalytic* UnityEditor::Analytics::BuildAssetBundleAnalytic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEditor::Analytics::BuildAssetBundleAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::BuildAssetBundleAnalytic::BuildAssetBundleAnalytic() {}
