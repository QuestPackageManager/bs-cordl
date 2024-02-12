#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingAdminSnapshotCandidate_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::*)(void*)>(
    &::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x273a64c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__cordl_internal_get_CanMatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CanMatch;
}
constexpr bool const& Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__cordl_internal_get_CanMatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CanMatch;
}
constexpr void Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__cordl_internal_set_CanMatch(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CanMatch = value;
}
constexpr double_t& Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__cordl_internal_get_MyTotalScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MyTotalScore;
}
constexpr double_t const& Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__cordl_internal_get_MyTotalScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MyTotalScore;
}
constexpr void Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__cordl_internal_set_MyTotalScore(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MyTotalScore = value;
}
constexpr double_t& Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__cordl_internal_get_TheirCurrentThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TheirCurrentThreshold;
}
constexpr double_t const& Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__cordl_internal_get_TheirCurrentThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TheirCurrentThreshold;
}
constexpr void Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__cordl_internal_set_TheirCurrentThreshold(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TheirCurrentThreshold = value;
}
constexpr double_t& Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__cordl_internal_get_TheirTotalScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TheirTotalScore;
}
constexpr double_t const& Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__cordl_internal_get_TheirTotalScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TheirTotalScore;
}
constexpr void Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__cordl_internal_set_TheirTotalScore(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TheirTotalScore = value;
}
constexpr ::StringW& Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__cordl_internal_get_TraceId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TraceId;
}
constexpr ::StringW const& Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__cordl_internal_get_TraceId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TraceId;
}
constexpr void Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::__cordl_internal_set_TraceId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TraceId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate* Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate*>(o));
}
inline void Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::MatchmakingAdminSnapshotCandidate::MatchmakingAdminSnapshotCandidate() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
