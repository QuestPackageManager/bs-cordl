#pragma once
// IWYU pragma private; include "UnityEditor\Analytics\PackageManagerRemovePackageAnalytic.hpp"
#include "UnityEditor/Analytics/zzzz__PackageManagerBaseAnalytic_impl.hpp"
#include "UnityEditor/Analytics/zzzz__PackageManagerRemovePackageAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::PackageManagerRemovePackageAnalytic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEditor::Analytics::PackageManagerRemovePackageAnalytic::*)()>(
    &::UnityEditor::Analytics::PackageManagerRemovePackageAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e255b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerRemovePackageAnalytic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::PackageManagerRemovePackageAnalytic.CreatePackageManagerRemovePackageAnalytic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEditor::Analytics::PackageManagerRemovePackageAnalytic* (*)()>(
    &::UnityEditor::Analytics::PackageManagerRemovePackageAnalytic::CreatePackageManagerRemovePackageAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e25644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerRemovePackageAnalytic*>(), { "CreatePackageManagerRemovePackageAnalytic", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEditor::Analytics::PackageManagerRemovePackageAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerRemovePackageAnalytic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::PackageManagerRemovePackageAnalytic* UnityEditor::Analytics::PackageManagerRemovePackageAnalytic::CreatePackageManagerRemovePackageAnalytic() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerRemovePackageAnalytic*>(), { "CreatePackageManagerRemovePackageAnalytic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::PackageManagerRemovePackageAnalytic*>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::PackageManagerRemovePackageAnalytic* UnityEditor::Analytics::PackageManagerRemovePackageAnalytic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEditor::Analytics::PackageManagerRemovePackageAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::PackageManagerRemovePackageAnalytic::PackageManagerRemovePackageAnalytic() {}
