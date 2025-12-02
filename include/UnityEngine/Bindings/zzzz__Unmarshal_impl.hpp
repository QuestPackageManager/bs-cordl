#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/Unmarshal.hpp"
#include "UnityEngine/Bindings/zzzz__Unmarshal_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::Unmarshal.FromIntPtrUnsafe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::GCHandle (*)(::System::IntPtr)>(
    &::UnityEngine::Bindings::Unmarshal::FromIntPtrUnsafe)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68cb010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::Unmarshal>::get(), "FromIntPtrUnsafe", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
template <typename T> inline T UnityEngine::Bindings::Unmarshal::UnmarshalUnityObject(::System::IntPtr gcHandlePtr) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::Unmarshal>::get(), "UnmarshalUnityObject",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, gcHandlePtr);
}
inline ::System::Runtime::InteropServices::GCHandle UnityEngine::Bindings::Unmarshal::FromIntPtrUnsafe(::System::IntPtr gcHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::Unmarshal>::get(), "FromIntPtrUnsafe", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::GCHandle, false>(nullptr, ___internal_method, gcHandle);
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::Unmarshal::Unmarshal() {}
