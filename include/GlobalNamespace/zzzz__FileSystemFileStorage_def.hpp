#pragma once
// IWYU pragma private; include "GlobalNamespace/FileSystemFileStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__SyncBackgroundCommand_1_def.hpp"
#include "GlobalNamespace/zzzz__SyncBackgroundCommand_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileSystemFileStorage)
namespace GlobalNamespace {
class BackgroundCommandQueue;
}
namespace GlobalNamespace {
class FileSystemFileStorage_DeleteFileCommand;
}
namespace GlobalNamespace {
class FileSystemFileStorage_FileExistsCommand;
}
namespace GlobalNamespace {
class FileSystemFileStorage_LoadFileCommand;
}
namespace GlobalNamespace {
class FileSystemFileStorage_SaveFileCommand;
}
namespace GlobalNamespace {
class FileSystemFileStorage___c;
}
namespace GlobalNamespace {
struct StoragePreference;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class FileSystemFileStorage;
}
namespace GlobalNamespace {
class FileSystemFileStorage_DeleteFileCommand;
}
namespace GlobalNamespace {
class FileSystemFileStorage_FileExistsCommand;
}
namespace GlobalNamespace {
class FileSystemFileStorage_LoadFileCommand;
}
namespace GlobalNamespace {
class FileSystemFileStorage_SaveFileCommand;
}
namespace GlobalNamespace {
class FileSystemFileStorage___c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FileSystemFileStorage);
MARK_REF_PTR_T(::GlobalNamespace::FileSystemFileStorage_DeleteFileCommand);
MARK_REF_PTR_T(::GlobalNamespace::FileSystemFileStorage_FileExistsCommand);
MARK_REF_PTR_T(::GlobalNamespace::FileSystemFileStorage_LoadFileCommand);
MARK_REF_PTR_T(::GlobalNamespace::FileSystemFileStorage_SaveFileCommand);
MARK_REF_PTR_T(::GlobalNamespace::FileSystemFileStorage___c);
// Dependencies SyncBackgroundCommand
namespace GlobalNamespace {
// Is value type: false
// CS Name: FileSystemFileStorage/SaveFileCommand
class CORDL_TYPE FileSystemFileStorage_SaveFileCommand : public ::GlobalNamespace::SyncBackgroundCommand {
public:
  // Declarations
  /// @brief Field _filePath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__filePath, put = __cordl_internal_set__filePath)) ::StringW _filePath;

  /// @brief Field _value, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) ::StringW _value;

  /// @brief Method ExecuteInternal, addr 0x22a5888, size 0xe4, virtual true, abstract: false, final false
  inline void ExecuteInternal();

  static inline ::GlobalNamespace::FileSystemFileStorage_SaveFileCommand* New_ctor(::StringW filePath, ::StringW value);

  constexpr ::StringW const& __cordl_internal_get__filePath() const;

  constexpr ::StringW& __cordl_internal_get__filePath();

  constexpr ::StringW const& __cordl_internal_get__value() const;

  constexpr ::StringW& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__filePath(::StringW value);

  constexpr void __cordl_internal_set__value(::StringW value);

  /// @brief Method .ctor, addr 0x22a531c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW filePath, ::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemFileStorage_SaveFileCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemFileStorage_SaveFileCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemFileStorage_SaveFileCommand(FileSystemFileStorage_SaveFileCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemFileStorage_SaveFileCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemFileStorage_SaveFileCommand(FileSystemFileStorage_SaveFileCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18905 };

  /// @brief Field _filePath, offset: 0x18, size: 0x8, def value: None
  ::StringW ____filePath;

  /// @brief Field _value, offset: 0x20, size: 0x8, def value: None
  ::StringW ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FileSystemFileStorage_SaveFileCommand, ____filePath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileSystemFileStorage_SaveFileCommand, ____value) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileSystemFileStorage_SaveFileCommand, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies SyncBackgroundCommand`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: FileSystemFileStorage/LoadFileCommand
class CORDL_TYPE FileSystemFileStorage_LoadFileCommand : public ::GlobalNamespace::SyncBackgroundCommand_1<::StringW> {
public:
  // Declarations
  /// @brief Field _filePath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__filePath, put = __cordl_internal_set__filePath)) ::StringW _filePath;

  /// @brief Method ExecuteInternal, addr 0x22a596c, size 0xb8, virtual true, abstract: false, final false
  inline ::StringW ExecuteInternal();

  static inline ::GlobalNamespace::FileSystemFileStorage_LoadFileCommand* New_ctor(::StringW filePath);

  constexpr ::StringW const& __cordl_internal_get__filePath() const;

  constexpr ::StringW& __cordl_internal_get__filePath();

  constexpr void __cordl_internal_set__filePath(::StringW value);

  /// @brief Method .ctor, addr 0x22a5508, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::StringW filePath);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemFileStorage_LoadFileCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemFileStorage_LoadFileCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemFileStorage_LoadFileCommand(FileSystemFileStorage_LoadFileCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemFileStorage_LoadFileCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemFileStorage_LoadFileCommand(FileSystemFileStorage_LoadFileCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18906 };

  /// @brief Field _filePath, offset: 0x18, size: 0x8, def value: None
  ::StringW ____filePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FileSystemFileStorage_LoadFileCommand, ____filePath) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileSystemFileStorage_LoadFileCommand, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies SyncBackgroundCommand
namespace GlobalNamespace {
// Is value type: false
// CS Name: FileSystemFileStorage/DeleteFileCommand
class CORDL_TYPE FileSystemFileStorage_DeleteFileCommand : public ::GlobalNamespace::SyncBackgroundCommand {
public:
  // Declarations
  /// @brief Field _filePath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__filePath, put = __cordl_internal_set__filePath)) ::StringW _filePath;

  /// @brief Method ExecuteInternal, addr 0x22a5a24, size 0x38, virtual true, abstract: false, final false
  inline void ExecuteInternal();

  static inline ::GlobalNamespace::FileSystemFileStorage_DeleteFileCommand* New_ctor(::StringW filePath);

  constexpr ::StringW const& __cordl_internal_get__filePath() const;

  constexpr ::StringW& __cordl_internal_get__filePath();

  constexpr void __cordl_internal_set__filePath(::StringW value);

  /// @brief Method .ctor, addr 0x22a560c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW filePath);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemFileStorage_DeleteFileCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemFileStorage_DeleteFileCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemFileStorage_DeleteFileCommand(FileSystemFileStorage_DeleteFileCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemFileStorage_DeleteFileCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemFileStorage_DeleteFileCommand(FileSystemFileStorage_DeleteFileCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18907 };

  /// @brief Field _filePath, offset: 0x18, size: 0x8, def value: None
  ::StringW ____filePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FileSystemFileStorage_DeleteFileCommand, ____filePath) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileSystemFileStorage_DeleteFileCommand, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies SyncBackgroundCommand`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: FileSystemFileStorage/FileExistsCommand
class CORDL_TYPE FileSystemFileStorage_FileExistsCommand : public ::GlobalNamespace::SyncBackgroundCommand_1<bool> {
public:
  // Declarations
  /// @brief Field _filePath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__filePath, put = __cordl_internal_set__filePath)) ::StringW _filePath;

  /// @brief Method ExecuteInternal, addr 0x22a5a5c, size 0x38, virtual true, abstract: false, final false
  inline bool ExecuteInternal();

  static inline ::GlobalNamespace::FileSystemFileStorage_FileExistsCommand* New_ctor(::StringW filePath);

  constexpr ::StringW const& __cordl_internal_get__filePath() const;

  constexpr ::StringW& __cordl_internal_get__filePath();

  constexpr void __cordl_internal_set__filePath(::StringW value);

  /// @brief Method .ctor, addr 0x22a56f0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::StringW filePath);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemFileStorage_FileExistsCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemFileStorage_FileExistsCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemFileStorage_FileExistsCommand(FileSystemFileStorage_FileExistsCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemFileStorage_FileExistsCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemFileStorage_FileExistsCommand(FileSystemFileStorage_FileExistsCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18908 };

  /// @brief Field _filePath, offset: 0x18, size: 0x8, def value: None
  ::StringW ____filePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FileSystemFileStorage_FileExistsCommand, ____filePath) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileSystemFileStorage_FileExistsCommand, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FileSystemFileStorage/<>c
class CORDL_TYPE FileSystemFileStorage___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::FileSystemFileStorage___c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Func_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>* __9__6_0;

  static inline ::GlobalNamespace::FileSystemFileStorage___c* New_ctor();

  /// @brief Method <GetCommandQueue>b__6_0, addr 0x22a5af8, size 0x54, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BackgroundCommandQueue* _GetCommandQueue_b__6_0(::StringW _);

  /// @brief Method .ctor, addr 0x22a5af0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::FileSystemFileStorage___c* getStaticF___9();

  static inline ::System::Func_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>* getStaticF___9__6_0();

  static inline void setStaticF___9(::GlobalNamespace::FileSystemFileStorage___c* value);

  static inline void setStaticF___9__6_0(::System::Func_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemFileStorage___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemFileStorage___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemFileStorage___c(FileSystemFileStorage___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemFileStorage___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemFileStorage___c(FileSystemFileStorage___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18909 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileSystemFileStorage___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IFileStorage, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FileSystemFileStorage
class CORDL_TYPE FileSystemFileStorage : public ::System::Object {
public:
  // Declarations
  using DeleteFileCommand = ::GlobalNamespace::FileSystemFileStorage_DeleteFileCommand;

  using FileExistsCommand = ::GlobalNamespace::FileSystemFileStorage_FileExistsCommand;

  using LoadFileCommand = ::GlobalNamespace::FileSystemFileStorage_LoadFileCommand;

  using SaveFileCommand = ::GlobalNamespace::FileSystemFileStorage_SaveFileCommand;

  using __c = ::GlobalNamespace::FileSystemFileStorage___c;

  /// @brief Field _commandQueueMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__commandQueueMap,
                      put = __cordl_internal_set__commandQueueMap)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>* _commandQueueMap;

  /// @brief Field _persistentDataPath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__persistentDataPath, put = __cordl_internal_set__persistentDataPath)) ::StringW _persistentDataPath;

  /// @brief Convert operator to "::GlobalNamespace::IFileStorage"
  constexpr operator ::GlobalNamespace::IFileStorage*() noexcept;

  /// @brief Method DeleteFileAsync, addr 0x22a5564, size 0xa8, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* DeleteFileAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method FileExistsAsync, addr 0x22a5634, size 0xbc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<bool>* FileExistsAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method GetBackupFilePath, addr 0x22a574c, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetBackupFilePath(::StringW filePath);

  /// @brief Method GetCommandQueue, addr 0x22a5348, size 0x104, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BackgroundCommandQueue* GetCommandQueue(::StringW fileName);

  /// @brief Method GetFilePath, addr 0x22a5204, size 0x118, virtual false, abstract: false, final false
  inline ::StringW GetFilePath(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method GetTempFilePath, addr 0x22a5798, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetTempFilePath(::StringW filePath);

  /// @brief Method LoadFileAsync, addr 0x22a544c, size 0xbc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::StringW>* LoadFileAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  static inline ::GlobalNamespace::FileSystemFileStorage* New_ctor();

  /// @brief Method SaveFileAsync, addr 0x22a5150, size 0xb4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* SaveFileAsync(::StringW fileName, ::StringW value, ::GlobalNamespace::StoragePreference storageLocation);

  constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>* const& __cordl_internal_get__commandQueueMap() const;

  constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>*& __cordl_internal_get__commandQueueMap();

  constexpr ::StringW const& __cordl_internal_get__persistentDataPath() const;

  constexpr ::StringW& __cordl_internal_get__persistentDataPath();

  constexpr void __cordl_internal_set__commandQueueMap(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>* value);

  constexpr void __cordl_internal_set__persistentDataPath(::StringW value);

  /// @brief Method .ctor, addr 0x22a57e4, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IFileStorage"
  constexpr ::GlobalNamespace::IFileStorage* i___GlobalNamespace__IFileStorage() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemFileStorage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemFileStorage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemFileStorage(FileSystemFileStorage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemFileStorage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemFileStorage(FileSystemFileStorage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18910 };

  /// @brief Field _persistentDataPath, offset: 0x10, size: 0x8, def value: None
  ::StringW ____persistentDataPath;

  /// @brief Field _commandQueueMap, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>* ____commandQueueMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FileSystemFileStorage, ____persistentDataPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileSystemFileStorage, ____commandQueueMap) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileSystemFileStorage, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FileSystemFileStorage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileSystemFileStorage*, "", "FileSystemFileStorage");
NEED_NO_BOX(::GlobalNamespace::FileSystemFileStorage_DeleteFileCommand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileSystemFileStorage_DeleteFileCommand*, "", "FileSystemFileStorage/DeleteFileCommand");
NEED_NO_BOX(::GlobalNamespace::FileSystemFileStorage_FileExistsCommand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileSystemFileStorage_FileExistsCommand*, "", "FileSystemFileStorage/FileExistsCommand");
NEED_NO_BOX(::GlobalNamespace::FileSystemFileStorage_LoadFileCommand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileSystemFileStorage_LoadFileCommand*, "", "FileSystemFileStorage/LoadFileCommand");
NEED_NO_BOX(::GlobalNamespace::FileSystemFileStorage_SaveFileCommand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileSystemFileStorage_SaveFileCommand*, "", "FileSystemFileStorage/SaveFileCommand");
NEED_NO_BOX(::GlobalNamespace::FileSystemFileStorage___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileSystemFileStorage___c*, "", "FileSystemFileStorage/<>c");
