#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingVideoStats_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LivestreamingVideoStats._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LivestreamingVideoStats::*)(void*)>(
    &::Oculus::Platform::Models::LivestreamingVideoStats::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2add580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LivestreamingVideoStats*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TotalViews)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::LivestreamingVideoStats* Oculus::Platform::Models::LivestreamingVideoStats::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::LivestreamingVideoStats*>(o));
}
inline void Oculus::Platform::Models::LivestreamingVideoStats::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LivestreamingVideoStats*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LivestreamingVideoStats::LivestreamingVideoStats() {}
