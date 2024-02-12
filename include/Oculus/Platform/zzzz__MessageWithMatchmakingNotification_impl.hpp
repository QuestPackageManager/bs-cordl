#pragma once
#include "Oculus/Platform/Models/zzzz__Room_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithMatchmakingNotification_def.hpp"
#include "Oculus/Platform/Models/zzzz__Room_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingNotification._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithMatchmakingNotification::*)(void*)>(
    &::Oculus::Platform::MessageWithMatchmakingNotification::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27197dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingNotification*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingNotification.GetRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Room* (::Oculus::Platform::MessageWithMatchmakingNotification::*)()>(
    &::Oculus::Platform::MessageWithMatchmakingNotification::GetRoom)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x271e888;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingNotification*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingNotification*>::get(), 73));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingNotification.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Room* (::Oculus::Platform::MessageWithMatchmakingNotification::*)(void*)>(
    &::Oculus::Platform::MessageWithMatchmakingNotification::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x271e8c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingNotification*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingNotification*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithMatchmakingNotification* Oculus::Platform::MessageWithMatchmakingNotification::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithMatchmakingNotification*>(c_message));
}
inline void Oculus::Platform::MessageWithMatchmakingNotification::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingNotification*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::Room* Oculus::Platform::MessageWithMatchmakingNotification::GetRoom() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingNotification*>::get(), 73)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Room*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::Room* Oculus::Platform::MessageWithMatchmakingNotification::GetDataFromMessage(void* c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingNotification*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Room*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithMatchmakingNotification::MessageWithMatchmakingNotification() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
