#pragma once
// IWYU pragma private; include "Oculus\Platform\Models\LivestreamingVideoStats.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingVideoStats_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LivestreamingVideoStats._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::LivestreamingVideoStats::*)(::System::IntPtr)>(&::Oculus::Platform::Models::LivestreamingVideoStats::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5df0c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::LivestreamingVideoStats*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Platform::Models::LivestreamingVideoStats::__cordl_internal_get_CommentCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CommentCount;
}
constexpr int32_t const& Oculus::Platform::Models::LivestreamingVideoStats::__cordl_internal_get_CommentCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CommentCount;
}
constexpr void Oculus::Platform::Models::LivestreamingVideoStats::__cordl_internal_set_CommentCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CommentCount = value;
}
constexpr int32_t& Oculus::Platform::Models::LivestreamingVideoStats::__cordl_internal_get_ReactionCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReactionCount;
}
constexpr int32_t const& Oculus::Platform::Models::LivestreamingVideoStats::__cordl_internal_get_ReactionCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReactionCount;
}
constexpr void Oculus::Platform::Models::LivestreamingVideoStats::__cordl_internal_set_ReactionCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ReactionCount = value;
}
constexpr ::StringW& Oculus::Platform::Models::LivestreamingVideoStats::__cordl_internal_get_TotalViews() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TotalViews;
}
constexpr ::StringW const& Oculus::Platform::Models::LivestreamingVideoStats::__cordl_internal_get_TotalViews() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TotalViews;
}
constexpr void Oculus::Platform::Models::LivestreamingVideoStats::__cordl_internal_set_TotalViews(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TotalViews = value;
}
inline void Oculus::Platform::Models::LivestreamingVideoStats::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::LivestreamingVideoStats*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::LivestreamingVideoStats* Oculus::Platform::Models::LivestreamingVideoStats::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::LivestreamingVideoStats*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LivestreamingVideoStats::LivestreamingVideoStats() {}
