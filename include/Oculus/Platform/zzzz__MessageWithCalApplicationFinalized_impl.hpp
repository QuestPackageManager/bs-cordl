#pragma once
#include "Oculus/Platform/Models/zzzz__CalApplicationFinalized_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithCalApplicationFinalized_def.hpp"
#include "Oculus/Platform/Models/zzzz__CalApplicationFinalized_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithCalApplicationFinalized._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithCalApplicationFinalized::*)(void*)>(
    &::Oculus::Platform::MessageWithCalApplicationFinalized::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2718394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationFinalized*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCalApplicationFinalized.GetCalApplicationFinalized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CalApplicationFinalized* (::Oculus::Platform::MessageWithCalApplicationFinalized::*)()>(
    &::Oculus::Platform::MessageWithCalApplicationFinalized::GetCalApplicationFinalized)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x271a8a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationFinalized*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationFinalized*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCalApplicationFinalized.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::CalApplicationFinalized* (
    ::Oculus::Platform::MessageWithCalApplicationFinalized::*)(void*)>(&::Oculus::Platform::MessageWithCalApplicationFinalized::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x271a8e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationFinalized*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationFinalized*>::get(), 89));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithCalApplicationFinalized* Oculus::Platform::MessageWithCalApplicationFinalized::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::MessageWithCalApplicationFinalized*>(c_message));
}
inline void Oculus::Platform::MessageWithCalApplicationFinalized::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationFinalized*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::CalApplicationFinalized* Oculus::Platform::MessageWithCalApplicationFinalized::GetCalApplicationFinalized() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationFinalized*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CalApplicationFinalized*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::CalApplicationFinalized* Oculus::Platform::MessageWithCalApplicationFinalized::GetDataFromMessage(void* c_message) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithCalApplicationFinalized*>::get(), 89)));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CalApplicationFinalized*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithCalApplicationFinalized::MessageWithCalApplicationFinalized() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
