#pragma once
// IWYU pragma private; include "UnityEngine/RenderSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: UnityEngine::RenderSettings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::RenderSettings*
class CORDL_TYPE RenderSettings : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Method GetRenderSettings, addr 0x34199d4, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> GetRenderSettings();

  static inline ::UnityEngine::RenderSettings* New_ctor();

  /// @brief Method Reset, addr 0x34199fc, size 0x28, virtual false, abstract: false, final false
  static inline void Reset();

  /// @brief Method .ctor, addr 0x3418b98, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ambientEquatorColor, addr 0x3419044, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_ambientEquatorColor();

  /// @brief Method get_ambientEquatorColor_Injected, addr 0x341908c, size 0x3c, virtual false, abstract: false, final false
  static inline void get_ambientEquatorColor_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_ambientGroundColor, addr 0x3419148, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_ambientGroundColor();

  /// @brief Method get_ambientGroundColor_Injected, addr 0x3419190, size 0x3c, virtual false, abstract: false, final false
  static inline void get_ambientGroundColor_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_ambientIntensity, addr 0x341924c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_ambientIntensity();

  /// @brief Method get_ambientLight, addr 0x34192ac, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_ambientLight();

  /// @brief Method get_ambientLight_Injected, addr 0x34192f4, size 0x3c, virtual false, abstract: false, final false
  static inline void get_ambientLight_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_ambientMode, addr 0x3418edc, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::AmbientMode get_ambientMode();

  /// @brief Method get_ambientProbe, addr 0x341957c, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::SphericalHarmonicsL2 get_ambientProbe();

  /// @brief Method get_ambientProbe_Injected, addr 0x34195e8, size 0x3c, virtual false, abstract: false, final false
  static inline void get_ambientProbe_Injected(ByRef<::UnityEngine::Rendering::SphericalHarmonicsL2> ret);

  /// @brief Method get_ambientSkyColor, addr 0x3418f40, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_ambientSkyColor();

  /// @brief Method get_ambientSkyColor_Injected, addr 0x3418f88, size 0x3c, virtual false, abstract: false, final false
  static inline void get_ambientSkyColor_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_ambientSkyboxAmount, addr 0x3419a24, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_ambientSkyboxAmount();

  /// @brief Method get_customReflection, addr 0x341969c, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> get_customReflection();

  /// @brief Method get_defaultReflection, addr 0x34197c4, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Cubemap> get_defaultReflection();

  /// @brief Method get_defaultReflectionMode, addr 0x34197ec, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DefaultReflectionMode get_defaultReflectionMode();

  /// @brief Method get_defaultReflectionResolution, addr 0x3419850, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_defaultReflectionResolution();

  /// @brief Method get_flareFadeSpeed, addr 0x3419974, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_flareFadeSpeed();

  /// @brief Method get_flareStrength, addr 0x3419914, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_flareStrength();

  /// @brief Method get_fog, addr 0x3418bf0, size 0x28, virtual false, abstract: false, final false
  static inline bool get_fog();

  /// @brief Method get_fogColor, addr 0x3418d78, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_fogColor();

  /// @brief Method get_fogColor_Injected, addr 0x3418dc0, size 0x3c, virtual false, abstract: false, final false
  static inline void get_fogColor_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_fogDensity, addr 0x3418e7c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fogDensity();

  /// @brief Method get_fogEndDistance, addr 0x3418cb4, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fogEndDistance();

  /// @brief Method get_fogMode, addr 0x3418d14, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::FogMode get_fogMode();

  /// @brief Method get_fogStartDistance, addr 0x3418c54, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fogStartDistance();

  /// @brief Method get_haloStrength, addr 0x34198b4, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_haloStrength();

  /// @brief Method get_reflectionBounces, addr 0x3419760, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_reflectionBounces();

  /// @brief Method get_reflectionIntensity, addr 0x3419700, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_reflectionIntensity();

  /// @brief Method get_skybox, addr 0x34194b4, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_skybox();

  /// @brief Method get_subtractiveShadowColor, addr 0x34193b0, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_subtractiveShadowColor();

  /// @brief Method get_subtractiveShadowColor_Injected, addr 0x34193f8, size 0x3c, virtual false, abstract: false, final false
  static inline void get_subtractiveShadowColor_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_sun, addr 0x3419518, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Light> get_sun();

  /// @brief Method set_ambientEquatorColor, addr 0x34190c8, size 0x44, virtual false, abstract: false, final false
  static inline void set_ambientEquatorColor(::UnityEngine::Color value);

  /// @brief Method set_ambientEquatorColor_Injected, addr 0x341910c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientEquatorColor_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method set_ambientGroundColor, addr 0x34191cc, size 0x44, virtual false, abstract: false, final false
  static inline void set_ambientGroundColor(::UnityEngine::Color value);

  /// @brief Method set_ambientGroundColor_Injected, addr 0x3419210, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientGroundColor_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method set_ambientIntensity, addr 0x3419274, size 0x38, virtual false, abstract: false, final false
  static inline void set_ambientIntensity(float_t value);

  /// @brief Method set_ambientLight, addr 0x3419330, size 0x44, virtual false, abstract: false, final false
  static inline void set_ambientLight(::UnityEngine::Color value);

  /// @brief Method set_ambientLight_Injected, addr 0x3419374, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientLight_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method set_ambientMode, addr 0x3418f04, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientMode(::UnityEngine::Rendering::AmbientMode value);

  /// @brief Method set_ambientProbe, addr 0x3419624, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientProbe(::UnityEngine::Rendering::SphericalHarmonicsL2 value);

  /// @brief Method set_ambientProbe_Injected, addr 0x3419660, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientProbe_Injected(ByRef<::UnityEngine::Rendering::SphericalHarmonicsL2> value);

  /// @brief Method set_ambientSkyColor, addr 0x3418fc4, size 0x44, virtual false, abstract: false, final false
  static inline void set_ambientSkyColor(::UnityEngine::Color value);

  /// @brief Method set_ambientSkyColor_Injected, addr 0x3419008, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientSkyColor_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method set_ambientSkyboxAmount, addr 0x3419a4c, size 0x38, virtual false, abstract: false, final false
  static inline void set_ambientSkyboxAmount(float_t value);

  /// @brief Method set_customReflection, addr 0x34196c4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_customReflection(::UnityEngine::Texture* value);

  /// @brief Method set_defaultReflectionMode, addr 0x3419814, size 0x3c, virtual false, abstract: false, final false
  static inline void set_defaultReflectionMode(::UnityEngine::Rendering::DefaultReflectionMode value);

  /// @brief Method set_defaultReflectionResolution, addr 0x3419878, size 0x3c, virtual false, abstract: false, final false
  static inline void set_defaultReflectionResolution(int32_t value);

  /// @brief Method set_flareFadeSpeed, addr 0x341999c, size 0x38, virtual false, abstract: false, final false
  static inline void set_flareFadeSpeed(float_t value);

  /// @brief Method set_flareStrength, addr 0x341993c, size 0x38, virtual false, abstract: false, final false
  static inline void set_flareStrength(float_t value);

  /// @brief Method set_fog, addr 0x3418c18, size 0x3c, virtual false, abstract: false, final false
  static inline void set_fog(bool value);

  /// @brief Method set_fogColor, addr 0x3418dfc, size 0x44, virtual false, abstract: false, final false
  static inline void set_fogColor(::UnityEngine::Color value);

  /// @brief Method set_fogColor_Injected, addr 0x3418e40, size 0x3c, virtual false, abstract: false, final false
  static inline void set_fogColor_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method set_fogDensity, addr 0x3418ea4, size 0x38, virtual false, abstract: false, final false
  static inline void set_fogDensity(float_t value);

  /// @brief Method set_fogEndDistance, addr 0x3418cdc, size 0x38, virtual false, abstract: false, final false
  static inline void set_fogEndDistance(float_t value);

  /// @brief Method set_fogMode, addr 0x3418d3c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_fogMode(::UnityEngine::FogMode value);

  /// @brief Method set_fogStartDistance, addr 0x3418c7c, size 0x38, virtual false, abstract: false, final false
  static inline void set_fogStartDistance(float_t value);

  /// @brief Method set_haloStrength, addr 0x34198dc, size 0x38, virtual false, abstract: false, final false
  static inline void set_haloStrength(float_t value);

  /// @brief Method set_reflectionBounces, addr 0x3419788, size 0x3c, virtual false, abstract: false, final false
  static inline void set_reflectionBounces(int32_t value);

  /// @brief Method set_reflectionIntensity, addr 0x3419728, size 0x38, virtual false, abstract: false, final false
  static inline void set_reflectionIntensity(float_t value);

  /// @brief Method set_skybox, addr 0x34194dc, size 0x3c, virtual false, abstract: false, final false
  static inline void set_skybox(::UnityEngine::Material* value);

  /// @brief Method set_subtractiveShadowColor, addr 0x3419434, size 0x44, virtual false, abstract: false, final false
  static inline void set_subtractiveShadowColor(::UnityEngine::Color value);

  /// @brief Method set_subtractiveShadowColor_Injected, addr 0x3419478, size 0x3c, virtual false, abstract: false, final false
  static inline void set_subtractiveShadowColor_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method set_sun, addr 0x3419540, size 0x3c, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RenderSettings, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::RenderSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderSettings*, "UnityEngine", "RenderSettings");
