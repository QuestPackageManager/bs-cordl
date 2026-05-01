#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/LinkedListNodeCache_1.hpp"
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
  ::cordl_internals::setInstanceField(this, &this->___m_NodeCache, value);
}
template <typename T> inline void UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::_ctor(int32_t maxNodesAllowed, int32_t initialCapacity, int32_t initialPreallocateCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxNodesAllowed, initialCapacity, initialPreallocateCount);
}
template <typename T> inline void UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::InitCache(int32_t maxNodesAllowed, int32_t initialCapacity, int32_t initialPreallocateCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>::get(), "InitCache", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxNodesAllowed, initialCapacity, initialPreallocateCount);
}
template <typename T> inline ::System::Collections::Generic::LinkedListNode_1<T>* UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::Acquire(T val) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>::get(), "Acquire",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<T>*, false>(this, ___internal_method, val);
}
template <typename T> inline void UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::Release(::System::Collections::Generic::LinkedListNode_1<T>* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>::get(), "Release", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
template <typename T> inline int32_t UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::get_CreatedNodeCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>::get(),
                                               "get_CreatedNodeCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline int32_t UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::get_CachedNodeCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>::get(), "get_CachedNodeCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::set_CachedNodeCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>::get(), "set_CachedNodeCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>* UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>());
}
template <typename T>
inline ::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>* UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::New_ctor(int32_t maxNodesAllowed, int32_t initialCapacity,
                                                                                                                                                    int32_t initialPreallocateCount) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*>(maxNodesAllowed, initialCapacity, initialPreallocateCount));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>::LinkedListNodeCache_1() {}
