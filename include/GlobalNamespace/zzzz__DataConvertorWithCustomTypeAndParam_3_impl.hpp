#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DataConvertorWithCustomTypeAndParam_3_def.hpp"
#include "GlobalNamespace/zzzz__DataItemConvertor_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T, typename TType, typename TParam>
constexpr ::System::Collections::Generic::Dictionary_2<TType, ::GlobalNamespace::DataItemConvertor_2<T, TParam>*>*&
GlobalNamespace::DataConvertorWithCustomTypeAndParam_3<T, TType, TParam>::__cordl_internal_get__convertors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____convertors;
}
template <typename T, typename TType, typename TParam>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TType, ::GlobalNamespace::DataItemConvertor_2<T, TParam>*>*> const&
GlobalNamespace::DataConvertorWithCustomTypeAndParam_3<T, TType, TParam>::__cordl_internal_get__convertors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____convertors;
}
template <typename T, typename TType, typename TParam>
constexpr void GlobalNamespace::DataConvertorWithCustomTypeAndParam_3<T, TType, TParam>::__cordl_internal_set__convertors(
    ::System::Collections::Generic::Dictionary_2<TType, ::GlobalNamespace::DataItemConvertor_2<T, TParam>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____convertors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T, typename TType, typename TParam>
inline T GlobalNamespace::DataConvertorWithCustomTypeAndParam_3<T, TType, TParam>::ProcessItem(::System::Object* item, TParam param, TType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataConvertorWithCustomTypeAndParam_3<T, TType, TParam>*>::get(), "ProcessItem",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, item, param, type);
}
template <typename T, typename TType, typename TParam>
inline void GlobalNamespace::DataConvertorWithCustomTypeAndParam_3<T, TType, TParam>::AddConvertor(TType type, ::GlobalNamespace::DataItemConvertor_2<T, TParam>* dataItemConvertor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataConvertorWithCustomTypeAndParam_3<T, TType, TParam>*>::get(), "AddConvertor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DataItemConvertor_2<T, TParam>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, dataItemConvertor);
}
template <typename T, typename TType, typename TParam>
inline ::GlobalNamespace::DataConvertorWithCustomTypeAndParam_3<T, TType, TParam>* GlobalNamespace::DataConvertorWithCustomTypeAndParam_3<T, TType, TParam>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DataConvertorWithCustomTypeAndParam_3<T, TType, TParam>*>());
}
template <typename T, typename TType, typename TParam> inline void GlobalNamespace::DataConvertorWithCustomTypeAndParam_3<T, TType, TParam>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DataConvertorWithCustomTypeAndParam_3<T, TType, TParam>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T, typename TType, typename TParam> constexpr ::GlobalNamespace::DataConvertorWithCustomTypeAndParam_3<T, TType, TParam>::DataConvertorWithCustomTypeAndParam_3() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
