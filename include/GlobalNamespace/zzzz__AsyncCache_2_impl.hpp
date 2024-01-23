#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AsyncCache_2_def.hpp"
#include "GlobalNamespace/zzzz__AsyncCache_2_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Lazy_1_def.hpp"
template <typename TKey, typename TValue> constexpr TKey& GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey, TValue>::__cordl_internal_get_toAdd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toAdd;
}
template <typename TKey, typename TValue> constexpr TKey const& GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey, TValue>::__cordl_internal_get_toAdd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toAdd;
}
template <typename TKey, typename TValue> constexpr void GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey, TValue>::__cordl_internal_set_toAdd(TKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___toAdd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
constexpr ::GlobalNamespace::AsyncCache_2<TKey, TValue>*& GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey, TValue>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AsyncCache_2<TKey, TValue>*> const&
GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey, TValue>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TValue>
constexpr void GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey, TValue>::__cordl_internal_set___4__this(::GlobalNamespace::AsyncCache_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
inline ::GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey, TValue>* GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey, TValue>*>());
}
template <typename TKey, typename TValue> inline void GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey, TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Threading::Tasks::Task_1<TValue>* GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey, TValue>::_get_Item_b__1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey, TValue>*>::get(), "<get_Item>b__1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TValue>*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::GlobalNamespace::__AsyncCache_2____c__DisplayClass4_0<TKey, TValue>::__AsyncCache_2____c__DisplayClass4_0() {}
template <typename TKey, typename TValue>
constexpr ::System::Func_2<TKey, ::System::Threading::Tasks::Task_1<TValue>*>*& GlobalNamespace::AsyncCache_2<TKey, TValue>::__cordl_internal_get__valueFactory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueFactory;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TKey, ::System::Threading::Tasks::Task_1<TValue>*>*> const&
GlobalNamespace::AsyncCache_2<TKey, TValue>::__cordl_internal_get__valueFactory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueFactory;
}
template <typename TKey, typename TValue>
constexpr void GlobalNamespace::AsyncCache_2<TKey, TValue>::__cordl_internal_set__valueFactory(::System::Func_2<TKey, ::System::Threading::Tasks::Task_1<TValue>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____valueFactory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, ::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>*>*&
GlobalNamespace::AsyncCache_2<TKey, TValue>::__cordl_internal_get__map() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____map;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, ::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>*>*> const&
GlobalNamespace::AsyncCache_2<TKey, TValue>::__cordl_internal_get__map() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____map;
}
template <typename TKey, typename TValue>
constexpr void GlobalNamespace::AsyncCache_2<TKey, TValue>::__cordl_internal_set__map(
    ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, ::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____map)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
inline ::GlobalNamespace::AsyncCache_2<TKey, TValue>* GlobalNamespace::AsyncCache_2<TKey, TValue>::New_ctor(::System::Func_2<TKey, ::System::Threading::Tasks::Task_1<TValue>*>* valueFactory) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AsyncCache_2<TKey, TValue>*>(valueFactory));
}
template <typename TKey, typename TValue> inline void GlobalNamespace::AsyncCache_2<TKey, TValue>::_ctor(::System::Func_2<TKey, ::System::Threading::Tasks::Task_1<TValue>*>* valueFactory) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncCache_2<TKey, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TKey, ::System::Threading::Tasks::Task_1<TValue>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, valueFactory);
}
template <typename TKey, typename TValue> inline ::System::Threading::Tasks::Task_1<TValue>* GlobalNamespace::AsyncCache_2<TKey, TValue>::get_Item(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncCache_2<TKey, TValue>*>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TValue>*, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::AsyncCache_2<TKey, TValue>::RemoveKey(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncCache_2<TKey, TValue>*>::get(), "RemoveKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline ::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>* GlobalNamespace::AsyncCache_2<TKey, TValue>::_get_Item_b__4_0(TKey toAdd) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncCache_2<TKey, TValue>*>::get(), "<get_Item>b__4_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Lazy_1<::System::Threading::Tasks::Task_1<TValue>*>*, false>(this, ___internal_method, toAdd);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::GlobalNamespace::AsyncCache_2<TKey, TValue>::AsyncCache_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
