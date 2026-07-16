#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/AppDownloadResult.hpp"
#include "Oculus/Platform/zzzz__AppInstallResult_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AppDownloadResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AppDownloadResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::AppDownloadResult::*)(::System::IntPtr)>(&::Oculus::Platform::Models::AppDownloadResult::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5dd77c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::AppDownloadResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::AppInstallResult& Oculus::Platform::Models::AppDownloadResult::__cordl_internal_get_AppInstallResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AppInstallResult;
}
constexpr ::Oculus::Platform::AppInstallResult const& Oculus::Platform::Models::AppDownloadResult::__cordl_internal_get_AppInstallResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AppInstallResult;
}
constexpr void Oculus::Platform::Models::AppDownloadResult::__cordl_internal_set_AppInstallResult(::Oculus::Platform::AppInstallResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AppInstallResult = value;
}
constexpr int64_t& Oculus::Platform::Models::AppDownloadResult::__cordl_internal_get_Timestamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Timestamp;
}
constexpr int64_t const& Oculus::Platform::Models::AppDownloadResult::__cordl_internal_get_Timestamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Timestamp;
}
constexpr void Oculus::Platform::Models::AppDownloadResult::__cordl_internal_set_Timestamp(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Timestamp = value;
}
inline void Oculus::Platform::Models::AppDownloadResult::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::AppDownloadResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::AppDownloadResult* Oculus::Platform::Models::AppDownloadResult::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::AppDownloadResult*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AppDownloadResult::AppDownloadResult() {}
