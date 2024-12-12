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
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::EventBase_1___c<T>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1___c<T>*>::get>(
      std::forward<::UnityEngine::UIElements::EventBase_1___c<T>*>(value));
}
template <typename T> inline ::UnityEngine::UIElements::EventBase_1___c<T>* UnityEngine::UIElements::EventBase_1___c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::EventBase_1___c<T>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1___c<T>*>::get>();
}
template <typename T> inline void UnityEngine::UIElements::EventBase_1___c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1___c<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::EventBase_1___c<T>::__cctor_b__15_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1___c<T>*>::get(),
                                                                             "<.cctor>b__15_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::EventBase_1___c<T>* UnityEngine::UIElements::EventBase_1___c<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::EventBase_1___c<T>*>());
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
  ::cordl_internals::setStaticField<int64_t, "s_TypeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get>(std::forward<int64_t>(value));
}
template <typename T> inline int64_t UnityEngine::UIElements::EventBase_1<T>::getStaticF_s_TypeId() {
  return ::cordl_internals::getStaticField<int64_t, "s_TypeId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get>();
}
template <typename T> inline void UnityEngine::UIElements::EventBase_1<T>::setStaticF_s_Pool(::UnityEngine::UIElements::ObjectPool_1<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::ObjectPool_1<T>*, "s_Pool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get>(
      std::forward<::UnityEngine::UIElements::ObjectPool_1<T>*>(value));
}
template <typename T> inline ::UnityEngine::UIElements::ObjectPool_1<T>* UnityEngine::UIElements::EventBase_1<T>::getStaticF_s_Pool() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ObjectPool_1<T>*, "s_Pool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get>();
}
template <typename T> inline void UnityEngine::UIElements::EventBase_1<T>::setStaticF_EventCategory(::UnityEngine::UIElements::EventCategory value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::EventCategory, "EventCategory", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get>(
      std::forward<::UnityEngine::UIElements::EventCategory>(value));
}
template <typename T> inline ::UnityEngine::UIElements::EventCategory UnityEngine::UIElements::EventBase_1<T>::getStaticF_EventCategory() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::EventCategory, "EventCategory",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get>();
}
template <typename T> inline void UnityEngine::UIElements::EventBase_1<T>::SetCreateFunction(::System::Func_1<T>* createMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get(), "SetCreateFunction",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, createMethod);
}
template <typename T> inline void UnityEngine::UIElements::EventBase_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline int64_t UnityEngine::UIElements::EventBase_1<T>::TypeId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get(), "TypeId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::EventBase_1<T>::Init() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::EventBase_1<T>::GetPooled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get(), "GetPooled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::EventBase_1<T>::GetPooled(::UnityEngine::UIElements::EventBase* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get(), "GetPooled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, e);
}
template <typename T> inline void UnityEngine::UIElements::EventBase_1<T>::ReleasePooled(T evt) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get(), "ReleasePooled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, evt);
}
template <typename T> inline void UnityEngine::UIElements::EventBase_1<T>::Acquire() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::EventBase_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline int64_t UnityEngine::UIElements::EventBase_1<T>::get_eventTypeId() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventBase_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::EventBase_1<T>* UnityEngine::UIElements::EventBase_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::EventBase_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::EventBase_1<T>::EventBase_1() {}
