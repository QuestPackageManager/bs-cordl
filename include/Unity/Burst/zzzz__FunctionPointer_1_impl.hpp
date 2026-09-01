#pragma once
// IWYU pragma private; include "Unity\Burst\FunctionPointer_1.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Burst/zzzz__FunctionPointer_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Burst/zzzz__IFunctionPointer_def.hpp"
template <typename T> inline void Unity::Burst::FunctionPointer_1<T>::_ctor(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::FunctionPointer_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr);
}
template <typename T> inline ::System::IntPtr Unity::Burst::FunctionPointer_1<T>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::FunctionPointer_1<T>>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
template <typename T> inline void Unity::Burst::FunctionPointer_1<T>::CheckIsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::FunctionPointer_1<T>>(), { "CheckIsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline T Unity::Burst::FunctionPointer_1<T>::get_Invoke() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::FunctionPointer_1<T>>(), { "get_Invoke", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline bool Unity::Burst::FunctionPointer_1<T>::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::FunctionPointer_1<T>>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline ::Unity::Burst::IFunctionPointer* Unity::Burst::FunctionPointer_1<T>::Unity_Burst_IFunctionPointer_FromIntPtr(::System::IntPtr ptr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::FunctionPointer_1<T>>(), { "Unity.Burst.IFunctionPointer.FromIntPtr", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Burst::IFunctionPointer*>(*this, ___internal_method, ptr);
}
/// @brief Convert operator to "::Unity::Burst::IFunctionPointer"
template <typename T> constexpr Unity::Burst::FunctionPointer_1<T>::operator ::Unity::Burst::IFunctionPointer*() {
  return static_cast<::Unity::Burst::IFunctionPointer*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Burst::IFunctionPointer"
template <typename T> constexpr ::Unity::Burst::IFunctionPointer* Unity::Burst::FunctionPointer_1<T>::i___Unity__Burst__IFunctionPointer() {
  return static_cast<::Unity::Burst::IFunctionPointer*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_ptr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::Unity::Burst::FunctionPointer_1<T>::FunctionPointer_1(::System::IntPtr _ptr) noexcept {
  this->_ptr = _ptr;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Burst::FunctionPointer_1<T>::FunctionPointer_1() {}
