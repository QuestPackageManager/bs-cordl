#pragma once
// IWYU pragma private; include "Unity/Properties/KeyValuePairPropertyBag_2.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_impl.hpp"
#include "Unity/Properties/zzzz__KeyValuePairPropertyBag_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "Unity/Properties/zzzz__DelegateProperty_2_def.hpp"
#include "Unity/Properties/zzzz__KeyValuePairPropertyBag_2_def.hpp"
template <typename TKey, typename TValue>
inline void Unity::Properties::__KeyValuePairPropertyBag_2____c<TKey, TValue>::setStaticF___9(::Unity::Properties::__KeyValuePairPropertyBag_2____c<TKey, TValue>* value) {
  ::cordl_internals::setStaticField<::Unity::Properties::__KeyValuePairPropertyBag_2____c<TKey, TValue>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__KeyValuePairPropertyBag_2____c<TKey, TValue>*>::get>(
      std::forward<::Unity::Properties::__KeyValuePairPropertyBag_2____c<TKey, TValue>*>(value));
}
template <typename TKey, typename TValue>
inline ::Unity::Properties::__KeyValuePairPropertyBag_2____c<TKey, TValue>* Unity::Properties::__KeyValuePairPropertyBag_2____c<TKey, TValue>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Unity::Properties::__KeyValuePairPropertyBag_2____c<TKey, TValue>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__KeyValuePairPropertyBag_2____c<TKey, TValue>*>::get>();
}
template <typename TKey, typename TValue> inline ::Unity::Properties::__KeyValuePairPropertyBag_2____c<TKey, TValue>* Unity::Properties::__KeyValuePairPropertyBag_2____c<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::__KeyValuePairPropertyBag_2____c<TKey, TValue>*>());
}
template <typename TKey, typename TValue> inline void Unity::Properties::__KeyValuePairPropertyBag_2____c<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__KeyValuePairPropertyBag_2____c<TKey, TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline TKey Unity::Properties::__KeyValuePairPropertyBag_2____c<TKey, TValue>::__cctor_b__7_0(ByRef<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__KeyValuePairPropertyBag_2____c<TKey, TValue>*>::get(), "<.cctor>b__7_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method, container);
}
template <typename TKey, typename TValue>
inline TValue Unity::Properties::__KeyValuePairPropertyBag_2____c<TKey, TValue>::__cctor_b__7_1(ByRef<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::__KeyValuePairPropertyBag_2____c<TKey, TValue>*>::get(), "<.cctor>b__7_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, container);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Unity::Properties::__KeyValuePairPropertyBag_2____c<TKey, TValue>::__KeyValuePairPropertyBag_2____c() {}
template <typename TKey, typename TValue>
inline void Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::setStaticF_s_KeyProperty(
    ::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>* value) {
  ::cordl_internals::setStaticField<::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>*, "s_KeyProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>*>::get>(
      std::forward<::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>*>(value));
}
template <typename TKey, typename TValue>
inline ::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>*
Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::getStaticF_s_KeyProperty() {
  return ::cordl_internals::getStaticField<::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TKey>*, "s_KeyProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>*>::get>();
}
template <typename TKey, typename TValue>
inline void Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::setStaticF_s_ValueProperty(
    ::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>* value) {
  ::cordl_internals::setStaticField<::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>*, "s_ValueProperty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>*>::get>(
      std::forward<::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>*>(value));
}
template <typename TKey, typename TValue>
inline ::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>*
Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::getStaticF_s_ValueProperty() {
  return ::cordl_internals::getStaticField<::Unity::Properties::DelegateProperty_2<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, TValue>*, "s_ValueProperty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>*>::get>();
}
template <typename TKey, typename TValue> inline ::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>* Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>*>());
}
template <typename TKey, typename TValue> inline void Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Unity::Properties::KeyValuePairPropertyBag_2<TKey, TValue>::KeyValuePairPropertyBag_2() {}
