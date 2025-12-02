#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/SendGameBuildAnalytic.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_impl.hpp"
#include "UnityEditor/Analytics/zzzz__SendGameBuildAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::SendGameBuildAnalytic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEditor::Analytics::SendGameBuildAnalytic::*)()>(
    &::UnityEditor::Analytics::SendGameBuildAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6bf0b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::SendGameBuildAnalytic*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::SendGameBuildAnalytic.CreateSendGameBuildAnalytic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEditor::Analytics::SendGameBuildAnalytic* (*)()>(
    &::UnityEditor::Analytics::SendGameBuildAnalytic::CreateSendGameBuildAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bf0be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::SendGameBuildAnalytic*>::get(),
                                                                               "CreateSendGameBuildAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEditor::Analytics::SendGameBuildAnalytic::__cordl_internal_get_navmesh_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___navmesh_count;
}
constexpr int32_t const& UnityEditor::Analytics::SendGameBuildAnalytic::__cordl_internal_get_navmesh_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___navmesh_count;
}
constexpr void UnityEditor::Analytics::SendGameBuildAnalytic::__cordl_internal_set_navmesh_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___navmesh_count = value;
}
inline void UnityEditor::Analytics::SendGameBuildAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::SendGameBuildAnalytic*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::SendGameBuildAnalytic* UnityEditor::Analytics::SendGameBuildAnalytic::CreateSendGameBuildAnalytic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::SendGameBuildAnalytic*>::get(),
                                                                             "CreateSendGameBuildAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::SendGameBuildAnalytic*, false>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::SendGameBuildAnalytic* UnityEditor::Analytics::SendGameBuildAnalytic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEditor::Analytics::SendGameBuildAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::SendGameBuildAnalytic::SendGameBuildAnalytic() {}
