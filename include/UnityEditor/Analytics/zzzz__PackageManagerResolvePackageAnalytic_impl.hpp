#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/PackageManagerResolvePackageAnalytic.hpp"
#include "UnityEditor/Analytics/zzzz__PackageManagerBaseAnalytic_impl.hpp"
#include "UnityEditor/Analytics/zzzz__PackageManagerResolvePackageAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::*)()>(
    &::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e22110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic.CreatePackageManagerResolvePackageAnalytic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic* (*)()>(
    &::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::CreatePackageManagerResolvePackageAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e221a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic*>(), { "CreatePackageManagerResolvePackageAnalytic", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_get_packages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packages;
}
constexpr ::ArrayW<::StringW> const& UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_get_packages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___packages;
}
constexpr void UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_set_packages(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___packages = value;
}
constexpr ::ArrayW<::StringW>& UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_get_package_registries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_registries;
}
constexpr ::ArrayW<::StringW> const& UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_get_package_registries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_registries;
}
constexpr void UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_set_package_registries(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___package_registries = value;
}
constexpr ::ArrayW<::StringW>& UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_get_package_signatures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_signatures;
}
constexpr ::ArrayW<::StringW> const& UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_get_package_signatures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_signatures;
}
constexpr void UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_set_package_signatures(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___package_signatures = value;
}
constexpr ::ArrayW<::StringW>& UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_get_package_sources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_sources;
}
constexpr ::ArrayW<::StringW> const& UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_get_package_sources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_sources;
}
constexpr void UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_set_package_sources(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___package_sources = value;
}
constexpr ::ArrayW<::StringW>& UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_get_package_types() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_types;
}
constexpr ::ArrayW<::StringW> const& UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_get_package_types() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___package_types;
}
constexpr void UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::__cordl_internal_set_package_types(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___package_types = value;
}
inline void UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic* UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::CreatePackageManagerResolvePackageAnalytic() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic*>(), { "CreatePackageManagerResolvePackageAnalytic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic*>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic* UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic::PackageManagerResolvePackageAnalytic() {}
