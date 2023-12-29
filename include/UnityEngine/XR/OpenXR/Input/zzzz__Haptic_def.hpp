#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Haptic)
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Input {
struct Haptic;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::Input::Haptic);
// Type: UnityEngine.XR.OpenXR.Input::Haptic
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14427))
// CS Name: ::UnityEngine.XR.OpenXR.Input::Haptic
#pragma pack(push, 0)
struct CORDL_TYPE Haptic {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Haptic();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Input::Haptic, 0x1>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Input
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::Haptic, "UnityEngine.XR.OpenXR.Input", "Haptic");
