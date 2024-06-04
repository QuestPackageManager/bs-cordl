#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/GlobalIllumination/LightDataGI.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__FalloffType_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LightMode_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LightType_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LinearColor_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightDataGI)
namespace UnityEngine::Experimental::GlobalIllumination {
struct Cookie;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct DirectionalLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct DiscLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct FalloffType;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightMode;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightType;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LinearColor;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct PointLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct RectangleLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct SpotLight;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightDataGI;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::GlobalIllumination::LightDataGI);
// Type: UnityEngine.Experimental.GlobalIllumination::LightDataGI
// SizeInfo { instance_size: 96, native_size: 96, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.GlobalIllumination::LightDataGI
struct CORDL_TYPE LightDataGI {
public:
  // Declarations
  /// @brief Method Init, addr 0x345d0b0, size 0x68, virtual false, abstract: false, final false
  inline void Init(ByRef<::UnityEngine::Experimental::GlobalIllumination::DirectionalLight> light, ByRef<::UnityEngine::Experimental::GlobalIllumination::Cookie> cookie);

  /// @brief Method Init, addr 0x345d270, size 0x70, virtual false, abstract: false, final false
  inline void Init(ByRef<::UnityEngine::Experimental::GlobalIllumination::DiscLight> light, ByRef<::UnityEngine::Experimental::GlobalIllumination::Cookie> cookie);

  /// @brief Method Init, addr 0x345d118, size 0x70, virtual false, abstract: false, final false
  inline void Init(ByRef<::UnityEngine::Experimental::GlobalIllumination::PointLight> light, ByRef<::UnityEngine::Experimental::GlobalIllumination::Cookie> cookie);

  /// @brief Method Init, addr 0x345d200, size 0x70, virtual false, abstract: false, final false
  inline void Init(ByRef<::UnityEngine::Experimental::GlobalIllumination::RectangleLight> light, ByRef<::UnityEngine::Experimental::GlobalIllumination::Cookie> cookie);

  /// @brief Method Init, addr 0x345d188, size 0x78, virtual false, abstract: false, final false
  inline void Init(ByRef<::UnityEngine::Experimental::GlobalIllumination::SpotLight> light, ByRef<::UnityEngine::Experimental::GlobalIllumination::Cookie> cookie);

  /// @brief Method InitNoBake, addr 0x345d2e0, size 0x10, virtual false, abstract: false, final false
  inline void InitNoBake(int32_t lightInstanceID);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightDataGI();

  // Ctor Parameters [CppParam { name: "instanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cookieID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "cookieScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Experimental::GlobalIllumination::LinearColor", modifiers: "", def_value: None },
  // CppParam { name: "indirectColor", ty: "::UnityEngine::Experimental::GlobalIllumination::LinearColor", modifiers: "", def_value: None }, CppParam { name: "orientation", ty:
  // "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "range", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "coneAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "innerConeAngle", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "shape0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "shape1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "type",
  // ty: "::UnityEngine::Experimental::GlobalIllumination::LightType", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::UnityEngine::Experimental::GlobalIllumination::LightMode",
  // modifiers: "", def_value: None }, CppParam { name: "shadow", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "falloff", ty:
  // "::UnityEngine::Experimental::GlobalIllumination::FalloffType", modifiers: "", def_value: None }]
  constexpr LightDataGI(int32_t instanceID, int32_t cookieID, float_t cookieScale, ::UnityEngine::Experimental::GlobalIllumination::LinearColor color,
                        ::UnityEngine::Experimental::GlobalIllumination::LinearColor indirectColor, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 position, float_t range,
                        float_t coneAngle, float_t innerConeAngle, float_t shape0, float_t shape1, ::UnityEngine::Experimental::GlobalIllumination::LightType type,
                        ::UnityEngine::Experimental::GlobalIllumination::LightMode mode, uint8_t shadow, ::UnityEngine::Experimental::GlobalIllumination::FalloffType falloff) noexcept;

  /// @brief Field instanceID, offset: 0x0, size: 0x4, def value: None
  int32_t instanceID;

  /// @brief Field cookieID, offset: 0x4, size: 0x4, def value: None
  int32_t cookieID;

  /// @brief Field cookieScale, offset: 0x8, size: 0x4, def value: None
  float_t cookieScale;

  /// @brief Field color, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Experimental::GlobalIllumination::LinearColor color;

  /// @brief Field indirectColor, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Experimental::GlobalIllumination::LinearColor indirectColor;

  /// @brief Field orientation, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Quaternion orientation;

  /// @brief Field position, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field range, offset: 0x48, size: 0x4, def value: None
  float_t range;

  /// @brief Field coneAngle, offset: 0x4c, size: 0x4, def value: None
  float_t coneAngle;

  /// @brief Field innerConeAngle, offset: 0x50, size: 0x4, def value: None
  float_t innerConeAngle;

  /// @brief Field shape0, offset: 0x54, size: 0x4, def value: None
  float_t shape0;

  /// @brief Field shape1, offset: 0x58, size: 0x4, def value: None
  float_t shape1;

  /// @brief Field type, offset: 0x5c, size: 0x1, def value: None
  ::UnityEngine::Experimental::GlobalIllumination::LightType type;

  /// @brief Field mode, offset: 0x5d, size: 0x1, def value: None
  ::UnityEngine::Experimental::GlobalIllumination::LightMode mode;

  /// @brief Field shadow, offset: 0x5e, size: 0x1, def value: None
  uint8_t shadow;

  /// @brief Field falloff, offset: 0x5f, size: 0x1, def value: None
  ::UnityEngine::Experimental::GlobalIllumination::FalloffType falloff;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::LightDataGI, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LightDataGI, instanceID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LightDataGI, cookieID) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LightDataGI, cookieScale) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LightDataGI, color) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LightDataGI, indirectColor) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LightDataGI, orientation) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LightDataGI, position) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LightDataGI, range) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LightDataGI, coneAngle) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LightDataGI, innerConeAngle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LightDataGI, shape0) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LightDataGI, shape1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LightDataGI, type) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LightDataGI, mode) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LightDataGI, shadow) == 0x5e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::GlobalIllumination::LightDataGI, falloff) == 0x5f, "Offset mismatch!");

} // namespace UnityEngine::Experimental::GlobalIllumination
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::LightDataGI, "UnityEngine.Experimental.GlobalIllumination", "LightDataGI");
