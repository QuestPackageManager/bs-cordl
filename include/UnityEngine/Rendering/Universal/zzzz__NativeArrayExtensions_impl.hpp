#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/NativeArrayExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__NativeArrayExtensions_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
template <typename T> inline ::ByRef<T> UnityEngine::Rendering::Universal::NativeArrayExtensions::UnsafeElementAt(::Unity::Collections::NativeArray_1<T> array, int32_t index) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::NativeArrayExtensions*>::get(), "UnsafeElementAt",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<T>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ByRef<T>, false>(nullptr, ___internal_method, array, index);
}
template <typename T> inline ::ByRef<T> UnityEngine::Rendering::Universal::NativeArrayExtensions::UnsafeElementAtMutable(::Unity::Collections::NativeArray_1<T> array, int32_t index) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::NativeArrayExtensions*>::get(), "UnsafeElementAtMutable",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<T>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ByRef<T>, false>(nullptr, ___internal_method, array, index);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::NativeArrayExtensions::NativeArrayExtensions() {}
