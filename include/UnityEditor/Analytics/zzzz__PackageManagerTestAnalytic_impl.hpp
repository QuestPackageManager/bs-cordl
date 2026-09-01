#pragma once
// IWYU pragma private; include "UnityEditor\Analytics\PackageManagerTestAnalytic.hpp"
#include "UnityEditor/Analytics/zzzz__PackageManagerBaseAnalytic_impl.hpp"
#include "UnityEditor/Analytics/zzzz__PackageManagerTestAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::PackageManagerTestAnalytic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEditor::Analytics::PackageManagerTestAnalytic::*)()>(&::UnityEditor::Analytics::PackageManagerTestAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e254c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerTestAnalytic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::PackageManagerTestAnalytic.CreatePackageManagerTestAnalytic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEditor::Analytics::PackageManagerTestAnalytic* (*)()>(
    &::UnityEditor::Analytics::PackageManagerTestAnalytic::CreatePackageManagerTestAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e2555c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerTestAnalytic*>(), { "CreatePackageManagerTestAnalytic", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEditor::Analytics::PackageManagerTestAnalytic::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerTestAnalytic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::PackageManagerTestAnalytic* UnityEditor::Analytics::PackageManagerTestAnalytic::CreatePackageManagerTestAnalytic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerTestAnalytic*>(), { "CreatePackageManagerTestAnalytic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::PackageManagerTestAnalytic*>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::PackageManagerTestAnalytic* UnityEditor::Analytics::PackageManagerTestAnalytic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEditor::Analytics::PackageManagerTestAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::PackageManagerTestAnalytic::PackageManagerTestAnalytic() {}
