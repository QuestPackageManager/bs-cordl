#pragma once
#include "Newtonsoft/Json/Linq/zzzz__JEnumerable_1_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__IJEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
/// @brief Convert operator to "::Newtonsoft::Json::Linq::IJEnumerable_1<T>"
template <typename T> constexpr Newtonsoft::Json::Linq::JEnumerable_1<T>::operator ::Newtonsoft::Json::Linq::IJEnumerable_1<T>*() {
  return static_cast<::Newtonsoft::Json::Linq::IJEnumerable_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr Newtonsoft::Json::Linq::JEnumerable_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr Newtonsoft::Json::Linq::JEnumerable_1<T>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::cordl_internals::Box(this)));
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
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enumerable);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* Newtonsoft::Json::Linq::JEnumerable_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(), "GetEnumerator",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* Newtonsoft::Json::Linq::JEnumerable_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename T> inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::JEnumerable_1<T>::get_Item(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(), "get_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*, false>(this, ___internal_method, key);
}
template <typename T> inline bool Newtonsoft::Json::Linq::JEnumerable_1<T>::Equals(::Newtonsoft::Json::Linq::JEnumerable_1<T> other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename T> inline bool Newtonsoft::Json::Linq::JEnumerable_1<T>::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T> inline int32_t Newtonsoft::Json::Linq::JEnumerable_1<T>::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::JEnumerable_1<T>>::get(), "GetHashCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_enumerable", ty: "::System::Collections::Generic::IEnumerable_1<T>*", modifiers: "", def_value: Some("nullptr") }]
template <typename T> constexpr ::Newtonsoft::Json::Linq::JEnumerable_1<T>::JEnumerable_1(::System::Collections::Generic::IEnumerable_1<T>* _enumerable) noexcept {
  this->_enumerable = _enumerable;
}
// Ctor Parameters []
template <typename T> constexpr ::Newtonsoft::Json::Linq::JEnumerable_1<T>::JEnumerable_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
