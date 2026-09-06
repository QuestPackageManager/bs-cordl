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
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>*, "<>9", ::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>*>(
      std::forward<::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>*>(value));
}
template <typename TSrcValue> inline ::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>* UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>*, "<>9", ::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>*>();
}
template <typename TSrcValue> inline void UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TSrcValue> inline ::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>* UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>::__cctor_b__9_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>*>(), { "<.cctor>b__9_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>(this, ___internal_method);
}
template <typename TSrcValue> inline void UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>::__cctor_b__9_1(::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>* v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>*>(),
                                                                                         { "<.cctor>b__9_1", {}, { ::i2c::type_of<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
template <typename TSrcValue> inline ::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>* UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::SetValueVisitor_1___c<TSrcValue>*>());
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
  this->___Value = value;
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
  this->____group_k__BackingField = value;
}
template <typename TSrcValue>
inline void UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>*, "Pool", ::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>(
      std::forward<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>*>(value));
}
template <typename TSrcValue>
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>* UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::getStaticF_Pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>*, "Pool",
                                           ::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>();
}
template <typename TSrcValue> inline ::UnityEngine::UIElements::ConverterGroup* UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::get_group() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>(), { "get_group", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ConverterGroup*>(this, ___internal_method);
}
template <typename TSrcValue> inline void UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::set_group(::UnityEngine::UIElements::ConverterGroup* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>(),
                                                                                         { "set_group", {}, { ::i2c::type_of<::UnityEngine::UIElements::ConverterGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TSrcValue> inline void UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::Reset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TSrcValue>
template <typename TContainer, typename TValue>
inline void UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::VisitPath(::Unity::Properties::Property_2<TContainer, TValue>* property, ::by_ref<TContainer> container, ::by_ref<TValue> value) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>(), 7 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TContainer>(), ::i2c::class_of<TValue>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, container, value);
}
template <typename TSrcValue> inline void UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TSrcValue> inline ::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>* UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>*>());
}
// Ctor Parameters []
template <typename TSrcValue> constexpr ::UnityEngine::UIElements::SetValueVisitor_1<TSrcValue>::SetValueVisitor_1() {}
