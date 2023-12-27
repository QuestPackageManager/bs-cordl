#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileSystemEnumerator_1)
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace GlobalNamespace {
struct __Interop__ErrorInfo;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::IO::Enumeration {
struct FileSystemEntry;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System {
class IDisposable;
}
namespace System::IO {
class EnumerationOptions;
}
// Forward declare root types
namespace System::IO::Enumeration {
template <typename TResult> class FileSystemEnumerator_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::IO::Enumeration::FileSystemEnumerator_1);
// Type: System.IO.Enumeration::FileSystemEnumerator`1
// SizeInfo { instance_size: 120, native_size: 120, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO::Enumeration {
// cpp template
template <typename TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(2214)), TypeDefinitionIndex(TypeDefinitionIndex(3354))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3655))
// CS Name: ::System.IO.Enumeration::FileSystemEnumerator`1<TResult>*
class CORDL_TYPE FileSystemEnumerator_1 : public ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
public:
  // Declarations
  /// @brief Field _originalRootDirectory, offset 0x10, size 0x8
  __declspec(property(get = __get__originalRootDirectory, put = __set__originalRootDirectory))::StringW _originalRootDirectory;

  /// @brief Field _rootDirectory, offset 0x18, size 0x8
  __declspec(property(get = __get__rootDirectory, put = __set__rootDirectory))::StringW _rootDirectory;

  /// @brief Field _options, offset 0x20, size 0x8
  __declspec(property(get = __get__options, put = __set__options))::System::IO::EnumerationOptions* _options;

  /// @brief Field _lock, offset 0x28, size 0x8
  __declspec(property(get = __get__lock, put = __set__lock))::System::Object* _lock;

  /// @brief Field _currentPath, offset 0x30, size 0x8
  __declspec(property(get = __get__currentPath, put = __set__currentPath))::StringW _currentPath;

  /// @brief Field _directoryHandle, offset 0x38, size 0x8
  __declspec(property(get = __get__directoryHandle, put = __set__directoryHandle)) void* _directoryHandle;

  /// @brief Field _lastEntryFound, offset 0x40, size 0x1
  __declspec(property(get = __get__lastEntryFound, put = __set__lastEntryFound)) bool _lastEntryFound;

  /// @brief Field _pending, offset 0x48, size 0x8
  __declspec(property(get = __get__pending, put = __set__pending))::System::Collections::Generic::Queue_1<::StringW>* _pending;

  /// @brief Field _entry, offset 0x50, size 0x10
  __declspec(property(get = __get__entry, put = __set__entry))::GlobalNamespace::__Interop__Sys__DirectoryEntry _entry;

  /// @brief Field _current, offset 0x60, size 0x8
  __declspec(property(get = __get__current, put = __set__current)) TResult _current;

  /// @brief Field _pathBuffer, offset 0x68, size 0x8
  __declspec(property(get = __get__pathBuffer, put = __set__pathBuffer))::ArrayW<char16_t, ::Array<char16_t>*> _pathBuffer;

  /// @brief Field _entryBuffer, offset 0x70, size 0x8
  __declspec(property(get = __get__entryBuffer, put = __set__entryBuffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _entryBuffer;

  __declspec(property(get = get_Current)) TResult Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TResult>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<TResult>*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr ::StringW& __get__originalRootDirectory();

  constexpr ::StringW const& __get__originalRootDirectory() const;

  constexpr void __set__originalRootDirectory(::StringW value);

  constexpr ::StringW& __get__rootDirectory();

  constexpr ::StringW const& __get__rootDirectory() const;

  constexpr void __set__rootDirectory(::StringW value);

  constexpr ::System::IO::EnumerationOptions*& __get__options();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::EnumerationOptions*> const& __get__options() const;

  constexpr void __set__options(::System::IO::EnumerationOptions* value);

  constexpr ::System::Object*& __get__lock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__lock() const;

  constexpr void __set__lock(::System::Object* value);

  constexpr ::StringW& __get__currentPath();

  constexpr ::StringW const& __get__currentPath() const;

  constexpr void __set__currentPath(::StringW value);

  constexpr void*& __get__directoryHandle();

  constexpr void* const& __get__directoryHandle() const;

  constexpr void __set__directoryHandle(void* value);

  constexpr bool& __get__lastEntryFound();

  constexpr bool const& __get__lastEntryFound() const;

  constexpr void __set__lastEntryFound(bool value);

  constexpr ::System::Collections::Generic::Queue_1<::StringW>*& __get__pending();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::StringW>*> const& __get__pending() const;

  constexpr void __set__pending(::System::Collections::Generic::Queue_1<::StringW>* value);

  constexpr ::GlobalNamespace::__Interop__Sys__DirectoryEntry& __get__entry();

  constexpr ::GlobalNamespace::__Interop__Sys__DirectoryEntry const& __get__entry() const;

  constexpr void __set__entry(::GlobalNamespace::__Interop__Sys__DirectoryEntry value);

  constexpr TResult& __get__current();

  constexpr TResult const& __get__current() const;

  constexpr void __set__current(TResult value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get__pathBuffer();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get__pathBuffer() const;

  constexpr void __set__pathBuffer(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__entryBuffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__entryBuffer() const;

  constexpr void __set__entryBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::System::IO::Enumeration::FileSystemEnumerator_1<TResult>* New_ctor(::StringW directory, ::System::IO::EnumerationOptions* options);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::StringW directory, ::System::IO::EnumerationOptions* options);

  /// @brief Method InternalContinueOnError addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool InternalContinueOnError(::GlobalNamespace::__Interop__ErrorInfo info, bool ignoreNotFound);

  /// @brief Method IsDirectoryNotFound addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline bool IsDirectoryNotFound(::GlobalNamespace::__Interop__ErrorInfo info);

  /// @brief Method IsAccessError addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline bool IsAccessError(::GlobalNamespace::__Interop__ErrorInfo info);

  /// @brief Method CreateDirectoryHandle addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void* CreateDirectoryHandle(::StringW path, bool ignoreNotFound);

  /// @brief Method CloseDirectoryHandle addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void CloseDirectoryHandle();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool MoveNext();

  /// @brief Method FindNextEntry addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void FindNextEntry();

  /// @brief Method FindNextEntry addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void FindNextEntry(::cordl_internals::Ptr<uint8_t> entryBufferPtr, int32_t bufferLength);

  /// @brief Method DequeueNextDirectory addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool DequeueNextDirectory();

  /// @brief Method InternalDispose addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void InternalDispose(bool disposing);

  /// @brief Method ShouldIncludeEntry addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool ShouldIncludeEntry(ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  /// @brief Method ShouldRecurseIntoEntry addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool ShouldRecurseIntoEntry(ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  /// @brief Method TransformEntry addr 0x0 size 0xffffffffffffffff virtual true final false
  inline TResult TransformEntry(ByRef<::System::IO::Enumeration::FileSystemEntry> entry);

  /// @brief Method OnDirectoryFinished addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnDirectoryFinished(::System::ReadOnlySpan_1<char16_t> directory);

  /// @brief Method ContinueOnError addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool ContinueOnError(int32_t error);

  /// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
  inline TResult get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method DirectoryFinished addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void DirectoryFinished();

  /// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Reset();

  /// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Finalize();

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerator_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemEnumerator_1(FileSystemEnumerator_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerator_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemEnumerator_1(FileSystemEnumerator_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemEnumerator_1();

public:
  /// @brief Field _originalRootDirectory, offset: 0x10, size: 0x8, def value: None
  ::StringW ____originalRootDirectory;

  /// @brief Field _rootDirectory, offset: 0x18, size: 0x8, def value: None
  ::StringW ____rootDirectory;

  /// @brief Field _options, offset: 0x20, size: 0x8, def value: None
  ::System::IO::EnumerationOptions* ____options;

  /// @brief Field _lock, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____lock;

  /// @brief Field _currentPath, offset: 0x30, size: 0x8, def value: None
  ::StringW ____currentPath;

  /// @brief Field _directoryHandle, offset: 0x38, size: 0x8, def value: None
  void* ____directoryHandle;

  /// @brief Field _lastEntryFound, offset: 0x40, size: 0x1, def value: None
  bool ____lastEntryFound;

  /// @brief Field _pending, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::StringW>* ____pending;

  /// @brief Field _entry, offset: 0x50, size: 0x10, def value: None
  ::GlobalNamespace::__Interop__Sys__DirectoryEntry ____entry;

  /// @brief Field _current, offset: 0x60, size: 0x8, def value: None
  TResult ____current;

  /// @brief Field _pathBuffer, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ____pathBuffer;

  /// @brief Field _entryBuffer, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____entryBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::IO::Enumeration
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IO::Enumeration::FileSystemEnumerator_1, "System.IO.Enumeration", "FileSystemEnumerator`1");
