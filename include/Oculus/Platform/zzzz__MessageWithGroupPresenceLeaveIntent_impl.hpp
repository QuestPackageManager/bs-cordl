#pragma once
#include "Oculus/Platform/Models/zzzz__GroupPresenceLeaveIntent_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithGroupPresenceLeaveIntent_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceLeaveIntent_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithGroupPresenceLeaveIntent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithGroupPresenceLeaveIntent::*)(void*)>(
    &::Oculus::Platform::MessageWithGroupPresenceLeaveIntent::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26ef088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithGroupPresenceLeaveIntent*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithGroupPresenceLeaveIntent.GetGroupPresenceLeaveIntent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::GroupPresenceLeaveIntent* (::Oculus::Platform::MessageWithGroupPresenceLeaveIntent::*)()>(
    &::Oculus::Platform::MessageWithGroupPresenceLeaveIntent::GetGroupPresenceLeaveIntent)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26f1a98;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithGroupPresenceLeaveIntent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithGroupPresenceLeaveIntent*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithGroupPresenceLeaveIntent.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::GroupPresenceLeaveIntent* (
    ::Oculus::Platform::MessageWithGroupPresenceLeaveIntent::*)(void*)>(&::Oculus::Platform::MessageWithGroupPresenceLeaveIntent::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26f1ad4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithGroupPresenceLeaveIntent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithGroupPresenceLeaveIntent*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithGroupPresenceLeaveIntent* Oculus::Platform::MessageWithGroupPresenceLeaveIntent::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithGroupPresenceLeaveIntent*>(c_message));
}
inline void Oculus::Platform::MessageWithGroupPresenceLeaveIntent::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithGroupPresenceLeaveIntent*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::GroupPresenceLeaveIntent* Oculus::Platform::MessageWithGroupPresenceLeaveIntent::GetGroupPresenceLeaveIntent() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithGroupPresenceLeaveIntent*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::GroupPresenceLeaveIntent*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::GroupPresenceLeaveIntent* Oculus::Platform::MessageWithGroupPresenceLeaveIntent::GetDataFromMessage(void* c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithGroupPresenceLeaveIntent*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::GroupPresenceLeaveIntent*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithGroupPresenceLeaveIntent::MessageWithGroupPresenceLeaveIntent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
