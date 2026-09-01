#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\AssetFileDownloadResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AssetFileDownloadResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AssetFileDownloadResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::AssetFileDownloadResult::*)(::System::IntPtr)>(&::Oculus::Platform::Models::AssetFileDownloadResult::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5dedba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::AssetFileDownloadResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr uint64_t& Oculus::Platform::Models::AssetFileDownloadResult::__cordl_internal_get_AssetId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssetId;
}
constexpr uint64_t const& Oculus::Platform::Models::AssetFileDownloadResult::__cordl_internal_get_AssetId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AssetId;
}
constexpr void Oculus::Platform::Models::AssetFileDownloadResult::__cordl_internal_set_AssetId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AssetId = value;
}
constexpr ::StringW& Oculus::Platform::Models::AssetFileDownloadResult::__cordl_internal_get_Filepath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Filepath;
}
constexpr ::StringW const& Oculus::Platform::Models::AssetFileDownloadResult::__cordl_internal_get_Filepath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Filepath;
}
constexpr void Oculus::Platform::Models::AssetFileDownloadResult::__cordl_internal_set_Filepath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Filepath = value;
}
inline void Oculus::Platform::Models::AssetFileDownloadResult::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::AssetFileDownloadResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::AssetFileDownloadResult* Oculus::Platform::Models::AssetFileDownloadResult::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::AssetFileDownloadResult*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AssetFileDownloadResult::AssetFileDownloadResult() {}
