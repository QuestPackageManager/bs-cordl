#pragma once
#include "Oculus/Platform/Models/zzzz__Party_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithPartyUnderCurrentParty_def.hpp"
#include "Oculus/Platform/Models/zzzz__Party_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithPartyUnderCurrentParty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithPartyUnderCurrentParty::*)(void*)>(
    &::Oculus::Platform::MessageWithPartyUnderCurrentParty::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26ef558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPartyUnderCurrentParty*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithPartyUnderCurrentParty.GetParty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Party* (::Oculus::Platform::MessageWithPartyUnderCurrentParty::*)()>(
    &::Oculus::Platform::MessageWithPartyUnderCurrentParty::GetParty)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26f3170;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPartyUnderCurrentParty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPartyUnderCurrentParty*>::get(), 52));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithPartyUnderCurrentParty.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Party* (::Oculus::Platform::MessageWithPartyUnderCurrentParty::*)(void*)>(
    &::Oculus::Platform::MessageWithPartyUnderCurrentParty::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26f31ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPartyUnderCurrentParty*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPartyUnderCurrentParty*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithPartyUnderCurrentParty* Oculus::Platform::MessageWithPartyUnderCurrentParty::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithPartyUnderCurrentParty*>(c_message));
}
inline void Oculus::Platform::MessageWithPartyUnderCurrentParty::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPartyUnderCurrentParty*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::Party* Oculus::Platform::MessageWithPartyUnderCurrentParty::GetParty() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPartyUnderCurrentParty*>::get(), 52)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Party*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::Party* Oculus::Platform::MessageWithPartyUnderCurrentParty::GetDataFromMessage(void* c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithPartyUnderCurrentParty*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Party*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithPartyUnderCurrentParty::MessageWithPartyUnderCurrentParty() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
