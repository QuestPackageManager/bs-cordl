#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/ReadHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadHandle)
namespace System {
class IDisposable;
}
namespace Unity::IO::LowLevel::Unsafe {
struct ReadStatus;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
struct ReadHandle;
}
// Write type traits
MARK_VAL_T(::Unity::IO::LowLevel::Unsafe::ReadHandle);
// Dependencies System.IntPtr
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.IO.LowLevel.Unsafe.ReadHandle
struct CORDL_TYPE ReadHandle {
public:
  // Declarations
  __declspec(property(get = get_JobHandle)) ::Unity::Jobs::JobHandle JobHandle;

  __declspec(property(get = get_Status)) ::Unity::IO::LowLevel::Unsafe::ReadStatus Status;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Cancel, addr 0x682a9c0, size 0xcc, virtual false, abstract: false, final false
  inline void Cancel();

  /// @brief Method CancelInternal, addr 0x682aa8c, size 0x40, virtual false, abstract: false, final false
  static inline void CancelInternal(::Unity::IO::LowLevel::Unsafe::ReadHandle handle);

  /// @brief Method CancelInternal_Injected, addr 0x682aacc, size 0x3c, virtual false, abstract: false, final false
  static inline void CancelInternal_Injected(::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle> handle);

  /// @brief Method Dispose, addr 0x682a7b8, size 0xfc, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetJobHandle, addr 0x682abac, size 0x4c, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle GetJobHandle(::Unity::IO::LowLevel::Unsafe::ReadHandle handle);

  /// @brief Method GetJobHandle_Injected, addr 0x682acec, size 0x44, virtual false, abstract: false, final false
  static inline void GetJobHandle_Injected(::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle> handle, ::ByRef<::Unity::Jobs::JobHandle> ret);

  /// @brief Method GetReadStatus, addr 0x682abf8, size 0x40, virtual false, abstract: false, final false
  static inline ::Unity::IO::LowLevel::Unsafe::ReadStatus GetReadStatus(::Unity::IO::LowLevel::Unsafe::ReadHandle handle);

  /// @brief Method GetReadStatus_Injected, addr 0x682ac38, size 0x3c, virtual false, abstract: false, final false
  static inline ::Unity::IO::LowLevel::Unsafe::ReadStatus GetReadStatus_Injected(::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle> handle);

  /// @brief Method IsReadHandleValid, addr 0x682a774, size 0x44, virtual false, abstract: false, final false
  static inline bool IsReadHandleValid(::Unity::IO::LowLevel::Unsafe::ReadHandle handle);

  /// @brief Method IsReadHandleValid_Injected, addr 0x682acb0, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsReadHandleValid_Injected(::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle> handle);

  /// @brief Method IsValid, addr 0x682a72c, size 0x48, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method ReleaseReadHandle, addr 0x682a980, size 0x40, virtual false, abstract: false, final false
  static inline void ReleaseReadHandle(::Unity::IO::LowLevel::Unsafe::ReadHandle handle);

  /// @brief Method ReleaseReadHandle_Injected, addr 0x682ac74, size 0x3c, virtual false, abstract: false, final false
  static inline void ReleaseReadHandle_Injected(::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle> handle);

  /// @brief Method get_JobHandle, addr 0x682ab08, size 0xa4, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle get_JobHandle();

  /// @brief Method get_Status, addr 0x682a8b4, size 0xcc, virtual false, abstract: false, final false
  inline ::Unity::IO::LowLevel::Unsafe::ReadStatus get_Status();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadHandle();

  // Ctor Parameters [CppParam { name: "ptr", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ReadHandle(::System::IntPtr ptr, int32_t version) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9946 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field ptr, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr ptr;

  /// @brief Field version, offset: 0x8, size: 0x4, def value: None
  int32_t version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::ReadHandle, ptr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::IO::LowLevel::Unsafe::ReadHandle, version) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::IO::LowLevel::Unsafe::ReadHandle, 0x10>, "Size mismatch!");

} // namespace Unity::IO::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::ReadHandle, "Unity.IO.LowLevel.Unsafe", "ReadHandle");
