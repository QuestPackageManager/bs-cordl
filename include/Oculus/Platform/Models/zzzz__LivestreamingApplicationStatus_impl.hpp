#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingApplicationStatus_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LivestreamingApplicationStatus._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LivestreamingApplicationStatus::*)(void*)>(
    &::Oculus::Platform::Models::LivestreamingApplicationStatus::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2707210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LivestreamingApplicationStatus*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::LivestreamingApplicationStatus::__get_StreamingEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StreamingEnabled;
}
constexpr bool const& Oculus::Platform::Models::LivestreamingApplicationStatus::__get_StreamingEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StreamingEnabled;
}
constexpr void Oculus::Platform::Models::LivestreamingApplicationStatus::__set_StreamingEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StreamingEnabled = value;
}
inline ::Oculus::Platform::Models::LivestreamingApplicationStatus* Oculus::Platform::Models::LivestreamingApplicationStatus::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::LivestreamingApplicationStatus*>(o));
}
inline void Oculus::Platform::Models::LivestreamingApplicationStatus::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LivestreamingApplicationStatus*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LivestreamingApplicationStatus::LivestreamingApplicationStatus() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
