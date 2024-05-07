#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JEnumerable_1.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JEnumerable_1_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__IJEnumerable_1_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::Newtonsoft::Json::Linq::IJEnumerable_1<T>"
template <typename T> constexpr Newtonsoft::Json::Linq::JEnumerable_1<T>::operator ::Newtonsoft::Json::Linq::IJEnumerable_1<T>*() {
  return static_cast<::Newtonsoft::Json::Linq::IJEnumerable_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Newtonsoft::Json::Linq::IJEnumerable_1<T>"
template <typename T> constexpr ::Newtonsoft::Json::Linq::IJEnumerable_1<T>* Newtonsoft::Json::Linq::JEnumerable_1<T>::i___Newtonsoft__Json__Linq__IJEnumerable_1_T_() {
  return static_cast<::Newtonsoft::Json::Linq::IJEnumerable_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr Newtonsoft::Json::Linq::JEnumerable_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* Newtonsoft::Json::Linq::JEnumerable_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr Newtonsoft::Json::Linq::JEnumerable_1<T>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* Newtonsoft::Json::Linq::JEnumerable_1<T>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Newtonsoft::Json::Linq::JEnumerable_1<T>>"
template <typename T> constexpr Newtonsoft::Json::Linq::JEnumerable_1<T>::operator ::System::IEquatable_1<::Newtonsoft::Json::Linq::JEnumerable_1<T>>*() {
  return static_cast<::System::IEquatable_1<::Newtonsoft::Json::Linq::JEnumerable_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Newtonsoft::Json::Linq::JEnumerable_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::Newtonsoft::Json::Linq::JEnumerable_1<T>>* Newtonsoft::Json::Linq::JEnumerable_1<T>::i___System__IEquatable_1___Newtonsoft__Json__Linq__JEnumerable_1_T__() {
  return static_cast<::System::IEquatable_1<::Newtonsoft::Json::Linq::JEnumerable_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void Newtonsoft::Json::Linq::JEnumerable_1<T>::setStaticF_Empty(::Newtonsoft::Json::Linq::JEnumerable_1<T> value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Linq::JEnumerable_1<T>, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get>(
      std::forward<::Newtonsoft::Json::Linq::JEnumerable_1<T>>(value));
}
template <typename T> inline ::Newtonsoft::Json::Linq::JEnumerable_1<T> Newtonsoft::Json::Linq::JEnumerable_1<T>::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Linq::JEnumerable_1<T>, "Empty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get>();
}
template <typename T> inline void Newtonsoft::Json::Linq::JEnumerable_1<T>::_ctor(::System::Collections::Generic::IEnumerable_1<T>* enumerable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enumerable);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* Newtonsoft::Json::Linq::JEnumerable_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(), "GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::JEnumerable_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename T> inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JEnumerable_1<T>::get_Item(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*, false>(this, ___internal_method, key);
}
template <typename T> inline bool Newtonsoft::Json::Linq::JEnumerable_1<T>::Equals(::Newtonsoft::Json::Linq::JEnumerable_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename T> inline bool Newtonsoft::Json::Linq::JEnumerable_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T> inline int32_t Newtonsoft::Json::Linq::JEnumerable_1<T>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_enumerable", ty: "::System::Collections::Generic::IEnumerable_1<T>*", modifiers: "", def_value: Some("nullptr") }]
template <typename T> constexpr ::Newtonsoft::Json::Linq::JEnumerable_1<T>::JEnumerable_1(::System::Collections::Generic::IEnumerable_1<T>* _enumerable) noexcept {
  this->_enumerable = _enumerable;
}
// Ctor Parameters []
template <typename T> constexpr ::Newtonsoft::Json::Linq::JEnumerable_1<T>::JEnumerable_1() {}
