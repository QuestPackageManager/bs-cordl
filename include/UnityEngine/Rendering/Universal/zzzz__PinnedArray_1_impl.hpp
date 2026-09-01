#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\PinnedArray_1.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PinnedArray_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template <typename T> inline int32_t UnityEngine::Rendering::Universal::PinnedArray_1<T>::get_length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PinnedArray_1<T>>(), { "get_length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::Universal::PinnedArray_1<T>::_ctor(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PinnedArray_1<T>>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length);
}
template <typename T> inline void UnityEngine::Rendering::Universal::PinnedArray_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PinnedArray_1<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::Rendering::Universal::PinnedArray_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::PinnedArray_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "managedArray", ty: "::ArrayW<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "handle", ty: "::System::Runtime::InteropServices::GCHandle",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "nativeArray", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::UnityEngine::Rendering::Universal::PinnedArray_1<T>::PinnedArray_1(::ArrayW<T> managedArray, ::System::Runtime::InteropServices::GCHandle handle,
                                                                               ::Unity::Collections::NativeArray_1<T> nativeArray) noexcept {
  this->managedArray = managedArray;
  this->handle = handle;
  this->nativeArray = nativeArray;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::Universal::PinnedArray_1<T>::PinnedArray_1() {}
