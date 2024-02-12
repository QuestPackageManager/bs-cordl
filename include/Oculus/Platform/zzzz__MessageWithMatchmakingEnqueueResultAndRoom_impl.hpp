#pragma once
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResultAndRoom_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithMatchmakingEnqueueResultAndRoom_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResultAndRoom_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom::*)(void*)>(
    &::Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2718cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom.GetMatchmakingEnqueueResultAndRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom* (
    ::Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom::*)()>(&::Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom::GetMatchmakingEnqueueResultAndRoom)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x271c58c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom*>::get(), 56));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom* (
    ::Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom::*)(void*)>(&::Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x271c5c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom* Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom*>(c_message));
}
inline void Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom* Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom::GetMatchmakingEnqueueResultAndRoom() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom*>::get(), 56)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom* Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom::GetDataFromMessage(void* c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithMatchmakingEnqueueResultAndRoom::MessageWithMatchmakingEnqueueResultAndRoom() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
