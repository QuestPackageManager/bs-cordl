#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Win32Native)
// Forward declare root types
namespace Microsoft::Win32 {
class Win32Native;
}
// Write type traits
MARK_REF_PTR_T(::Microsoft::Win32::Win32Native);
// Type: Microsoft.Win32::Win32Native
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Microsoft::Win32 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2296))
// CS Name: ::Microsoft.Win32::Win32Native*
class CORDL_TYPE Win32Native : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetMessage addr 0x22d23a4 size 0x5c virtual false final false
  static inline ::StringW GetMessage(int32_t hr);

  /// @brief Method MakeHRFromErrorCode addr 0x22d2400 size 0xc virtual false final false
  static inline int32_t MakeHRFromErrorCode(int32_t errorCode);

  // Ctor Parameters [CppParam { name: "", ty: "Win32Native", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Win32Native(Win32Native&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Win32Native", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Win32Native(Win32Native const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Win32Native();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Microsoft::Win32::Win32Native, 0x10>, "Size mismatch!");

} // namespace Microsoft::Win32
NEED_NO_BOX(::Microsoft::Win32::Win32Native);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::Win32Native*, "Microsoft.Win32", "Win32Native");
