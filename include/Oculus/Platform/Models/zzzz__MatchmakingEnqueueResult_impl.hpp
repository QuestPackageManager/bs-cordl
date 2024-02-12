#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingAdminSnapshot_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::MatchmakingEnqueueResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::MatchmakingEnqueueResult::*)(void*)>(
    &::Oculus::Platform::Models::MatchmakingEnqueueResult::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x273a7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingEnqueueResult*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::MatchmakingAdminSnapshot*& Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_get_AdminSnapshotOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AdminSnapshotOptional;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::MatchmakingAdminSnapshot*> const&
Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_get_AdminSnapshotOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AdminSnapshotOptional;
}
constexpr void Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_set_AdminSnapshotOptional(::Oculus::Platform::Models::MatchmakingAdminSnapshot* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AdminSnapshotOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::MatchmakingAdminSnapshot*& Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_get_AdminSnapshot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AdminSnapshot;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::MatchmakingAdminSnapshot*> const&
Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_get_AdminSnapshot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AdminSnapshot;
}
constexpr void Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_set_AdminSnapshot(::Oculus::Platform::Models::MatchmakingAdminSnapshot* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___AdminSnapshot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_get_AverageWait() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AverageWait;
}
constexpr uint32_t const& Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_get_AverageWait() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AverageWait;
}
constexpr void Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_set_AverageWait(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AverageWait = value;
}
constexpr uint32_t& Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_get_MatchesInLastHourCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MatchesInLastHourCount;
}
constexpr uint32_t const& Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_get_MatchesInLastHourCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MatchesInLastHourCount;
}
constexpr void Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_set_MatchesInLastHourCount(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MatchesInLastHourCount = value;
}
constexpr uint32_t& Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_get_MaxExpectedWait() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxExpectedWait;
}
constexpr uint32_t const& Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_get_MaxExpectedWait() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MaxExpectedWait;
}
constexpr void Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_set_MaxExpectedWait(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MaxExpectedWait = value;
}
constexpr ::StringW& Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_get_Pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Pool;
}
constexpr ::StringW const& Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_get_Pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Pool;
}
constexpr void Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_set_Pool(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Pool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_get_RecentMatchPercentage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RecentMatchPercentage;
}
constexpr uint32_t const& Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_get_RecentMatchPercentage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RecentMatchPercentage;
}
constexpr void Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_set_RecentMatchPercentage(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RecentMatchPercentage = value;
}
constexpr ::StringW& Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_get_RequestHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RequestHash;
}
constexpr ::StringW const& Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_get_RequestHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RequestHash;
}
constexpr void Oculus::Platform::Models::MatchmakingEnqueueResult::__cordl_internal_set_RequestHash(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RequestHash)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::MatchmakingEnqueueResult* Oculus::Platform::Models::MatchmakingEnqueueResult::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::MatchmakingEnqueueResult*>(o));
}
inline void Oculus::Platform::Models::MatchmakingEnqueueResult::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingEnqueueResult*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::MatchmakingEnqueueResult::MatchmakingEnqueueResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
