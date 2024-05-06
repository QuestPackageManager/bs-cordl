#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
template <typename TValue> constexpr UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>::operator ::System::Collections::Generic::IEnumerator_1<TValue>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TValue>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TValue>"
template <typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<TValue>* UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>::i___System__Collections__Generic__IEnumerator_1_TValue_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TValue>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TValue> constexpr UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TValue> constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TValue> constexpr UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
template <typename TValue> constexpr ::System::IDisposable* UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>::_ctor(::ArrayW<TValue, ::Array<TValue>*> array, int32_t index, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue, ::Array<TValue>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index, length);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue> inline bool UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>>::get(),
                                               "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
template <typename TValue> inline ::System::Object* UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<TValue,::Array<TValue>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_IndexStart", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_IndexEnd", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename TValue>
constexpr ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>::__ReadOnlyArray_1__Enumerator(::ArrayW<TValue, ::Array<TValue>*> m_Array, int32_t m_IndexStart,
                                                                                                                      int32_t m_IndexEnd, int32_t m_Index) noexcept {
  this->m_Array = m_Array;
  this->m_IndexStart = m_IndexStart;
  this->m_IndexEnd = m_IndexEnd;
  this->m_Index = m_Index;
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>::__ReadOnlyArray_1__Enumerator() {}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<TValue>"
template <typename TValue> constexpr UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>::operator ::System::Collections::Generic::IReadOnlyList_1<TValue>*() {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<TValue>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<TValue>"
template <typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyList_1<TValue>* UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>::i___System__Collections__Generic__IReadOnlyList_1_TValue_() {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<TValue>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
template <typename TValue> constexpr UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>::operator ::System::Collections::Generic::IEnumerable_1<TValue>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TValue>"
template <typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<TValue>* UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>::i___System__Collections__Generic__IEnumerable_1_TValue_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TValue> constexpr UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TValue> constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
template <typename TValue> constexpr UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>::operator ::System::Collections::Generic::IReadOnlyCollection_1<TValue>*() {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<TValue>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
template <typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<TValue>*
UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>::i___System__Collections__Generic__IReadOnlyCollection_1_TValue_() {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<TValue>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>::_ctor(::ArrayW<TValue, ::Array<TValue>*> array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue, ::Array<TValue>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>::_ctor(::ArrayW<TValue, ::Array<TValue>*> array, int32_t index, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue, ::Array<TValue>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index, length);
}
template <typename TValue> inline ::ArrayW<TValue, ::Array<TValue>*> UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>::ToArray() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>>::get(), "ToArray",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<TValue, ::Array<TValue>*>, false>(this, ___internal_method);
}
template <typename TValue> inline int32_t UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>::IndexOf(::System::Predicate_1<TValue>* predicate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>>::get(), "IndexOf", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Predicate_1<TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, predicate);
}
template <typename TValue> inline ::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue> UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>>::get(), "GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::__ReadOnlyArray_1__Enumerator<TValue>, false>(this, ___internal_method);
}
template <typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<TValue>* UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>::System_Collections_Generic_IEnumerable_TValue__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>>::get(),
                                               "System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TValue>*, false>(this, ___internal_method);
}
template <typename TValue> inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TValue>
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>
UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>::op_Implicit___UnityEngine__InputSystem__Utilities__ReadOnlyArray_1_TValue_(::ArrayW<TValue, ::Array<TValue>*> array) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue, ::Array<TValue>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>, false>(nullptr, ___internal_method, array);
}
template <typename TValue> inline int32_t UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>>::get(), "get_Count",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<TValue,::Array<TValue>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename TValue>
constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>::ReadOnlyArray_1(::ArrayW<TValue, ::Array<TValue>*> m_Array, int32_t m_StartIndex, int32_t m_Length) noexcept {
  this->m_Array = m_Array;
  this->m_StartIndex = m_StartIndex;
  this->m_Length = m_Length;
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>::ReadOnlyArray_1() {}
