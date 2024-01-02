#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AvatarEditorResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AvatarEditorResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::AvatarEditorResult::*)(void*)>(
    &::Oculus::Platform::Models::AvatarEditorResult::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2704c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AvatarEditorResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::AvatarEditorResult::__get_RequestSent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RequestSent;
}
constexpr bool const& Oculus::Platform::Models::AvatarEditorResult::__get_RequestSent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RequestSent;
}
constexpr void Oculus::Platform::Models::AvatarEditorResult::__set_RequestSent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RequestSent = value;
}
inline ::Oculus::Platform::Models::AvatarEditorResult* Oculus::Platform::Models::AvatarEditorResult::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::AvatarEditorResult*>(o));
}
inline void Oculus::Platform::Models::AvatarEditorResult::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::AvatarEditorResult*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AvatarEditorResult::AvatarEditorResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
