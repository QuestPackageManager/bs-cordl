#pragma once
// IWYU pragma private; include "UnityEditor\Analytics\PackageManagerEmbedPackageAnalytic.hpp"
#include "UnityEditor/Analytics/zzzz__PackageManagerBaseAnalytic_impl.hpp"
#include "UnityEditor/Analytics/zzzz__PackageManagerEmbedPackageAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic::*)()>(
    &::UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e25780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic.CreatePackageManagerEmbedPackageAnalytic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic* (*)()>(
    &::UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic::CreatePackageManagerEmbedPackageAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e25814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic*>(), { "CreatePackageManagerEmbedPackageAnalytic", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic* UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic::CreatePackageManagerEmbedPackageAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic*>(), { "CreatePackageManagerEmbedPackageAnalytic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic*>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic* UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic::PackageManagerEmbedPackageAnalytic() {}
