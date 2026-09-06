#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventBase_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCategory_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectPool_1_def.hpp"
template <typename T> inline void UnityEngine::UIElements::EventBase_1___c<T>::setStaticF___9(::UnityEngine::UIElements::EventBase_1___c<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::EventBase_1___c<T>*, "<>9", ::UnityEngine::UIElements::EventBase_1___c<T>*>(
      std::forward<::UnityEngine::UIElements::EventBase_1___c<T>*>(value));
}
template <typename T> inline ::UnityEngine::UIElements::EventBase_1___c<T>* UnityEngine::UIElements::EventBase_1___c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::EventBase_1___c<T>*, "<>9", ::UnityEngine::UIElements::EventBase_1___c<T>*>();
}
template <typename T> inline void UnityEngine::UIElements::EventBase_1___c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventBase_1___c<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::EventBase_1___c<T>::__cctor_b__15_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventBase_1___c<T>*>(), { "<.cctor>b__15_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::EventBase_1___c<T>* UnityEngine::UIElements::EventBase_1___c<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::EventBase_1___c<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::EventBase_1___c<T>::EventBase_1___c() {}
template <typename T> constexpr int32_t& UnityEngine::UIElements::EventBase_1<T>::__cordl_internal_get_m_RefCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RefCount;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::EventBase_1<T>::__cordl_internal_get_m_RefCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RefCount;
}
template <typename T> constexpr void UnityEngine::UIElements::EventBase_1<T>::__cordl_internal_set_m_RefCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RefCount = value;
}
template <typename T> inline void UnityEngine::UIElements::EventBase_1<T>::setStaticF_s_TypeId(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "s_TypeId", ::UnityEngine::UIElements::EventBase_1<T>*>(std::forward<int64_t>(value));
}
template <typename T> inline int64_t UnityEngine::UIElements::EventBase_1<T>::getStaticF_s_TypeId() {
  return ::cordl_internals::getStaticField<int64_t, "s_TypeId", ::UnityEngine::UIElements::EventBase_1<T>*>();
}
template <typename T> inline void UnityEngine::UIElements::EventBase_1<T>::setStaticF_s_Pool(::UnityEngine::UIElements::ObjectPool_1<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::ObjectPool_1<T>*, "s_Pool", ::UnityEngine::UIElements::EventBase_1<T>*>(
      std::forward<::UnityEngine::UIElements::ObjectPool_1<T>*>(value));
}
template <typename T> inline ::UnityEngine::UIElements::ObjectPool_1<T>* UnityEngine::UIElements::EventBase_1<T>::getStaticF_s_Pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ObjectPool_1<T>*, "s_Pool", ::UnityEngine::UIElements::EventBase_1<T>*>();
}
template <typename T> inline void UnityEngine::UIElements::EventBase_1<T>::setStaticF_EventCategory(::UnityEngine::UIElements::EventCategory value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::EventCategory, "EventCategory", ::UnityEngine::UIElements::EventBase_1<T>*>(
      std::forward<::UnityEngine::UIElements::EventCategory>(value));
}
template <typename T> inline ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventBase_1<T>::getStaticF_EventCategory() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::EventCategory, "EventCategory", ::UnityEngine::UIElements::EventBase_1<T>*>();
}
template <typename T> inline void UnityEngine::UIElements::EventBase_1<T>::SetCreateFunction(::System::Func_1<T>* createMethod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventBase_1<T>*>(), { "SetCreateFunction", {}, { ::i2c::type_of<::System::Func_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, createMethod);
}
template <typename T> inline void UnityEngine::UIElements::EventBase_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventBase_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline int64_t UnityEngine::UIElements::EventBase_1<T>::TypeId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventBase_1<T>*>(), { "TypeId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::EventBase_1<T>::Init() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::EventBase_1<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::EventBase_1<T>::GetPooled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventBase_1<T>*>(), { "GetPooled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::EventBase_1<T>::GetPooled(::UnityEngine::UIElements::EventBase* e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventBase_1<T>*>(), { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, e);
}
template <typename T> inline void UnityEngine::UIElements::EventBase_1<T>::ReleasePooled(T evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventBase_1<T>*>(), { "ReleasePooled", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt);
}
template <typename T> inline void UnityEngine::UIElements::EventBase_1<T>::Acquire() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::EventBase_1<T>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::EventBase_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventBase_1<T>*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline int64_t UnityEngine::UIElements::EventBase_1<T>::get_eventTypeId() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::EventBase_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::EventBase_1<T>* UnityEngine::UIElements::EventBase_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::EventBase_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::EventBase_1<T>::EventBase_1() {}
