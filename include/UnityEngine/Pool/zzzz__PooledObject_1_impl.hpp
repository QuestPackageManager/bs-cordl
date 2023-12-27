#pragma once
#include "UnityEngine/Pool/zzzz__PooledObject_1_def.hpp"
#include "UnityEngine/Pool/zzzz__IObjectPool_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::Pool::PooledObject_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void UnityEngine::Pool::PooledObject_1<T>::_ctor(T value, ::UnityEngine::Pool::IObjectPool_1<T>* pool) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::PooledObject_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pool::IObjectPool_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, pool);
}
template <typename T> inline void UnityEngine::Pool::PooledObject_1<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::PooledObject_1<T>>::get(),
                                                                             "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_ToReturn", ty: "T", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Pool", ty: "::UnityEngine::Pool::IObjectPool_1<T>*", modifiers: "",
// def_value: Some("nullptr") }]
template <typename T> constexpr ::UnityEngine::Pool::PooledObject_1<T>::PooledObject_1(T m_ToReturn, ::UnityEngine::Pool::IObjectPool_1<T>* m_Pool) noexcept {
  this->m_ToReturn = m_ToReturn;
  this->m_Pool = m_Pool;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Pool::PooledObject_1<T>::PooledObject_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
