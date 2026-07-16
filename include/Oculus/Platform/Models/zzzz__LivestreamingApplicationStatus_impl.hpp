#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/LivestreamingApplicationStatus.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingApplicationStatus_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LivestreamingApplicationStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::LivestreamingApplicationStatus::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::LivestreamingApplicationStatus::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5dee888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::LivestreamingApplicationStatus*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::LivestreamingApplicationStatus::__cordl_internal_get_StreamingEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StreamingEnabled;
}
constexpr bool const& Oculus::Platform::Models::LivestreamingApplicationStatus::__cordl_internal_get_StreamingEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StreamingEnabled;
}
constexpr void Oculus::Platform::Models::LivestreamingApplicationStatus::__cordl_internal_set_StreamingEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StreamingEnabled = value;
}
inline void Oculus::Platform::Models::LivestreamingApplicationStatus::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::LivestreamingApplicationStatus*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::LivestreamingApplicationStatus* Oculus::Platform::Models::LivestreamingApplicationStatus::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::LivestreamingApplicationStatus*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LivestreamingApplicationStatus::LivestreamingApplicationStatus() {}
