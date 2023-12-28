#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__AngularFalloffType_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__FalloffType_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LightMode_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LinearColor_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpotLight)
namespace UnityEngine::Experimental::GlobalIllumination {
struct AngularFalloffType;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightMode;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LinearColor;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct FalloffType;
}
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct SpotLight;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::GlobalIllumination::SpotLight);
// Type: UnityEngine.Experimental.GlobalIllumination::SpotLight
// SizeInfo { instance_size: 88, native_size: 92, calculated_instance_size: 88, calculated_native_size: 102, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10387)), TypeDefinitionIndex(TypeDefinitionIndex(10390)), TypeDefinitionIndex(TypeDefinitionIndex(10252)),
// TypeDefinitionIndex(TypeDefinitionIndex(10389)), TypeDefinitionIndex(TypeDefinitionIndex(10388)), TypeDefinitionIndex(TypeDefinitionIndex(10249))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(10393)) CS Name: ::UnityEngine.Experimental.GlobalIllumination::SpotLight
struct CORDL_TYPE SpotLight {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "instanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "shadow", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "mode",
  // ty: "::UnityEngine::Experimental::GlobalIllumination::LightMode", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None },
  // CppParam { name: "orientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Experimental::GlobalIllumination::LinearColor",
  // modifiers: "", def_value: None }, CppParam { name: "indirectColor", ty: "::UnityEngine::Experimental::GlobalIllumination::LinearColor", modifiers: "", def_value: None }, CppParam { name: "range",
  // ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "sphereRadius", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "coneAngle", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "innerConeAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "falloff", ty:
  // "::UnityEngine::Experimental::GlobalIllumination::FalloffType", modifiers: "", def_value: None }, CppParam { name: "angularFalloff", ty:
  // "::UnityEngine::Experimental::GlobalIllumination::AngularFalloffType", modifiers: "", def_value: None }]
  constexpr SpotLight(int32_t instanceID, bool shadow, ::UnityEngine::Experimental::GlobalIllumination::LightMode mode, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation,
                      ::UnityEngine::Experimental::GlobalIllumination::LinearColor color, ::UnityEngine::Experimental::GlobalIllumination::LinearColor indirectColor, float_t range,
                      float_t sphereRadius, float_t coneAngle, float_t innerConeAngle, ::UnityEngine::Experimental::GlobalIllumination::FalloffType falloff,
                      ::UnityEngine::Experimental::GlobalIllumination::AngularFalloffType angularFalloff) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpotLight();

  /// @brief Field instanceID, offset: 0x0, size: 0x4, def value: None
  int32_t instanceID;

  /// @brief Field shadow, offset: 0x4, size: 0x1, def value: None
  bool shadow;

  /// @brief Field mode, offset: 0x5, size: 0x1, def value: None
  ::UnityEngine::Experimental::GlobalIllumination::LightMode mode;

  /// @brief Field position, offset: 0x8, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field orientation, offset: 0x14, size: 0x10, def value: None
  ::UnityEngine::Quaternion orientation;

  /// @brief Field color, offset: 0x24, size: 0x10, def value: None
  ::UnityEngine::Experimental::GlobalIllumination::LinearColor color;

  /// @brief Field indirectColor, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Experimental::GlobalIllumination::LinearColor indirectColor;

  /// @brief Field range, offset: 0x44, size: 0x4, def value: None
  float_t range;

  /// @brief Field sphereRadius, offset: 0x48, size: 0x4, def value: None
  float_t sphereRadius;

  /// @brief Field coneAngle, offset: 0x4c, size: 0x4, def value: None
  float_t coneAngle;

  /// @brief Field innerConeAngle, offset: 0x50, size: 0x4, def value: None
  float_t innerConeAngle;

  /// @brief Field falloff, offset: 0x54, size: 0x1, def value: None
  ::UnityEngine::Experimental::GlobalIllumination::FalloffType falloff;

  /// @brief Field angularFalloff, offset: 0x55, size: 0x1, def value: None
  ::UnityEngine::Experimental::GlobalIllumination::AngularFalloffType angularFalloff;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::SpotLight, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Experimental::GlobalIllumination
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::SpotLight, "UnityEngine.Experimental.GlobalIllumination", "SpotLight");
