#pragma once
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>"
template <typename TValue>
constexpr UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator<TValue>::operator ::System::Collections::Generic::IEnumerator_1<
    ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>"
template <typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>*
UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator<
    TValue>::i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem__LowLevel____InputStateHistory_1__Record_TValue__() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TValue> constexpr UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator<TValue>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TValue> constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator<TValue>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TValue> constexpr UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator<TValue>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
template <typename TValue> constexpr ::System::IDisposable* UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator<TValue>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename TValue>
inline void UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator<TValue>::_ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* history) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator<TValue>>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, history);
}
template <typename TValue> inline bool UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator<TValue>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator<TValue>>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TValue> inline void UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator<TValue>::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator<TValue>>::get(), "Reset",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue>
inline ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue> UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator<TValue>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator<TValue>>::get(),
                                               "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>, false>(this, ___internal_method);
}
template <typename TValue> inline ::System::Object* UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator<TValue>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator<TValue>>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TValue> inline void UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator<TValue>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator<TValue>>::get(),
                                               "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_History", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Index", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename TValue>
constexpr ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator<TValue>::__InputStateHistory_1__Enumerator(
    ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* m_History, int32_t m_Index) noexcept {
  this->m_History = m_History;
  this->m_Index = m_Index;
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator<TValue>::__InputStateHistory_1__Enumerator() {}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>"
template <typename TValue>
constexpr UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::operator ::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>"
template <typename TValue>
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>*
UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::i___System__IEquatable_1___UnityEngine__InputSystem__LowLevel____InputStateHistory_1__Record_TValue__() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename TValue>
inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__RecordHeader> UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::get_header() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get(), "get_header",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__RecordHeader>, false>(this, ___internal_method);
}
template <typename TValue> inline int32_t UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::get_recordIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get(),
                                               "get_recordIndex", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TValue> inline bool UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::get_valid() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get(), "get_valid",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TValue> inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::get_owner() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get(), "get_owner",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*, false>(this, ___internal_method);
}
template <typename TValue> inline int32_t UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::get_index() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get(), "get_index",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TValue> inline double_t UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::get_time() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get(), "get_time",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
template <typename TValue> inline ::UnityEngine::InputSystem::InputControl_1<TValue>* UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::get_control() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get(),
                                               "get_control", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl_1<TValue>*, false>(this, ___internal_method);
}
template <typename TValue> inline ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue> UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::get_next() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get(), "get_next",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>, false>(this, ___internal_method);
}
template <typename TValue>
inline ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue> UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::get_previous() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get(),
                                               "get_previous", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>, false>(this, ___internal_method);
}
template <typename TValue>
inline void UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::_ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* owner, int32_t index,
                                                                                             ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__RecordHeader> header) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__RecordHeader>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner, index, header);
}
template <typename TValue>
inline void UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::_ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* owner, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner, index);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::ReadValue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get(), "ReadValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
template <typename TValue> inline ::cordl_internals::Ptr<void> UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::GetUnsafeMemoryPtr() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get(),
                                               "GetUnsafeMemoryPtr", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(this, ___internal_method);
}
template <typename TValue> inline ::cordl_internals::Ptr<void> UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::GetUnsafeMemoryPtrUnchecked() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get(),
                                               "GetUnsafeMemoryPtrUnchecked", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(this, ___internal_method);
}
template <typename TValue> inline ::cordl_internals::Ptr<void> UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::GetUnsafeExtraMemoryPtr() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get(),
                                               "GetUnsafeExtraMemoryPtr", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(this, ___internal_method);
}
template <typename TValue> inline ::cordl_internals::Ptr<void> UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::GetUnsafeExtraMemoryPtrUnchecked() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get(),
                                               "GetUnsafeExtraMemoryPtrUnchecked", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(this, ___internal_method);
}
template <typename TValue>
inline void UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::CopyFrom(::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue> record) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get(), "CopyFrom", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, record);
}
template <typename TValue> inline void UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::CheckValid() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get(), "CheckValid",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue>
inline bool UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::Equals(::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue> other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get(), "Equals", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename TValue> inline bool UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename TValue> inline int32_t UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TValue> inline ::StringW UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Owner", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "m_IndexPlusOne", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
template <typename TValue>
constexpr ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::__InputStateHistory_1__Record(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* m_Owner,
                                                                                                                     int32_t m_IndexPlusOne, uint32_t m_Version) noexcept {
  this->m_Owner = m_Owner;
  this->m_IndexPlusOne = m_IndexPlusOne;
  this->m_Version = m_Version;
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>::__InputStateHistory_1__Record() {}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>"
template <typename TValue>
constexpr UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::operator ::System::Collections::Generic::IReadOnlyList_1<
    ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>"
template <typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>* UnityEngine::InputSystem::LowLevel::InputStateHistory_1<
    TValue>::i___System__Collections__Generic__IReadOnlyList_1___UnityEngine__InputSystem__LowLevel____InputStateHistory_1__Record_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>"
template <typename TValue>
constexpr UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::operator ::System::Collections::Generic::IEnumerable_1<
    ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>"
template <typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>* UnityEngine::InputSystem::LowLevel::InputStateHistory_1<
    TValue>::i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__LowLevel____InputStateHistory_1__Record_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TValue> constexpr UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TValue> constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>"
template <typename TValue>
constexpr UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::operator ::System::Collections::Generic::IReadOnlyCollection_1<
    ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>"
template <typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>* UnityEngine::InputSystem::LowLevel::InputStateHistory_1<
    TValue>::i___System__Collections__Generic__IReadOnlyCollection_1___UnityEngine__InputSystem__LowLevel____InputStateHistory_1__Record_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>*>(static_cast<void*>(this));
}
/// @param maxStateSizeInBytes: ::System::Nullable_1<int32_t> (default: {})
template <typename TValue>
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::New_ctor(::System::Nullable_1<int32_t> maxStateSizeInBytes) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>(maxStateSizeInBytes));
}
/// @param maxStateSizeInBytes: ::System::Nullable_1<int32_t> (default: {})
template <typename TValue> inline void UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::_ctor(::System::Nullable_1<int32_t> maxStateSizeInBytes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>::get(), ".ctor",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxStateSizeInBytes);
}
template <typename TValue>
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*
UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::New_ctor(::UnityEngine::InputSystem::InputControl_1<TValue>* control) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>(control));
}
template <typename TValue> inline void UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::_ctor(::UnityEngine::InputSystem::InputControl_1<TValue>* control) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, control);
}
template <typename TValue> inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>* UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::New_ctor(::StringW path) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>(path));
}
template <typename TValue> inline void UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::_ctor(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path);
}
template <typename TValue> inline void UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue>
inline ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>
UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::AddRecord(::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue> record) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>::get(), "AddRecord", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>, false>(this, ___internal_method, record);
}
/// @param time: double_t (default: -1.0)
template <typename TValue>
inline ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>
UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::RecordStateChange(::UnityEngine::InputSystem::InputControl_1<TValue>* control, TValue value, double_t time) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>::get(), "RecordStateChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>, false>(this, ___internal_method, control, value, time);
}
template <typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>*
UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>::get(), "GetEnumerator",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>*, false>(this,
                                                                                                                                                                                 ___internal_method);
}
template <typename TValue> inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TValue> inline ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue> UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>::get(), "get_Item",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>, false>(this, ___internal_method, index);
}
template <typename TValue>
inline void UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::set_Item(int32_t index, ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>*>::get(), "set_Item", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<TValue>::InputStateHistory_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
