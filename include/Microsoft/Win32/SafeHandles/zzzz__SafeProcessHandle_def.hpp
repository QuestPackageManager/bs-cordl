#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SafeProcessHandle)
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class SafeProcessHandle;
}
// Write type traits
MARK_REF_PTR_T(::Microsoft::Win32::SafeHandles::SafeProcessHandle);
// Type: Microsoft.Win32.SafeHandles::SafeProcessHandle
// SizeInfo { instance_size: 32, native_size: 8, calculated_instance_size: 32, calculated_native_size: 30, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2301))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6870))
// CS Name: ::Microsoft.Win32.SafeHandles::SafeProcessHandle*
class CORDL_TYPE SafeProcessHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
public:
  // Declarations
  /// @brief Field InvalidHandle, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InvalidHandle, put = setStaticF_InvalidHandle))::Microsoft::Win32::SafeHandles::SafeProcessHandle* InvalidHandle;

  static inline void setStaticF_InvalidHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* value);

  static inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* getStaticF_InvalidHandle();

  static inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* New_ctor(void* handle);

  /// @brief Method .ctor, addr 0x282f5c4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(void* handle);

  static inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* New_ctor(void* existingHandle, bool ownsHandle);

  /// @brief Method .ctor, addr 0x282f394, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(void* existingHandle, bool ownsHandle);

  /// @brief Method ReleaseHandle, addr 0x282f5f0, size 0x8, virtual true, abstract: false, final false
  inline bool ReleaseHandle();

  // Ctor Parameters [CppParam { name: "", ty: "SafeProcessHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeProcessHandle(SafeProcessHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeProcessHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeProcessHandle(SafeProcessHandle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeProcessHandle();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Microsoft::Win32::SafeHandles::SafeProcessHandle, 0x20>, "Size mismatch!");

} // namespace Microsoft::Win32::SafeHandles
NEED_NO_BOX(::Microsoft::Win32::SafeHandles::SafeProcessHandle);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::SafeHandles::SafeProcessHandle*, "Microsoft.Win32.SafeHandles", "SafeProcessHandle");
