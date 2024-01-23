#pragma once
#include "UnityEngine/UIElements/zzzz__StyleKeyword_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleEnum_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyleValue_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
/// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<T>"
template <typename T> constexpr UnityEngine::UIElements::StyleEnum_1<T>::operator ::UnityEngine::UIElements::IStyleValue_1<T>*() {
  return static_cast<::UnityEngine::UIElements::IStyleValue_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::UIElements::IStyleValue_1<T>"
template <typename T> constexpr ::UnityEngine::UIElements::IStyleValue_1<T>* UnityEngine::UIElements::StyleEnum_1<T>::i___UnityEngine__UIElements__IStyleValue_1_T_() {
  return static_cast<::UnityEngine::UIElements::IStyleValue_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleEnum_1<T>>"
template <typename T> constexpr UnityEngine::UIElements::StyleEnum_1<T>::operator ::System::IEquatable_1<::UnityEngine::UIElements::StyleEnum_1<T>>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleEnum_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleEnum_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleEnum_1<T>>* UnityEngine::UIElements::StyleEnum_1<T>::i___System__IEquatable_1___UnityEngine__UIElements__StyleEnum_1_T__() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::StyleEnum_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline T UnityEngine::UIElements::StyleEnum_1<T>::get_value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(), "get_value",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::StyleKeyword UnityEngine::UIElements::StyleEnum_1<T>::get_keyword() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(), "get_keyword",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleKeyword, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::StyleEnum_1<T>::_ctor(T v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
template <typename T> inline void UnityEngine::UIElements::StyleEnum_1<T>::_ctor(::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleKeyword>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyword);
}
template <typename T> inline void UnityEngine::UIElements::StyleEnum_1<T>::_ctor(T v, ::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleKeyword>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v, keyword);
}
template <typename T> inline bool UnityEngine::UIElements::StyleEnum_1<T>::op_Equality(::UnityEngine::UIElements::StyleEnum_1<T> lhs, ::UnityEngine::UIElements::StyleEnum_1<T> rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<T>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
template <typename T> inline bool UnityEngine::UIElements::StyleEnum_1<T>::op_Inequality(::UnityEngine::UIElements::StyleEnum_1<T> lhs, ::UnityEngine::UIElements::StyleEnum_1<T> rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<T>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
template <typename T>
inline ::UnityEngine::UIElements::StyleEnum_1<T> UnityEngine::UIElements::StyleEnum_1<T>::op_Implicit___UnityEngine__UIElements__StyleEnum_1_T_(::UnityEngine::UIElements::StyleKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleKeyword>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<T>, false>(nullptr, ___internal_method, keyword);
}
template <typename T> inline ::UnityEngine::UIElements::StyleEnum_1<T> UnityEngine::UIElements::StyleEnum_1<T>::op_Implicit___UnityEngine__UIElements__StyleEnum_1_T_(T v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(), "op_Implicit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<T>, false>(nullptr, ___internal_method, v);
}
template <typename T> inline bool UnityEngine::UIElements::StyleEnum_1<T>::Equals(::UnityEngine::UIElements::StyleEnum_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename T> inline bool UnityEngine::UIElements::StyleEnum_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T> inline int32_t UnityEngine::UIElements::StyleEnum_1<T>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline ::StringW UnityEngine::UIElements::StyleEnum_1<T>::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleEnum_1<T>>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Value", ty: "T", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "",
// def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::UIElements::StyleEnum_1<T>::StyleEnum_1(T m_Value, ::UnityEngine::UIElements::StyleKeyword m_Keyword) noexcept {
  this->m_Value = m_Value;
  this->m_Keyword = m_Keyword;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::StyleEnum_1<T>::StyleEnum_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
