#pragma once
// IWYU pragma private; include "UnityEditor\Analytics\PackageManagerAddPackageAnalytic.hpp"
#include "UnityEditor/Analytics/zzzz__PackageManagerBaseAnalytic_impl.hpp"
#include "UnityEditor/Analytics/zzzz__PackageManagerAddPackageAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::PackageManagerAddPackageAnalytic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEditor::Analytics::PackageManagerAddPackageAnalytic::*)()>(&::UnityEditor::Analytics::PackageManagerAddPackageAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e253e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerAddPackageAnalytic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::PackageManagerAddPackageAnalytic.CreatePackageManagerAddPackageAnalytic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEditor::Analytics::PackageManagerAddPackageAnalytic* (*)()>(
    &::UnityEditor::Analytics::PackageManagerAddPackageAnalytic::CreatePackageManagerAddPackageAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e25474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerAddPackageAnalytic*>(), { "CreatePackageManagerAddPackageAnalytic", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEditor::Analytics::PackageManagerAddPackageAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerAddPackageAnalytic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::PackageManagerAddPackageAnalytic* UnityEditor::Analytics::PackageManagerAddPackageAnalytic::CreatePackageManagerAddPackageAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerAddPackageAnalytic*>(), { "CreatePackageManagerAddPackageAnalytic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::PackageManagerAddPackageAnalytic*>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::PackageManagerAddPackageAnalytic* UnityEditor::Analytics::PackageManagerAddPackageAnalytic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEditor::Analytics::PackageManagerAddPackageAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::PackageManagerAddPackageAnalytic::PackageManagerAddPackageAnalytic() {}
