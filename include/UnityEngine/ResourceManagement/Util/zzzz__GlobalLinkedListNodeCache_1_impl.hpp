#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/GlobalLinkedListNodeCache_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__GlobalLinkedListNodeCache_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LinkedListNodeCache_1_def.hpp"
template <typename T>
inline void UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>::setStaticF_m_globalCache(::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*, "m_globalCache", ::UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>*>(
      std::forward<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>(value));
}
template <typename T> inline ::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>* UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>::getStaticF_m_globalCache() {
  return ::cordl_internals::getStaticField<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*, "m_globalCache",
                                           ::UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>*>();
}
template <typename T> inline bool UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>::get_CacheExists() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>*>(), { "get_CacheExists", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
template <typename T> inline void UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>::SetCacheSize(int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>*>(), { "SetCacheSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, length);
}
template <typename T> inline ::System::Collections::Generic::LinkedListNode_1<T>* UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>::Acquire(T val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>*>(), { "Acquire", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<T>*>(nullptr, ___internal_method, val);
}
template <typename T> inline void UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>::Release(::System::Collections::Generic::LinkedListNode_1<T>* node) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>*>(),
                                                                                         { "Release", {}, { ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1<T>::GlobalLinkedListNodeCache_1() {}
