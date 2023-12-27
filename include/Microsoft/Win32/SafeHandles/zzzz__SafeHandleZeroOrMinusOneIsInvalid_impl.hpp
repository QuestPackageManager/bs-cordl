#pragma once
#include "System/Runtime/InteropServices/zzzz__SafeHandle_impl.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::*)(bool)>(
    &::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x242c144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid.get_IsInvalid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::*)()>(
    &::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::get_IsInvalid)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x242c268;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid*>::get(), 5));
    return ___internal_method;
  }
};
inline ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid* Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::New_ctor(bool ownsHandle) {
  return THROW_UNLESS(::il2cpp_utils::New<::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid*>(ownsHandle));
}
inline void Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::_ctor(bool ownsHandle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ownsHandle);
}
inline bool Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::get_IsInvalid() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid*>::get(), "get_IsInvalid",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid::SafeHandleZeroOrMinusOneIsInvalid() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
