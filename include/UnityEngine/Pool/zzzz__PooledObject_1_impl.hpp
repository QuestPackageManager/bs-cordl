#pragma once
// IWYU pragma private; include "UnityEngine/Pool/PooledObject_1.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "UnityEngine/Pool/zzzz__PooledObject_1_def.hpp"
#include "UnityEngine/Pool/zzzz__IObjectPool_1_def.hpp"
template <typename T> inline void UnityEngine::Pool::PooledObject_1<T>::_ctor(T value, ::UnityEngine::Pool::IObjectPool_1<T>* pool) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::PooledObject_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pool::IObjectPool_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, pool);
}
template <typename T> inline void UnityEngine::Pool::PooledObject_1<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::PooledObject_1<T>>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::Pool::PooledObject_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* UnityEngine::Pool::PooledObject_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_ToReturn", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Pool", ty: "::UnityEngine::Pool::IObjectPool_1<T>*", modifiers: "", def_value:
// Some("{}") }]
template <typename T> constexpr ::UnityEngine::Pool::PooledObject_1<T>::PooledObject_1(T m_ToReturn, ::UnityEngine::Pool::IObjectPool_1<T>* m_Pool) noexcept {
  this->m_ToReturn = m_ToReturn;
  this->m_Pool = m_Pool;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Pool::PooledObject_1<T>::PooledObject_1() {}
