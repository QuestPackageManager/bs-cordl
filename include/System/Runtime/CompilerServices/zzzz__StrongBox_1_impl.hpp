#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/StrongBox_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__StrongBox_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IStrongBox_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> constexpr T& System::Runtime::CompilerServices::StrongBox_1<T>::__cordl_internal_get_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
template <typename T> constexpr T const& System::Runtime::CompilerServices::StrongBox_1<T>::__cordl_internal_get_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
template <typename T> constexpr void System::Runtime::CompilerServices::StrongBox_1<T>::__cordl_internal_set_Value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___Value, value);
}
template <typename T> inline void System::Runtime::CompilerServices::StrongBox_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::StrongBox_1<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::CompilerServices::StrongBox_1<T>::_ctor(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::StrongBox_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Object* System::Runtime::CompilerServices::StrongBox_1<T>::System_Runtime_CompilerServices_IStrongBox_get_Value() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::StrongBox_1<T>*>::get(),
                                               "System.Runtime.CompilerServices.IStrongBox.get_Value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::CompilerServices::StrongBox_1<T>::System_Runtime_CompilerServices_IStrongBox_set_Value(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::StrongBox_1<T>*>::get(),
                                                                             "System.Runtime.CompilerServices.IStrongBox.set_Value", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Runtime::CompilerServices::StrongBox_1<T>* System::Runtime::CompilerServices::StrongBox_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::StrongBox_1<T>*>());
}
template <typename T> inline ::System::Runtime::CompilerServices::StrongBox_1<T>* System::Runtime::CompilerServices::StrongBox_1<T>::New_ctor(T value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::CompilerServices::StrongBox_1<T>*>(value));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IStrongBox"
template <typename T> constexpr System::Runtime::CompilerServices::StrongBox_1<T>::operator ::System::Runtime::CompilerServices::IStrongBox*() noexcept {
  return static_cast<::System::Runtime::CompilerServices::IStrongBox*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IStrongBox"
template <typename T> constexpr ::System::Runtime::CompilerServices::IStrongBox* System::Runtime::CompilerServices::StrongBox_1<T>::i___System__Runtime__CompilerServices__IStrongBox() noexcept {
  return static_cast<::System::Runtime::CompilerServices::IStrongBox*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Runtime::CompilerServices::StrongBox_1<T>::StrongBox_1() {}
