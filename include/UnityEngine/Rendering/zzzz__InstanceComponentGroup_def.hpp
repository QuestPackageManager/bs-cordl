#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceComponentGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceComponentGroup)
// Forward declare root types
namespace UnityEngine::Rendering {
struct InstanceComponentGroup;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::InstanceComponentGroup);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceComponentGroup
struct CORDL_TYPE InstanceComponentGroup {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __InstanceComponentGroup_Unwrapped
  enum struct __InstanceComponentGroup_Unwrapped : uint32_t {
    __E_Default = static_cast<uint32_t>(0x1u),
    __E_Wind = static_cast<uint32_t>(0x2u),
    __E_LightProbe = static_cast<uint32_t>(0x4u),
    __E_Lightmap = static_cast<uint32_t>(0x8u),
    __E_DefaultWind = static_cast<uint32_t>(0x3u),
    __E_DefaultLightProbe = static_cast<uint32_t>(0x5u),
    __E_DefaultLightmap = static_cast<uint32_t>(0x9u),
    __E_DefaultWindLightProbe = static_cast<uint32_t>(0x7u),
    __E_DefaultWindLightmap = static_cast<uint32_t>(0xbu),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InstanceComponentGroup_Unwrapped() const noexcept {
    return static_cast<__InstanceComponentGroup_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceComponentGroup();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr InstanceComponentGroup(uint32_t value__) noexcept;

  /// @brief Field Default value: U32(1)
  static ::UnityEngine::Rendering::InstanceComponentGroup const Default;

  /// @brief Field DefaultLightProbe value: U32(5)
  static ::UnityEngine::Rendering::InstanceComponentGroup const DefaultLightProbe;

  /// @brief Field DefaultLightmap value: U32(9)
  static ::UnityEngine::Rendering::InstanceComponentGroup const DefaultLightmap;

  /// @brief Field DefaultWind value: U32(3)
  static ::UnityEngine::Rendering::InstanceComponentGroup const DefaultWind;

  /// @brief Field DefaultWindLightProbe value: U32(7)
  static ::UnityEngine::Rendering::InstanceComponentGroup const DefaultWindLightProbe;

  /// @brief Field DefaultWindLightmap value: U32(11)
  static ::UnityEngine::Rendering::InstanceComponentGroup const DefaultWindLightmap;

  /// @brief Field LightProbe value: U32(4)
  static ::UnityEngine::Rendering::InstanceComponentGroup const LightProbe;

  /// @brief Field Lightmap value: U32(8)
  static ::UnityEngine::Rendering::InstanceComponentGroup const Lightmap;

  /// @brief Field Wind value: U32(2)
  static ::UnityEngine::Rendering::InstanceComponentGroup const Wind;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17761 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceComponentGroup, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceComponentGroup, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceComponentGroup, "UnityEngine.Rendering", "InstanceComponentGroup");
