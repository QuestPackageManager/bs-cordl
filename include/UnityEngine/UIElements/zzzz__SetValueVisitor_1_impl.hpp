#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SetValueVisitor_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__PathVisitor_impl.hpp"
#include "UnityEngine/UIElements/zzzz__SetValueVisitor_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ConverterGroup_def.hpp"
#include "UnityEngine/UIElements/zzzz__SetValueVisitor_1_def.hpp"
template <typename TSrcValue> inline void UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>::setStaticF___9(::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>*>::get>(
      std::forward<::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>*>(value));
}
template <typename TSrcValue> inline ::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>* UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>*>::get>();
}
template <typename TSrcValue> inline void UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSrcValue> inline ::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>* UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>::__cctor_b__9_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>*>::get(), "<.cctor>b__9_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*, false>(this, ___internal_method);
}
template <typename TSrcValue> inline void UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>::__cctor_b__9_1(::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>* v) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>*>::get(), "<.cctor>b__9_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, v);
}
template <typename TSrcValue> inline ::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>* UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>*>());
}
// Ctor Parameters []
template <typename TSrcValue> constexpr ::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>::SetValueVisitor_1___c() {}
template <typename TSrcValue> constexpr TSrcValue& UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::__cordl_internal_get_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
template <typename TSrcValue> constexpr TSrcValue const& UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::__cordl_internal_get_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
template <typename TSrcValue> constexpr void UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::__cordl_internal_set_Value(TSrcValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___Value, value);
}
template <typename TSrcValue> constexpr ::UnityEngine::UIElements::ConverterGroup*& UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::__cordl_internal_get__group_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____group_k__BackingField;
}
template <typename TSrcValue> constexpr ::UnityEngine::UIElements::ConverterGroup* const& UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::__cordl_internal_get__group_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____group_k__BackingField;
}
template <typename TSrcValue> constexpr void UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::__cordl_internal_set__group_k__BackingField(::UnityEngine::UIElements::ConverterGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____group_k__BackingField, value);
}
template <typename TSrcValue>
inline void UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>*, "Pool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>::get>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>*>(value));
}
template <typename TSrcValue>
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>* UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::getStaticF_Pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>*, "Pool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>::get>();
}
template <typename TSrcValue> inline ::UnityEngine::UIElements::ConverterGroup* UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::get_group() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>::get(),
                                                                             "get_group", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ConverterGroup*, false>(this, ___internal_method);
}
template <typename TSrcValue> inline void UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::set_group(::UnityEngine::UIElements::ConverterGroup* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>::get(), "set_group", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ConverterGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TSrcValue> inline void UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::Reset() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSrcValue>
template <typename TContainer, typename TValue>
inline void UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::VisitPath(::Unity::Properties::Property_2<TContainer, TValue>* property, ::ByRef<TContainer> container, ::ByRef<TValue> value) {
  auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>::get(), 7)));
  auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, property, container, value);
}
template <typename TSrcValue> inline void UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSrcValue> inline ::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>* UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>());
}
// Ctor Parameters []
template <typename TSrcValue> constexpr ::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::SetValueVisitor_1() {}
