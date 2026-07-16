#pragma once
// IWYU pragma private; include "System/Runtime/Interop/SafeEventLogWriteHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SafeEventLogWriteHandle)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Runtime::Interop {
class SafeEventLogWriteHandle;
}
// Write type traits
MARK_REF_T(::System::Runtime::Interop::SafeEventLogWriteHandle*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Interop::SafeEventLogWriteHandle*, "System.Runtime.Interop", "SafeEventLogWriteHandle");
// Dependencies Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
namespace System::Runtime::Interop {
// Is value type: false
// CS Name: System.Runtime.Interop.SafeEventLogWriteHandle
class CORDL_TYPE SafeEventLogWriteHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
public:
  // Declarations
  /// @brief Method DeregisterEventSource, addr 0x6185094, size 0x88, virtual false, abstract: false, final false
  static inline bool DeregisterEventSource(::System::IntPtr hEventLog);

  static inline ::System::Runtime::Interop::SafeEventLogWriteHandle* New_ctor();

  /// @brief Method RegisterEventSource, addr 0x6184ee4, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Runtime::Interop::SafeEventLogWriteHandle* RegisterEventSource(::StringW uncServerName, ::StringW sourceName);

  /// @brief Method ReleaseHandle, addr 0x618511c, size 0x8, virtual true, abstract: false, final false
  inline bool ReleaseHandle();

  /// @brief Method .ctor, addr 0x6184e90, size 0x54, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21266 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::Interop::SafeEventLogWriteHandle) == 0x20, "Size mismatch!");

} // namespace System::Runtime::Interop
