#pragma once
#include "Oculus/Platform/Models/zzzz__Party_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithParty_def.hpp"
#include "Oculus/Platform/Models/zzzz__Party_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithParty._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithParty::*)(void*)>(&::Oculus::Platform::MessageWithParty::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26f3040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithParty*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithParty.GetParty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Party* (::Oculus::Platform::MessageWithParty::*)()>(
    &::Oculus::Platform::MessageWithParty::GetParty)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26f3098;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithParty*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithParty*>::get(), 52));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithParty.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::Party* (::Oculus::Platform::MessageWithParty::*)(void*)>(
    &::Oculus::Platform::MessageWithParty::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26f30d4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithParty*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithParty*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithParty* Oculus::Platform::MessageWithParty::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithParty*>(c_message));
}
inline void Oculus::Platform::MessageWithParty::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithParty*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::Party* Oculus::Platform::MessageWithParty::GetParty() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithParty*>::get(), 52)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Party*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::Party* Oculus::Platform::MessageWithParty::GetDataFromMessage(void* c_message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithParty*>::get(), 72)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Party*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithParty::MessageWithParty() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
