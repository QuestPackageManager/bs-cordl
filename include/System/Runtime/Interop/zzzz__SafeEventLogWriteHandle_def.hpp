#pragma once
// IWYU pragma private; include "System/Runtime/Interop/SafeEventLogWriteHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SafeEventLogWriteHandle)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Runtime::Interop {
class SafeEventLogWriteHandle;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Interop::SafeEventLogWriteHandle);
// Dependencies Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
namespace System::Runtime::Interop {
// Is value type: false
// CS Name: System.Runtime.Interop.SafeEventLogWriteHandle
class CORDL_TYPE SafeEventLogWriteHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
public:
  // Declarations
  /// @brief Method DeregisterEventSource, addr 0x5f6e1c8, size 0x88, virtual false, abstract: false, final false
  static inline bool DeregisterEventSource(::System::IntPtr hEventLog);

  static inline ::System::Runtime::Interop::SafeEventLogWriteHandle* New_ctor();

  /// @brief Method RegisterEventSource, addr 0x5f6e018, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Runtime::Interop::SafeEventLogWriteHandle* RegisterEventSource(::StringW uncServerName, ::StringW sourceName);

  /// @brief Method ReleaseHandle, addr 0x5f6e250, size 0x8, virtual true, abstract: false, final false
  inline bool ReleaseHandle();

  /// @brief Method .ctor, addr 0x5f6dfc4, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeEventLogWriteHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SafeEventLogWriteHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeEventLogWriteHandle(SafeEventLogWriteHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeEventLogWriteHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeEventLogWriteHandle(SafeEventLogWriteHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21094 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Interop::SafeEventLogWriteHandle, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Interop
NEED_NO_BOX(::System::Runtime::Interop::SafeEventLogWriteHandle);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Interop::SafeEventLogWriteHandle*, "System.Runtime.Interop", "SafeEventLogWriteHandle");
