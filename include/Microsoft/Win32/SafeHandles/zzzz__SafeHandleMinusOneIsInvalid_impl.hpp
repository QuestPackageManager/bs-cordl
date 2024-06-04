#pragma once
// IWYU pragma private; include "Microsoft/Win32/SafeHandles/SafeHandleMinusOneIsInvalid.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_impl.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleMinusOneIsInvalid_def.hpp"
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid::*)(bool)>(
    &::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27c4b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid.get_IsInvalid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid::*)()>(
    &::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid::get_IsInvalid)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27c4bb0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid*>::get(), 5));
    return ___internal_method;
  }
};
inline ::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid* Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid::New_ctor(bool ownsHandle) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid*>(ownsHandle));
}
inline void Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid::_ctor(bool ownsHandle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ownsHandle);
}
inline bool Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid::get_IsInvalid() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid::SafeHandleMinusOneIsInvalid() {}
