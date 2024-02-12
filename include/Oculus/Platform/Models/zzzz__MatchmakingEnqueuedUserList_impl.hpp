#pragma once
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_impl.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueuedUser_impl.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueuedUserList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::MatchmakingEnqueuedUserList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::MatchmakingEnqueuedUserList::*)(void*)>(
    &::Oculus::Platform::Models::MatchmakingEnqueuedUserList::_ctor)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x273acc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingEnqueuedUserList*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Models::MatchmakingEnqueuedUserList* Oculus::Platform::Models::MatchmakingEnqueuedUserList::New_ctor(void* a) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::MatchmakingEnqueuedUserList*>(a));
}
inline void Oculus::Platform::Models::MatchmakingEnqueuedUserList::_ctor(void* a) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingEnqueuedUserList*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::MatchmakingEnqueuedUserList::MatchmakingEnqueuedUserList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
