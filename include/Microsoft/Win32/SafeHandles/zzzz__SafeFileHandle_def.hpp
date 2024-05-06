#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SafeFileHandle)
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class SafeFileHandle;
}
// Write type traits
MARK_REF_PTR_T(::Microsoft::Win32::SafeHandles::SafeFileHandle);
// Type: Microsoft.Win32.SafeHandles::SafeFileHandle
// SizeInfo { instance_size: 32, native_size: 8, calculated_instance_size: 32, calculated_native_size: 30, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// CS Name: ::Microsoft.Win32.SafeHandles::SafeFileHandle*
class CORDL_TYPE SafeFileHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
public:
  // Declarations
  static inline ::Microsoft::Win32::SafeHandles::SafeFileHandle* New_ctor(void* preexistingHandle, bool ownsHandle);

  /// @brief Method ReleaseHandle, addr 0x27ab3e4, size 0x7c, virtual true, abstract: false, final false
  inline bool ReleaseHandle();

  /// @brief Method .ctor, addr 0x27ab358, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(void* preexistingHandle, bool ownsHandle);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Microsoft::Win32::SafeHandles::SafeFileHandle, 0x20>, "Size mismatch!");

} // namespace Microsoft::Win32::SafeHandles
NEED_NO_BOX(::Microsoft::Win32::SafeHandles::SafeFileHandle);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::SafeHandles::SafeFileHandle*, "Microsoft.Win32.SafeHandles", "SafeFileHandle");
