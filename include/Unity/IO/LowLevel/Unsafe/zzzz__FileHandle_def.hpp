#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/FileHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileHandle)
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
struct FileHandle;
}
// Write type traits
MARK_VAL_T(::Unity::IO::LowLevel::Unsafe::FileHandle);
// Dependencies System.IntPtr
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.IO.LowLevel.Unsafe.FileHandle
struct CORDL_TYPE FileHandle {
public:
  // Declarations
  __declspec(property(get = get_JobHandle)) ::Unity::Jobs::JobHandle JobHandle;

  /// @brief Method Close, addr 0x682a5e4, size 0xa8, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle Close(::Unity::Jobs::JobHandle dependency);

  /// @brief Method GetJobHandle_Internal, addr 0x682a554, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle GetJobHandle_Internal(::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle> handle);

  /// @brief Method GetJobHandle_Internal_Injected, addr 0x682a6e8, size 0x44, virtual false, abstract: false, final false
  static inline void GetJobHandle_Internal_Injected(::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle> handle, ::ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method IsFileHandleValid, addr 0x682a518, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsFileHandleValid(::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle> handle);

  /// @brief Method IsValid, addr 0x682a5a8, size 0x3c, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method get_JobHandle, addr 0x682a488, size 0x90, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle get_JobHandle();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FileHandle();

  // Ctor Parameters [CppParam { name: "fileCommandPtr", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FileHandle(::System::IntPtr fileCommandPtr, int32_t version) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9945 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field fileCommandPtr, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr fileCommandPtr;

  /// @brief Field version, offset: 0x8, size: 0x4, def value: None
  int32_t version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::FileHandle, fileCommandPtr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::FileHandle, version) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::IO::LowLevel::Unsafe::FileHandle, 0x10>, "Size mismatch!");

} // namespace Unity::IO::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::FileHandle, "Unity.IO.LowLevel.Unsafe", "FileHandle");
