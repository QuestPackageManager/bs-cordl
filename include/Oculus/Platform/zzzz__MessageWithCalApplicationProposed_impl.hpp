#pragma once
#include "Oculus/Platform/Models/zzzz__CalApplicationProposed_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithCalApplicationProposed_def.hpp"
#include "Oculus/Platform/Models/zzzz__CalApplicationProposed_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithCalApplicationProposed._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithCalApplicationProposed::*)(void*)>(
    &::Oculus::Platform::MessageWithCalApplicationProposed::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27183ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationProposed*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCalApplicationProposed.GetCalApplicationProposed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CalApplicationProposed* (::Oculus::Platform::MessageWithCalApplicationProposed::*)()>(
    &::Oculus::Platform::MessageWithCalApplicationProposed::GetCalApplicationProposed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x271a97c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationProposed*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationProposed*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCalApplicationProposed.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CalApplicationProposed* (
    ::Oculus::Platform::MessageWithCalApplicationProposed::*)(void*)>(&::Oculus::Platform::MessageWithCalApplicationProposed::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x271a9b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationProposed*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationProposed*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithCalApplicationProposed* Oculus::Platform::MessageWithCalApplicationProposed::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithCalApplicationProposed*>(c_message));
}
inline void Oculus::Platform::MessageWithCalApplicationProposed::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationProposed*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::CalApplicationProposed* Oculus::Platform::MessageWithCalApplicationProposed::GetCalApplicationProposed() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationProposed*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CalApplicationProposed*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::CalApplicationProposed* Oculus::Platform::MessageWithCalApplicationProposed::GetDataFromMessage(void* c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationProposed*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CalApplicationProposed*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithCalApplicationProposed::MessageWithCalApplicationProposed() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
