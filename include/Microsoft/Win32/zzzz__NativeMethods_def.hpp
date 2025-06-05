#pragma once
// IWYU pragma private; include "Microsoft/Win32/NativeMethods.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::Microsoft::Win32::NativeMethods);
// Dependencies System.Object
namespace Microsoft::Win32 {
// Is value type: false
// CS Name: Microsoft.Win32.NativeMethods
class CORDL_TYPE NativeMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method CloseProcess, addr 0x411d7d4, size 0x4, virtual false, abstract: false, final false
  static inline bool CloseProcess(::System::IntPtr handle);

  /// @brief Method DuplicateHandle, addr 0x411d44c, size 0x13c, virtual false, abstract: false, final false
  static inline bool DuplicateHandle(::System::Runtime::InteropServices::HandleRef hSourceProcessHandle, ::System::Runtime::InteropServices::HandleRef hSourceHandle,
                                     ::System::Runtime::InteropServices::HandleRef hTargetProcess, ::ByRef<::Microsoft::Win32::SafeHandles::SafeProcessHandle*> targetHandle, int32_t dwDesiredAccess,
                                     bool bInheritHandle, int32_t dwOptions);

  /// @brief Method GetCurrentProcess, addr 0x411d5b4, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetCurrentProcess();

  /// @brief Method GetCurrentProcessId, addr 0x411d7d0, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetCurrentProcessId();

  /// @brief Method GetExitCodeProcess, addr 0x411d5bc, size 0xf8, virtual false, abstract: false, final false
  static inline bool GetExitCodeProcess(::Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle, ::ByRef<int32_t> exitCode);

  /// @brief Method GetExitCodeProcess, addr 0x411d5b8, size 0x4, virtual false, abstract: false, final false
  static inline bool GetExitCodeProcess(::System::IntPtr processHandle, ::ByRef<int32_t> exitCode);

  /// @brief Method GetProcessTimes, addr 0x411d6b8, size 0x118, virtual false, abstract: false, final false
  static inline bool GetProcessTimes(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle, ::ByRef<int64_t> creation, ::ByRef<int64_t> exit, ::ByRef<int64_t> kernel, ::ByRef<int64_t> user);

  /// @brief Method GetProcessTimes, addr 0x411d6b4, size 0x4, virtual false, abstract: false, final false
  static inline bool GetProcessTimes(::System::IntPtr handle, ::ByRef<int64_t> creation, ::ByRef<int64_t> exit, ::ByRef<int64_t> kernel, ::ByRef<int64_t> user);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9179 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Microsoft::Win32::NativeMethods, 0x10>, "Size mismatch!");

} // namespace Microsoft::Win32
NEED_NO_BOX(::Microsoft::Win32::NativeMethods);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::NativeMethods*, "Microsoft.Win32", "NativeMethods");
