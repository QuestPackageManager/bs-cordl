#pragma once
// IWYU pragma private; include "UnityEditor\Analytics\PackageManagerResetPackageAnalytic.hpp"
#include "UnityEditor/Analytics/zzzz__PackageManagerBaseAnalytic_impl.hpp"
#include "UnityEditor/Analytics/zzzz__PackageManagerResetPackageAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::PackageManagerResetPackageAnalytic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEditor::Analytics::PackageManagerResetPackageAnalytic::*)()>(
    &::UnityEditor::Analytics::PackageManagerResetPackageAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e25868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerResetPackageAnalytic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::PackageManagerResetPackageAnalytic.CreatePackageManagerResetPackageAnalytic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEditor::Analytics::PackageManagerResetPackageAnalytic* (*)()>(
    &::UnityEditor::Analytics::PackageManagerResetPackageAnalytic::CreatePackageManagerResetPackageAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e258fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerResetPackageAnalytic*>(), { "CreatePackageManagerResetPackageAnalytic", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEditor::Analytics::PackageManagerResetPackageAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerResetPackageAnalytic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::PackageManagerResetPackageAnalytic* UnityEditor::Analytics::PackageManagerResetPackageAnalytic::CreatePackageManagerResetPackageAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerResetPackageAnalytic*>(), { "CreatePackageManagerResetPackageAnalytic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::PackageManagerResetPackageAnalytic*>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::PackageManagerResetPackageAnalytic* UnityEditor::Analytics::PackageManagerResetPackageAnalytic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEditor::Analytics::PackageManagerResetPackageAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::PackageManagerResetPackageAnalytic::PackageManagerResetPackageAnalytic() {}
