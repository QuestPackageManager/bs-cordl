#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/AppDownloadProgressResult.hpp"
#include "Oculus/Platform/zzzz__AppStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AppDownloadProgressResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AppDownloadProgressResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::AppDownloadProgressResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::AppDownloadProgressResult::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5dd7660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::AppDownloadProgressResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr int64_t& Oculus::Platform::Models::AppDownloadProgressResult::__cordl_internal_get_DownloadBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DownloadBytes;
}
constexpr int64_t const& Oculus::Platform::Models::AppDownloadProgressResult::__cordl_internal_get_DownloadBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DownloadBytes;
}
constexpr void Oculus::Platform::Models::AppDownloadProgressResult::__cordl_internal_set_DownloadBytes(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DownloadBytes = value;
}
constexpr int64_t& Oculus::Platform::Models::AppDownloadProgressResult::__cordl_internal_get_DownloadedBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DownloadedBytes;
}
constexpr int64_t const& Oculus::Platform::Models::AppDownloadProgressResult::__cordl_internal_get_DownloadedBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DownloadedBytes;
}
constexpr void Oculus::Platform::Models::AppDownloadProgressResult::__cordl_internal_set_DownloadedBytes(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DownloadedBytes = value;
}
constexpr ::Oculus::Platform::AppStatus& Oculus::Platform::Models::AppDownloadProgressResult::__cordl_internal_get_StatusCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StatusCode;
}
constexpr ::Oculus::Platform::AppStatus const& Oculus::Platform::Models::AppDownloadProgressResult::__cordl_internal_get_StatusCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StatusCode;
}
constexpr void Oculus::Platform::Models::AppDownloadProgressResult::__cordl_internal_set_StatusCode(::Oculus::Platform::AppStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StatusCode = value;
}
inline void Oculus::Platform::Models::AppDownloadProgressResult::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::AppDownloadProgressResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::AppDownloadProgressResult* Oculus::Platform::Models::AppDownloadProgressResult::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::AppDownloadProgressResult*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AppDownloadProgressResult::AppDownloadProgressResult() {}
