#pragma once
// IWYU pragma private; include "Microsoft/Win32/SafeHandles/SafeFileHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
CORDL_MODULE_EXPORT(SafeFileHandle)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class SafeFileHandle;
}
// Write type traits
MARK_REF_PTR_T(::Microsoft::Win32::SafeHandles::SafeFileHandle);
// Dependencies Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// CS Name: Microsoft.Win32.SafeHandles.SafeFileHandle
class CORDL_TYPE SafeFileHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
public:
  // Declarations
  static inline ::Microsoft::Win32::SafeHandles::SafeFileHandle* New_ctor(::System::IntPtr preexistingHandle, bool ownsHandle);

  /// @brief Method ReleaseHandle, addr 0x3c7367c, size 0x7c, virtual true, abstract: false, final false
  inline bool ReleaseHandle();

  /// @brief Method .ctor, addr 0x3c7363c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr preexistingHandle, bool ownsHandle);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeFileHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SafeFileHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeFileHandle(SafeFileHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeFileHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeFileHandle(SafeFileHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2299 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Microsoft::Win32::SafeHandles::SafeFileHandle, 0x20>, "Size mismatch!");

} // namespace Microsoft::Win32::SafeHandles
NEED_NO_BOX(::Microsoft::Win32::SafeHandles::SafeFileHandle);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::SafeHandles::SafeFileHandle*, "Microsoft.Win32.SafeHandles", "SafeFileHandle");
