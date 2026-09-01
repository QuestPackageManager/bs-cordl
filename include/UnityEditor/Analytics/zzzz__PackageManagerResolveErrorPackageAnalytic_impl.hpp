#pragma once
// IWYU pragma private; include "UnityEditor\Analytics\PackageManagerResolveErrorPackageAnalytic.hpp"
#include "UnityEditor/Analytics/zzzz__PackageManagerBaseAnalytic_impl.hpp"
#include "UnityEditor/Analytics/zzzz__PackageManagerResolveErrorPackageAnalytic_def.hpp"
//  Writing Method size for method: ::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic::*)()>(
    &::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6e25950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic.CreatePackageManagerResolveErrorPackageAnalytic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic* (*)()>(
    &::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic::CreatePackageManagerResolveErrorPackageAnalytic)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e259e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic*>(), { "CreatePackageManagerResolveErrorPackageAnalytic", {}, {} })));
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
  this->___reason = value;
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
  this->___action = value;
}
inline void UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic* UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic::CreatePackageManagerResolveErrorPackageAnalytic() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic*>(), { "CreatePackageManagerResolveErrorPackageAnalytic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic*>(nullptr, ___internal_method);
}
inline ::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic* UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic*>());
}
// Ctor Parameters []
constexpr ::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic::PackageManagerResolveErrorPackageAnalytic() {}
