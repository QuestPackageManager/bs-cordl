#pragma once
// IWYU pragma private; include "UnityEngine/AsyncInstantiateOperation_1.hpp"
#include "UnityEngine/zzzz__AsyncInstantiateOperation_impl.hpp"
#include "UnityEngine/zzzz__AsyncInstantiateOperation_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template <typename T> inline void UnityEngine::AsyncInstantiateOperation_1<T>::_ctor(::System::IntPtr ptr, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AsyncInstantiateOperation_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ptr, cancellationToken);
}
template <typename T> inline ::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*> UnityEngine::AsyncInstantiateOperation_1<T>::CreateResultArray(int32_t size) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AsyncInstantiateOperation_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>, ::Array<::UnityW<::UnityEngine::Object>>*>, false>(this, ___internal_method, size);
}
template <typename T>
inline ::UnityEngine::AsyncInstantiateOperation_1<T>* UnityEngine::AsyncInstantiateOperation_1<T>::New_ctor(::System::IntPtr ptr, ::System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AsyncInstantiateOperation_1<T>*>(ptr, cancellationToken));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::AsyncInstantiateOperation_1<T>::AsyncInstantiateOperation_1() {}
