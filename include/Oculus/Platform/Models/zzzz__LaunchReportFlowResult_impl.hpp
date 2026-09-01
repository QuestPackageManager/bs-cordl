#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\LaunchReportFlowResult.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchReportFlowResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LaunchReportFlowResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::LaunchReportFlowResult::*)(::System::IntPtr)>(&::Oculus::Platform::Models::LaunchReportFlowResult::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5df013c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::LaunchReportFlowResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::LaunchReportFlowResult::__cordl_internal_get_DidCancel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DidCancel;
}
constexpr bool const& Oculus::Platform::Models::LaunchReportFlowResult::__cordl_internal_get_DidCancel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DidCancel;
}
constexpr void Oculus::Platform::Models::LaunchReportFlowResult::__cordl_internal_set_DidCancel(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DidCancel = value;
}
constexpr uint64_t& Oculus::Platform::Models::LaunchReportFlowResult::__cordl_internal_get_UserReportId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserReportId;
}
constexpr uint64_t const& Oculus::Platform::Models::LaunchReportFlowResult::__cordl_internal_get_UserReportId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserReportId;
}
constexpr void Oculus::Platform::Models::LaunchReportFlowResult::__cordl_internal_set_UserReportId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UserReportId = value;
}
inline void Oculus::Platform::Models::LaunchReportFlowResult::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::LaunchReportFlowResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::LaunchReportFlowResult* Oculus::Platform::Models::LaunchReportFlowResult::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::LaunchReportFlowResult*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LaunchReportFlowResult::LaunchReportFlowResult() {}
