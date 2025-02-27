#pragma once
// IWYU pragma private; include "UnityEngine/RenderSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderSettings)
namespace UnityEngine::Rendering {
struct AmbientMode;
}
namespace UnityEngine::Rendering {
struct DefaultReflectionMode;
}
namespace UnityEngine::Rendering {
struct SphericalHarmonicsL2;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Cubemap;
}
namespace UnityEngine {
struct FogMode;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine {
class RenderSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::RenderSettings);
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RenderSettings
class CORDL_TYPE RenderSettings : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Method GetRenderSettings, addr 0x4888c44, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> GetRenderSettings();

  static inline ::UnityEngine::RenderSettings* New_ctor();

  /// @brief Method Reset, addr 0x4888c6c, size 0x28, virtual false, abstract: false, final false
  static inline void Reset();

  /// @brief Method .ctor, addr 0x4887d78, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ambientEquatorColor, addr 0x4888224, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_ambientEquatorColor();

  /// @brief Method get_ambientEquatorColor_Injected, addr 0x488826c, size 0x3c, virtual false, abstract: false, final false
  static inline void get_ambientEquatorColor_Injected(::ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_ambientGroundColor, addr 0x4888328, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_ambientGroundColor();

  /// @brief Method get_ambientGroundColor_Injected, addr 0x4888370, size 0x3c, virtual false, abstract: false, final false
  static inline void get_ambientGroundColor_Injected(::ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_ambientIntensity, addr 0x4887ce0, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_ambientIntensity();

  /// @brief Method get_ambientLight, addr 0x488842c, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_ambientLight();

  /// @brief Method get_ambientLight_Injected, addr 0x4888474, size 0x3c, virtual false, abstract: false, final false
  static inline void get_ambientLight_Injected(::ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_ambientMode, addr 0x48880bc, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::AmbientMode get_ambientMode();

  /// @brief Method get_ambientProbe, addr 0x48886fc, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::SphericalHarmonicsL2 get_ambientProbe();

  /// @brief Method get_ambientProbe_Injected, addr 0x4888768, size 0x3c, virtual false, abstract: false, final false
  static inline void get_ambientProbe_Injected(::ByRef<::UnityEngine::Rendering::SphericalHarmonicsL2> ret);

  /// @brief Method get_ambientSkyColor, addr 0x4888120, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_ambientSkyColor();

  /// @brief Method get_ambientSkyColor_Injected, addr 0x4888168, size 0x3c, virtual false, abstract: false, final false
  static inline void get_ambientSkyColor_Injected(::ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_ambientSkyboxAmount, addr 0x4887cb8, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_ambientSkyboxAmount();

  /// @brief Method get_customReflection, addr 0x488881c, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Cubemap> get_customReflection();

  /// @brief Method get_customReflectionTexture, addr 0x48888d0, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> get_customReflectionTexture();

  /// @brief Method get_defaultReflection, addr 0x4888a34, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Cubemap> get_defaultReflection();

  /// @brief Method get_defaultReflectionMode, addr 0x4888a5c, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DefaultReflectionMode get_defaultReflectionMode();

  /// @brief Method get_defaultReflectionResolution, addr 0x4888ac0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_defaultReflectionResolution();

  /// @brief Method get_flareFadeSpeed, addr 0x4888be4, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_flareFadeSpeed();

  /// @brief Method get_flareStrength, addr 0x4888b84, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_flareStrength();

  /// @brief Method get_fog, addr 0x4887dd0, size 0x28, virtual false, abstract: false, final false
  static inline bool get_fog();

  /// @brief Method get_fogColor, addr 0x4887f58, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_fogColor();

  /// @brief Method get_fogColor_Injected, addr 0x4887fa0, size 0x3c, virtual false, abstract: false, final false
  static inline void get_fogColor_Injected(::ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_fogDensity, addr 0x488805c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fogDensity();

  /// @brief Method get_fogEndDistance, addr 0x4887e94, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fogEndDistance();

  /// @brief Method get_fogMode, addr 0x4887ef4, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::FogMode get_fogMode();

  /// @brief Method get_fogStartDistance, addr 0x4887e34, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fogStartDistance();

  /// @brief Method get_haloStrength, addr 0x4888b24, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_haloStrength();

  /// @brief Method get_reflectionBounces, addr 0x48889d0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_reflectionBounces();

  /// @brief Method get_reflectionIntensity, addr 0x4888970, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_reflectionIntensity();

  /// @brief Method get_skybox, addr 0x4888634, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_skybox();

  /// @brief Method get_subtractiveShadowColor, addr 0x4888530, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_subtractiveShadowColor();

  /// @brief Method get_subtractiveShadowColor_Injected, addr 0x4888578, size 0x3c, virtual false, abstract: false, final false
  static inline void get_subtractiveShadowColor_Injected(::ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_sun, addr 0x4888698, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Light> get_sun();

  /// @brief Method set_ambientEquatorColor, addr 0x48882a8, size 0x44, virtual false, abstract: false, final false
  static inline void set_ambientEquatorColor(::UnityEngine::Color value);

  /// @brief Method set_ambientEquatorColor_Injected, addr 0x48882ec, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientEquatorColor_Injected(::ByRef<::UnityEngine::Color> value);

  /// @brief Method set_ambientGroundColor, addr 0x48883ac, size 0x44, virtual false, abstract: false, final false
  static inline void set_ambientGroundColor(::UnityEngine::Color value);

  /// @brief Method set_ambientGroundColor_Injected, addr 0x48883f0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientGroundColor_Injected(::ByRef<::UnityEngine::Color> value);

  /// @brief Method set_ambientIntensity, addr 0x4887d40, size 0x38, virtual false, abstract: false, final false
  static inline void set_ambientIntensity(float_t value);

  /// @brief Method set_ambientLight, addr 0x48884b0, size 0x44, virtual false, abstract: false, final false
  static inline void set_ambientLight(::UnityEngine::Color value);

  /// @brief Method set_ambientLight_Injected, addr 0x48884f4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientLight_Injected(::ByRef<::UnityEngine::Color> value);

  /// @brief Method set_ambientMode, addr 0x48880e4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientMode(::UnityEngine::Rendering::AmbientMode value);

  /// @brief Method set_ambientProbe, addr 0x48887a4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientProbe(::UnityEngine::Rendering::SphericalHarmonicsL2 value);

  /// @brief Method set_ambientProbe_Injected, addr 0x48887e0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientProbe_Injected(::ByRef<::UnityEngine::Rendering::SphericalHarmonicsL2> value);

  /// @brief Method set_ambientSkyColor, addr 0x48881a4, size 0x44, virtual false, abstract: false, final false
  static inline void set_ambientSkyColor(::UnityEngine::Color value);

  /// @brief Method set_ambientSkyColor_Injected, addr 0x48881e8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientSkyColor_Injected(::ByRef<::UnityEngine::Color> value);

  /// @brief Method set_ambientSkyboxAmount, addr 0x4887d08, size 0x38, virtual false, abstract: false, final false
  static inline void set_ambientSkyboxAmount(float_t value);

  /// @brief Method set_customReflection, addr 0x48888f8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_customReflection(::UnityEngine::Cubemap* value);

  /// @brief Method set_customReflectionTexture, addr 0x4888934, size 0x3c, virtual false, abstract: false, final false
  static inline void set_customReflectionTexture(::UnityEngine::Texture* value);

  /// @brief Method set_defaultReflectionMode, addr 0x4888a84, size 0x3c, virtual false, abstract: false, final false
  static inline void set_defaultReflectionMode(::UnityEngine::Rendering::DefaultReflectionMode value);

  /// @brief Method set_defaultReflectionResolution, addr 0x4888ae8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_defaultReflectionResolution(int32_t value);

  /// @brief Method set_flareFadeSpeed, addr 0x4888c0c, size 0x38, virtual false, abstract: false, final false
  static inline void set_flareFadeSpeed(float_t value);

  /// @brief Method set_flareStrength, addr 0x4888bac, size 0x38, virtual false, abstract: false, final false
  static inline void set_flareStrength(float_t value);

  /// @brief Method set_fog, addr 0x4887df8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_fog(bool value);

  /// @brief Method set_fogColor, addr 0x4887fdc, size 0x44, virtual false, abstract: false, final false
  static inline void set_fogColor(::UnityEngine::Color value);

  /// @brief Method set_fogColor_Injected, addr 0x4888020, size 0x3c, virtual false, abstract: false, final false
  static inline void set_fogColor_Injected(::ByRef<::UnityEngine::Color> value);

  /// @brief Method set_fogDensity, addr 0x4888084, size 0x38, virtual false, abstract: false, final false
  static inline void set_fogDensity(float_t value);

  /// @brief Method set_fogEndDistance, addr 0x4887ebc, size 0x38, virtual false, abstract: false, final false
  static inline void set_fogEndDistance(float_t value);

  /// @brief Method set_fogMode, addr 0x4887f1c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_fogMode(::UnityEngine::FogMode value);

  /// @brief Method set_fogStartDistance, addr 0x4887e5c, size 0x38, virtual false, abstract: false, final false
  static inline void set_fogStartDistance(float_t value);

  /// @brief Method set_haloStrength, addr 0x4888b4c, size 0x38, virtual false, abstract: false, final false
  static inline void set_haloStrength(float_t value);

  /// @brief Method set_reflectionBounces, addr 0x48889f8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_reflectionBounces(int32_t value);

  /// @brief Method set_reflectionIntensity, addr 0x4888998, size 0x38, virtual false, abstract: false, final false
  static inline void set_reflectionIntensity(float_t value);

  /// @brief Method set_skybox, addr 0x488865c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_skybox(::UnityEngine::Material* value);

  /// @brief Method set_subtractiveShadowColor, addr 0x48885b4, size 0x44, virtual false, abstract: false, final false
  static inline void set_subtractiveShadowColor(::UnityEngine::Color value);

  /// @brief Method set_subtractiveShadowColor_Injected, addr 0x48885f8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_subtractiveShadowColor_Injected(::ByRef<::UnityEngine::Color> value);

  /// @brief Method set_sun, addr 0x48886c0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_sun(::UnityEngine::Light* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderSettings(RenderSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderSettings(RenderSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10737 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RenderSettings, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::RenderSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderSettings*, "UnityEngine", "RenderSettings");
