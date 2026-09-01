#pragma once
// IWYU pragma private; include "UnityEngine\RenderSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderSettings)
namespace System {
struct IntPtr;
}
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
MARK_REF_T(::UnityEngine::RenderSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::RenderSettings*, "UnityEngine", "RenderSettings");
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RenderSettings
class CORDL_TYPE RenderSettings : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Method GetRenderSettings, addr 0x6a917e8, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> GetRenderSettings();

  /// @brief Method GetRenderSettings_Injected, addr 0x6a918fc, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetRenderSettings_Injected();

  static inline ::UnityEngine::RenderSettings* New_ctor();

  /// @brief Method Reset, addr 0x6a91924, size 0x28, virtual false, abstract: false, final false
  static inline void Reset();

  /// @brief Method .ctor, addr 0x6a90398, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ambientEquatorColor, addr 0x6a90844, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_ambientEquatorColor();

  /// @brief Method get_ambientEquatorColor_Injected, addr 0x6a9088c, size 0x3c, virtual false, abstract: false, final false
  static inline void get_ambientEquatorColor_Injected(::by_ref<::UnityEngine::Color> ret);

  /// @brief Method get_ambientGroundColor, addr 0x6a90948, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_ambientGroundColor();

  /// @brief Method get_ambientGroundColor_Injected, addr 0x6a90990, size 0x3c, virtual false, abstract: false, final false
  static inline void get_ambientGroundColor_Injected(::by_ref<::UnityEngine::Color> ret);

  /// @brief Method get_ambientIntensity, addr 0x6a90300, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_ambientIntensity();

  /// @brief Method get_ambientLight, addr 0x6a90a4c, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_ambientLight();

  /// @brief Method get_ambientLight_Injected, addr 0x6a90a94, size 0x3c, virtual false, abstract: false, final false
  static inline void get_ambientLight_Injected(::by_ref<::UnityEngine::Color> ret);

  /// @brief Method get_ambientMode, addr 0x6a906dc, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::AmbientMode get_ambientMode();

  /// @brief Method get_ambientProbe, addr 0x6a91044, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::SphericalHarmonicsL2 get_ambientProbe();

  /// @brief Method get_ambientProbe_Injected, addr 0x6a910b0, size 0x3c, virtual false, abstract: false, final false
  static inline void get_ambientProbe_Injected(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2> ret);

  /// @brief Method get_ambientSkyColor, addr 0x6a90740, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_ambientSkyColor();

  /// @brief Method get_ambientSkyColor_Injected, addr 0x6a90788, size 0x3c, virtual false, abstract: false, final false
  static inline void get_ambientSkyColor_Injected(::by_ref<::UnityEngine::Color> ret);

  /// @brief Method get_ambientSkyboxAmount, addr 0x6a902d8, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_ambientSkyboxAmount();

  /// @brief Method get_customReflection, addr 0x6a91164, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Cubemap> get_customReflection();

  /// @brief Method get_customReflectionTexture, addr 0x6a91204, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> get_customReflectionTexture();

  /// @brief Method get_customReflectionTexture_Injected, addr 0x6a9139c, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_customReflectionTexture_Injected();

  /// @brief Method get_defaultReflection, addr 0x6a914c4, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Cubemap> get_defaultReflection();

  /// @brief Method get_defaultReflectionMode, addr 0x6a91600, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DefaultReflectionMode get_defaultReflectionMode();

  /// @brief Method get_defaultReflectionResolution, addr 0x6a91664, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_defaultReflectionResolution();

  /// @brief Method get_defaultReflection_Injected, addr 0x6a915d8, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_defaultReflection_Injected();

  /// @brief Method get_flareFadeSpeed, addr 0x6a91788, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_flareFadeSpeed();

  /// @brief Method get_flareStrength, addr 0x6a91728, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_flareStrength();

  /// @brief Method get_fog, addr 0x6a903f0, size 0x28, virtual false, abstract: false, final false
  static inline bool get_fog();

  /// @brief Method get_fogColor, addr 0x6a90578, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_fogColor();

  /// @brief Method get_fogColor_Injected, addr 0x6a905c0, size 0x3c, virtual false, abstract: false, final false
  static inline void get_fogColor_Injected(::by_ref<::UnityEngine::Color> ret);

  /// @brief Method get_fogDensity, addr 0x6a9067c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fogDensity();

  /// @brief Method get_fogEndDistance, addr 0x6a904b4, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fogEndDistance();

  /// @brief Method get_fogMode, addr 0x6a90514, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::FogMode get_fogMode();

  /// @brief Method get_fogStartDistance, addr 0x6a90454, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fogStartDistance();

  /// @brief Method get_haloStrength, addr 0x6a916c8, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_haloStrength();

  /// @brief Method get_reflectionBounces, addr 0x6a91460, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_reflectionBounces();

  /// @brief Method get_reflectionIntensity, addr 0x6a91400, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_reflectionIntensity();

  /// @brief Method get_skybox, addr 0x6a90c54, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_skybox();

  /// @brief Method get_skybox_Injected, addr 0x6a90d68, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_skybox_Injected();

  /// @brief Method get_subtractiveShadowColor, addr 0x6a90b50, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_subtractiveShadowColor();

  /// @brief Method get_subtractiveShadowColor_Injected, addr 0x6a90b98, size 0x3c, virtual false, abstract: false, final false
  static inline void get_subtractiveShadowColor_Injected(::by_ref<::UnityEngine::Color> ret);

  /// @brief Method get_sun, addr 0x6a90e4c, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Light> get_sun();

  /// @brief Method get_sun_Injected, addr 0x6a90f60, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_sun_Injected();

  /// @brief Method set_ambientEquatorColor, addr 0x6a908c8, size 0x44, virtual false, abstract: false, final false
  static inline void set_ambientEquatorColor(::UnityEngine::Color value);

  /// @brief Method set_ambientEquatorColor_Injected, addr 0x6a9090c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientEquatorColor_Injected(::by_ref<::UnityEngine::Color> value);

  /// @brief Method set_ambientGroundColor, addr 0x6a909cc, size 0x44, virtual false, abstract: false, final false
  static inline void set_ambientGroundColor(::UnityEngine::Color value);

  /// @brief Method set_ambientGroundColor_Injected, addr 0x6a90a10, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientGroundColor_Injected(::by_ref<::UnityEngine::Color> value);

  /// @brief Method set_ambientIntensity, addr 0x6a90360, size 0x38, virtual false, abstract: false, final false
  static inline void set_ambientIntensity(float_t value);

  /// @brief Method set_ambientLight, addr 0x6a90ad0, size 0x44, virtual false, abstract: false, final false
  static inline void set_ambientLight(::UnityEngine::Color value);

  /// @brief Method set_ambientLight_Injected, addr 0x6a90b14, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientLight_Injected(::by_ref<::UnityEngine::Color> value);

  /// @brief Method set_ambientMode, addr 0x6a90704, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientMode(::UnityEngine::Rendering::AmbientMode value);

  /// @brief Method set_ambientProbe, addr 0x6a910ec, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientProbe(::UnityEngine::Rendering::SphericalHarmonicsL2 value);

  /// @brief Method set_ambientProbe_Injected, addr 0x6a91128, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientProbe_Injected(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2> value);

  /// @brief Method set_ambientSkyColor, addr 0x6a907c4, size 0x44, virtual false, abstract: false, final false
  static inline void set_ambientSkyColor(::UnityEngine::Color value);

  /// @brief Method set_ambientSkyColor_Injected, addr 0x6a90808, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientSkyColor_Injected(::by_ref<::UnityEngine::Color> value);

  /// @brief Method set_ambientSkyboxAmount, addr 0x6a90328, size 0x38, virtual false, abstract: false, final false
  static inline void set_ambientSkyboxAmount(float_t value);

  /// @brief Method set_customReflection, addr 0x6a91318, size 0x4, virtual false, abstract: false, final false
  static inline void set_customReflection(::UnityEngine::Cubemap* value);

  /// @brief Method set_customReflectionTexture, addr 0x6a9131c, size 0x80, virtual false, abstract: false, final false
  static inline void set_customReflectionTexture(::UnityEngine::Texture* value);

  /// @brief Method set_customReflectionTexture_Injected, addr 0x6a913c4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_customReflectionTexture_Injected(::System::IntPtr value);

  /// @brief Method set_defaultReflectionMode, addr 0x6a91628, size 0x3c, virtual false, abstract: false, final false
  static inline void set_defaultReflectionMode(::UnityEngine::Rendering::DefaultReflectionMode value);

  /// @brief Method set_defaultReflectionResolution, addr 0x6a9168c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_defaultReflectionResolution(int32_t value);

  /// @brief Method set_flareFadeSpeed, addr 0x6a917b0, size 0x38, virtual false, abstract: false, final false
  static inline void set_flareFadeSpeed(float_t value);

  /// @brief Method set_flareStrength, addr 0x6a91750, size 0x38, virtual false, abstract: false, final false
  static inline void set_flareStrength(float_t value);

  /// @brief Method set_fog, addr 0x6a90418, size 0x3c, virtual false, abstract: false, final false
  static inline void set_fog(bool value);

  /// @brief Method set_fogColor, addr 0x6a905fc, size 0x44, virtual false, abstract: false, final false
  static inline void set_fogColor(::UnityEngine::Color value);

  /// @brief Method set_fogColor_Injected, addr 0x6a90640, size 0x3c, virtual false, abstract: false, final false
  static inline void set_fogColor_Injected(::by_ref<::UnityEngine::Color> value);

  /// @brief Method set_fogDensity, addr 0x6a906a4, size 0x38, virtual false, abstract: false, final false
  static inline void set_fogDensity(float_t value);

  /// @brief Method set_fogEndDistance, addr 0x6a904dc, size 0x38, virtual false, abstract: false, final false
  static inline void set_fogEndDistance(float_t value);

  /// @brief Method set_fogMode, addr 0x6a9053c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_fogMode(::UnityEngine::FogMode value);

  /// @brief Method set_fogStartDistance, addr 0x6a9047c, size 0x38, virtual false, abstract: false, final false
  static inline void set_fogStartDistance(float_t value);

  /// @brief Method set_haloStrength, addr 0x6a916f0, size 0x38, virtual false, abstract: false, final false
  static inline void set_haloStrength(float_t value);

  /// @brief Method set_reflectionBounces, addr 0x6a91488, size 0x3c, virtual false, abstract: false, final false
  static inline void set_reflectionBounces(int32_t value);

  /// @brief Method set_reflectionIntensity, addr 0x6a91428, size 0x38, virtual false, abstract: false, final false
  static inline void set_reflectionIntensity(float_t value);

  /// @brief Method set_skybox, addr 0x6a90d90, size 0x80, virtual false, abstract: false, final false
  static inline void set_skybox(::UnityEngine::Material* value);

  /// @brief Method set_skybox_Injected, addr 0x6a90e10, size 0x3c, virtual false, abstract: false, final false
  static inline void set_skybox_Injected(::System::IntPtr value);

  /// @brief Method set_subtractiveShadowColor, addr 0x6a90bd4, size 0x44, virtual false, abstract: false, final false
  static inline void set_subtractiveShadowColor(::UnityEngine::Color value);

  /// @brief Method set_subtractiveShadowColor_Injected, addr 0x6a90c18, size 0x3c, virtual false, abstract: false, final false
  static inline void set_subtractiveShadowColor_Injected(::by_ref<::UnityEngine::Color> value);

  /// @brief Method set_sun, addr 0x6a90f88, size 0x80, virtual false, abstract: false, final false
  static inline void set_sun(::UnityEngine::Light* value);

  /// @brief Method set_sun_Injected, addr 0x6a91008, size 0x3c, virtual false, abstract: false, final false
  static inline void set_sun_Injected(::System::IntPtr value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10159 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::RenderSettings) == 0x18, "Size mismatch!");

} // namespace UnityEngine
