#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/NavmeshBakingAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEditor/Analytics/zzzz__NavmeshBakingAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::NavmeshBakingAnalytic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEditor::Analytics::NavmeshBakingAnalytic::*)()>(
    &::UnityEditor::Analytics::NavmeshBakingAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6bf09d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::NavmeshBakingAnalytic*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::NavmeshBakingAnalytic.CreateNavmeshBakingAnalytic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEditor::Analytics::NavmeshBakingAnalytic* (*)()>(
    &::UnityEditor::Analytics::NavmeshBakingAnalytic::CreateNavmeshBakingAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bf0a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::NavmeshBakingAnalytic*>::get(),
                                                                               "CreateNavmeshBakingAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEditor::Analytics::NavmeshBakingAnalytic::__cordl_internal_get_new_nav_api() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___new_nav_api;
}
constexpr bool const& UnityEditor::Analytics::NavmeshBakingAnalytic::__cordl_internal_get_new_nav_api() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___new_nav_api;
}
constexpr void UnityEditor::Analytics::NavmeshBakingAnalytic::__cordl_internal_set_new_nav_api(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___new_nav_api = value;
}
constexpr bool& UnityEditor::Analytics::NavmeshBakingAnalytic::__cordl_internal_get_bake_at_runtime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bake_at_runtime;
}
constexpr bool const& UnityEditor::Analytics::NavmeshBakingAnalytic::__cordl_internal_get_bake_at_runtime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bake_at_runtime;
}
constexpr void UnityEditor::Analytics::NavmeshBakingAnalytic::__cordl_internal_set_bake_at_runtime(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bake_at_runtime = value;
}
constexpr int32_t& UnityEditor::Analytics::NavmeshBakingAnalytic::__cordl_internal_get_height_meshes_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height_meshes_count;
}
constexpr int32_t const& UnityEditor::Analytics::NavmeshBakingAnalytic::__cordl_internal_get_height_meshes_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height_meshes_count;
}
constexpr void UnityEditor::Analytics::NavmeshBakingAnalytic::__cordl_internal_set_height_meshes_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___height_meshes_count = value;
}
constexpr int32_t& UnityEditor::Analytics::NavmeshBakingAnalytic::__cordl_internal_get_offmesh_links_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offmesh_links_count;
}
constexpr int32_t const& UnityEditor::Analytics::NavmeshBakingAnalytic::__cordl_internal_get_offmesh_links_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offmesh_links_count;
}
constexpr void UnityEditor::Analytics::NavmeshBakingAnalytic::__cordl_internal_set_offmesh_links_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offmesh_links_count = value;
}
inline void UnityEditor::Analytics::NavmeshBakingAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::NavmeshBakingAnalytic*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::NavmeshBakingAnalytic* UnityEditor::Analytics::NavmeshBakingAnalytic::CreateNavmeshBakingAnalytic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::NavmeshBakingAnalytic*>::get(),
                                                                             "CreateNavmeshBakingAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::NavmeshBakingAnalytic*, false>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::NavmeshBakingAnalytic* UnityEditor::Analytics::NavmeshBakingAnalytic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEditor::Analytics::NavmeshBakingAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::NavmeshBakingAnalytic::NavmeshBakingAnalytic() {}
