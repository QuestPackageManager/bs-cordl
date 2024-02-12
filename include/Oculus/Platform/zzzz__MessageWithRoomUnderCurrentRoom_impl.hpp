#pragma once
#include "Oculus/Platform/Models/zzzz__Room_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithRoomUnderCurrentRoom_def.hpp"
#include "Oculus/Platform/Models/zzzz__Room_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithRoomUnderCurrentRoom._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithRoomUnderCurrentRoom::*)(void*)>(
    &::Oculus::Platform::MessageWithRoomUnderCurrentRoom::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27191ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomUnderCurrentRoom*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithRoomUnderCurrentRoom.GetRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Room* (::Oculus::Platform::MessageWithRoomUnderCurrentRoom::*)()>(
    &::Oculus::Platform::MessageWithRoomUnderCurrentRoom::GetRoom)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x271d74c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomUnderCurrentRoom*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomUnderCurrentRoom*>::get(), 73));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithRoomUnderCurrentRoom.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Room* (::Oculus::Platform::MessageWithRoomUnderCurrentRoom::*)(void*)>(
    &::Oculus::Platform::MessageWithRoomUnderCurrentRoom::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x271d788;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomUnderCurrentRoom*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomUnderCurrentRoom*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithRoomUnderCurrentRoom* Oculus::Platform::MessageWithRoomUnderCurrentRoom::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithRoomUnderCurrentRoom*>(c_message));
}
inline void Oculus::Platform::MessageWithRoomUnderCurrentRoom::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomUnderCurrentRoom*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::Room* Oculus::Platform::MessageWithRoomUnderCurrentRoom::GetRoom() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomUnderCurrentRoom*>::get(), 73)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Room*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::Room* Oculus::Platform::MessageWithRoomUnderCurrentRoom::GetDataFromMessage(void* c_message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomUnderCurrentRoom*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Room*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithRoomUnderCurrentRoom::MessageWithRoomUnderCurrentRoom() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
