#pragma once
#include "Unity/Collections/zzzz__Allocator_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TControl>"
template <typename TControl> constexpr UnityEngine::InputSystem::__InputControlList_1__Enumerator<TControl>::operator ::System::Collections::Generic::IEnumerator_1<TControl>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TControl>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TControl> constexpr UnityEngine::InputSystem::__InputControlList_1__Enumerator<TControl>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TControl> constexpr UnityEngine::InputSystem::__InputControlList_1__Enumerator<TControl>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename TControl> inline void UnityEngine::InputSystem::__InputControlList_1__Enumerator<TControl>::_ctor(::UnityEngine::InputSystem::InputControlList_1<TControl> list) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlList_1__Enumerator<TControl>>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list);
}
template <typename TControl> inline bool UnityEngine::InputSystem::__InputControlList_1__Enumerator<TControl>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlList_1__Enumerator<TControl>>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TControl> inline void UnityEngine::InputSystem::__InputControlList_1__Enumerator<TControl>::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlList_1__Enumerator<TControl>>::get(), "Reset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TControl> inline TControl UnityEngine::InputSystem::__InputControlList_1__Enumerator<TControl>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlList_1__Enumerator<TControl>>::get(), "get_Current",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TControl, false>(this, ___internal_method);
}
template <typename TControl> inline ::System::Object* UnityEngine::InputSystem::__InputControlList_1__Enumerator<TControl>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlList_1__Enumerator<TControl>>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TControl> inline void UnityEngine::InputSystem::__InputControlList_1__Enumerator<TControl>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlList_1__Enumerator<TControl>>::get(), "Dispose",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Indices", ty: "::cordl_internals::Ptr<uint64_t>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_Current", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename TControl>
constexpr ::UnityEngine::InputSystem::__InputControlList_1__Enumerator<TControl>::__InputControlList_1__Enumerator(::cordl_internals::Ptr<uint64_t> m_Indices, int32_t m_Count,
                                                                                                                   int32_t m_Current) noexcept {
  this->m_Indices = m_Indices;
  this->m_Count = m_Count;
  this->m_Current = m_Current;
}
// Ctor Parameters []
template <typename TControl> constexpr ::UnityEngine::InputSystem::__InputControlList_1__Enumerator<TControl>::__InputControlList_1__Enumerator() {}
/// @brief Convert operator to "::System::Collections::Generic::IList_1<TControl>"
template <typename TControl> constexpr UnityEngine::InputSystem::InputControlList_1<TControl>::operator ::System::Collections::Generic::IList_1<TControl>*() {
  return static_cast<::System::Collections::Generic::IList_1<TControl>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TControl>"
template <typename TControl> constexpr UnityEngine::InputSystem::InputControlList_1<TControl>::operator ::System::Collections::Generic::ICollection_1<TControl>*() {
  return static_cast<::System::Collections::Generic::ICollection_1<TControl>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TControl>"
template <typename TControl> constexpr UnityEngine::InputSystem::InputControlList_1<TControl>::operator ::System::Collections::Generic::IEnumerable_1<TControl>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TControl>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TControl> constexpr UnityEngine::InputSystem::InputControlList_1<TControl>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<TControl>"
template <typename TControl> constexpr UnityEngine::InputSystem::InputControlList_1<TControl>::operator ::System::Collections::Generic::IReadOnlyList_1<TControl>*() {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<TControl>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TControl>"
template <typename TControl> constexpr UnityEngine::InputSystem::InputControlList_1<TControl>::operator ::System::Collections::Generic::IReadOnlyCollection_1<TControl>*() {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<TControl>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TControl> constexpr UnityEngine::InputSystem::InputControlList_1<TControl>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename TControl> inline int32_t UnityEngine::InputSystem::InputControlList_1<TControl>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                                                                             "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TControl> inline int32_t UnityEngine::InputSystem::InputControlList_1<TControl>::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                                                                             "get_Capacity", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::set_Capacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), "set_Capacity",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TControl> inline bool UnityEngine::InputSystem::InputControlList_1<TControl>::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                                                                             "get_IsReadOnly", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TControl> inline TControl UnityEngine::InputSystem::InputControlList_1<TControl>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), "get_Item",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<TControl, false>(this, ___internal_method, index);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::set_Item(int32_t index, TControl value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), "set_Item", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TControl>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
/// @param initialCapacity: int32_t (default: static_cast<int32_t>(0x0))
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::_ctor(::Unity::Collections::Allocator allocator, int32_t initialCapacity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allocator, initialCapacity);
}
/// @param allocator: ::Unity::Collections::Allocator (default: static_cast<int32_t>(0x4))
template <typename TControl>
inline void UnityEngine::InputSystem::InputControlList_1<TControl>::_ctor(::System::Collections::Generic::IEnumerable_1<TControl>* values, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TControl>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values, allocator);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::_ctor(::ArrayW<TControl, ::Array<TControl>*> values) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TControl, ::Array<TControl>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, values);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::Resize(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), "Resize",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::Add(TControl item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), "Add",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TControl>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
/// @param count: int32_t (default: static_cast<int32_t>(0xffffffff))
/// @param destinationIndex: int32_t (default: static_cast<int32_t>(0xffffffff))
/// @param sourceIndex: int32_t (default: static_cast<int32_t>(0x0))
template <typename TControl>
template <typename TList>
inline void UnityEngine::InputSystem::InputControlList_1<TControl>::AddSlice(TList list, int32_t count, int32_t destinationIndex, int32_t sourceIndex) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), "AddSlice",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TList>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TList>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TList>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list, count, destinationIndex, sourceIndex);
}
/// @param count: int32_t (default: static_cast<int32_t>(0xffffffff))
/// @param destinationIndex: int32_t (default: static_cast<int32_t>(0xffffffff))
template <typename TControl>
inline void UnityEngine::InputSystem::InputControlList_1<TControl>::AddRange(::System::Collections::Generic::IEnumerable_1<TControl>* list, int32_t count, int32_t destinationIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), "AddRange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TControl>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list, count, destinationIndex);
}
template <typename TControl> inline bool UnityEngine::InputSystem::InputControlList_1<TControl>::Remove(TControl item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), "Remove",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TControl>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), "RemoveAt",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::CopyTo(::ArrayW<TControl, ::Array<TControl>*> array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), "CopyTo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TControl, ::Array<TControl>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, arrayIndex);
}
template <typename TControl> inline int32_t UnityEngine::InputSystem::InputControlList_1<TControl>::IndexOf(TControl item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), "IndexOf",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TControl>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, item);
}
/// @param count: int32_t (default: static_cast<int32_t>(0xffffffff))
template <typename TControl> inline int32_t UnityEngine::InputSystem::InputControlList_1<TControl>::IndexOf(TControl item, int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), "IndexOf", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, item, startIndex, count);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::Insert(int32_t index, TControl item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), "Insert", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TControl>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, item);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                                                                             "Clear", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TControl> inline bool UnityEngine::InputSystem::InputControlList_1<TControl>::Contains(TControl item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), "Contains",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TControl>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
/// @param count: int32_t (default: static_cast<int32_t>(0xffffffff))
template <typename TControl> inline bool UnityEngine::InputSystem::InputControlList_1<TControl>::Contains(TControl item, int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), "Contains", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TControl>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item, startIndex, count);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::SwapElements(int32_t index1, int32_t index2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), "SwapElements", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index1, index2);
}
template <typename TControl> template <typename TCompare> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::Sort(int32_t startIndex, int32_t count, TCompare comparer) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), "Sort",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TCompare>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TCompare>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TCompare>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startIndex, count, comparer);
}
/// @param dispose: bool (default: false)
template <typename TControl> inline ::ArrayW<TControl, ::Array<TControl>*> UnityEngine::InputSystem::InputControlList_1<TControl>::ToArray(bool dispose) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), "ToArray",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<TControl, ::Array<TControl>*>, false>(this, ___internal_method, dispose);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::AppendTo(ByRef<::ArrayW<TControl, ::Array<TControl>*>> array, ByRef<int32_t> count) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), "AppendTo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<TControl, ::Array<TControl>*>>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, count);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                                                                             "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TControl> inline ::System::Collections::Generic::IEnumerator_1<TControl>* UnityEngine::InputSystem::InputControlList_1<TControl>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                                                                             "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TControl>*, false>(this, ___internal_method);
}
template <typename TControl> inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputControlList_1<TControl>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TControl> inline ::StringW UnityEngine::InputSystem::InputControlList_1<TControl>::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(),
                                                                             "ToString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TControl> inline uint64_t UnityEngine::InputSystem::InputControlList_1<TControl>::ToIndex(TControl control) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), "ToIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TControl>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, control);
}
template <typename TControl> inline TControl UnityEngine::InputSystem::InputControlList_1<TControl>::FromIndex(uint64_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlList_1<TControl>>::get(), "FromIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<TControl, false>(nullptr, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Indices", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_Allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: Some("{}") }]
template <typename TControl>
constexpr ::UnityEngine::InputSystem::InputControlList_1<TControl>::InputControlList_1(int32_t m_Count, ::Unity::Collections::NativeArray_1<uint64_t> m_Indices,
                                                                                       ::Unity::Collections::Allocator m_Allocator) noexcept {
  this->m_Count = m_Count;
  this->m_Indices = m_Indices;
  this->m_Allocator = m_Allocator;
}
// Ctor Parameters []
template <typename TControl> constexpr ::UnityEngine::InputSystem::InputControlList_1<TControl>::InputControlList_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
