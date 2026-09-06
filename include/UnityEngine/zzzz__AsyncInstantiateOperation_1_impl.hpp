#pragma once
// IWYU pragma private; include "UnityEngine/AsyncInstantiateOperation_1.hpp"
#include "UnityEngine/zzzz__AsyncInstantiateOperation_impl.hpp"
#include "UnityEngine/zzzz__AsyncInstantiateOperation_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template <typename T> inline void UnityEngine::AsyncInstantiateOperation_1<T>::_ctor(::System::IntPtr ptr, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AsyncInstantiateOperation_1<T>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ptr, cancellationToken);
}
template <typename T> inline ::ArrayW<::UnityW<::UnityEngine::Object>> UnityEngine::AsyncInstantiateOperation_1<T>::CreateResultArray(int32_t size) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AsyncInstantiateOperation_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(this, ___internal_method, size);
}
template <typename T>
inline ::UnityEngine::AsyncInstantiateOperation_1<T>* UnityEngine::AsyncInstantiateOperation_1<T>::New_ctor(::System::IntPtr ptr, ::System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AsyncInstantiateOperation_1<T>*>(ptr, cancellationToken));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::AsyncInstantiateOperation_1<T>::AsyncInstantiateOperation_1() {}
