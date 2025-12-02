#pragma once
// IWYU pragma private; include "System/IO/Enumeration/FileSystemEnumerable_1.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEnumerator_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEntry_def.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEnumerable_1_def.hpp"
#include "System/IO/zzzz__EnumerationOptions_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TResult> inline bool System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>::Invoke(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry);
}
template <typename TResult>
inline ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>* System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>::New_ctor(::System::Object* object,
                                                                                                                                                                  ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>*>(object, method));
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>::FileSystemEnumerable_1_FindPredicate() {}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TResult> inline TResult System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>::Invoke(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method, entry);
}
template <typename TResult>
inline ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>* System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>::New_ctor(::System::Object* object,
                                                                                                                                                                  ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>*>(object, method));
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>::FileSystemEnumerable_1_FindTransform() {}
template <typename TResult>
constexpr ::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*& System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>::__cordl_internal_get__enumerable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumerable;
}
template <typename TResult>
constexpr ::System::IO::Enumeration::FileSystemEnumerable_1<TResult>* const& System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>::__cordl_internal_get__enumerable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumerable;
}
template <typename TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>::__cordl_internal_set__enumerable(::System::IO::Enumeration::FileSystemEnumerable_1<TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____enumerable, value);
}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>::_ctor(::System::IO::Enumeration::FileSystemEnumerable_1<TResult>* enumerable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enumerable);
}
template <typename TResult> inline TResult System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>::TransformEntry(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method, entry);
}
template <typename TResult> inline bool System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>::ShouldRecurseIntoEntry(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry);
}
template <typename TResult> inline bool System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>::ShouldIncludeEntry(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry);
}
template <typename TResult>
inline ::System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>*
System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>::New_ctor(::System::IO::Enumeration::FileSystemEnumerable_1<TResult>* enumerable) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>*>(enumerable));
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>::FileSystemEnumerable_1_DelegateEnumerator() {}
template <typename TResult>
constexpr ::System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>*& System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__cordl_internal_get__enumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumerator;
}
template <typename TResult>
constexpr ::System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>* const& System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__cordl_internal_get__enumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumerator;
}
template <typename TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__cordl_internal_set__enumerator(::System::IO::Enumeration::FileSystemEnumerable_1_DelegateEnumerator<TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____enumerator, value);
}
template <typename TResult>
constexpr ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>*& System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__cordl_internal_get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
template <typename TResult>
constexpr ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>* const& System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__cordl_internal_get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
template <typename TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__cordl_internal_set__transform(::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____transform, value);
}
template <typename TResult> constexpr ::System::IO::EnumerationOptions*& System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__cordl_internal_get__options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____options;
}
template <typename TResult> constexpr ::System::IO::EnumerationOptions* const& System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__cordl_internal_get__options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____options;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__cordl_internal_set__options(::System::IO::EnumerationOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____options, value);
}
template <typename TResult> constexpr ::StringW& System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__cordl_internal_get__directory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directory;
}
template <typename TResult> constexpr ::StringW const& System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__cordl_internal_get__directory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directory;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__cordl_internal_set__directory(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____directory, value);
}
template <typename TResult>
constexpr ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>*&
System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__cordl_internal_get__ShouldIncludePredicate_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ShouldIncludePredicate_k__BackingField;
}
template <typename TResult>
constexpr ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>* const&
System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__cordl_internal_get__ShouldIncludePredicate_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ShouldIncludePredicate_k__BackingField;
}
template <typename TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__cordl_internal_set__ShouldIncludePredicate_k__BackingField(
    ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____ShouldIncludePredicate_k__BackingField, value);
}
template <typename TResult>
constexpr ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>*&
System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__cordl_internal_get__ShouldRecursePredicate_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ShouldRecursePredicate_k__BackingField;
}
template <typename TResult>
constexpr ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>* const&
System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__cordl_internal_get__ShouldRecursePredicate_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ShouldRecursePredicate_k__BackingField;
}
template <typename TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__cordl_internal_set__ShouldRecursePredicate_k__BackingField(
    ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____ShouldRecursePredicate_k__BackingField, value);
}
template <typename TResult>
inline void System::IO::Enumeration::FileSystemEnumerable_1<TResult>::_ctor(::StringW directory, ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>* transform,
                                                                            ::System::IO::EnumerationOptions* options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, directory, transform, options);
}
template <typename TResult> inline ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>* System::IO::Enumeration::FileSystemEnumerable_1<TResult>::get_ShouldIncludePredicate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*>::get(),
                                                                             "get_ShouldIncludePredicate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>*, false>(this, ___internal_method);
}
template <typename TResult>
inline void System::IO::Enumeration::FileSystemEnumerable_1<TResult>::set_ShouldIncludePredicate(::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*>::get(), "set_ShouldIncludePredicate",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TResult> inline ::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>* System::IO::Enumeration::FileSystemEnumerable_1<TResult>::get_ShouldRecursePredicate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*>::get(),
                                                                             "get_ShouldRecursePredicate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Enumeration::FileSystemEnumerable_1_FindPredicate<TResult>*, false>(this, ___internal_method);
}
template <typename TResult> inline ::System::Collections::Generic::IEnumerator_1<TResult>* System::IO::Enumeration::FileSystemEnumerable_1<TResult>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*>::get(),
                                                                             "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TResult>*, false>(this, ___internal_method);
}
template <typename TResult> inline ::System::Collections::IEnumerator* System::IO::Enumeration::FileSystemEnumerable_1<TResult>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TResult>
inline ::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*
System::IO::Enumeration::FileSystemEnumerable_1<TResult>::New_ctor(::StringW directory, ::System::IO::Enumeration::FileSystemEnumerable_1_FindTransform<TResult>* transform,
                                                                   ::System::IO::EnumerationOptions* options) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*>(directory, transform, options));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TResult>"
template <typename TResult> constexpr System::IO::Enumeration::FileSystemEnumerable_1<TResult>::operator ::System::Collections::Generic::IEnumerable_1<TResult>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TResult>"
template <typename TResult>
constexpr ::System::Collections::Generic::IEnumerable_1<TResult>* System::IO::Enumeration::FileSystemEnumerable_1<TResult>::i___System__Collections__Generic__IEnumerable_1_TResult_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TResult> constexpr System::IO::Enumeration::FileSystemEnumerable_1<TResult>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TResult> constexpr ::System::Collections::IEnumerable* System::IO::Enumeration::FileSystemEnumerable_1<TResult>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::IO::Enumeration::FileSystemEnumerable_1<TResult>::FileSystemEnumerable_1() {}
