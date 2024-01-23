#pragma once
#include "Oculus/Platform/Models/zzzz__GroupPresenceJoinIntent_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithGroupPresenceJoinIntent_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceJoinIntent_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithGroupPresenceJoinIntent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithGroupPresenceJoinIntent::*)(void*)>(
    &::Oculus::Platform::MessageWithGroupPresenceJoinIntent::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26ef030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithGroupPresenceJoinIntent*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithGroupPresenceJoinIntent.GetGroupPresenceJoinIntent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::GroupPresenceJoinIntent* (::Oculus::Platform::MessageWithGroupPresenceJoinIntent::*)()>(
    &::Oculus::Platform::MessageWithGroupPresenceJoinIntent::GetGroupPresenceJoinIntent)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26f19c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithGroupPresenceJoinIntent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithGroupPresenceJoinIntent*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithGroupPresenceJoinIntent.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::GroupPresenceJoinIntent* (
    ::Oculus::Platform::MessageWithGroupPresenceJoinIntent::*)(void*)>(&::Oculus::Platform::MessageWithGroupPresenceJoinIntent::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26f19fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithGroupPresenceJoinIntent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithGroupPresenceJoinIntent*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithGroupPresenceJoinIntent* Oculus::Platform::MessageWithGroupPresenceJoinIntent::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithGroupPresenceJoinIntent*>(c_message));
}
inline void Oculus::Platform::MessageWithGroupPresenceJoinIntent::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithGroupPresenceJoinIntent*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::GroupPresenceJoinIntent* Oculus::Platform::MessageWithGroupPresenceJoinIntent::GetGroupPresenceJoinIntent() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithGroupPresenceJoinIntent*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::GroupPresenceJoinIntent*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::GroupPresenceJoinIntent* Oculus::Platform::MessageWithGroupPresenceJoinIntent::GetDataFromMessage(void* c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithGroupPresenceJoinIntent*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::GroupPresenceJoinIntent*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithGroupPresenceJoinIntent::MessageWithGroupPresenceJoinIntent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
