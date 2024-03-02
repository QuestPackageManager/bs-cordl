#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__Comparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::Collections::IComparer"
template <typename T> constexpr System::Collections::Generic::Comparer_1<T>::operator ::System::Collections::IComparer*() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IComparer"
template <typename T> constexpr ::System::Collections::IComparer* System::Collections::Generic::Comparer_1<T>::i___System__Collections__IComparer() noexcept {
  return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<T>"
template <typename T> constexpr System::Collections::Generic::Comparer_1<T>::operator ::System::Collections::Generic::IComparer_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IComparer_1<T>* System::Collections::Generic::Comparer_1<T>::i___System__Collections__Generic__IComparer_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<T>*>(static_cast<void*>(this));
}
template <typename T> inline void System::Collections::Generic::Comparer_1<T>::setStaticF_defaultComparer(::System::Collections::Generic::Comparer_1<T>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Comparer_1<T>*, "defaultComparer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Comparer_1<T>*>::get>(
      std::forward<::System::Collections::Generic::Comparer_1<T>*>(value));
}
template <typename T> inline ::System::Collections::Generic::Comparer_1<T>* System::Collections::Generic::Comparer_1<T>::getStaticF_defaultComparer() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Comparer_1<T>*, "defaultComparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Comparer_1<T>*>::get>();
}
template <typename T> inline ::System::Collections::Generic::Comparer_1<T>* System::Collections::Generic::Comparer_1<T>::get_Default() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Comparer_1<T>*>::get(),
                                                                             "get_Default", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Comparer_1<T>*, false>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::Comparer_1<T>* System::Collections::Generic::Comparer_1<T>::CreateComparer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Comparer_1<T>*>::get(),
                                                                             "CreateComparer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Comparer_1<T>*, false>(nullptr, ___internal_method);
}
template <typename T> inline int32_t System::Collections::Generic::Comparer_1<T>::Compare(T x, T y) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Comparer_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
template <typename T> inline int32_t System::Collections::Generic::Comparer_1<T>::System_Collections_IComparer_Compare(::System::Object* x, ::System::Object* y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Comparer_1<T>*>::get(),
                                                                             "System.Collections.IComparer.Compare", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
template <typename T> inline ::System::Collections::Generic::Comparer_1<T>* System::Collections::Generic::Comparer_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::Comparer_1<T>*>());
}
template <typename T> inline void System::Collections::Generic::Comparer_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::Comparer_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::Comparer_1<T>::Comparer_1() {}
