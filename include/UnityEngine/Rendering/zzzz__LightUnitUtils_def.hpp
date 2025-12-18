#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LightUnitUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LightUnitUtils)
namespace UnityEngine::Rendering {
struct LightUnit;
}
namespace UnityEngine {
struct LightType;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class LightUnitUtils;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::LightUnitUtils);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LightUnitUtils
class CORDL_TYPE LightUnitUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method CandelaToEv100, addr 0x660f87c, size 0x4, virtual false, abstract: false, final false
  static inline float_t CandelaToEv100(float_t candela);

  /// @brief Method CandelaToLumen, addr 0x660f794, size 0x8, virtual false, abstract: false, final false
  static inline float_t CandelaToLumen(float_t candela, float_t solidAngle);

  /// @brief Method CandelaToLux, addr 0x660f7b8, size 0xc, virtual false, abstract: false, final false
  static inline float_t CandelaToLux(float_t candela, float_t distance);

  /// @brief Method ConvertIntensity, addr 0x660fd8c, size 0x15c, virtual false, abstract: false, final false
  static inline float_t ConvertIntensity(::UnityEngine::Light* light, float_t intensity, ::UnityEngine::Rendering::LightUnit fromUnit, ::UnityEngine::Rendering::LightUnit toUnit);

  /// @brief Method ConvertIntensityInternal, addr 0x660f880, size 0x50c, virtual false, abstract: false, final false
  static inline float_t ConvertIntensityInternal(float_t intensity, ::UnityEngine::Rendering::LightUnit fromUnit, ::UnityEngine::Rendering::LightUnit toUnit, ::UnityEngine::LightType lightType,
                                                 float_t area, float_t luxAtDistance, float_t solidAngle);

  /// @brief Method Ev100ToCandela, addr 0x660f85c, size 0x20, virtual false, abstract: false, final false
  static inline float_t Ev100ToCandela(float_t ev100);

  /// @brief Method Ev100ToNits, addr 0x660f7c4, size 0x20, virtual false, abstract: false, final false
  static inline float_t Ev100ToNits(float_t ev100);

  /// @brief Method GetAreaFromDiscLight, addr 0x660f758, size 0x18, virtual false, abstract: false, final false
  static inline float_t GetAreaFromDiscLight(float_t discRadius);

  /// @brief Method GetAreaFromRectangleLight, addr 0x660f740, size 0x18, virtual false, abstract: false, final false
  static inline float_t GetAreaFromRectangleLight(::UnityEngine::Vector2 rectSize);

  /// @brief Method GetAreaFromRectangleLight, addr 0x660f728, size 0x18, virtual false, abstract: false, final false
  static inline float_t GetAreaFromRectangleLight(float_t rectSizeX, float_t rectSizeY);

  /// @brief Method GetAreaFromTubeLight, addr 0x660f770, size 0x1c, virtual false, abstract: false, final false
  static inline float_t GetAreaFromTubeLight(float_t tubeLength);

  /// @brief Method GetNativeLightUnit, addr 0x660f434, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::LightUnit GetNativeLightUnit(::UnityEngine::LightType lightType);

  /// @brief Method GetSolidAngle, addr 0x660f668, size 0xc0, virtual false, abstract: false, final false
  static inline float_t GetSolidAngle(::UnityEngine::LightType lightType, bool spotReflector, float_t spotAngle, float_t aspectRatio);

  /// @brief Method GetSolidAngleFromPointLight, addr 0x660f4e0, size 0xc, virtual false, abstract: false, final false
  static inline float_t GetSolidAngleFromPointLight();

  /// @brief Method GetSolidAngleFromPyramidLight, addr 0x660f588, size 0xe0, virtual false, abstract: false, final false
  static inline float_t GetSolidAngleFromPyramidLight(float_t spotAngle, float_t aspectRatio);

  /// @brief Method GetSolidAngleFromSpotLight, addr 0x660f4ec, size 0x9c, virtual false, abstract: false, final false
  static inline float_t GetSolidAngleFromSpotLight(float_t spotAngle);

  /// @brief Method IsLightUnitSupported, addr 0x660f484, size 0x5c, virtual false, abstract: false, final false
  static inline bool IsLightUnitSupported(::UnityEngine::LightType lightType, ::UnityEngine::Rendering::LightUnit lightUnit);

  /// @brief Method LumenToCandela, addr 0x660f78c, size 0x8, virtual false, abstract: false, final false
  static inline float_t LumenToCandela(float_t lumen, float_t solidAngle);

  /// @brief Method LumenToNits, addr 0x660f79c, size 0x8, virtual false, abstract: false, final false
  static inline float_t LumenToNits(float_t lumen, float_t area);

  /// @brief Method LuxToCandela, addr 0x660f7ac, size 0xc, virtual false, abstract: false, final false
  static inline float_t LuxToCandela(float_t lux, float_t distance);

  /// @brief Method NitsToEv100, addr 0x660f7e4, size 0x78, virtual false, abstract: false, final false
  static inline float_t NitsToEv100(float_t nits);

  /// @brief Method NitsToLumen, addr 0x660f7a4, size 0x8, virtual false, abstract: false, final false
  static inline float_t NitsToLumen(float_t nits, float_t area);

  /// @brief Method get_k_EvToLuminanceFactor, addr 0x660f420, size 0x14, virtual false, abstract: false, final false
  static inline float_t get_k_EvToLuminanceFactor();

  /// @brief Method get_k_LuminanceToEvFactor, addr 0x660f360, size 0xc0, virtual false, abstract: false, final false
  static inline float_t get_k_LuminanceToEvFactor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightUnitUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightUnitUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightUnitUtils(LightUnitUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightUnitUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightUnitUtils(LightUnitUtils const&) = delete;

  /// @brief Field SphereSolidAngle offset 0xffffffff size 0x4
  static constexpr float_t SphereSolidAngle{ static_cast<float_t>(12.566371f) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12283 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LightUnitUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::LightUnitUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LightUnitUtils*, "UnityEngine.Rendering", "LightUnitUtils");
