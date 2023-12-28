#pragma once
#include "Newtonsoft/Json/Linq/zzzz__IJEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr Newtonsoft::Json::Linq::IJEnumerable_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr Newtonsoft::Json::Linq::IJEnumerable_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template <typename T> inline ::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Newtonsoft::Json::Linq::IJEnumerable_1<T>::get_Item(::System::Object* key) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Linq::IJEnumerable_1<T>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Linq::IJEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*, false>(this, ___internal_method, key);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
