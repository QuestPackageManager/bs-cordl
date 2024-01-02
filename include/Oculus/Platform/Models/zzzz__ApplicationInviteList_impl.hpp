#pragma once
#include "Oculus/Platform/Models/zzzz__ApplicationInvite_impl.hpp"
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_impl.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationInviteList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::ApplicationInviteList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::ApplicationInviteList::*)(void*)>(
    &::Oculus::Platform::Models::ApplicationInviteList::_ctor)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2704264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::ApplicationInviteList*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Models::ApplicationInviteList* Oculus::Platform::Models::ApplicationInviteList::New_ctor(void* a) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::ApplicationInviteList*>(a));
}
inline void Oculus::Platform::Models::ApplicationInviteList::_ctor(void* a) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::ApplicationInviteList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::ApplicationInviteList::ApplicationInviteList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
