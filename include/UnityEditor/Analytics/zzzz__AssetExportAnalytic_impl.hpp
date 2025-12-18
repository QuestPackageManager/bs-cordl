#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/AssetExportAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEditor/Analytics/zzzz__AssetExportAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::AssetExportAnalytic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEditor::Analytics::AssetExportAnalytic::*)()>(&::UnityEditor::Analytics::AssetExportAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6c5a3fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::AssetExportAnalytic*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::AssetExportAnalytic.CreateAssetExportAnalytic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEditor::Analytics::AssetExportAnalytic* (*)()>(
    &::UnityEditor::Analytics::AssetExportAnalytic::CreateAssetExportAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c5a474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::AssetExportAnalytic*>::get(),
                                                                               "CreateAssetExportAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEditor::Analytics::AssetExportAnalytic::__cordl_internal_get_package_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_name;
}
constexpr ::StringW const& UnityEditor::Analytics::AssetExportAnalytic::__cordl_internal_get_package_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_name;
}
constexpr void UnityEditor::Analytics::AssetExportAnalytic::__cordl_internal_set_package_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___package_name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEditor::Analytics::AssetExportAnalytic::__cordl_internal_get_error_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error_message;
}
constexpr ::StringW const& UnityEditor::Analytics::AssetExportAnalytic::__cordl_internal_get_error_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error_message;
}
constexpr void UnityEditor::Analytics::AssetExportAnalytic::__cordl_internal_set_error_message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___error_message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEditor::Analytics::AssetExportAnalytic::__cordl_internal_get_items_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items_count;
}
constexpr int32_t const& UnityEditor::Analytics::AssetExportAnalytic::__cordl_internal_get_items_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___items_count;
}
constexpr void UnityEditor::Analytics::AssetExportAnalytic::__cordl_internal_set_items_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___items_count = value;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEditor::Analytics::AssetExportAnalytic::__cordl_internal_get_asset_extensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asset_extensions;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEditor::Analytics::AssetExportAnalytic::__cordl_internal_get_asset_extensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___asset_extensions;
}
constexpr void UnityEditor::Analytics::AssetExportAnalytic::__cordl_internal_set_asset_extensions(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___asset_extensions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEditor::Analytics::AssetExportAnalytic::__cordl_internal_get_include_upm_dependencies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___include_upm_dependencies;
}
constexpr bool const& UnityEditor::Analytics::AssetExportAnalytic::__cordl_internal_get_include_upm_dependencies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___include_upm_dependencies;
}
constexpr void UnityEditor::Analytics::AssetExportAnalytic::__cordl_internal_set_include_upm_dependencies(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___include_upm_dependencies = value;
}
inline void UnityEditor::Analytics::AssetExportAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::AssetExportAnalytic*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::AssetExportAnalytic* UnityEditor::Analytics::AssetExportAnalytic::CreateAssetExportAnalytic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::AssetExportAnalytic*>::get(),
                                                                             "CreateAssetExportAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::AssetExportAnalytic*, false>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::AssetExportAnalytic* UnityEditor::Analytics::AssetExportAnalytic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEditor::Analytics::AssetExportAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::AssetExportAnalytic::AssetExportAnalytic() {}
