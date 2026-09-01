#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\ApplicationVersion.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationVersion_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::ApplicationVersion._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::ApplicationVersion::*)(::System::IntPtr)>(&::Oculus::Platform::Models::ApplicationVersion::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5dd9e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::ApplicationVersion*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_CurrentCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentCode;
}
constexpr int32_t const& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_CurrentCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentCode;
}
constexpr void Oculus::Platform::Models::ApplicationVersion::__cordl_internal_set_CurrentCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CurrentCode = value;
}
constexpr ::StringW& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_CurrentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentName;
}
constexpr ::StringW const& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_CurrentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentName;
}
constexpr void Oculus::Platform::Models::ApplicationVersion::__cordl_internal_set_CurrentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CurrentName = value;
}
constexpr int32_t& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_LatestCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LatestCode;
}
constexpr int32_t const& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_LatestCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LatestCode;
}
constexpr void Oculus::Platform::Models::ApplicationVersion::__cordl_internal_set_LatestCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LatestCode = value;
}
constexpr ::StringW& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_LatestName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LatestName;
}
constexpr ::StringW const& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_LatestName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LatestName;
}
constexpr void Oculus::Platform::Models::ApplicationVersion::__cordl_internal_set_LatestName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LatestName = value;
}
constexpr int64_t& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_ReleaseDate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReleaseDate;
}
constexpr int64_t const& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_ReleaseDate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReleaseDate;
}
constexpr void Oculus::Platform::Models::ApplicationVersion::__cordl_internal_set_ReleaseDate(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ReleaseDate = value;
}
constexpr ::StringW& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_Size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Size;
}
constexpr ::StringW const& Oculus::Platform::Models::ApplicationVersion::__cordl_internal_get_Size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Size;
}
constexpr void Oculus::Platform::Models::ApplicationVersion::__cordl_internal_set_Size(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Size = value;
}
inline void Oculus::Platform::Models::ApplicationVersion::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::ApplicationVersion*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::ApplicationVersion* Oculus::Platform::Models::ApplicationVersion::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::ApplicationVersion*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::ApplicationVersion::ApplicationVersion() {}
