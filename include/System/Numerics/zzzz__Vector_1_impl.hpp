#pragma once
#include "System/Numerics/zzzz__Register_impl.hpp"
#include "System/Numerics/zzzz__Vector_1_impl.hpp"
#include "System/Numerics/zzzz__Vector_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/Numerics/zzzz__Register_def.hpp"
#include "System/Numerics/zzzz__Vector_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
/// @brief Convert operator to "::System::IEquatable_1<::System::Numerics::Vector_1<T>>"
template <typename T> constexpr System::Numerics::Vector_1<T>::operator ::System::IEquatable_1<::System::Numerics::Vector_1<T>>*() {
  return static_cast<::System::IEquatable_1<::System::Numerics::Vector_1<T>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IFormattable"
template <typename T> constexpr System::Numerics::Vector_1<T>::operator ::System::IFormattable*() {
  return static_cast<::System::IFormattable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void System::Numerics::Vector_1<T>::setStaticF_s_count(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_count", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get>(std::forward<int32_t>(value));
}
template <typename T> inline int32_t System::Numerics::Vector_1<T>::getStaticF_s_count() {
  return ::cordl_internals::getStaticField<int32_t, "s_count", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get>();
}
template <typename T> inline void System::Numerics::Vector_1<T>::setStaticF_s_zero(::System::Numerics::Vector_1<T> value) {
  ::cordl_internals::setStaticField<::System::Numerics::Vector_1<T>, "s_zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get>(
      std::forward<::System::Numerics::Vector_1<T>>(value));
}
template <typename T> inline ::System::Numerics::Vector_1<T> System::Numerics::Vector_1<T>::getStaticF_s_zero() {
  return ::cordl_internals::getStaticField<::System::Numerics::Vector_1<T>, "s_zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get>();
}
template <typename T> inline void System::Numerics::Vector_1<T>::setStaticF_s_one(::System::Numerics::Vector_1<T> value) {
  ::cordl_internals::setStaticField<::System::Numerics::Vector_1<T>, "s_one", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get>(
      std::forward<::System::Numerics::Vector_1<T>>(value));
}
template <typename T> inline ::System::Numerics::Vector_1<T> System::Numerics::Vector_1<T>::getStaticF_s_one() {
  return ::cordl_internals::getStaticField<::System::Numerics::Vector_1<T>, "s_one", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get>();
}
template <typename T> inline void System::Numerics::Vector_1<T>::setStaticF_s_allOnes(::System::Numerics::Vector_1<T> value) {
  ::cordl_internals::setStaticField<::System::Numerics::Vector_1<T>, "s_allOnes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get>(
      std::forward<::System::Numerics::Vector_1<T>>(value));
}
template <typename T> inline ::System::Numerics::Vector_1<T> System::Numerics::Vector_1<T>::getStaticF_s_allOnes() {
  return ::cordl_internals::getStaticField<::System::Numerics::Vector_1<T>, "s_allOnes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get>();
}
template <typename T> inline int32_t System::Numerics::Vector_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get(), "get_Count",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Numerics::Vector_1<T> System::Numerics::Vector_1<T>::get_Zero() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get(), "get_Zero",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::Vector_1<T>, false>(nullptr, ___internal_method);
}
template <typename T> inline int32_t System::Numerics::Vector_1<T>::InitializeCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get(), "InitializeCount",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
template <typename T> inline void System::Numerics::Vector_1<T>::_ctor(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void System::Numerics::Vector_1<T>::_ctor(::cordl_internals::Ptr<void> dataPointer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataPointer);
}
template <typename T> inline void System::Numerics::Vector_1<T>::_ctor(::cordl_internals::Ptr<void> dataPointer, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataPointer, offset);
}
template <typename T> inline void System::Numerics::Vector_1<T>::_ctor(ByRef<::System::Numerics::Register> existingRegister) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Numerics::Register>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, existingRegister);
}
template <typename T> inline T System::Numerics::Vector_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get(), "get_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, index);
}
template <typename T> inline bool System::Numerics::Vector_1<T>::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T> inline bool System::Numerics::Vector_1<T>::Equals(::System::Numerics::Vector_1<T> other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename T> inline int32_t System::Numerics::Vector_1<T>::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get(), "GetHashCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline ::StringW System::Numerics::Vector_1<T>::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T> inline ::StringW System::Numerics::Vector_1<T>::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get(), "ToString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, format, formatProvider);
}
template <typename T> inline bool System::Numerics::Vector_1<T>::op_Equality(::System::Numerics::Vector_1<T> left, ::System::Numerics::Vector_1<T> right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get(), "op_Equality", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<T>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
template <typename T> inline bool System::Numerics::Vector_1<T>::op_Inequality(::System::Numerics::Vector_1<T> left, ::System::Numerics::Vector_1<T> right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get(), "op_Inequality", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<T>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
template <typename T> inline ::System::Numerics::Vector_1<uint64_t> System::Numerics::Vector_1<T>::op_Explicit___System__Numerics__Vector_1_uint64_t_(::System::Numerics::Vector_1<T> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get(), "op_Explicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::Vector_1<uint64_t>, false>(nullptr, ___internal_method, value);
}
template <typename T> inline ::System::Numerics::Vector_1<T> System::Numerics::Vector_1<T>::Equals(::System::Numerics::Vector_1<T> left, ::System::Numerics::Vector_1<T> right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<T>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Numerics::Vector_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Numerics::Vector_1<T>, false>(nullptr, ___internal_method, left, right);
}
template <typename T> inline bool System::Numerics::Vector_1<T>::ScalarEquals(T left, T right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get(), "ScalarEquals", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
template <typename T> inline T System::Numerics::Vector_1<T>::GetOneValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get(), "GetOneValue",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline T System::Numerics::Vector_1<T>::GetAllBitsSetValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Numerics::Vector_1<T>>::get(), "GetAllBitsSetValue",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_cordl_register", ty: "::System::Numerics::Register", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::Numerics::Vector_1<T>::Vector_1(::System::Numerics::Register _cordl_register) noexcept {
  this->_cordl_register = _cordl_register;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Numerics::Vector_1<T>::Vector_1() {}
// Ctor Parameters [CppParam { name: "_placeholder", ty: "::System::Numerics::Vector_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_byte", ty: "uint8_t", modifiers: "", def_value:
// Some("{}") }]
template <typename T> constexpr ::System::Numerics::__Vector_1__VectorSizeHelper<T>::__Vector_1__VectorSizeHelper(::System::Numerics::Vector_1<T> _placeholder, uint8_t _byte) noexcept {
  this->_placeholder = _placeholder;
  this->_byte = _byte;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Numerics::__Vector_1__VectorSizeHelper<T>::__Vector_1__VectorSizeHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
