#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingAdminSnapshot_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingAdminSnapshotCandidateList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::MatchmakingAdminSnapshot._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::MatchmakingAdminSnapshot::*)(void*)>(
    &::Oculus::Platform::Models::MatchmakingAdminSnapshot::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x25b4ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingAdminSnapshot*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList*& Oculus::Platform::Models::MatchmakingAdminSnapshot::__get_Candidates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Candidates;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList*> const& Oculus::Platform::Models::MatchmakingAdminSnapshot::__get_Candidates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Candidates;
}
constexpr void Oculus::Platform::Models::MatchmakingAdminSnapshot::__set_Candidates(::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Candidates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr double_t& Oculus::Platform::Models::MatchmakingAdminSnapshot::__get_MyCurrentThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MyCurrentThreshold;
}
constexpr double_t const& Oculus::Platform::Models::MatchmakingAdminSnapshot::__get_MyCurrentThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MyCurrentThreshold;
}
constexpr void Oculus::Platform::Models::MatchmakingAdminSnapshot::__set_MyCurrentThreshold(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MyCurrentThreshold = value;
}
inline ::Oculus::Platform::Models::MatchmakingAdminSnapshot* Oculus::Platform::Models::MatchmakingAdminSnapshot::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::MatchmakingAdminSnapshot*>(o));
}
inline void Oculus::Platform::Models::MatchmakingAdminSnapshot::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingAdminSnapshot*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::MatchmakingAdminSnapshot::MatchmakingAdminSnapshot() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
