#pragma once
// IWYU pragma private; include "System/Collections/Generic/SortedSet`1_TreeSubSet.hpp"
#include "System/Collections/Generic/zzzz__SortedSet_1_impl.hpp"
#include "System/Collections/Generic/zzzz__SortedSet`1_TreeSubSet_def.hpp"
#include "System/Collections/Generic/zzzz__SortedSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__TreeWalkPredicate_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::SortedSet_1<T>*& GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_get__underlying() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____underlying;
}
template <typename T> constexpr ::System::Collections::Generic::SortedSet_1<T>* const& GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_get__underlying() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____underlying;
}
template <typename T> constexpr void GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_set__underlying(::System::Collections::Generic::SortedSet_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____underlying, value);
}
template <typename T> constexpr T& GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_get__min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____min;
}
template <typename T> constexpr T const& GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_get__min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____min;
}
template <typename T> constexpr void GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_set__min(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____min, value);
}
template <typename T> constexpr T& GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_get__max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____max;
}
template <typename T> constexpr T const& GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_get__max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____max;
}
template <typename T> constexpr void GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_set__max(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____max, value);
}
template <typename T> constexpr bool& GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_get__lBoundActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lBoundActive;
}
template <typename T> constexpr bool const& GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_get__lBoundActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lBoundActive;
}
template <typename T> constexpr void GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_set__lBoundActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lBoundActive = value;
}
template <typename T> constexpr bool& GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_get__uBoundActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uBoundActive;
}
template <typename T> constexpr bool const& GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_get__uBoundActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uBoundActive;
}
template <typename T> constexpr void GlobalNamespace::SortedSet_1_TreeSubSet<T>::__cordl_internal_set__uBoundActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uBoundActive = value;
}
template <typename T>
inline void GlobalNamespace::SortedSet_1_TreeSubSet<T>::_ctor(::System::Collections::Generic::SortedSet_1<T>* Underlying, T Min, T Max, bool lowerBoundActive, bool upperBoundActive) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1<T>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, Underlying, Min, Max, lowerBoundActive, upperBoundActive);
}
template <typename T> inline bool GlobalNamespace::SortedSet_1_TreeSubSet<T>::AddIfNotPresent(T item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline bool GlobalNamespace::SortedSet_1_TreeSubSet<T>::Contains(T item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline bool GlobalNamespace::SortedSet_1_TreeSubSet<T>::DoRemove(T item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::SortedSet_1_TreeSubSet<T>::Clear() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::SortedSet_1_TreeSubSet<T>::IsWithinRange(T item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline T GlobalNamespace::SortedSet_1_TreeSubSet<T>::get_MinInternal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::SortedSet_1_TreeSubSet<T>::get_MaxInternal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>::get(), 44)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::SortedSet_1_TreeSubSet<T>::InOrderTreeWalk(::System::Collections::Generic::TreeWalkPredicate_1<T>* action) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, action);
}
template <typename T> inline bool GlobalNamespace::SortedSet_1_TreeSubSet<T>::BreadthFirstTreeWalk(::System::Collections::Generic::TreeWalkPredicate_1<T>* action) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, action);
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1_Node<T>* GlobalNamespace::SortedSet_1_TreeSubSet<T>::FindNode(T item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedSet_1_Node<T>*, false>(this, ___internal_method, item);
}
template <typename T> inline int32_t GlobalNamespace::SortedSet_1_TreeSubSet<T>::InternalIndexOf(T item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::SortedSet_1_TreeSubSet<T>::VersionCheck() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::SortedSet_1_TreeSubSet<T>::VersionCheckImpl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>::get(),
                                                                             "VersionCheckImpl", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::SortedSet_1<T>* GlobalNamespace::SortedSet_1_TreeSubSet<T>::GetViewBetween(T lowerValue, T upperValue) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedSet_1<T>*, false>(this, ___internal_method, lowerValue, upperValue);
}
template <typename T>
inline void GlobalNamespace::SortedSet_1_TreeSubSet<T>::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                 ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>::get(),
                                  "System.Runtime.Serialization.ISerializable.GetObjectData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
template <typename T>
inline void GlobalNamespace::SortedSet_1_TreeSubSet<T>::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
template <typename T> inline void GlobalNamespace::SortedSet_1_TreeSubSet<T>::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>::get(),
                                                                             "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender);
}
template <typename T> inline void GlobalNamespace::SortedSet_1_TreeSubSet<T>::OnDeserialization(::System::Object* sender) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender);
}
template <typename T> inline bool GlobalNamespace::SortedSet_1_TreeSubSet<T>::_VersionCheckImpl_b__20_0(::System::Collections::Generic::SortedSet_1_Node<T>* n) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>::get(), "<VersionCheckImpl>b__20_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::SortedSet_1_Node<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, n);
}
template <typename T>
inline ::GlobalNamespace::SortedSet_1_TreeSubSet<T>* GlobalNamespace::SortedSet_1_TreeSubSet<T>::New_ctor(::System::Collections::Generic::SortedSet_1<T>* Underlying, T Min, T Max,
                                                                                                          bool lowerBoundActive, bool upperBoundActive) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SortedSet_1_TreeSubSet<T>*>(Underlying, Min, Max, lowerBoundActive, upperBoundActive));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
template <typename T> constexpr GlobalNamespace::SortedSet_1_TreeSubSet<T>::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
template <typename T> constexpr ::System::Runtime::Serialization::ISerializable* GlobalNamespace::SortedSet_1_TreeSubSet<T>::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
template <typename T> constexpr GlobalNamespace::SortedSet_1_TreeSubSet<T>::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
template <typename T>
constexpr ::System::Runtime::Serialization::IDeserializationCallback* GlobalNamespace::SortedSet_1_TreeSubSet<T>::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::SortedSet_1_TreeSubSet<T>::SortedSet_1_TreeSubSet() {}
