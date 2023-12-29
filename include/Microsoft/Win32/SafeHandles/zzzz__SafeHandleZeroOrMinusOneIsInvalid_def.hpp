#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
CORDL_MODULE_EXPORT(SafeHandleZeroOrMinusOneIsInvalid)
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class SafeHandleZeroOrMinusOneIsInvalid;
}
// Write type traits
MARK_REF_PTR_T(::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid);
// Type: Microsoft.Win32.SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
// SizeInfo { instance_size: 32, native_size: 8, calculated_instance_size: 32, calculated_native_size: 30, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3331))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2301))
// CS Name: ::Microsoft.Win32.SafeHandles::SafeHandleZeroOrMinusOneIsInvalid*
class CORDL_TYPE SafeHandleZeroOrMinusOneIsInvalid : public ::System::Runtime::InteropServices::SafeHandle {
public:
  // Declarations
  __declspec(property(get = get_IsInvalid)) bool IsInvalid;

  static inline ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid* New_ctor(bool ownsHandle);

  /// @brief Method .ctor addr 0x22d26d0 size 0x64 virtual false final false
  inline void _ctor(bool ownsHandle);

  /// @brief Method get_IsInvalid addr 0x22d27f4 size 0x5c virtual true final false
  inline bool get_IsInvalid();

  // Ctor Parameters [CppParam { name: "", ty: "SafeHandleZeroOrMinusOneIsInvalid", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeHandleZeroOrMinusOneIsInvalid(SafeHandleZeroOrMinusOneIsInvalid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeHandleZeroOrMinusOneIsInvalid", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeHandleZeroOrMinusOneIsInvalid(SafeHandleZeroOrMinusOneIsInvalid const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeHandleZeroOrMinusOneIsInvalid();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid, 0x20>, "Size mismatch!");

} // namespace Microsoft::Win32::SafeHandles
NEED_NO_BOX(::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid*, "Microsoft.Win32.SafeHandles", "SafeHandleZeroOrMinusOneIsInvalid");
