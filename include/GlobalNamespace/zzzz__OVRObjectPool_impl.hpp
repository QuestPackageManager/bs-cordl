#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
template <typename T> inline void GlobalNamespace::__OVRObjectPool__Storage_1<T>::setStaticF_HashSet(::System::Collections::Generic::HashSet_1<T>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<T>*, "HashSet",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__Storage_1<T>*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<T>*>(value));
}
template <typename T> inline ::System::Collections::Generic::HashSet_1<T>* GlobalNamespace::__OVRObjectPool__Storage_1<T>::getStaticF_HashSet() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<T>*, "HashSet",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__Storage_1<T>*>::get>();
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__OVRObjectPool__Storage_1<T>::__OVRObjectPool__Storage_1() {}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::__OVRObjectPool__ListScope_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__OVRObjectPool__ListScope_1<T>::_ctor(ByRef<::System::Collections::Generic::List_1<T>*> list) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__ListScope_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::List_1<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list);
}
template <typename T> inline void GlobalNamespace::__OVRObjectPool__ListScope_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__ListScope_1<T>>::get(),
                                                                             "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::List_1<T>*", modifiers: "", def_value: Some("nullptr") }]
template <typename T> constexpr ::GlobalNamespace::__OVRObjectPool__ListScope_1<T>::__OVRObjectPool__ListScope_1(::System::Collections::Generic::List_1<T>* _list) noexcept {
  this->_list = _list;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__OVRObjectPool__ListScope_1<T>::__OVRObjectPool__ListScope_1() {}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr GlobalNamespace::__OVRObjectPool__DictionaryScope_2<TKey, TValue>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename TKey, typename TValue>
inline void GlobalNamespace::__OVRObjectPool__DictionaryScope_2<TKey, TValue>::_ctor(ByRef<::System::Collections::Generic::Dictionary_2<TKey, TValue>*> dictionary) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__DictionaryScope_2<TKey, TValue>>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dictionary);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::__OVRObjectPool__DictionaryScope_2<TKey, TValue>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__DictionaryScope_2<TKey, TValue>>::get(), "Dispose",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_dictionary", ty: "::System::Collections::Generic::Dictionary_2<TKey,TValue>*", modifiers: "", def_value: Some("nullptr") }]
template <typename TKey, typename TValue>
constexpr ::GlobalNamespace::__OVRObjectPool__DictionaryScope_2<TKey, TValue>::__OVRObjectPool__DictionaryScope_2(::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dictionary) noexcept {
  this->_dictionary = _dictionary;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::GlobalNamespace::__OVRObjectPool__DictionaryScope_2<TKey, TValue>::__OVRObjectPool__DictionaryScope_2() {}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::__OVRObjectPool__HashSetScope_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__OVRObjectPool__HashSetScope_1<T>::_ctor(ByRef<::System::Collections::Generic::HashSet_1<T>*> set) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__HashSetScope_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::HashSet_1<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, set);
}
template <typename T> inline void GlobalNamespace::__OVRObjectPool__HashSetScope_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__HashSetScope_1<T>>::get(),
                                                                             "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<T>*", modifiers: "", def_value: Some("nullptr") }]
template <typename T> constexpr ::GlobalNamespace::__OVRObjectPool__HashSetScope_1<T>::__OVRObjectPool__HashSetScope_1(::System::Collections::Generic::HashSet_1<T>* _set) noexcept {
  this->_set = _set;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__OVRObjectPool__HashSetScope_1<T>::__OVRObjectPool__HashSetScope_1() {}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::__OVRObjectPool__StackScope_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__OVRObjectPool__StackScope_1<T>::_ctor(ByRef<::System::Collections::Generic::Stack_1<T>*> stack) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__StackScope_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Stack_1<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stack);
}
template <typename T> inline void GlobalNamespace::__OVRObjectPool__StackScope_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__StackScope_1<T>>::get(),
                                                                             "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<T>*", modifiers: "", def_value: Some("nullptr") }]
template <typename T> constexpr ::GlobalNamespace::__OVRObjectPool__StackScope_1<T>::__OVRObjectPool__StackScope_1(::System::Collections::Generic::Stack_1<T>* _stack) noexcept {
  this->_stack = _stack;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__OVRObjectPool__StackScope_1<T>::__OVRObjectPool__StackScope_1() {}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::__OVRObjectPool__QueueScope_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__OVRObjectPool__QueueScope_1<T>::_ctor(ByRef<::System::Collections::Generic::Queue_1<T>*> queue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__QueueScope_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Collections::Generic::Queue_1<T>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, queue);
}
template <typename T> inline void GlobalNamespace::__OVRObjectPool__QueueScope_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__QueueScope_1<T>>::get(),
                                                                             "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_queue", ty: "::System::Collections::Generic::Queue_1<T>*", modifiers: "", def_value: Some("nullptr") }]
template <typename T> constexpr ::GlobalNamespace::__OVRObjectPool__QueueScope_1<T>::__OVRObjectPool__QueueScope_1(::System::Collections::Generic::Queue_1<T>* _queue) noexcept {
  this->_queue = _queue;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__OVRObjectPool__QueueScope_1<T>::__OVRObjectPool__QueueScope_1() {}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::__OVRObjectPool__ItemScope_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void GlobalNamespace::__OVRObjectPool__ItemScope_1<T>::_ctor(ByRef<T> item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__ItemScope_1<T>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::__OVRObjectPool__ItemScope_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRObjectPool__ItemScope_1<T>>::get(),
                                                                             "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_item", ty: "T", modifiers: "", def_value: Some("nullptr") }]
template <typename T> constexpr ::GlobalNamespace::__OVRObjectPool__ItemScope_1<T>::__OVRObjectPool__ItemScope_1(T _item) noexcept {
  this->_item = _item;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::__OVRObjectPool__ItemScope_1<T>::__OVRObjectPool__ItemScope_1() {}
template <typename T> inline T GlobalNamespace::OVRObjectPool::Get() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRObjectPool*>::get(), "Get",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* GlobalNamespace::OVRObjectPool::List() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRObjectPool*>::get(), "List",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*, false>(nullptr, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* GlobalNamespace::OVRObjectPool::Dictionary() {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRObjectPool*>::get(), "Dictionary",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey, TValue>*, false>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::HashSet_1<T>* GlobalNamespace::OVRObjectPool::HashSet() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRObjectPool*>::get(), "HashSet",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<T>*, false>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::Stack_1<T>* GlobalNamespace::OVRObjectPool::Stack() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRObjectPool*>::get(), "Stack",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Stack_1<T>*, false>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::Queue_1<T>* GlobalNamespace::OVRObjectPool::Queue() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRObjectPool*>::get(), "Queue",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Queue_1<T>*, false>(nullptr, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OVRObjectPool::Return(T obj) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRObjectPool*>::get(), "Return",
                                                                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
template <typename T> inline void GlobalNamespace::OVRObjectPool::Return(::System::Collections::Generic::HashSet_1<T>* set) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRObjectPool*>::get(), "Return",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, set);
}
template <typename T> inline void GlobalNamespace::OVRObjectPool::Return(::System::Collections::Generic::Stack_1<T>* stack) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRObjectPool*>::get(), "Return",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Stack_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, stack);
}
template <typename T> inline void GlobalNamespace::OVRObjectPool::Return(::System::Collections::Generic::Queue_1<T>* queue) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRObjectPool*>::get(), "Return",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Queue_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, queue);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRObjectPool::OVRObjectPool() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
