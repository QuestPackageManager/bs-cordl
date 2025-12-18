#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceFlags)
// Forward declare root types
namespace UnityEngine::Rendering {
struct InstanceFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::InstanceFlags);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceFlags
struct CORDL_TYPE InstanceFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __InstanceFlags_Unwrapped
  enum struct __InstanceFlags_Unwrapped : uint8_t {
    __E_None = static_cast<uint8_t>(0x0u),
    __E_AffectsLightmaps = static_cast<uint8_t>(0x1u),
    __E_IsShadowsOff = static_cast<uint8_t>(0x2u),
    __E_IsShadowsOnly = static_cast<uint8_t>(0x4u),
    __E_HasProgressiveLod = static_cast<uint8_t>(0x8u),
    __E_SmallMeshCulling = static_cast<uint8_t>(0x10u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InstanceFlags_Unwrapped() const noexcept {
    return static_cast<__InstanceFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr InstanceFlags(uint8_t value__) noexcept;

  /// @brief Field AffectsLightmaps value: U8(1)
  static ::UnityEngine::Rendering::InstanceFlags const AffectsLightmaps;

  /// @brief Field HasProgressiveLod value: U8(8)
  static ::UnityEngine::Rendering::InstanceFlags const HasProgressiveLod;

  /// @brief Field IsShadowsOff value: U8(2)
  static ::UnityEngine::Rendering::InstanceFlags const IsShadowsOff;

  /// @brief Field IsShadowsOnly value: U8(4)
  static ::UnityEngine::Rendering::InstanceFlags const IsShadowsOnly;

  /// @brief Field None value: U8(0)
  static ::UnityEngine::Rendering::InstanceFlags const None;

  /// @brief Field SmallMeshCulling value: U8(16)
  static ::UnityEngine::Rendering::InstanceFlags const SmallMeshCulling;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17671 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceFlags, 0x1>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceFlags, "UnityEngine.Rendering", "InstanceFlags");
