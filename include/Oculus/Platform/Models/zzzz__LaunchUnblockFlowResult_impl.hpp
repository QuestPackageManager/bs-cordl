#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchUnblockFlowResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LaunchUnblockFlowResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LaunchUnblockFlowResult::*)(void*)>(
    &::Oculus::Platform::Models::LaunchUnblockFlowResult::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x27067a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LaunchUnblockFlowResult*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::LaunchUnblockFlowResult::__get_DidCancel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DidCancel;
}
constexpr bool const& Oculus::Platform::Models::LaunchUnblockFlowResult::__get_DidCancel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DidCancel;
}
constexpr void Oculus::Platform::Models::LaunchUnblockFlowResult::__set_DidCancel(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DidCancel = value;
}
constexpr bool& Oculus::Platform::Models::LaunchUnblockFlowResult::__get_DidUnblock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DidUnblock;
}
constexpr bool const& Oculus::Platform::Models::LaunchUnblockFlowResult::__get_DidUnblock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DidUnblock;
}
constexpr void Oculus::Platform::Models::LaunchUnblockFlowResult::__set_DidUnblock(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DidUnblock = value;
}
inline ::Oculus::Platform::Models::LaunchUnblockFlowResult* Oculus::Platform::Models::LaunchUnblockFlowResult::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::LaunchUnblockFlowResult*>(o));
}
inline void Oculus::Platform::Models::LaunchUnblockFlowResult::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LaunchUnblockFlowResult*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LaunchUnblockFlowResult::LaunchUnblockFlowResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
