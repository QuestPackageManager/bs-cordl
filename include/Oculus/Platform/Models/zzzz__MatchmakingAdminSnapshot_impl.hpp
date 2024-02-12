#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingAdminSnapshot_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingAdminSnapshotCandidateList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::MatchmakingAdminSnapshot._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::MatchmakingAdminSnapshot::*)(void*)>(
    &::Oculus::Platform::Models::MatchmakingAdminSnapshot::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x273a350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingAdminSnapshot*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList*& Oculus::Platform::Models::MatchmakingAdminSnapshot::__cordl_internal_get_Candidates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Candidates;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList*> const&
Oculus::Platform::Models::MatchmakingAdminSnapshot::__cordl_internal_get_Candidates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Candidates;
}
constexpr void Oculus::Platform::Models::MatchmakingAdminSnapshot::__cordl_internal_set_Candidates(::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidateList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Candidates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr double_t& Oculus::Platform::Models::MatchmakingAdminSnapshot::__cordl_internal_get_MyCurrentThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MyCurrentThreshold;
}
constexpr double_t const& Oculus::Platform::Models::MatchmakingAdminSnapshot::__cordl_internal_get_MyCurrentThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MyCurrentThreshold;
}
constexpr void Oculus::Platform::Models::MatchmakingAdminSnapshot::__cordl_internal_set_MyCurrentThreshold(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MyCurrentThreshold = value;
}
inline ::Oculus::Platform::Models::MatchmakingAdminSnapshot* Oculus::Platform::Models::MatchmakingAdminSnapshot::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::MatchmakingAdminSnapshot*>(o));
}
inline void Oculus::Platform::Models::MatchmakingAdminSnapshot::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingAdminSnapshot*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::MatchmakingAdminSnapshot::MatchmakingAdminSnapshot() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
