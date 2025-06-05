#pragma once
// IWYU pragma private; include "Microsoft/Win32/SafeHandles/SafeHandleMinusOneIsInvalid.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
CORDL_MODULE_EXPORT(SafeHandleMinusOneIsInvalid)
// Forward declare root types
namespace Microsoft::Win32::SafeHandles {
class SafeHandleMinusOneIsInvalid;
}
// Write type traits
MARK_REF_PTR_T(::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid);
// Dependencies System.Runtime.InteropServices.SafeHandle
namespace Microsoft::Win32::SafeHandles {
// Is value type: false
// CS Name: Microsoft.Win32.SafeHandles.SafeHandleMinusOneIsInvalid
class CORDL_TYPE SafeHandleMinusOneIsInvalid : public ::System::Runtime::InteropServices::SafeHandle {
public:
  // Declarations
  __declspec(property(get = get_IsInvalid)) bool IsInvalid;

  static inline ::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid* New_ctor(bool ownsHandle);

  /// @brief Method .ctor, addr 0x3c6f09c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(bool ownsHandle);

  /// @brief Method get_IsInvalid, addr 0x3c6f0e0, size 0x40, virtual true, abstract: false, final false
  inline bool get_IsInvalid();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeHandleMinusOneIsInvalid();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SafeHandleMinusOneIsInvalid", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeHandleMinusOneIsInvalid(SafeHandleMinusOneIsInvalid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeHandleMinusOneIsInvalid", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeHandleMinusOneIsInvalid(SafeHandleMinusOneIsInvalid const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2302 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid, 0x20>, "Size mismatch!");

} // namespace Microsoft::Win32::SafeHandles
NEED_NO_BOX(::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::SafeHandles::SafeHandleMinusOneIsInvalid*, "Microsoft.Win32.SafeHandles", "SafeHandleMinusOneIsInvalid");
