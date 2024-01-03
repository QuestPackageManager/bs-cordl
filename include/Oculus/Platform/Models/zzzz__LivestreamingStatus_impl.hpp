#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingStatus_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LivestreamingStatus._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LivestreamingStatus::*)(void*)>(
    &::Oculus::Platform::Models::LivestreamingStatus::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2707304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LivestreamingStatus*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::LivestreamingStatus::__get_CommentsVisible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CommentsVisible;
}
constexpr bool const& Oculus::Platform::Models::LivestreamingStatus::__get_CommentsVisible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CommentsVisible;
}
constexpr void Oculus::Platform::Models::LivestreamingStatus::__set_CommentsVisible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CommentsVisible = value;
}
constexpr bool& Oculus::Platform::Models::LivestreamingStatus::__get_IsPaused() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsPaused;
}
constexpr bool const& Oculus::Platform::Models::LivestreamingStatus::__get_IsPaused() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsPaused;
}
constexpr void Oculus::Platform::Models::LivestreamingStatus::__set_IsPaused(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsPaused = value;
}
constexpr bool& Oculus::Platform::Models::LivestreamingStatus::__get_LivestreamingEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LivestreamingEnabled;
}
constexpr bool const& Oculus::Platform::Models::LivestreamingStatus::__get_LivestreamingEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LivestreamingEnabled;
}
constexpr void Oculus::Platform::Models::LivestreamingStatus::__set_LivestreamingEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LivestreamingEnabled = value;
}
constexpr int32_t& Oculus::Platform::Models::LivestreamingStatus::__get_LivestreamingType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LivestreamingType;
}
constexpr int32_t const& Oculus::Platform::Models::LivestreamingStatus::__get_LivestreamingType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LivestreamingType;
}
constexpr void Oculus::Platform::Models::LivestreamingStatus::__set_LivestreamingType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___LivestreamingType = value;
}
constexpr bool& Oculus::Platform::Models::LivestreamingStatus::__get_MicEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MicEnabled;
}
constexpr bool const& Oculus::Platform::Models::LivestreamingStatus::__get_MicEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MicEnabled;
}
constexpr void Oculus::Platform::Models::LivestreamingStatus::__set_MicEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MicEnabled = value;
}
inline ::Oculus::Platform::Models::LivestreamingStatus* Oculus::Platform::Models::LivestreamingStatus::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::LivestreamingStatus*>(o));
}
inline void Oculus::Platform::Models::LivestreamingStatus::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LivestreamingStatus*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LivestreamingStatus::LivestreamingStatus() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
