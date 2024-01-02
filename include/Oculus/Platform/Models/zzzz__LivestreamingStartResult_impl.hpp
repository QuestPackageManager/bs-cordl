#pragma once
#include "Oculus/Platform/zzzz__LivestreamingStartStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LivestreamingStartResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LivestreamingStartResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LivestreamingStartResult::*)(void*)>(
    &::Oculus::Platform::Models::LivestreamingStartResult::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x270728c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LivestreamingStartResult*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::LivestreamingStartStatus& Oculus::Platform::Models::LivestreamingStartResult::__get_StreamingResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StreamingResult;
}
constexpr ::Oculus::Platform::LivestreamingStartStatus const& Oculus::Platform::Models::LivestreamingStartResult::__get_StreamingResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StreamingResult;
}
constexpr void Oculus::Platform::Models::LivestreamingStartResult::__set_StreamingResult(::Oculus::Platform::LivestreamingStartStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StreamingResult = value;
}
inline ::Oculus::Platform::Models::LivestreamingStartResult* Oculus::Platform::Models::LivestreamingStartResult::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::LivestreamingStartResult*>(o));
}
inline void Oculus::Platform::Models::LivestreamingStartResult::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LivestreamingStartResult*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LivestreamingStartResult::LivestreamingStartResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
