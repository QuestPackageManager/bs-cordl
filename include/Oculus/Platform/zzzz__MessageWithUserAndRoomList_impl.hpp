#pragma once
#include "Oculus/Platform/Models/zzzz__UserAndRoomList_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithUserAndRoomList_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserAndRoomList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithUserAndRoomList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithUserAndRoomList::*)(void*)>(
    &::Oculus::Platform::MessageWithUserAndRoomList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2719574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserAndRoomList*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithUserAndRoomList.GetUserAndRoomList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::UserAndRoomList* (::Oculus::Platform::MessageWithUserAndRoomList::*)()>(
    &::Oculus::Platform::MessageWithUserAndRoomList::GetUserAndRoomList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x271e04c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserAndRoomList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserAndRoomList*>::get(), 83));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithUserAndRoomList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::UserAndRoomList* (::Oculus::Platform::MessageWithUserAndRoomList::*)(void*)>(
    &::Oculus::Platform::MessageWithUserAndRoomList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x271e088;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserAndRoomList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserAndRoomList*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithUserAndRoomList* Oculus::Platform::MessageWithUserAndRoomList::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithUserAndRoomList*>(c_message));
}
inline void Oculus::Platform::MessageWithUserAndRoomList::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserAndRoomList*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::UserAndRoomList* Oculus::Platform::MessageWithUserAndRoomList::GetUserAndRoomList() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserAndRoomList*>::get(), 83)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserAndRoomList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::UserAndRoomList* Oculus::Platform::MessageWithUserAndRoomList::GetDataFromMessage(void* c_message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithUserAndRoomList*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::UserAndRoomList*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithUserAndRoomList::MessageWithUserAndRoomList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
