#pragma once
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_impl.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingAdminSnapshotCandidate_impl.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingAdminSnapshotCandidateList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList::*)(void*)>(
    &::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList::_ctor)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x25b4b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList* Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList::New_ctor(void* a) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList*>(a));
}
inline void Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList::_ctor(void* a) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList::MatchmakingAdminSnapshotCandidateList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif