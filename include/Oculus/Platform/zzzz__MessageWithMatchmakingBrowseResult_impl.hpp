#pragma once
#include "Oculus/Platform/Models/zzzz__MatchmakingBrowseResult_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithMatchmakingBrowseResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingBrowseResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__RoomList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingBrowseResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithMatchmakingBrowseResult::*)(void*)>(
    &::Oculus::Platform::MessageWithMatchmakingBrowseResult::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2718c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingBrowseResult*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingBrowseResult.GetMatchmakingEnqueueResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MatchmakingEnqueueResult* (::Oculus::Platform::MessageWithMatchmakingBrowseResult::*)()>(
    &::Oculus::Platform::MessageWithMatchmakingBrowseResult::GetMatchmakingEnqueueResult)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x271e960;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingBrowseResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingBrowseResult*>::get(), 55));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingBrowseResult.GetRoomList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::RoomList* (::Oculus::Platform::MessageWithMatchmakingBrowseResult::*)()>(
    &::Oculus::Platform::MessageWithMatchmakingBrowseResult::GetRoomList)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x271e9a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingBrowseResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingBrowseResult*>::get(), 76));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingBrowseResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MatchmakingBrowseResult* (
    ::Oculus::Platform::MessageWithMatchmakingBrowseResult::*)(void*)>(&::Oculus::Platform::MessageWithMatchmakingBrowseResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x271e9f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingBrowseResult*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingBrowseResult*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithMatchmakingBrowseResult* Oculus::Platform::MessageWithMatchmakingBrowseResult::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithMatchmakingBrowseResult*>(c_message));
}
inline void Oculus::Platform::MessageWithMatchmakingBrowseResult::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingBrowseResult*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::MatchmakingEnqueueResult* Oculus::Platform::MessageWithMatchmakingBrowseResult::GetMatchmakingEnqueueResult() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingBrowseResult*>::get(), 55)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MatchmakingEnqueueResult*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::RoomList* Oculus::Platform::MessageWithMatchmakingBrowseResult::GetRoomList() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingBrowseResult*>::get(), 76)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::RoomList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::MatchmakingBrowseResult* Oculus::Platform::MessageWithMatchmakingBrowseResult::GetDataFromMessage(void* c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingBrowseResult*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MatchmakingBrowseResult*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithMatchmakingBrowseResult::MessageWithMatchmakingBrowseResult() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
