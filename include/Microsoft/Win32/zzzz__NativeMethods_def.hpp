#pragma once
// IWYU pragma private; include "Microsoft/Win32/NativeMethods.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeMethods)
namespace Microsoft::Win32::SafeHandles {
class SafeProcessHandle;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Microsoft::Win32 {
class NativeMethods;
}
// Write type traits
MARK_REF_T(::Microsoft::Win32::NativeMethods*);
DEFINE_IL2CPP_CLASS(::Microsoft::Win32::NativeMethods*, "Microsoft.Win32", "NativeMethods");
// Dependencies System.Object
namespace Microsoft::Win32 {
// Is value type: false
// CS Name: Microsoft.Win32.NativeMethods
class CORDL_TYPE NativeMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method CloseProcess, addr 0x5fdeda0, size 0x60, virtual false, abstract: false, final false
  static inline bool CloseProcess(::System::IntPtr handle);

  /// @brief Method DuplicateHandle, addr 0x5fdea48, size 0x168, virtual false, abstract: false, final false
  static inline bool DuplicateHandle(::System::Runtime::InteropServices::HandleRef hSourceProcessHandle, ::System::Runtime::InteropServices::HandleRef hSourceHandle,
                                     ::System::Runtime::InteropServices::HandleRef hTargetProcess, ::by_ref<::Microsoft::Win32::SafeHandles::SafeProcessHandle*> targetHandle, int32_t dwDesiredAccess,
                                     bool bInheritHandle, int32_t dwOptions);

  /// @brief Method GetCurrentProcess, addr 0x5fdebdc, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetCurrentProcess();

  /// @brief Method GetCurrentProcessId, addr 0x5fded9c, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetCurrentProcessId();

  /// @brief Method GetExitCodeProcess, addr 0x5fdebf0, size 0xac, virtual false, abstract: false, final false
  static inline bool GetExitCodeProcess(::Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle, ::by_ref<int32_t> exitCode);

  /// @brief Method GetExitCodeProcess, addr 0x5fdebf0, size 0xac, virtual false, abstract: false, final false
  static inline bool GetExitCodeProcess(::System::IntPtr processHandle, ::by_ref<int32_t> exitCode);

  /// @brief Method GetProcessTimes, addr 0x5fdeca4, size 0xf8, virtual false, abstract: false, final false
  static inline bool GetProcessTimes(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle, ::by_ref<int64_t> creation, ::by_ref<int64_t> exit, ::by_ref<int64_t> kernel, ::by_ref<int64_t> user);

  /// @brief Method GetProcessTimes, addr 0x5fdec9c, size 0x8, virtual false, abstract: false, final false
  static inline bool GetProcessTimes(::System::IntPtr handle, ::by_ref<int64_t> creation, ::by_ref<int64_t> exit, ::by_ref<int64_t> kernel, ::by_ref<int64_t> user);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeMethods();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeMethods(NativeMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeMethods(NativeMethods const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11023 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Microsoft::Win32::NativeMethods) == 0x10, "Size mismatch!");

} // namespace Microsoft::Win32
