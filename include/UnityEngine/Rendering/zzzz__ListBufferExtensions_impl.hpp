#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ListBufferExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ListBufferExtensions_def.hpp"
#include "UnityEngine/Rendering/zzzz__ListBuffer_1_def.hpp"
template <typename T> inline void UnityEngine::Rendering::ListBufferExtensions::QuickSort(::UnityEngine::Rendering::ListBuffer_1<T> self) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ListBufferExtensions*>::get(), "QuickSort",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ListBuffer_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, self);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ListBufferExtensions::ListBufferExtensions() {}
