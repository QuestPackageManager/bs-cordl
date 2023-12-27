#pragma once
#include "GlobalNamespace/zzzz__Interop_impl.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEnumerator_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEntry_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/IO/zzzz__EnumerationOptions_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TResult>"
template <typename TResult> constexpr System::IO::Enumeration::FileSystemEnumerator_1<TResult>::operator ::System::Collections::Generic::IEnumerator_1<TResult>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TResult> constexpr System::IO::Enumeration::FileSystemEnumerator_1<TResult>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TResult> constexpr System::IO::Enumeration::FileSystemEnumerator_1<TResult>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TResult> constexpr ::StringW& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__originalRootDirectory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____originalRootDirectory;
}
template <typename TResult> constexpr ::StringW const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__originalRootDirectory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____originalRootDirectory;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__originalRootDirectory(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____originalRootDirectory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr ::StringW& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__rootDirectory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rootDirectory;
}
template <typename TResult> constexpr ::StringW const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__rootDirectory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rootDirectory;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__rootDirectory(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rootDirectory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr ::System::IO::EnumerationOptions*& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____options;
}
template <typename TResult> constexpr ::cordl_internals::to_const_pointer<::System::IO::EnumerationOptions*> const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____options;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__options(::System::IO::EnumerationOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____options)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr ::System::Object*& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__lock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lock;
}
template <typename TResult> constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__lock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lock;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__lock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr ::StringW& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__currentPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____currentPath;
}
template <typename TResult> constexpr ::StringW const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__currentPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____currentPath;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__currentPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr void*& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__directoryHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____directoryHandle;
}
template <typename TResult> constexpr void* const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__directoryHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____directoryHandle;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__directoryHandle(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____directoryHandle = value;
}
template <typename TResult> constexpr bool& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__lastEntryFound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lastEntryFound;
}
template <typename TResult> constexpr bool const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__lastEntryFound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lastEntryFound;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__lastEntryFound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____lastEntryFound = value;
}
template <typename TResult> constexpr ::System::Collections::Generic::Queue_1<::StringW>*& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__pending() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pending;
}
template <typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::StringW>*> const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__pending() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pending;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__pending(::System::Collections::Generic::Queue_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pending)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr ::GlobalNamespace::__Interop__Sys__DirectoryEntry& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__entry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____entry;
}
template <typename TResult> constexpr ::GlobalNamespace::__Interop__Sys__DirectoryEntry const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__entry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____entry;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__entry(::GlobalNamespace::__Interop__Sys__DirectoryEntry value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____entry = value;
}
template <typename TResult> constexpr TResult& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____current;
}
template <typename TResult> constexpr TResult const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____current;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__current(TResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__pathBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pathBuffer;
}
template <typename TResult> constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__pathBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pathBuffer;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__pathBuffer(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pathBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__entryBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____entryBuffer;
}
template <typename TResult> constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__get__entryBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____entryBuffer;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__set__entryBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entryBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param options: ::System::IO::EnumerationOptions* (default: nullptr)
template <typename TResult>
inline ::System::IO::Enumeration::FileSystemEnumerator_1<TResult>* System::IO::Enumeration::FileSystemEnumerator_1<TResult>::New_ctor(::StringW directory, ::System::IO::EnumerationOptions* options) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(directory, options));
}
/// @param options: ::System::IO::EnumerationOptions* (default: nullptr)
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::_ctor(::StringW directory, ::System::IO::EnumerationOptions* options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, directory, options);
}
/// @param ignoreNotFound: bool (default: false)
template <typename TResult> inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::InternalContinueOnError(::GlobalNamespace::__Interop__ErrorInfo info, bool ignoreNotFound) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), "InternalContinueOnError", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Interop__ErrorInfo>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, info, ignoreNotFound);
}
template <typename TResult> inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::IsDirectoryNotFound(::GlobalNamespace::__Interop__ErrorInfo info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), "IsDirectoryNotFound", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Interop__ErrorInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, info);
}
template <typename TResult> inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::IsAccessError(::GlobalNamespace::__Interop__ErrorInfo info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), "IsAccessError", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Interop__ErrorInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, info);
}
/// @param ignoreNotFound: bool (default: false)
template <typename TResult> inline void* System::IO::Enumeration::FileSystemEnumerator_1<TResult>::CreateDirectoryHandle(::StringW path, bool ignoreNotFound) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), "CreateDirectoryHandle", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method, path, ignoreNotFound);
}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::CloseDirectoryHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                                                                             "CloseDirectoryHandle", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::FindNextEntry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                                                                             "FindNextEntry", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::FindNextEntry(::cordl_internals::Ptr<uint8_t> entryBufferPtr, int32_t bufferLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), "FindNextEntry", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entryBufferPtr, bufferLength);
}
template <typename TResult> inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::DequeueNextDirectory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                                                                             "DequeueNextDirectory", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::InternalDispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), "InternalDispose",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
template <typename TResult> inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::ShouldIncludeEntry(ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), "ShouldIncludeEntry", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry);
}
template <typename TResult> inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::ShouldRecurseIntoEntry(ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), "ShouldRecurseIntoEntry", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry);
}
template <typename TResult> inline TResult System::IO::Enumeration::FileSystemEnumerator_1<TResult>::TransformEntry(ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), "TransformEntry", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Enumeration::FileSystemEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method, entry);
}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::OnDirectoryFinished(::System::ReadOnlySpan_1<char16_t> directory) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), "OnDirectoryFinished",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, directory);
}
template <typename TResult> inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::ContinueOnError(int32_t error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), "ContinueOnError",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, error);
}
template <typename TResult> inline TResult System::IO::Enumeration::FileSystemEnumerator_1<TResult>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                                                                             "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method);
}
template <typename TResult> inline ::System::Object* System::IO::Enumeration::FileSystemEnumerator_1<TResult>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                                                                             "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::DirectoryFinished() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                                                                             "DirectoryFinished", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                                                                             "Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                                                                             "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), "Dispose",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::Finalize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                                                                             "Finalize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::IO::Enumeration::FileSystemEnumerator_1<TResult>::FileSystemEnumerator_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
