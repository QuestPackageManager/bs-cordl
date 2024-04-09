#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Microsoft/Win32/zzzz__Win32Native_def.hpp"
//  Writing Method size for method: ::Microsoft::Win32::Win32Native.GetMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&::Microsoft::Win32::Win32Native::GetMessage)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x26a6c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::Win32Native*>::get(), "GetMessage", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::Win32Native.MakeHRFromErrorCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::Microsoft::Win32::Win32Native::MakeHRFromErrorCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26a6cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::Win32Native*>::get(), "MakeHRFromErrorCode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline ::StringW Microsoft::Win32::Win32Native::GetMessage(int32_t hr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::Win32Native*>::get(), "GetMessage", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, hr);
}
inline int32_t Microsoft::Win32::Win32Native::MakeHRFromErrorCode(int32_t errorCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::Win32Native*>::get(), "MakeHRFromErrorCode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, errorCode);
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::Win32Native::Win32Native() {}
