#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/AssetImportStatusAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEditor/Analytics/zzzz__AssetImportStatusAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::AssetImportStatusAnalytic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEditor::Analytics::AssetImportStatusAnalytic::*)()>(
    &::UnityEditor::Analytics::AssetImportStatusAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6bf13dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::AssetImportStatusAnalytic*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::AssetImportStatusAnalytic.CreateAssetImportStatusAnalytic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEditor::Analytics::AssetImportStatusAnalytic* (*)()>(
    &::UnityEditor::Analytics::AssetImportStatusAnalytic::CreateAssetImportStatusAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bf1458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::AssetImportStatusAnalytic*>::get(), "CreateAssetImportStatusAnalytic",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_get_package_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_name;
}
constexpr ::StringW const& UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_get_package_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_name;
}
constexpr void UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_set_package_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___package_name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_get_package_items_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_items_count;
}
constexpr int32_t const& UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_get_package_items_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_items_count;
}
constexpr void UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_set_package_items_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___package_items_count = value;
}
constexpr int32_t& UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_get_package_import_status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_import_status;
}
constexpr int32_t const& UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_get_package_import_status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_import_status;
}
constexpr void UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_set_package_import_status(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___package_import_status = value;
}
constexpr ::StringW& UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_get_error_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error_message;
}
constexpr ::StringW const& UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_get_error_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error_message;
}
constexpr void UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_set_error_message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___error_message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_get_project_assets_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___project_assets_count;
}
constexpr int32_t const& UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_get_project_assets_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___project_assets_count;
}
constexpr void UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_set_project_assets_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___project_assets_count = value;
}
constexpr int32_t& UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_get_unselected_assets_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unselected_assets_count;
}
constexpr int32_t const& UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_get_unselected_assets_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unselected_assets_count;
}
constexpr void UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_set_unselected_assets_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unselected_assets_count = value;
}
constexpr int32_t& UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_get_selected_new_assets_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selected_new_assets_count;
}
constexpr int32_t const& UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_get_selected_new_assets_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selected_new_assets_count;
}
constexpr void UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_set_selected_new_assets_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selected_new_assets_count = value;
}
constexpr int32_t& UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_get_selected_changed_assets_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selected_changed_assets_count;
}
constexpr int32_t const& UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_get_selected_changed_assets_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selected_changed_assets_count;
}
constexpr void UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_set_selected_changed_assets_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selected_changed_assets_count = value;
}
constexpr int32_t& UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_get_unchanged_assets_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unchanged_assets_count;
}
constexpr int32_t const& UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_get_unchanged_assets_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unchanged_assets_count;
}
constexpr void UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_set_unchanged_assets_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unchanged_assets_count = value;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_get_selected_asset_extensions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selected_asset_extensions;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_get_selected_asset_extensions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selected_asset_extensions;
}
constexpr void UnityEditor::Analytics::AssetImportStatusAnalytic::__cordl_internal_set_selected_asset_extensions(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selected_asset_extensions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEditor::Analytics::AssetImportStatusAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::AssetImportStatusAnalytic*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::AssetImportStatusAnalytic* UnityEditor::Analytics::AssetImportStatusAnalytic::CreateAssetImportStatusAnalytic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::AssetImportStatusAnalytic*>::get(),
                                                                             "CreateAssetImportStatusAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::AssetImportStatusAnalytic*, false>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::AssetImportStatusAnalytic* UnityEditor::Analytics::AssetImportStatusAnalytic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEditor::Analytics::AssetImportStatusAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::AssetImportStatusAnalytic::AssetImportStatusAnalytic() {}
