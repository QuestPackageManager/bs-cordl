#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__PlatformInitializeResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformInitialize)
// Forward declare root types
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::PlatformInitialize);
// Type: Oculus.Platform.Models::PlatformInitialize
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(13373))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13472))
// CS Name: ::Oculus.Platform.Models::PlatformInitialize*
class CORDL_TYPE PlatformInitialize : public ::System::Object {
public:
  // Declarations
  /// @brief Field Result, offset 0x10, size 0x4
  __declspec(property(get = __get_Result, put = __set_Result))::Oculus::Platform::PlatformInitializeResult Result;

  constexpr ::Oculus::Platform::PlatformInitializeResult& __get_Result();

  constexpr ::Oculus::Platform::PlatformInitializeResult const& __get_Result() const;

  constexpr void __set_Result(::Oculus::Platform::PlatformInitializeResult value);

  static inline ::Oculus::Platform::Models::PlatformInitialize* New_ctor(void* o);

  /// @brief Method .ctor addr 0x2708430 size 0x78 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "PlatformInitialize", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformInitialize(PlatformInitialize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformInitialize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformInitialize(PlatformInitialize const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInitialize();

public:
  /// @brief Field Result, offset: 0x10, size: 0x4, def value: None
  ::Oculus::Platform::PlatformInitializeResult ___Result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::PlatformInitialize, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::PlatformInitialize);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::PlatformInitialize*, "Oculus.Platform.Models", "PlatformInitialize");
