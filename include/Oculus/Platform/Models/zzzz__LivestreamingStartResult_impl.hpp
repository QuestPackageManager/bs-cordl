#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\LivestreamingStartResult.hpp"
#include "Oculus/Platform/zzzz__LivestreamingStartStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingStartResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LivestreamingStartResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::LivestreamingStartResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::LivestreamingStartResult::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5df0b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::LivestreamingStartResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::LivestreamingStartStatus& Oculus::Platform::Models::LivestreamingStartResult::__cordl_internal_get_StreamingResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StreamingResult;
}
constexpr ::Oculus::Platform::LivestreamingStartStatus const& Oculus::Platform::Models::LivestreamingStartResult::__cordl_internal_get_StreamingResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StreamingResult;
}
constexpr void Oculus::Platform::Models::LivestreamingStartResult::__cordl_internal_set_StreamingResult(::Oculus::Platform::LivestreamingStartStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StreamingResult = value;
}
inline void Oculus::Platform::Models::LivestreamingStartResult::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::LivestreamingStartResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::LivestreamingStartResult* Oculus::Platform::Models::LivestreamingStartResult::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::LivestreamingStartResult*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LivestreamingStartResult::LivestreamingStartResult() {}
