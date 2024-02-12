#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingBrowseResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__RoomList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::MatchmakingBrowseResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::MatchmakingBrowseResult::*)(void*)>(
    &::Oculus::Platform::Models::MatchmakingBrowseResult::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273a708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingBrowseResult*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::MatchmakingEnqueueResult*& Oculus::Platform::Models::MatchmakingBrowseResult::__cordl_internal_get_EnqueueResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EnqueueResult;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::MatchmakingEnqueueResult*> const&
Oculus::Platform::Models::MatchmakingBrowseResult::__cordl_internal_get_EnqueueResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EnqueueResult;
}
constexpr void Oculus::Platform::Models::MatchmakingBrowseResult::__cordl_internal_set_EnqueueResult(::Oculus::Platform::Models::MatchmakingEnqueueResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___EnqueueResult)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::RoomList*& Oculus::Platform::Models::MatchmakingBrowseResult::__cordl_internal_get_Rooms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Rooms;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::RoomList*> const& Oculus::Platform::Models::MatchmakingBrowseResult::__cordl_internal_get_Rooms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Rooms;
}
constexpr void Oculus::Platform::Models::MatchmakingBrowseResult::__cordl_internal_set_Rooms(::Oculus::Platform::Models::RoomList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Rooms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::MatchmakingBrowseResult* Oculus::Platform::Models::MatchmakingBrowseResult::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::MatchmakingBrowseResult*>(o));
}
inline void Oculus::Platform::Models::MatchmakingBrowseResult::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingBrowseResult*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::MatchmakingBrowseResult::MatchmakingBrowseResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
