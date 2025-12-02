#pragma once
// IWYU pragma private; include "Microsoft/Win32/SafeHandles/SafeProcessHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
CORDL_MODULE_EXPORT(SafeProcessHandle)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class SafeProcessHandle;
}
// Write type traits
MARK_REF_PTR_T(::Microsoft::Win32::SafeHandles::SafeProcessHandle);
// Dependencies Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// CS Name: Microsoft.Win32.SafeHandles.SafeProcessHandle
class CORDL_TYPE SafeProcessHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
public:
  // Declarations
  /// @brief Field InvalidHandle, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InvalidHandle, put = setStaticF_InvalidHandle)) ::Microsoft::Win32::SafeHandles::SafeProcessHandle* InvalidHandle;

  static inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* New_ctor(::System::IntPtr existingHandle, bool ownsHandle);

  static inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* New_ctor(::System::IntPtr handle);

  /// @brief Method ReleaseHandle, addr 0x5dc7f34, size 0x9c, virtual true, abstract: false, final false
  inline bool ReleaseHandle();

  /// @brief Method .ctor, addr 0x5dc7ce4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr existingHandle, bool ownsHandle);

  /// @brief Method .ctor, addr 0x5dc7ed4, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr handle);

  static inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* getStaticF_InvalidHandle();

  static inline void setStaticF_InvalidHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeProcessHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SafeProcessHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeProcessHandle(SafeProcessHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeProcessHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeProcessHandle(SafeProcessHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11024 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Microsoft::Win32::SafeHandles::SafeProcessHandle, 0x20>, "Size mismatch!");

} // namespace Microsoft::Win32::SafeHandles
NEED_NO_BOX(::Microsoft::Win32::SafeHandles::SafeProcessHandle);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, "Microsoft.Win32.SafeHandles", "SafeProcessHandle");
