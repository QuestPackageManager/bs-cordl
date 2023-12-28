#pragma once
#include "IntervalTree/zzzz__RangeValuePair_2_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue> constexpr IntervalTree::RangeValuePair_2<TKey, TValue>::operator ::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*() {
  return static_cast<::System::IEquatable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename TKey, typename TValue> inline TKey IntervalTree::RangeValuePair_2<TKey, TValue>::get_From() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get(), "get_From",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TKey IntervalTree::RangeValuePair_2<TKey, TValue>::get_To() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get(), "get_To",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TValue IntervalTree::RangeValuePair_2<TKey, TValue>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get(), "get_Value",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void IntervalTree::RangeValuePair_2<TKey, TValue>::_ctor(TKey from, TKey to, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, from, to, value);
}
template <typename TKey, typename TValue> inline ::StringW IntervalTree::RangeValuePair_2<TKey, TValue>::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline int32_t IntervalTree::RangeValuePair_2<TKey, TValue>::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get(),
                                                                             "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool IntervalTree::RangeValuePair_2<TKey, TValue>::Equals(::IntervalTree::RangeValuePair_2<TKey, TValue> other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename TKey, typename TValue> inline bool IntervalTree::RangeValuePair_2<TKey, TValue>::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename TKey, typename TValue>
inline bool IntervalTree::RangeValuePair_2<TKey, TValue>::op_Equality(::IntervalTree::RangeValuePair_2<TKey, TValue> left, ::IntervalTree::RangeValuePair_2<TKey, TValue> right) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get(), "op_Equality", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
template <typename TKey, typename TValue>
inline bool IntervalTree::RangeValuePair_2<TKey, TValue>::op_Inequality(::IntervalTree::RangeValuePair_2<TKey, TValue> left, ::IntervalTree::RangeValuePair_2<TKey, TValue> right) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get(), "op_Inequality", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::IntervalTree::RangeValuePair_2<TKey, TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
// Ctor Parameters [CppParam { name: "_From_k__BackingField", ty: "TKey", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_To_k__BackingField", ty: "TKey", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "_Value_k__BackingField", ty: "TValue", modifiers: "", def_value: Some("nullptr") }]
template <typename TKey, typename TValue>
constexpr ::IntervalTree::RangeValuePair_2<TKey, TValue>::RangeValuePair_2(TKey _From_k__BackingField, TKey _To_k__BackingField, TValue _Value_k__BackingField) noexcept {
  this->_From_k__BackingField = _From_k__BackingField;
  this->_To_k__BackingField = _To_k__BackingField;
  this->_Value_k__BackingField = _Value_k__BackingField;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::IntervalTree::RangeValuePair_2<TKey, TValue>::RangeValuePair_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
