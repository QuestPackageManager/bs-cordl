#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/BuildAssetBundleAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEditor/Analytics/zzzz__BuildAssetBundleAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::BuildAssetBundleAnalytic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEditor::Analytics::BuildAssetBundleAnalytic::*)()>(
    &::UnityEditor::Analytics::BuildAssetBundleAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6bf05d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::BuildAssetBundleAnalytic*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::BuildAssetBundleAnalytic.CreateBuildAssetBundleAnalytic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEditor::Analytics::BuildAssetBundleAnalytic* (*)()>(
    &::UnityEditor::Analytics::BuildAssetBundleAnalytic::CreateBuildAssetBundleAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bf064c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::BuildAssetBundleAnalytic*>::get(),
                                                                               "CreateBuildAssetBundleAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___error)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEditor::Analytics::BuildAssetBundleAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::BuildAssetBundleAnalytic*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::BuildAssetBundleAnalytic* UnityEditor::Analytics::BuildAssetBundleAnalytic::CreateBuildAssetBundleAnalytic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::BuildAssetBundleAnalytic*>::get(),
                                                                             "CreateBuildAssetBundleAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::BuildAssetBundleAnalytic*, false>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::BuildAssetBundleAnalytic* UnityEditor::Analytics::BuildAssetBundleAnalytic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEditor::Analytics::BuildAssetBundleAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::BuildAssetBundleAnalytic::BuildAssetBundleAnalytic() {}
