#pragma once
// IWYU pragma private; include "GlobalNamespace/FileSystemFileStorage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SyncBackgroundCommand_1_def.hpp"
#include "GlobalNamespace/zzzz__SyncBackgroundCommand_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileSystemFileStorage)
namespace GlobalNamespace {
class BackgroundCommandQueue;
}
namespace GlobalNamespace {
class IFileStorage;
}
namespace GlobalNamespace {
struct StoragePreference;
}
namespace GlobalNamespace {
class __FileSystemFileStorage__DeleteFileCommand;
}
namespace GlobalNamespace {
class __FileSystemFileStorage__FileExistsCommand;
}
namespace GlobalNamespace {
class __FileSystemFileStorage__LoadFileCommand;
}
namespace GlobalNamespace {
class __FileSystemFileStorage__SaveFileCommand;
}
namespace GlobalNamespace {
class __FileSystemFileStorage____c;
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
class __FileSystemFileStorage__DeleteFileCommand;
}
namespace GlobalNamespace {
class __FileSystemFileStorage__FileExistsCommand;
}
namespace GlobalNamespace {
class __FileSystemFileStorage__LoadFileCommand;
}
namespace GlobalNamespace {
class __FileSystemFileStorage__SaveFileCommand;
}
namespace GlobalNamespace {
class __FileSystemFileStorage____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FileSystemFileStorage);
MARK_REF_PTR_T(::GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand);
MARK_REF_PTR_T(::GlobalNamespace::__FileSystemFileStorage__FileExistsCommand);
MARK_REF_PTR_T(::GlobalNamespace::__FileSystemFileStorage__LoadFileCommand);
MARK_REF_PTR_T(::GlobalNamespace::__FileSystemFileStorage__SaveFileCommand);
MARK_REF_PTR_T(::GlobalNamespace::__FileSystemFileStorage____c);
// Type: ::SaveFileCommand
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FileSystemFileStorage::SaveFileCommand*
class CORDL_TYPE __FileSystemFileStorage__SaveFileCommand : public ::GlobalNamespace::SyncBackgroundCommand {
public:
  // Declarations
  /// @brief Field _filePath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__filePath, put = __cordl_internal_set__filePath)) ::StringW _filePath;

  /// @brief Field _value, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) ::StringW _value;

  /// @brief Method ExecuteInternal, addr 0x2266030, size 0xe4, virtual true, abstract: false, final false
  inline void ExecuteInternal();

  static inline ::GlobalNamespace::__FileSystemFileStorage__SaveFileCommand* New_ctor(::StringW filePath, ::StringW value);

  constexpr ::StringW const& __cordl_internal_get__filePath() const;

  constexpr ::StringW& __cordl_internal_get__filePath();

  constexpr ::StringW const& __cordl_internal_get__value() const;

  constexpr ::StringW& __cordl_internal_get__value();

  constexpr void __cordl_internal_set__filePath(::StringW value);

  constexpr void __cordl_internal_set__value(::StringW value);

  /// @brief Method .ctor, addr 0x2265ac4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW filePath, ::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FileSystemFileStorage__SaveFileCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemFileStorage__SaveFileCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FileSystemFileStorage__SaveFileCommand(__FileSystemFileStorage__SaveFileCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemFileStorage__SaveFileCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FileSystemFileStorage__SaveFileCommand(__FileSystemFileStorage__SaveFileCommand const&) = delete;

  /// @brief Field _filePath, offset: 0x18, size: 0x8, def value: None
  ::StringW ____filePath;

  /// @brief Field _value, offset: 0x20, size: 0x8, def value: None
  ::StringW ____value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18775 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FileSystemFileStorage__SaveFileCommand, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FileSystemFileStorage__SaveFileCommand, ____filePath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FileSystemFileStorage__SaveFileCommand, ____value) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LoadFileCommand
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FileSystemFileStorage::LoadFileCommand*
class CORDL_TYPE __FileSystemFileStorage__LoadFileCommand : public ::GlobalNamespace::SyncBackgroundCommand_1<::StringW> {
public:
  // Declarations
  /// @brief Field _filePath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__filePath, put = __cordl_internal_set__filePath)) ::StringW _filePath;

  /// @brief Method ExecuteInternal, addr 0x2266114, size 0xb8, virtual true, abstract: false, final false
  inline ::StringW ExecuteInternal();

  static inline ::GlobalNamespace::__FileSystemFileStorage__LoadFileCommand* New_ctor(::StringW filePath);

  constexpr ::StringW const& __cordl_internal_get__filePath() const;

  constexpr ::StringW& __cordl_internal_get__filePath();

  constexpr void __cordl_internal_set__filePath(::StringW value);

  /// @brief Method .ctor, addr 0x2265cb0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::StringW filePath);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FileSystemFileStorage__LoadFileCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemFileStorage__LoadFileCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FileSystemFileStorage__LoadFileCommand(__FileSystemFileStorage__LoadFileCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemFileStorage__LoadFileCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FileSystemFileStorage__LoadFileCommand(__FileSystemFileStorage__LoadFileCommand const&) = delete;

  /// @brief Field _filePath, offset: 0x18, size: 0x8, def value: None
  ::StringW ____filePath;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18776 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FileSystemFileStorage__LoadFileCommand, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FileSystemFileStorage__LoadFileCommand, ____filePath) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DeleteFileCommand
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FileSystemFileStorage::DeleteFileCommand*
class CORDL_TYPE __FileSystemFileStorage__DeleteFileCommand : public ::GlobalNamespace::SyncBackgroundCommand {
public:
  // Declarations
  /// @brief Field _filePath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__filePath, put = __cordl_internal_set__filePath)) ::StringW _filePath;

  /// @brief Method ExecuteInternal, addr 0x22661cc, size 0x38, virtual true, abstract: false, final false
  inline void ExecuteInternal();

  static inline ::GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand* New_ctor(::StringW filePath);

  constexpr ::StringW const& __cordl_internal_get__filePath() const;

  constexpr ::StringW& __cordl_internal_get__filePath();

  constexpr void __cordl_internal_set__filePath(::StringW value);

  /// @brief Method .ctor, addr 0x2265db4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW filePath);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FileSystemFileStorage__DeleteFileCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemFileStorage__DeleteFileCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FileSystemFileStorage__DeleteFileCommand(__FileSystemFileStorage__DeleteFileCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemFileStorage__DeleteFileCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FileSystemFileStorage__DeleteFileCommand(__FileSystemFileStorage__DeleteFileCommand const&) = delete;

  /// @brief Field _filePath, offset: 0x18, size: 0x8, def value: None
  ::StringW ____filePath;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18777 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand, ____filePath) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FileExistsCommand
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FileSystemFileStorage::FileExistsCommand*
class CORDL_TYPE __FileSystemFileStorage__FileExistsCommand : public ::GlobalNamespace::SyncBackgroundCommand_1<bool> {
public:
  // Declarations
  /// @brief Field _filePath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__filePath, put = __cordl_internal_set__filePath)) ::StringW _filePath;

  /// @brief Method ExecuteInternal, addr 0x2266204, size 0x38, virtual true, abstract: false, final false
  inline bool ExecuteInternal();

  static inline ::GlobalNamespace::__FileSystemFileStorage__FileExistsCommand* New_ctor(::StringW filePath);

  constexpr ::StringW const& __cordl_internal_get__filePath() const;

  constexpr ::StringW& __cordl_internal_get__filePath();

  constexpr void __cordl_internal_set__filePath(::StringW value);

  /// @brief Method .ctor, addr 0x2265e98, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::StringW filePath);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FileSystemFileStorage__FileExistsCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemFileStorage__FileExistsCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FileSystemFileStorage__FileExistsCommand(__FileSystemFileStorage__FileExistsCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemFileStorage__FileExistsCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FileSystemFileStorage__FileExistsCommand(__FileSystemFileStorage__FileExistsCommand const&) = delete;

  /// @brief Field _filePath, offset: 0x18, size: 0x8, def value: None
  ::StringW ____filePath;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18778 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FileSystemFileStorage__FileExistsCommand, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FileSystemFileStorage__FileExistsCommand, ____filePath) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FileSystemFileStorage::<>c*
class CORDL_TYPE __FileSystemFileStorage____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::__FileSystemFileStorage____c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Func_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>* __9__6_0;

  static inline ::GlobalNamespace::__FileSystemFileStorage____c* New_ctor();

  /// @brief Method <GetCommandQueue>b__6_0, addr 0x22662a0, size 0x54, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BackgroundCommandQueue* _GetCommandQueue_b__6_0(::StringW _);

  /// @brief Method .ctor, addr 0x2266298, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__FileSystemFileStorage____c* getStaticF___9();

  static inline ::System::Func_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>* getStaticF___9__6_0();

  static inline void setStaticF___9(::GlobalNamespace::__FileSystemFileStorage____c* value);

  static inline void setStaticF___9__6_0(::System::Func_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FileSystemFileStorage____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemFileStorage____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FileSystemFileStorage____c(__FileSystemFileStorage____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FileSystemFileStorage____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FileSystemFileStorage____c(__FileSystemFileStorage____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18779 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FileSystemFileStorage____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FileSystemFileStorage
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FileSystemFileStorage*
class CORDL_TYPE FileSystemFileStorage : public ::System::Object {
public:
  // Declarations
  using DeleteFileCommand = ::GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand;

  using FileExistsCommand = ::GlobalNamespace::__FileSystemFileStorage__FileExistsCommand;

  using LoadFileCommand = ::GlobalNamespace::__FileSystemFileStorage__LoadFileCommand;

  using SaveFileCommand = ::GlobalNamespace::__FileSystemFileStorage__SaveFileCommand;

  using __c = ::GlobalNamespace::__FileSystemFileStorage____c;

  /// @brief Field _commandQueueMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__commandQueueMap,
                      put = __cordl_internal_set__commandQueueMap)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>* _commandQueueMap;

  /// @brief Field _persistentDataPath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__persistentDataPath, put = __cordl_internal_set__persistentDataPath)) ::StringW _persistentDataPath;

  /// @brief Convert operator to "::GlobalNamespace::IFileStorage"
  constexpr operator ::GlobalNamespace::IFileStorage*() noexcept;

  /// @brief Method DeleteFileAsync, addr 0x2265d0c, size 0xa8, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* DeleteFileAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method FileExistsAsync, addr 0x2265ddc, size 0xbc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<bool>* FileExistsAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method GetBackupFilePath, addr 0x2265ef4, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetBackupFilePath(::StringW filePath);

  /// @brief Method GetCommandQueue, addr 0x2265af0, size 0x104, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BackgroundCommandQueue* GetCommandQueue(::StringW fileName);

  /// @brief Method GetFilePath, addr 0x22659ac, size 0x118, virtual false, abstract: false, final false
  inline ::StringW GetFilePath(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  /// @brief Method GetTempFilePath, addr 0x2265f40, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetTempFilePath(::StringW filePath);

  /// @brief Method LoadFileAsync, addr 0x2265bf4, size 0xbc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::StringW>* LoadFileAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation);

  static inline ::GlobalNamespace::FileSystemFileStorage* New_ctor();

  /// @brief Method SaveFileAsync, addr 0x22658f8, size 0xb4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* SaveFileAsync(::StringW fileName, ::StringW value, ::GlobalNamespace::StoragePreference storageLocation);

  constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>*& __cordl_internal_get__commandQueueMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>*> const&
  __cordl_internal_get__commandQueueMap() const;

  constexpr ::StringW const& __cordl_internal_get__persistentDataPath() const;

  constexpr ::StringW& __cordl_internal_get__persistentDataPath();

  constexpr void __cordl_internal_set__commandQueueMap(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>* value);

  constexpr void __cordl_internal_set__persistentDataPath(::StringW value);

  /// @brief Method .ctor, addr 0x2265f8c, size 0xa4, virtual false, abstract: false, final false
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

  /// @brief Field _persistentDataPath, offset: 0x10, size: 0x8, def value: None
  ::StringW ____persistentDataPath;

  /// @brief Field _commandQueueMap, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>* ____commandQueueMap;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18780 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileSystemFileStorage, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FileSystemFileStorage, ____persistentDataPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileSystemFileStorage, ____commandQueueMap) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FileSystemFileStorage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileSystemFileStorage*, "", "FileSystemFileStorage");
NEED_NO_BOX(::GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand*, "", "FileSystemFileStorage/DeleteFileCommand");
NEED_NO_BOX(::GlobalNamespace::__FileSystemFileStorage__FileExistsCommand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FileSystemFileStorage__FileExistsCommand*, "", "FileSystemFileStorage/FileExistsCommand");
NEED_NO_BOX(::GlobalNamespace::__FileSystemFileStorage__LoadFileCommand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FileSystemFileStorage__LoadFileCommand*, "", "FileSystemFileStorage/LoadFileCommand");
NEED_NO_BOX(::GlobalNamespace::__FileSystemFileStorage__SaveFileCommand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FileSystemFileStorage__SaveFileCommand*, "", "FileSystemFileStorage/SaveFileCommand");
NEED_NO_BOX(::GlobalNamespace::__FileSystemFileStorage____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FileSystemFileStorage____c*, "", "FileSystemFileStorage/<>c");
