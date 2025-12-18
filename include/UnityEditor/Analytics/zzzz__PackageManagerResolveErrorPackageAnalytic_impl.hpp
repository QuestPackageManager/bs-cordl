#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/PackageManagerResolveErrorPackageAnalytic.hpp"
#include "UnityEditor/Analytics/zzzz__PackageManagerBaseAnalytic_impl.hpp"
#include "UnityEditor/Analytics/zzzz__PackageManagerResolveErrorPackageAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic::*)()>(
    &::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c5a090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic.CreatePackageManagerResolveErrorPackageAnalytic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic* (*)()>(
    &::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic::CreatePackageManagerResolveErrorPackageAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c5a124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic*>::get(),
                                                 "CreatePackageManagerResolveErrorPackageAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic::__cordl_internal_get_reason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reason;
}
constexpr ::StringW const& UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic::__cordl_internal_get_reason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reason;
}
constexpr void UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic::__cordl_internal_set_reason(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___reason)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic::__cordl_internal_get_action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
constexpr ::StringW const& UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic::__cordl_internal_get_action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
constexpr void UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic::__cordl_internal_set_action(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___action)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic* UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic::CreatePackageManagerResolveErrorPackageAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic*>::get(),
                                               "CreatePackageManagerResolveErrorPackageAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic*, false>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic* UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic::PackageManagerResolveErrorPackageAnalytic() {}
