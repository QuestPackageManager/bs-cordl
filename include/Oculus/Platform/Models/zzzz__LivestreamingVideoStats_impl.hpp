#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingVideoStats_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LivestreamingVideoStats._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LivestreamingVideoStats::*)(void*)>(
    &::Oculus::Platform::Models::LivestreamingVideoStats::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x27073cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LivestreamingVideoStats*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Platform::Models::LivestreamingVideoStats::__get_CommentCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CommentCount;
}
constexpr int32_t const& Oculus::Platform::Models::LivestreamingVideoStats::__get_CommentCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CommentCount;
}
constexpr void Oculus::Platform::Models::LivestreamingVideoStats::__set_CommentCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CommentCount = value;
}
constexpr int32_t& Oculus::Platform::Models::LivestreamingVideoStats::__get_ReactionCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReactionCount;
}
constexpr int32_t const& Oculus::Platform::Models::LivestreamingVideoStats::__get_ReactionCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReactionCount;
}
constexpr void Oculus::Platform::Models::LivestreamingVideoStats::__set_ReactionCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ReactionCount = value;
}
constexpr ::StringW& Oculus::Platform::Models::LivestreamingVideoStats::__get_TotalViews() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TotalViews;
}
constexpr ::StringW const& Oculus::Platform::Models::LivestreamingVideoStats::__get_TotalViews() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TotalViews;
}
constexpr void Oculus::Platform::Models::LivestreamingVideoStats::__set_TotalViews(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TotalViews)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::LivestreamingVideoStats* Oculus::Platform::Models::LivestreamingVideoStats::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::LivestreamingVideoStats*>(o));
}
inline void Oculus::Platform::Models::LivestreamingVideoStats::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LivestreamingVideoStats*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LivestreamingVideoStats::LivestreamingVideoStats() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
