#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/AsyncReadManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AsyncReadManager)
namespace Unity::IO::LowLevel::Unsafe {
struct FileHandle;
}
namespace Unity::IO::LowLevel::Unsafe {
struct FileInfoResult;
}
namespace Unity::IO::LowLevel::Unsafe {
struct ReadCommandArray;
}
namespace Unity::IO::LowLevel::Unsafe {
struct ReadHandle;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
class AsyncReadManager;
}
// Write type traits
MARK_REF_PTR_T(::Unity::IO::LowLevel::Unsafe::AsyncReadManager);
// Dependencies System.Object
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.IO.LowLevel.Unsafe.AsyncReadManager
class CORDL_TYPE AsyncReadManager : public ::System::Object {
public:
  // Declarations
  /// @brief Method CloseFileAsync, addr 0x6892204, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle CloseFileAsync(::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle> fileHandle, ::Unity::Jobs::JobHandle dependency);

  /// @brief Method CloseFileAsync_Injected, addr 0x6892dc4, size 0x54, virtual false, abstract: false, final false
  static inline void CloseFileAsync_Injected(::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle> fileHandle, ::ByRef<::Unity::Jobs::JobHandle> dependency, ::ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method GetFileInfo, addr 0x6892a40, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::IO::LowLevel::Unsafe::ReadHandle GetFileInfo(::StringW filename, ::Unity::IO::LowLevel::Unsafe::FileInfoResult* result);

  /// @brief Method GetFileInfoInternal, addr 0x68928a8, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::IO::LowLevel::Unsafe::ReadHandle GetFileInfoInternal(::StringW filename, void* cmd);

  /// @brief Method GetFileInfoInternal_Injected, addr 0x68929ec, size 0x54, virtual false, abstract: false, final false
  static inline void GetFileInfoInternal_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> filename, void* cmd, ::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle> ret);

  /// @brief Method OpenFileAsync, addr 0x6892d60, size 0x64, virtual false, abstract: false, final false
  static inline ::Unity::IO::LowLevel::Unsafe::FileHandle OpenFileAsync(::StringW fileName);

  /// @brief Method OpenFileAsync_Internal, addr 0x6892be8, size 0x134, virtual false, abstract: false, final false
  static inline ::Unity::IO::LowLevel::Unsafe::FileHandle OpenFileAsync_Internal(::StringW fileName);

  /// @brief Method OpenFileAsync_Internal_Injected, addr 0x6892d1c, size 0x44, virtual false, abstract: false, final false
  static inline void OpenFileAsync_Internal_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> fileName, ::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle> ret);

  /// @brief Method Read, addr 0x6892b44, size 0xa4, virtual false, abstract: false, final false
  static inline ::Unity::IO::LowLevel::Unsafe::ReadHandle Read(::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle> fileHandle, ::Unity::IO::LowLevel::Unsafe::ReadCommandArray readCmdArray);

  /// @brief Method ReadWithHandlesInternal_NativeCopy, addr 0x6892a94, size 0x5c, virtual false, abstract: false, final false
  static inline ::Unity::IO::LowLevel::Unsafe::ReadHandle ReadWithHandlesInternal_NativeCopy(::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle> fileHandle, void* readCmdArray);

  /// @brief Method ReadWithHandlesInternal_NativeCopy_Injected, addr 0x6892af0, size 0x54, virtual false, abstract: false, final false
  static inline void ReadWithHandlesInternal_NativeCopy_Injected(::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle> fileHandle, void* readCmdArray,
                                                                 ::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle> ret);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncReadManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncReadManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncReadManager(AsyncReadManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncReadManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncReadManager(AsyncReadManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9951 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::IO::LowLevel::Unsafe::AsyncReadManager, 0x10>, "Size mismatch!");

} // namespace Unity::IO::LowLevel::Unsafe
NEED_NO_BOX(::Unity::IO::LowLevel::Unsafe::AsyncReadManager);
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::AsyncReadManager*, "Unity.IO.LowLevel.Unsafe", "AsyncReadManager");
