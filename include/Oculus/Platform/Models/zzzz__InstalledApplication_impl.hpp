#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/InstalledApplication.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__InstalledApplication_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::InstalledApplication._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::InstalledApplication::*)(::System::IntPtr)>(&::Oculus::Platform::Models::InstalledApplication::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ded8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::InstalledApplication*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::InstalledApplication::__cordl_internal_get_ApplicationId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ApplicationId;
}
constexpr ::StringW const& Oculus::Platform::Models::InstalledApplication::__cordl_internal_get_ApplicationId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ApplicationId;
}
constexpr void Oculus::Platform::Models::InstalledApplication::__cordl_internal_set_ApplicationId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ApplicationId = value;
}
constexpr ::StringW& Oculus::Platform::Models::InstalledApplication::__cordl_internal_get_PackageName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PackageName;
}
constexpr ::StringW const& Oculus::Platform::Models::InstalledApplication::__cordl_internal_get_PackageName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PackageName;
}
constexpr void Oculus::Platform::Models::InstalledApplication::__cordl_internal_set_PackageName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PackageName = value;
}
constexpr ::StringW& Oculus::Platform::Models::InstalledApplication::__cordl_internal_get_Status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Status;
}
constexpr ::StringW const& Oculus::Platform::Models::InstalledApplication::__cordl_internal_get_Status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Status;
}
constexpr void Oculus::Platform::Models::InstalledApplication::__cordl_internal_set_Status(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Status = value;
}
constexpr int32_t& Oculus::Platform::Models::InstalledApplication::__cordl_internal_get_VersionCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VersionCode;
}
constexpr int32_t const& Oculus::Platform::Models::InstalledApplication::__cordl_internal_get_VersionCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VersionCode;
}
constexpr void Oculus::Platform::Models::InstalledApplication::__cordl_internal_set_VersionCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___VersionCode = value;
}
constexpr ::StringW& Oculus::Platform::Models::InstalledApplication::__cordl_internal_get_VersionName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VersionName;
}
constexpr ::StringW const& Oculus::Platform::Models::InstalledApplication::__cordl_internal_get_VersionName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___VersionName;
}
constexpr void Oculus::Platform::Models::InstalledApplication::__cordl_internal_set_VersionName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___VersionName = value;
}
inline void Oculus::Platform::Models::InstalledApplication::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::InstalledApplication*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::InstalledApplication* Oculus::Platform::Models::InstalledApplication::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::InstalledApplication*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::InstalledApplication::InstalledApplication() {}
