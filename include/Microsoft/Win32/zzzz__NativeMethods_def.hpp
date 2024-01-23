#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeMethods)
namespace Microsoft::Win32::SafeHandles {
class SafeProcessHandle;
}
namespace Microsoft::Win32::SafeHandles {
class SafeWaitHandle;
}
namespace System::Runtime::InteropServices {
struct HandleRef;
}
namespace System::Runtime::InteropServices {
class SafeHandle;
}
// Forward declare root types
namespace Microsoft::Win32 {
class NativeMethods;
}
// Write type traits
MARK_REF_PTR_T(::Microsoft::Win32::NativeMethods);
// Type: Microsoft.Win32::NativeMethods
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Microsoft::Win32 {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8859))
// CS Name: ::Microsoft.Win32::NativeMethods*
class CORDL_TYPE NativeMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method DuplicateHandle, addr 0x282a858, size 0x204, virtual false, abstract: false, final false
  static inline bool DuplicateHandle(::System::Runtime::InteropServices::HandleRef hSourceProcessHandle, ::System::Runtime::InteropServices::SafeHandle* hSourceHandle,
                                     ::System::Runtime::InteropServices::HandleRef hTargetProcess, ByRef<::Microsoft::Win32::SafeHandles::SafeWaitHandle*> targetHandle, int32_t dwDesiredAccess,
                                     bool bInheritHandle, int32_t dwOptions);

  /// @brief Method DuplicateHandle, addr 0x282aa5c, size 0x150, virtual false, abstract: false, final false
  static inline bool DuplicateHandle(::System::Runtime::InteropServices::HandleRef hSourceProcessHandle, ::System::Runtime::InteropServices::HandleRef hSourceHandle,
                                     ::System::Runtime::InteropServices::HandleRef hTargetProcess, ByRef<::Microsoft::Win32::SafeHandles::SafeProcessHandle*> targetHandle, int32_t dwDesiredAccess,
                                     bool bInheritHandle, int32_t dwOptions);

  /// @brief Method GetCurrentProcess, addr 0x282abd8, size 0x4, virtual false, abstract: false, final false
  static inline void* GetCurrentProcess();

  /// @brief Method GetExitCodeProcess, addr 0x282abdc, size 0x4, virtual false, abstract: false, final false
  static inline bool GetExitCodeProcess(void* processHandle, ByRef<int32_t> exitCode);

  /// @brief Method GetExitCodeProcess, addr 0x282abe0, size 0xe8, virtual false, abstract: false, final false
  static inline bool GetExitCodeProcess(::Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle, ByRef<int32_t> exitCode);

  /// @brief Method GetProcessTimes, addr 0x282acc8, size 0x4, virtual false, abstract: false, final false
  static inline bool GetProcessTimes(void* handle, ByRef<int64_t> creation, ByRef<int64_t> exit, ByRef<int64_t> kernel, ByRef<int64_t> user);

  /// @brief Method GetProcessTimes, addr 0x282accc, size 0x108, virtual false, abstract: false, final false
  static inline bool GetProcessTimes(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle, ByRef<int64_t> creation, ByRef<int64_t> exit, ByRef<int64_t> kernel, ByRef<int64_t> user);

  /// @brief Method GetCurrentProcessId, addr 0x282add4, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetCurrentProcessId();

  /// @brief Method CloseProcess, addr 0x282add8, size 0x4, virtual false, abstract: false, final false
  static inline bool CloseProcess(void* handle);

  // Ctor Parameters [CppParam { name: "", ty: "NativeMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeMethods(NativeMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeMethods(NativeMethods const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeMethods();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Microsoft::Win32::NativeMethods, 0x10>, "Size mismatch!");

} // namespace Microsoft::Win32
NEED_NO_BOX(::Microsoft::Win32::NativeMethods);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::NativeMethods*, "Microsoft.Win32", "NativeMethods");
