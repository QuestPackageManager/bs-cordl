#pragma once
// IWYU pragma private; include "System/IO/Enumeration/FileSystemEnumerator_1.hpp"
#include "GlobalNamespace/zzzz__Interop_impl.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEnumerator_1_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/Enumeration/zzzz__FileSystemEntry_def.hpp"
#include "System/IO/zzzz__EnumerationOptions_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
template <typename TResult> constexpr ::StringW& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__originalRootDirectory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalRootDirectory;
}
template <typename TResult> constexpr ::StringW const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__originalRootDirectory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalRootDirectory;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__originalRootDirectory(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____originalRootDirectory, value);
}
template <typename TResult> constexpr ::StringW& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__rootDirectory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootDirectory;
}
template <typename TResult> constexpr ::StringW const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__rootDirectory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rootDirectory;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__rootDirectory(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____rootDirectory, value);
}
template <typename TResult> constexpr ::System::IO::EnumerationOptions*& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____options;
}
template <typename TResult> constexpr ::System::IO::EnumerationOptions* const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____options;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__options(::System::IO::EnumerationOptions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____options, value);
}
template <typename TResult> constexpr ::System::Object*& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__lock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lock;
}
template <typename TResult> constexpr ::System::Object* const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__lock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lock;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__lock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____lock, value);
}
template <typename TResult> constexpr ::StringW& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__currentPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPath;
}
template <typename TResult> constexpr ::StringW const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__currentPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPath;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__currentPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____currentPath, value);
}
template <typename TResult> constexpr ::System::IntPtr& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__directoryHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directoryHandle;
}
template <typename TResult> constexpr ::System::IntPtr const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__directoryHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directoryHandle;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__directoryHandle(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____directoryHandle = value;
}
template <typename TResult> constexpr bool& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__lastEntryFound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastEntryFound;
}
template <typename TResult> constexpr bool const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__lastEntryFound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastEntryFound;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__lastEntryFound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastEntryFound = value;
}
template <typename TResult> constexpr ::System::Collections::Generic::Queue_1<::StringW>*& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__pending() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pending;
}
template <typename TResult> constexpr ::System::Collections::Generic::Queue_1<::StringW>* const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__pending() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pending;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__pending(::System::Collections::Generic::Queue_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____pending, value);
}
template <typename TResult> constexpr ::GlobalNamespace::Sys_Interop_DirectoryEntry& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__entry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entry;
}
template <typename TResult> constexpr ::GlobalNamespace::Sys_Interop_DirectoryEntry const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__entry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entry;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__entry(::GlobalNamespace::Sys_Interop_DirectoryEntry value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____entry = value;
}
template <typename TResult> constexpr TResult& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
template <typename TResult> constexpr TResult const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__current(TResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____current, value);
}
template <typename TResult> constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__pathBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pathBuffer;
}
template <typename TResult> constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__pathBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pathBuffer;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__pathBuffer(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____pathBuffer, value);
}
template <typename TResult> constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__entryBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entryBuffer;
}
template <typename TResult> constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_get__entryBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entryBuffer;
}
template <typename TResult> constexpr void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::__cordl_internal_set__entryBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____entryBuffer, value);
}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::_ctor(::StringW directory, ::System::IO::EnumerationOptions* options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, directory, options);
}
template <typename TResult> inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::InternalContinueOnError(::GlobalNamespace::Interop_ErrorInfo info, bool ignoreNotFound) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), "InternalContinueOnError", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Interop_ErrorInfo>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, info, ignoreNotFound);
}
template <typename TResult> inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::IsDirectoryNotFound(::GlobalNamespace::Interop_ErrorInfo info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), "IsDirectoryNotFound", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Interop_ErrorInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, info);
}
template <typename TResult> inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::IsAccessError(::GlobalNamespace::Interop_ErrorInfo info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), "IsAccessError", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Interop_ErrorInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, info);
}
template <typename TResult> inline ::System::IntPtr System::IO::Enumeration::FileSystemEnumerator_1<TResult>::CreateDirectoryHandle(::StringW path, bool ignoreNotFound) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), "CreateDirectoryHandle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, path, ignoreNotFound);
}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::CloseDirectoryHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                                                                             "CloseDirectoryHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::FindNextEntry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                                                                             "FindNextEntry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::FindNextEntry(uint8_t* entryBufferPtr, int32_t bufferLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), "FindNextEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entryBufferPtr, bufferLength);
}
template <typename TResult> inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::DequeueNextDirectory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                                                                             "DequeueNextDirectory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::InternalDispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), "InternalDispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
template <typename TResult> inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::ShouldIncludeEntry(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry);
}
template <typename TResult> inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::ShouldRecurseIntoEntry(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry);
}
template <typename TResult> inline TResult System::IO::Enumeration::FileSystemEnumerator_1<TResult>::TransformEntry(::ByRef<::System::IO::Enumeration::FileSystemEntry> entry) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method, entry);
}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::OnDirectoryFinished(::System::ReadOnlySpan_1<char16_t> directory) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, directory);
}
template <typename TResult> inline bool System::IO::Enumeration::FileSystemEnumerator_1<TResult>::ContinueOnError(int32_t error) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, error);
}
template <typename TResult> inline TResult System::IO::Enumeration::FileSystemEnumerator_1<TResult>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                                                                             "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method);
}
template <typename TResult> inline ::System::Object* System::IO::Enumeration::FileSystemEnumerator_1<TResult>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::DirectoryFinished() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                                                                             "DirectoryFinished", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                                                                             "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
template <typename TResult> inline void System::IO::Enumeration::FileSystemEnumerator_1<TResult>::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult>
inline ::System::IO::Enumeration::FileSystemEnumerator_1<TResult>* System::IO::Enumeration::FileSystemEnumerator_1<TResult>::New_ctor(::StringW directory, ::System::IO::EnumerationOptions* options) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::Enumeration::FileSystemEnumerator_1<TResult>*>(directory, options));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TResult>"
template <typename TResult> constexpr System::IO::Enumeration::FileSystemEnumerator_1<TResult>::operator ::System::Collections::Generic::IEnumerator_1<TResult>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TResult>"
template <typename TResult>
constexpr ::System::Collections::Generic::IEnumerator_1<TResult>* System::IO::Enumeration::FileSystemEnumerator_1<TResult>::i___System__Collections__Generic__IEnumerator_1_TResult_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TResult> constexpr System::IO::Enumeration::FileSystemEnumerator_1<TResult>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TResult> constexpr ::System::IDisposable* System::IO::Enumeration::FileSystemEnumerator_1<TResult>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TResult> constexpr System::IO::Enumeration::FileSystemEnumerator_1<TResult>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TResult> constexpr ::System::Collections::IEnumerator* System::IO::Enumeration::FileSystemEnumerator_1<TResult>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::IO::Enumeration::FileSystemEnumerator_1<TResult>::FileSystemEnumerator_1() {}
