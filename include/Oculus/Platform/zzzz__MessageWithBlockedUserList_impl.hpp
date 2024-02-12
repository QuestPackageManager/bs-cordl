#pragma once
#include "Oculus/Platform/Models/zzzz__BlockedUserList_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithBlockedUserList_def.hpp"
#include "Oculus/Platform/Models/zzzz__BlockedUserList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithBlockedUserList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithBlockedUserList::*)(void*)>(
    &::Oculus::Platform::MessageWithBlockedUserList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x271833c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithBlockedUserList*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithBlockedUserList.GetBlockedUserList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::BlockedUserList* (::Oculus::Platform::MessageWithBlockedUserList::*)()>(
    &::Oculus::Platform::MessageWithBlockedUserList::GetBlockedUserList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x271a7cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithBlockedUserList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithBlockedUserList*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithBlockedUserList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::BlockedUserList* (::Oculus::Platform::MessageWithBlockedUserList::*)(void*)>(
    &::Oculus::Platform::MessageWithBlockedUserList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x271a808;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithBlockedUserList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithBlockedUserList*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithBlockedUserList* Oculus::Platform::MessageWithBlockedUserList::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithBlockedUserList*>(c_message));
}
inline void Oculus::Platform::MessageWithBlockedUserList::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithBlockedUserList*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::BlockedUserList* Oculus::Platform::MessageWithBlockedUserList::GetBlockedUserList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithBlockedUserList*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::BlockedUserList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::BlockedUserList* Oculus::Platform::MessageWithBlockedUserList::GetDataFromMessage(void* c_message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithBlockedUserList*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::BlockedUserList*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithBlockedUserList::MessageWithBlockedUserList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
