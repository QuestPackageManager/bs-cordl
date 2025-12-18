#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/PackageManagerAddPackageAnalytic.hpp"
#include "UnityEditor/Analytics/zzzz__PackageManagerBaseAnalytic_impl.hpp"
#include "UnityEditor/Analytics/zzzz__PackageManagerAddPackageAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::PackageManagerAddPackageAnalytic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEditor::Analytics::PackageManagerAddPackageAnalytic::*)()>(
    &::UnityEditor::Analytics::PackageManagerAddPackageAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c59b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::PackageManagerAddPackageAnalytic*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::PackageManagerAddPackageAnalytic.CreatePackageManagerAddPackageAnalytic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEditor::Analytics::PackageManagerAddPackageAnalytic* (*)()>(
    &::UnityEditor::Analytics::PackageManagerAddPackageAnalytic::CreatePackageManagerAddPackageAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c59bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::PackageManagerAddPackageAnalytic*>::get(),
                                                 "CreatePackageManagerAddPackageAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEditor::Analytics::PackageManagerAddPackageAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::PackageManagerAddPackageAnalytic*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::PackageManagerAddPackageAnalytic* UnityEditor::Analytics::PackageManagerAddPackageAnalytic::CreatePackageManagerAddPackageAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::PackageManagerAddPackageAnalytic*>::get(),
                                               "CreatePackageManagerAddPackageAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::PackageManagerAddPackageAnalytic*, false>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::PackageManagerAddPackageAnalytic* UnityEditor::Analytics::PackageManagerAddPackageAnalytic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEditor::Analytics::PackageManagerAddPackageAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::PackageManagerAddPackageAnalytic::PackageManagerAddPackageAnalytic() {}
