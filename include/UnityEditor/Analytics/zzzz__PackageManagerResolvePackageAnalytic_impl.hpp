#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/PackageManagerResolvePackageAnalytic.hpp"
#include "UnityEditor/Analytics/zzzz__PackageManagerBaseAnalytic_impl.hpp"
#include "UnityEditor/Analytics/zzzz__PackageManagerResolvePackageAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::*)()>(
    &::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6bf0f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic.CreatePackageManagerResolvePackageAnalytic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic* (*)()>(
    &::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::CreatePackageManagerResolvePackageAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bf0fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic*>::get(),
                                                 "CreatePackageManagerResolvePackageAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_get_packages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packages;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_get_packages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packages;
}
constexpr void UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_set_packages(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___packages)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_get_package_registries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_registries;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_get_package_registries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_registries;
}
constexpr void UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_set_package_registries(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___package_registries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_get_package_signatures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_signatures;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_get_package_signatures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_signatures;
}
constexpr void UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_set_package_signatures(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___package_signatures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_get_package_sources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_sources;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_get_package_sources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_sources;
}
constexpr void UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_set_package_sources(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___package_sources)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_get_package_types() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_types;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_get_package_types() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_types;
}
constexpr void UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_set_package_types(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___package_types)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic* UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::CreatePackageManagerResolvePackageAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic*>::get(),
                                               "CreatePackageManagerResolvePackageAnalytic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic*, false>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic* UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::PackageManagerResolvePackageAnalytic() {}
