#pragma once
#include "Oculus/Platform/Models/zzzz__Room_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithRoomUnderViewerRoom_def.hpp"
#include "Oculus/Platform/Models/zzzz__Room_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithRoomUnderViewerRoom._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithRoomUnderViewerRoom::*)(void*)>(
    &::Oculus::Platform::MessageWithRoomUnderViewerRoom::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2719204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomUnderViewerRoom*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithRoomUnderViewerRoom.GetRoom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Room* (::Oculus::Platform::MessageWithRoomUnderViewerRoom::*)()>(
    &::Oculus::Platform::MessageWithRoomUnderViewerRoom::GetRoom)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x271d824;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomUnderViewerRoom*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomUnderViewerRoom*>::get(), 73));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithRoomUnderViewerRoom.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Room* (::Oculus::Platform::MessageWithRoomUnderViewerRoom::*)(void*)>(
    &::Oculus::Platform::MessageWithRoomUnderViewerRoom::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x271d860;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomUnderViewerRoom*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomUnderViewerRoom*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithRoomUnderViewerRoom* Oculus::Platform::MessageWithRoomUnderViewerRoom::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithRoomUnderViewerRoom*>(c_message));
}
inline void Oculus::Platform::MessageWithRoomUnderViewerRoom::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomUnderViewerRoom*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::Room* Oculus::Platform::MessageWithRoomUnderViewerRoom::GetRoom() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomUnderViewerRoom*>::get(), 73)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Room*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::Room* Oculus::Platform::MessageWithRoomUnderViewerRoom::GetDataFromMessage(void* c_message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithRoomUnderViewerRoom*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Room*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithRoomUnderViewerRoom::MessageWithRoomUnderViewerRoom() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
