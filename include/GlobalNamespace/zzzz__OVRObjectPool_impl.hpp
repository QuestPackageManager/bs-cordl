#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRObjectPool.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRObjectPool_IPoolObject.OnGet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRObjectPool_IPoolObject::*)()>(&::GlobalNamespace::OVRObjectPool_IPoolObject::OnGet)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool_IPoolObject*>(), { ::i2c::class_of<::GlobalNamespace::OVRObjectPool_IPoolObject*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRObjectPool_IPoolObject.OnReturn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRObjectPool_IPoolObject::*)()>(&::GlobalNamespace::OVRObjectPool_IPoolObject::OnReturn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool_IPoolObject*>(), { ::i2c::class_of<::GlobalNamespace::OVRObjectPool_IPoolObject*>(), 1 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRObjectPool_IPoolObject::OnGet() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRObjectPool_IPoolObject*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRObjectPool_IPoolObject::OnReturn() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRObjectPool_IPoolObject*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::Storage_1_OVRObjectPool___c<T>::setStaticF___9(::GlobalNamespace::Storage_1_OVRObjectPool___c<T>* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::Storage_1_OVRObjectPool___c<T>*, "<>9", ::GlobalNamespace::Storage_1_OVRObjectPool___c<T>*>(
      std::forward<::GlobalNamespace::Storage_1_OVRObjectPool___c<T>*>(value));
}
template <typename T> inline ::GlobalNamespace::Storage_1_OVRObjectPool___c<T>* GlobalNamespace::Storage_1_OVRObjectPool___c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::Storage_1_OVRObjectPool___c<T>*, "<>9", ::GlobalNamespace::Storage_1_OVRObjectPool___c<T>*>();
}
template <typename T> inline void GlobalNamespace::Storage_1_OVRObjectPool___c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Storage_1_OVRObjectPool___c<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::Storage_1_OVRObjectPool___c<T>::__cctor_b__5_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Storage_1_OVRObjectPool___c<T>*>(), { "<.cctor>b__5_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::Storage_1_OVRObjectPool___c<T>* GlobalNamespace::Storage_1_OVRObjectPool___c<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Storage_1_OVRObjectPool___c<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::Storage_1_OVRObjectPool___c<T>::Storage_1_OVRObjectPool___c() {}
template <typename T> inline void GlobalNamespace::OVRObjectPool_Storage_1<T>::setStaticF_s_hashSet(::System::Collections::Generic::HashSet_1<T>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<T>*, "s_hashSet", ::GlobalNamespace::OVRObjectPool_Storage_1<T>*>(
      std::forward<::System::Collections::Generic::HashSet_1<T>*>(value));
}
template <typename T> inline ::System::Collections::Generic::HashSet_1<T>* GlobalNamespace::OVRObjectPool_Storage_1<T>::getStaticF_s_hashSet() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<T>*, "s_hashSet", ::GlobalNamespace::OVRObjectPool_Storage_1<T>*>();
}
template <typename T> inline void GlobalNamespace::OVRObjectPool_Storage_1<T>::setStaticF_Clear(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "Clear", ::GlobalNamespace::OVRObjectPool_Storage_1<T>*>(std::forward<::System::Action*>(value));
}
template <typename T> inline ::System::Action* GlobalNamespace::OVRObjectPool_Storage_1<T>::getStaticF_Clear() {
  return ::cordl_internals::getStaticField<::System::Action*, "Clear", ::GlobalNamespace::OVRObjectPool_Storage_1<T>*>();
}
template <typename T> inline bool GlobalNamespace::OVRObjectPool_Storage_1<T>::Remove(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool_Storage_1<T>*>(), { "Remove", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, item);
}
template <typename T> inline bool GlobalNamespace::OVRObjectPool_Storage_1<T>::Add(T item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool_Storage_1<T>*>(), { "Add", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, item);
}
template <typename T> inline T GlobalNamespace::OVRObjectPool_Storage_1<T>::GetOrCreate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool_Storage_1<T>*>(), { "GetOrCreate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OVRObjectPool_Storage_1<T>::OVRObjectPool_Storage_1() {}
template <typename T> inline void GlobalNamespace::OVRObjectPool_ListScope_1<T>::_ctor(::by_ref<::System::Collections::Generic::List_1<T>*> list) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool_ListScope_1<T>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
template <typename T>
inline void GlobalNamespace::OVRObjectPool_ListScope_1<T>::_ctor(::System::Collections::Generic::IEnumerable_1<T>* source, ::by_ref<::System::Collections::Generic::List_1<T>*> list) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool_ListScope_1<T>>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, source, list);
}
template <typename T> inline void GlobalNamespace::OVRObjectPool_ListScope_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool_ListScope_1<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::OVRObjectPool_ListScope_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* GlobalNamespace::OVRObjectPool_ListScope_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::List_1<T>*", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::GlobalNamespace::OVRObjectPool_ListScope_1<T>::OVRObjectPool_ListScope_1(::System::Collections::Generic::List_1<T>* _list) noexcept {
  this->_list = _list;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OVRObjectPool_ListScope_1<T>::OVRObjectPool_ListScope_1() {}
template <typename T>
inline void GlobalNamespace::OVRObjectPool_TaskScope_1<T>::_ctor(::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::OVRTask_1<T>>*> tasks,
                                                                 ::by_ref<::System::Collections::Generic::List_1<T>*> results) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool_TaskScope_1<T>>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::OVRTask_1<T>>*>>(),
                                                                                             ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tasks, results);
}
template <typename T> inline void GlobalNamespace::OVRObjectPool_TaskScope_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool_TaskScope_1<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::OVRObjectPool_TaskScope_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* GlobalNamespace::OVRObjectPool_TaskScope_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_tasks", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<T>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_results",
// ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<T>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::OVRObjectPool_TaskScope_1<T>::OVRObjectPool_TaskScope_1(::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRTask_1<T>> _tasks,
                                                                                     ::GlobalNamespace::OVRObjectPool_ListScope_1<T> _results) noexcept {
  this->_tasks = _tasks;
  this->_results = _results;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OVRObjectPool_TaskScope_1<T>::OVRObjectPool_TaskScope_1() {}
template <typename TKey, typename TValue>
inline void GlobalNamespace::OVRObjectPool_DictionaryScope_2<TKey, TValue>::_ctor(::by_ref<::System::Collections::Generic::Dictionary_2<TKey, TValue>*> dictionary) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool_DictionaryScope_2<TKey, TValue>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dictionary);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::OVRObjectPool_DictionaryScope_2<TKey, TValue>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool_DictionaryScope_2<TKey, TValue>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr GlobalNamespace::OVRObjectPool_DictionaryScope_2<TKey, TValue>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr ::System::IDisposable* GlobalNamespace::OVRObjectPool_DictionaryScope_2<TKey, TValue>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_dictionary", ty: "::System::Collections::Generic::Dictionary_2<TKey,TValue>*", modifiers: "", def_value: Some("{}") }]
template <typename TKey, typename TValue>
constexpr ::GlobalNamespace::OVRObjectPool_DictionaryScope_2<TKey, TValue>::OVRObjectPool_DictionaryScope_2(::System::Collections::Generic::Dictionary_2<TKey, TValue>* _dictionary) noexcept {
  this->_dictionary = _dictionary;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::GlobalNamespace::OVRObjectPool_DictionaryScope_2<TKey, TValue>::OVRObjectPool_DictionaryScope_2() {}
template <typename T> inline void GlobalNamespace::OVRObjectPool_HashSetScope_1<T>::_ctor(::by_ref<::System::Collections::Generic::HashSet_1<T>*> set) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool_HashSetScope_1<T>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::System::Collections::Generic::HashSet_1<T>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, set);
}
template <typename T> inline void GlobalNamespace::OVRObjectPool_HashSetScope_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool_HashSetScope_1<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::OVRObjectPool_HashSetScope_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* GlobalNamespace::OVRObjectPool_HashSetScope_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<T>*", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::GlobalNamespace::OVRObjectPool_HashSetScope_1<T>::OVRObjectPool_HashSetScope_1(::System::Collections::Generic::HashSet_1<T>* _set) noexcept {
  this->_set = _set;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OVRObjectPool_HashSetScope_1<T>::OVRObjectPool_HashSetScope_1() {}
template <typename T> inline void GlobalNamespace::OVRObjectPool_StackScope_1<T>::_ctor(::by_ref<::System::Collections::Generic::Stack_1<T>*> stack) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool_StackScope_1<T>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::System::Collections::Generic::Stack_1<T>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stack);
}
template <typename T> inline void GlobalNamespace::OVRObjectPool_StackScope_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool_StackScope_1<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::OVRObjectPool_StackScope_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* GlobalNamespace::OVRObjectPool_StackScope_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<T>*", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::GlobalNamespace::OVRObjectPool_StackScope_1<T>::OVRObjectPool_StackScope_1(::System::Collections::Generic::Stack_1<T>* _stack) noexcept {
  this->_stack = _stack;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OVRObjectPool_StackScope_1<T>::OVRObjectPool_StackScope_1() {}
template <typename T> inline void GlobalNamespace::OVRObjectPool_QueueScope_1<T>::_ctor(::by_ref<::System::Collections::Generic::Queue_1<T>*> queue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool_QueueScope_1<T>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::System::Collections::Generic::Queue_1<T>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, queue);
}
template <typename T> inline void GlobalNamespace::OVRObjectPool_QueueScope_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool_QueueScope_1<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::OVRObjectPool_QueueScope_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* GlobalNamespace::OVRObjectPool_QueueScope_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_queue", ty: "::System::Collections::Generic::Queue_1<T>*", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::GlobalNamespace::OVRObjectPool_QueueScope_1<T>::OVRObjectPool_QueueScope_1(::System::Collections::Generic::Queue_1<T>* _queue) noexcept {
  this->_queue = _queue;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OVRObjectPool_QueueScope_1<T>::OVRObjectPool_QueueScope_1() {}
template <typename T> inline void GlobalNamespace::OVRObjectPool_ItemScope_1<T>::_ctor(::by_ref<T> item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool_ItemScope_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::OVRObjectPool_ItemScope_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool_ItemScope_1<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::OVRObjectPool_ItemScope_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* GlobalNamespace::OVRObjectPool_ItemScope_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_item", ty: "T", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::GlobalNamespace::OVRObjectPool_ItemScope_1<T>::OVRObjectPool_ItemScope_1(T _item) noexcept {
  this->_item = _item;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OVRObjectPool_ItemScope_1<T>::OVRObjectPool_ItemScope_1() {}
template <typename T> inline T GlobalNamespace::OVRObjectPool::Get() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool*>(), { "Get", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* GlobalNamespace::OVRObjectPool::List() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool*>(), { "List", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* GlobalNamespace::OVRObjectPool::List(::System::Collections::Generic::IEnumerable_1<T>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool*>(), { "List", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, source);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::Dictionary_2<TKey, TValue>* GlobalNamespace::OVRObjectPool::Dictionary() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool*>(), { "Dictionary", { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::HashSet_1<T>* GlobalNamespace::OVRObjectPool::HashSet() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool*>(), { "HashSet", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<T>*>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::Stack_1<T>* GlobalNamespace::OVRObjectPool::Stack() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool*>(), { "Stack", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Stack_1<T>*>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::Queue_1<T>* GlobalNamespace::OVRObjectPool::Queue() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool*>(), { "Queue", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Queue_1<T>*>(nullptr, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OVRObjectPool::Return(T obj) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool*>(), { "Return", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
template <typename T> inline void GlobalNamespace::OVRObjectPool::Return(::System::Collections::Generic::HashSet_1<T>* set) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool*>(), { "Return", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::HashSet_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, set);
}
template <typename T> inline void GlobalNamespace::OVRObjectPool::Return(::System::Collections::Generic::Stack_1<T>* stack) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool*>(), { "Return", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::Stack_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stack);
}
template <typename T> inline void GlobalNamespace::OVRObjectPool::Return(::System::Collections::Generic::Queue_1<T>* queue) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRObjectPool*>(), { "Return", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::Queue_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, queue);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRObjectPool::OVRObjectPool() {}
