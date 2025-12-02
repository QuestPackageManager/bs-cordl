#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/AssetImportAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEditor/Analytics/zzzz__AssetImportAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::AssetImportAnalytic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEditor::Analytics::AssetImportAnalytic::*)()>(&::UnityEditor::Analytics::AssetImportAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6bf14ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::AssetImportAnalytic*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::AssetImportAnalytic.CreateAssetImportAnalytic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEditor::Analytics::AssetImportAnalytic* (*)()>(
    &::UnityEditor::Analytics::AssetImportAnalytic::CreateAssetImportAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bf1524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::AssetImportAnalytic*>::get(),
                                                                               "CreateAssetImportAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEditor::Analytics::AssetImportAnalytic::__cordl_internal_get_package_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_name;
}
constexpr ::StringW const& UnityEditor::Analytics::AssetImportAnalytic::__cordl_internal_get_package_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_name;
}
constexpr void UnityEditor::Analytics::AssetImportAnalytic::__cordl_internal_set_package_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___package_name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEditor::Analytics::AssetImportAnalytic::__cordl_internal_get_package_import_choice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_import_choice;
}
constexpr int32_t const& UnityEditor::Analytics::AssetImportAnalytic::__cordl_internal_get_package_import_choice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_import_choice;
}
constexpr void UnityEditor::Analytics::AssetImportAnalytic::__cordl_internal_set_package_import_choice(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___package_import_choice = value;
}
inline void UnityEditor::Analytics::AssetImportAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::AssetImportAnalytic*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::AssetImportAnalytic* UnityEditor::Analytics::AssetImportAnalytic::CreateAssetImportAnalytic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::AssetImportAnalytic*>::get(),
                                                                             "CreateAssetImportAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::AssetImportAnalytic*, false>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::AssetImportAnalytic* UnityEditor::Analytics::AssetImportAnalytic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEditor::Analytics::AssetImportAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::AssetImportAnalytic::AssetImportAnalytic() {}
