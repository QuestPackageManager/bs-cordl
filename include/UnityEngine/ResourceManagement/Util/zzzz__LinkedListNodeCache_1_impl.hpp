#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\Util\LinkedListNodeCache_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LinkedListNodeCache_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
template <typename T> constexpr int32_t& UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::__cordl_internal_get_m_maxNodesAllowed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_maxNodesAllowed;
}
template <typename T> constexpr int32_t const& UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::__cordl_internal_get_m_maxNodesAllowed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_maxNodesAllowed;
}
template <typename T> constexpr void UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::__cordl_internal_set_m_maxNodesAllowed(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_maxNodesAllowed = value;
}
template <typename T> constexpr int32_t& UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::__cordl_internal_get_m_NodesCreated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodesCreated;
}
template <typename T> constexpr int32_t const& UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::__cordl_internal_get_m_NodesCreated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodesCreated;
}
template <typename T> constexpr void UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::__cordl_internal_set_m_NodesCreated(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NodesCreated = value;
}
template <typename T>
constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<T>*>*&
UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::__cordl_internal_get_m_NodeCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodeCache;
}
template <typename T>
constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<T>*>* const&
UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::__cordl_internal_get_m_NodeCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodeCache;
}
template <typename T>
constexpr void UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::__cordl_internal_set_m_NodeCache(
    ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NodeCache = value;
}
template <typename T> inline void UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::_ctor(int32_t maxNodesAllowed, int32_t initialCapacity, int32_t initialPreallocateCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxNodesAllowed, initialCapacity, initialPreallocateCount);
}
template <typename T> inline void UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::InitCache(int32_t maxNodesAllowed, int32_t initialCapacity, int32_t initialPreallocateCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>(),
                                                                                         { "InitCache", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxNodesAllowed, initialCapacity, initialPreallocateCount);
}
template <typename T> inline ::System::Collections::Generic::LinkedListNode_1<T>* UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::Acquire(T val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>(), { "Acquire", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<T>*>(this, ___internal_method, val);
}
template <typename T> inline void UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::Release(::System::Collections::Generic::LinkedListNode_1<T>* node) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>(),
                                                                                         { "Release", {}, { ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
template <typename T> inline int32_t UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::get_CreatedNodeCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>(), { "get_CreatedNodeCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline int32_t UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::get_CachedNodeCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>(), { "get_CachedNodeCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::set_CachedNodeCount(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>(), { "set_CachedNodeCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>* UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>());
}
template <typename T>
inline ::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>* UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::New_ctor(int32_t maxNodesAllowed, int32_t initialCapacity,
                                                                                                                                                    int32_t initialPreallocateCount) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>(maxNodesAllowed, initialCapacity, initialPreallocateCount));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::LinkedListNodeCache_1() {}
