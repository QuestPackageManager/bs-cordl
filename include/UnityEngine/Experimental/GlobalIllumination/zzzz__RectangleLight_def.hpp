#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__FalloffType_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LightMode_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LinearColor_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RectangleLight)
namespace UnityEngine::Experimental::GlobalIllumination {
struct FalloffType;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightMode;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LinearColor;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct RectangleLight;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::GlobalIllumination::RectangleLight);
// Type: UnityEngine.Experimental.GlobalIllumination::RectangleLight
// SizeInfo { instance_size: 84, native_size: 88, calculated_instance_size: 84, calculated_native_size: 97, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.GlobalIllumination::RectangleLight
struct CORDL_TYPE RectangleLight {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectangleLight();

  // Ctor Parameters [CppParam { name: "instanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "shadow", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "mode",
  // ty: "::UnityEngine::Experimental::GlobalIllumination::LightMode", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None },
  // CppParam { name: "orientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Experimental::GlobalIllumination::LinearColor",
  // modifiers: "", def_value: None }, CppParam { name: "indirectColor", ty: "::UnityEngine::Experimental::GlobalIllumination::LinearColor", modifiers: "", def_value: None }, CppParam { name: "range",
  // ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "width", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "falloff", ty: "::UnityEngine::Experimental::GlobalIllumination::FalloffType", modifiers: "", def_value: None }]
  constexpr RectangleLight(int32_t instanceID, bool shadow, ::UnityEngine::Experimental::GlobalIllumination::LightMode mode, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation,
                           ::UnityEngine::Experimental::GlobalIllumination::LinearColor color, ::UnityEngine::Experimental::GlobalIllumination::LinearColor indirectColor, float_t range, float_t width,
                           float_t height, ::UnityEngine::Experimental::GlobalIllumination::FalloffType falloff) noexcept;

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

  /// @brief Field width, offset: 0x48, size: 0x4, def value: None
  float_t width;

  /// @brief Field height, offset: 0x4c, size: 0x4, def value: None
  float_t height;

  /// @brief Field falloff, offset: 0x50, size: 0x1, def value: None
  ::UnityEngine::Experimental::GlobalIllumination::FalloffType falloff;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x54 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::RectangleLight, 0x54>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::RectangleLight, instanceID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::RectangleLight, shadow) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::RectangleLight, mode) == 0x5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::RectangleLight, position) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::RectangleLight, orientation) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::RectangleLight, color) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::RectangleLight, indirectColor) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::RectangleLight, range) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::RectangleLight, width) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::RectangleLight, height) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::RectangleLight, falloff) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::Experimental::GlobalIllumination
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::RectangleLight, "UnityEngine.Experimental.GlobalIllumination", "RectangleLight");
