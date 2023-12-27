#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DataConvertor_1_def.hpp"
#include "GlobalNamespace/zzzz__DataItemConvertor_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::DataItemConvertor_1<T>*>*& GlobalNamespace::DataConvertor_1<T>::__get__convertors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____convertors;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::DataItemConvertor_1<T>*>*> const&
GlobalNamespace::DataConvertor_1<T>::__get__convertors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____convertors;
}
template <typename T>
constexpr void GlobalNamespace::DataConvertor_1<T>::__set__convertors(::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::DataItemConvertor_1<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____convertors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline T GlobalNamespace::DataConvertor_1<T>::ProcessItem(::System::Object* item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataConvertor_1<T>*>::get(), "ProcessItem", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::DataConvertor_1<T>::AddConvertor(::GlobalNamespace::DataItemConvertor_1<T>* dataItemConvertor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataConvertor_1<T>*>::get(), "AddConvertor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DataItemConvertor_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataItemConvertor);
}
template <typename T> inline ::GlobalNamespace::DataConvertor_1<T>* GlobalNamespace::DataConvertor_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DataConvertor_1<T>*>());
}
template <typename T> inline void GlobalNamespace::DataConvertor_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataConvertor_1<T>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::DataConvertor_1<T>::DataConvertor_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
