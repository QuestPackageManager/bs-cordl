#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SafeWaitHandle)
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class SafeWaitHandle;
}
// Write type traits
MARK_REF_PTR_T(::Microsoft::Win32::SafeHandles::SafeWaitHandle);
// Type: Microsoft.Win32.SafeHandles::SafeWaitHandle
// SizeInfo { instance_size: 32, native_size: 8, calculated_instance_size: 32, calculated_native_size: 30, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// CS Name: ::Microsoft.Win32.SafeHandles::SafeWaitHandle*
class CORDL_TYPE SafeWaitHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
public:
  // Declarations
  static inline ::Microsoft::Win32::SafeHandles::SafeWaitHandle* New_ctor(void* existingHandle, bool ownsHandle);

  /// @brief Method ReleaseHandle, addr 0x26a7090, size 0x1c, virtual true, abstract: false, final false
  inline bool ReleaseHandle();

  /// @brief Method .ctor, addr 0x26a7068, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(void* existingHandle, bool ownsHandle);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeWaitHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SafeWaitHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeWaitHandle(SafeWaitHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeWaitHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeWaitHandle(SafeWaitHandle const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Microsoft::Win32::SafeHandles::SafeWaitHandle, 0x20>, "Size mismatch!");

} // namespace Microsoft::Win32::SafeHandles
NEED_NO_BOX(::Microsoft::Win32::SafeHandles::SafeWaitHandle);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::SafeHandles::SafeWaitHandle*, "Microsoft.Win32.SafeHandles", "SafeWaitHandle");
