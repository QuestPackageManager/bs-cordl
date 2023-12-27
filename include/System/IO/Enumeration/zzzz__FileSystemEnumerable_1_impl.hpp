#pragma once
#include "System/IO/Enumeration/zzzz__FileSystemEnumerator_1_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEnumerable_1_def.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__EnumerationOptions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEntry_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TResult>
inline ::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>* System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>::New_ctor(::System::Object* object,
                                                                                                                                                                        void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>*>(object, method));
}
template <typename TResult> inline void System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TResult> inline bool System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>::Invoke(ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry);
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>::__FileSystemEnumerable_1__FindPredicate() {}
template <typename TResult>
inline ::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<TResult>* System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<TResult>::New_ctor(::System::Object* object,
                                                                                                                                                                        void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<TResult>*>(object, method));
}
template <typename TResult> inline void System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<TResult>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<TResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TResult> inline TResult System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<TResult>::Invoke(ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<TResult>*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method, entry);
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<TResult>::__FileSystemEnumerable_1__FindTransform() {}
template <typename TResult> constexpr ::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*& System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>::__get__enumerable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____enumerable;
}
template <typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*> const&
System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>::__get__enumerable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____enumerable;
}
template <typename TResult>
constexpr void System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>::__set__enumerable(::System::IO::Enumeration::FileSystemEnumerable_1<TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____enumerable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult>
inline ::System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>*
System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>::New_ctor(::System::IO::Enumeration::FileSystemEnumerable_1<TResult>* enumerable) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>*>(enumerable));
}
template <typename TResult> inline void System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>::_ctor(::System::IO::Enumeration::FileSystemEnumerable_1<TResult>* enumerable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enumerable);
}
template <typename TResult> inline TResult System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>::TransformEntry(ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>*>::get(), "TransformEntry", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method, entry);
}
template <typename TResult>
inline bool System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>::ShouldRecurseIntoEntry(ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>*>::get(), "ShouldRecurseIntoEntry",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry);
}
template <typename TResult> inline bool System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>::ShouldIncludeEntry(ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>*>::get(), "ShouldIncludeEntry",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry);
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>::__FileSystemEnumerable_1__DelegateEnumerator() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TResult>"
template <typename TResult> constexpr System::IO::Enumeration::FileSystemEnumerable_1<TResult>::operator ::System::Collections::Generic::IEnumerable_1<TResult>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TResult> constexpr System::IO::Enumeration::FileSystemEnumerable_1<TResult>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template <typename TResult> constexpr ::System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>*& System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__get__enumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____enumerator;
}
template <typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>*> const&
System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__get__enumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____enumerator;
}
template <typename TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__set__enumerator(::System::IO::Enumeration::__FileSystemEnumerable_1__DelegateEnumerator<TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____enumerator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr ::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<TResult>*& System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transform;
}
template <typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<TResult>*> const&
System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transform;
}
template <typename TResult>
constexpr void System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__set__transform(::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr ::System::IO::EnumerationOptions*& System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__get__options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____options;
}
template <typename TResult> constexpr ::cordl_internals::to_const_pointer<::System::IO::EnumerationOptions*> const& System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__get__options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____options;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__set__options(::System::IO::EnumerationOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____options)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr ::StringW& System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__get__directory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____directory;
}
template <typename TResult> constexpr ::StringW const& System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__get__directory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____directory;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__set__directory(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____directory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult>
constexpr ::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>*& System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__get__ShouldIncludePredicate_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ShouldIncludePredicate_k__BackingField;
}
template <typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>*> const&
System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__get__ShouldIncludePredicate_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ShouldIncludePredicate_k__BackingField;
}
template <typename TResult>
constexpr void
System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__set__ShouldIncludePredicate_k__BackingField(::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ShouldIncludePredicate_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult>
constexpr ::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>*& System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__get__ShouldRecursePredicate_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ShouldRecursePredicate_k__BackingField;
}
template <typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>*> const&
System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__get__ShouldRecursePredicate_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ShouldRecursePredicate_k__BackingField;
}
template <typename TResult>
constexpr void
System::IO::Enumeration::FileSystemEnumerable_1<TResult>::__set__ShouldRecursePredicate_k__BackingField(::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ShouldRecursePredicate_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param options: ::System::IO::EnumerationOptions* (default: nullptr)
template <typename TResult>
inline ::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*
System::IO::Enumeration::FileSystemEnumerable_1<TResult>::New_ctor(::StringW directory, ::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<TResult>* transform,
                                                                   ::System::IO::EnumerationOptions* options) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*>(directory, transform, options));
}
/// @param options: ::System::IO::EnumerationOptions* (default: nullptr)
template <typename TResult>
inline void System::IO::Enumeration::FileSystemEnumerable_1<TResult>::_ctor(::StringW directory, ::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<TResult>* transform,
                                                                            ::System::IO::EnumerationOptions* options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Enumeration::__FileSystemEnumerable_1__FindTransform<TResult>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, directory, transform, options);
}
template <typename TResult> inline ::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>* System::IO::Enumeration::FileSystemEnumerable_1<TResult>::get_ShouldIncludePredicate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*>::get(),
                                                                             "get_ShouldIncludePredicate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>*, false>(this, ___internal_method);
}
template <typename TResult>
inline void System::IO::Enumeration::FileSystemEnumerable_1<TResult>::set_ShouldIncludePredicate(::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*>::get(), "set_ShouldIncludePredicate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TResult> inline ::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>* System::IO::Enumeration::FileSystemEnumerable_1<TResult>::get_ShouldRecursePredicate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*>::get(),
                                                                             "get_ShouldRecursePredicate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Enumeration::__FileSystemEnumerable_1__FindPredicate<TResult>*, false>(this, ___internal_method);
}
template <typename TResult> inline ::System::Collections::Generic::IEnumerator_1<TResult>* System::IO::Enumeration::FileSystemEnumerable_1<TResult>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*>::get(),
                                                                             "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TResult>*, false>(this, ___internal_method);
}
template <typename TResult> inline ::System::Collections::IEnumerator* System::IO::Enumeration::FileSystemEnumerable_1<TResult>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerable_1<TResult>*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::IO::Enumeration::FileSystemEnumerable_1<TResult>::FileSystemEnumerable_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
