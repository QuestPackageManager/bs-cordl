#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/LivestreamingStatus.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingStatus_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LivestreamingStatus._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::LivestreamingStatus::*)(::System::IntPtr)>(&::Oculus::Platform::Models::LivestreamingStatus::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5dee96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::LivestreamingStatus*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::LivestreamingStatus::__cordl_internal_get_CommentsVisible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CommentsVisible;
}
constexpr bool const& Oculus::Platform::Models::LivestreamingStatus::__cordl_internal_get_CommentsVisible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CommentsVisible;
}
constexpr void Oculus::Platform::Models::LivestreamingStatus::__cordl_internal_set_CommentsVisible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CommentsVisible = value;
}
constexpr bool& Oculus::Platform::Models::LivestreamingStatus::__cordl_internal_get_IsPaused() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsPaused;
}
constexpr bool const& Oculus::Platform::Models::LivestreamingStatus::__cordl_internal_get_IsPaused() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsPaused;
}
constexpr void Oculus::Platform::Models::LivestreamingStatus::__cordl_internal_set_IsPaused(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsPaused = value;
}
constexpr bool& Oculus::Platform::Models::LivestreamingStatus::__cordl_internal_get_LivestreamingEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LivestreamingEnabled;
}
constexpr bool const& Oculus::Platform::Models::LivestreamingStatus::__cordl_internal_get_LivestreamingEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LivestreamingEnabled;
}
constexpr void Oculus::Platform::Models::LivestreamingStatus::__cordl_internal_set_LivestreamingEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LivestreamingEnabled = value;
}
constexpr int32_t& Oculus::Platform::Models::LivestreamingStatus::__cordl_internal_get_LivestreamingType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LivestreamingType;
}
constexpr int32_t const& Oculus::Platform::Models::LivestreamingStatus::__cordl_internal_get_LivestreamingType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LivestreamingType;
}
constexpr void Oculus::Platform::Models::LivestreamingStatus::__cordl_internal_set_LivestreamingType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LivestreamingType = value;
}
constexpr bool& Oculus::Platform::Models::LivestreamingStatus::__cordl_internal_get_MicEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MicEnabled;
}
constexpr bool const& Oculus::Platform::Models::LivestreamingStatus::__cordl_internal_get_MicEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MicEnabled;
}
constexpr void Oculus::Platform::Models::LivestreamingStatus::__cordl_internal_set_MicEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MicEnabled = value;
}
inline void Oculus::Platform::Models::LivestreamingStatus::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::LivestreamingStatus*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::LivestreamingStatus* Oculus::Platform::Models::LivestreamingStatus::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::LivestreamingStatus*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LivestreamingStatus::LivestreamingStatus() {}
