#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResultAndRoom_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__Room_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom::*)(void*)>(
    &::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x273af04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::MatchmakingEnqueueResult*& Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom::__cordl_internal_get_MatchmakingEnqueueResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MatchmakingEnqueueResult;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::MatchmakingEnqueueResult*> const&
Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom::__cordl_internal_get_MatchmakingEnqueueResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MatchmakingEnqueueResult;
}
constexpr void Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom::__cordl_internal_set_MatchmakingEnqueueResult(::Oculus::Platform::Models::MatchmakingEnqueueResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___MatchmakingEnqueueResult)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::Room*& Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom::__cordl_internal_get_Room() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Room;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::Room*> const& Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom::__cordl_internal_get_Room() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Room;
}
constexpr void Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom::__cordl_internal_set_Room(::Oculus::Platform::Models::Room* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Room)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom* Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*>(o));
}
inline void Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom::MatchmakingEnqueueResultAndRoom() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
