#pragma once
#include "Oculus/Platform/Models/zzzz__MatchmakingAdminSnapshot_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithMatchmakingAdminSnapshot_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingAdminSnapshot_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingAdminSnapshot._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithMatchmakingAdminSnapshot::*)(void*)>(
    &::Oculus::Platform::MessageWithMatchmakingAdminSnapshot::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2718bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingAdminSnapshot*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingAdminSnapshot.GetMatchmakingAdminSnapshot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MatchmakingAdminSnapshot* (::Oculus::Platform::MessageWithMatchmakingAdminSnapshot::*)()>(
    &::Oculus::Platform::MessageWithMatchmakingAdminSnapshot::GetMatchmakingAdminSnapshot)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x271c3dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingAdminSnapshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingAdminSnapshot*>::get(), 53));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithMatchmakingAdminSnapshot.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::MatchmakingAdminSnapshot* (
    ::Oculus::Platform::MessageWithMatchmakingAdminSnapshot::*)(void*)>(&::Oculus::Platform::MessageWithMatchmakingAdminSnapshot::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x271c418;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingAdminSnapshot*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingAdminSnapshot*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithMatchmakingAdminSnapshot* Oculus::Platform::MessageWithMatchmakingAdminSnapshot::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithMatchmakingAdminSnapshot*>(c_message));
}
inline void Oculus::Platform::MessageWithMatchmakingAdminSnapshot::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingAdminSnapshot*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::MatchmakingAdminSnapshot* Oculus::Platform::MessageWithMatchmakingAdminSnapshot::GetMatchmakingAdminSnapshot() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingAdminSnapshot*>::get(), 53)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MatchmakingAdminSnapshot*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::MatchmakingAdminSnapshot* Oculus::Platform::MessageWithMatchmakingAdminSnapshot::GetDataFromMessage(void* c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithMatchmakingAdminSnapshot*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MatchmakingAdminSnapshot*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithMatchmakingAdminSnapshot::MessageWithMatchmakingAdminSnapshot() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
