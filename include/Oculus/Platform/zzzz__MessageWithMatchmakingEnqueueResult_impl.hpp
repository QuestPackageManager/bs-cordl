#pragma once
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResult_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithMatchmakingEnqueueResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingEnqueueResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithMatchmakingEnqueueResult::*)(void*)>(
    &::Oculus::Platform::MessageWithMatchmakingEnqueueResult::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2718c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingEnqueueResult*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingEnqueueResult.GetMatchmakingEnqueueResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MatchmakingEnqueueResult* (::Oculus::Platform::MessageWithMatchmakingEnqueueResult::*)()>(
    &::Oculus::Platform::MessageWithMatchmakingEnqueueResult::GetMatchmakingEnqueueResult)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x271c4b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingEnqueueResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingEnqueueResult*>::get(), 55));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingEnqueueResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MatchmakingEnqueueResult* (
    ::Oculus::Platform::MessageWithMatchmakingEnqueueResult::*)(void*)>(&::Oculus::Platform::MessageWithMatchmakingEnqueueResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x271c4f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingEnqueueResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingEnqueueResult*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithMatchmakingEnqueueResult* Oculus::Platform::MessageWithMatchmakingEnqueueResult::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithMatchmakingEnqueueResult*>(c_message));
}
inline void Oculus::Platform::MessageWithMatchmakingEnqueueResult::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingEnqueueResult*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::MatchmakingEnqueueResult* Oculus::Platform::MessageWithMatchmakingEnqueueResult::GetMatchmakingEnqueueResult() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingEnqueueResult*>::get(), 55)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MatchmakingEnqueueResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::MatchmakingEnqueueResult* Oculus::Platform::MessageWithMatchmakingEnqueueResult::GetDataFromMessage(void* c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingEnqueueResult*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MatchmakingEnqueueResult*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithMatchmakingEnqueueResult::MessageWithMatchmakingEnqueueResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
