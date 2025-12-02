#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightLayerEnum.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightLayerEnum)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct LightLayerEnum;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::LightLayerEnum);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.LightLayerEnum
struct CORDL_TYPE LightLayerEnum {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LightLayerEnum_Unwrapped
  enum struct __LightLayerEnum_Unwrapped : int32_t {
    __E_Nothing = static_cast<int32_t>(0x0),
    __E_LightLayerDefault = static_cast<int32_t>(0x1),
    __E_LightLayer1 = static_cast<int32_t>(0x2),
    __E_LightLayer2 = static_cast<int32_t>(0x4),
    __E_LightLayer3 = static_cast<int32_t>(0x8),
    __E_LightLayer4 = static_cast<int32_t>(0x10),
    __E_LightLayer5 = static_cast<int32_t>(0x20),
    __E_LightLayer6 = static_cast<int32_t>(0x40),
    __E_LightLayer7 = static_cast<int32_t>(0x80),
    __E_Everything = static_cast<int32_t>(0xff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LightLayerEnum_Unwrapped() const noexcept {
    return static_cast<__LightLayerEnum_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightLayerEnum();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LightLayerEnum(int32_t value__) noexcept;

  /// @brief Field Everything value: I32(255)
  static ::UnityEngine::Rendering::Universal::LightLayerEnum const Everything;

  /// @brief Field LightLayer1 value: I32(2)
  static ::UnityEngine::Rendering::Universal::LightLayerEnum const LightLayer1;

  /// @brief Field LightLayer2 value: I32(4)
  static ::UnityEngine::Rendering::Universal::LightLayerEnum const LightLayer2;

  /// @brief Field LightLayer3 value: I32(8)
  static ::UnityEngine::Rendering::Universal::LightLayerEnum const LightLayer3;

  /// @brief Field LightLayer4 value: I32(16)
  static ::UnityEngine::Rendering::Universal::LightLayerEnum const LightLayer4;

  /// @brief Field LightLayer5 value: I32(32)
  static ::UnityEngine::Rendering::Universal::LightLayerEnum const LightLayer5;

  /// @brief Field LightLayer6 value: I32(64)
  static ::UnityEngine::Rendering::Universal::LightLayerEnum const LightLayer6;

  /// @brief Field LightLayer7 value: I32(128)
  static ::UnityEngine::Rendering::Universal::LightLayerEnum const LightLayer7;

  /// @brief Field LightLayerDefault value: I32(1)
  static ::UnityEngine::Rendering::Universal::LightLayerEnum const LightLayerDefault;

  /// @brief Field Nothing value: I32(0)
  static ::UnityEngine::Rendering::Universal::LightLayerEnum const Nothing;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12963 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::LightLayerEnum, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LightLayerEnum, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightLayerEnum, "UnityEngine.Rendering.Universal", "LightLayerEnum");
