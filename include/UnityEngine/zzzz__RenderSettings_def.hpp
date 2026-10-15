#pragma once
// IWYU pragma private; include "UnityEngine/RenderSettings.hpp"
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
class Texture2D;
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
// [NativeHeader("Runtime/Graphics/QualitySettingsTypes.h")]
// [NativeHeader("Runtime/Camera/RenderSettings.h")]
// [StaticAccessor("GetRenderSettings()", (UnityEngine.Bindings.StaticAccessorType)0)]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RenderSettings
class CORDL_TYPE RenderSettings : public ::UnityEngine::Object {
public:
  // Declarations
  /// [FreeFunction("GetRenderSettings")]
  /// @brief Method GetRenderSettings, addr 0x6f22924, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Object> GetRenderSettings();

  /// @brief Method GetRenderSettings_Injected, addr 0x6f22a38, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetRenderSettings_Injected();

  static inline ::UnityEngine::RenderSettings* New_ctor();

  /// [StaticAccessor("RenderSettingsScripting", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method Reset, addr 0x6f22a60, size 0x28, virtual false, abstract: false, final false
  static inline void Reset();

  /// @brief Method .ctor, addr 0x6f214d4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ambientEquatorColor, addr 0x6f21980, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_ambientEquatorColor();

  /// @brief Method get_ambientEquatorColor_Injected, addr 0x6f219c8, size 0x3c, virtual false, abstract: false, final false
  static inline void get_ambientEquatorColor_Injected(::by_ref<::UnityEngine::Color> ret);

  /// @brief Method get_ambientGroundColor, addr 0x6f21a84, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_ambientGroundColor();

  /// @brief Method get_ambientGroundColor_Injected, addr 0x6f21acc, size 0x3c, virtual false, abstract: false, final false
  static inline void get_ambientGroundColor_Injected(::by_ref<::UnityEngine::Color> ret);

  /// @brief Method get_ambientIntensity, addr 0x6f2143c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_ambientIntensity();

  /// @brief Method get_ambientLight, addr 0x6f21b88, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_ambientLight();

  /// @brief Method get_ambientLight_Injected, addr 0x6f21bd0, size 0x3c, virtual false, abstract: false, final false
  static inline void get_ambientLight_Injected(::by_ref<::UnityEngine::Color> ret);

  /// @brief Method get_ambientMode, addr 0x6f21818, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::AmbientMode get_ambientMode();

  /// [NativeMethod("GetFinalAmbientProbe")]
  /// @brief Method get_ambientProbe, addr 0x6f22180, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::SphericalHarmonicsL2 get_ambientProbe();

  /// @brief Method get_ambientProbe_Injected, addr 0x6f221ec, size 0x3c, virtual false, abstract: false, final false
  static inline void get_ambientProbe_Injected(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2> ret);

  /// @brief Method get_ambientSkyColor, addr 0x6f2187c, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_ambientSkyColor();

  /// @brief Method get_ambientSkyColor_Injected, addr 0x6f218c4, size 0x3c, virtual false, abstract: false, final false
  static inline void get_ambientSkyColor_Injected(::by_ref<::UnityEngine::Color> ret);

  /// @brief Method get_ambientSkyboxAmount, addr 0x6f21414, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_ambientSkyboxAmount();

  /// @brief Method get_customReflection, addr 0x6f222a0, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Cubemap> get_customReflection();

  /// @brief Method get_customReflectionTexture, addr 0x6f22340, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> get_customReflectionTexture();

  /// @brief Method get_customReflectionTexture_Injected, addr 0x6f224d8, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_customReflectionTexture_Injected();

  /// @brief Method get_defaultReflection, addr 0x6f22600, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Cubemap> get_defaultReflection();

  /// @brief Method get_defaultReflectionMode, addr 0x6f2273c, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DefaultReflectionMode get_defaultReflectionMode();

  /// @brief Method get_defaultReflectionResolution, addr 0x6f227a0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_defaultReflectionResolution();

  /// @brief Method get_defaultReflection_Injected, addr 0x6f22714, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_defaultReflection_Injected();

  /// @brief Method get_flareFadeSpeed, addr 0x6f228c4, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_flareFadeSpeed();

  /// @brief Method get_flareStrength, addr 0x6f22864, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_flareStrength();

  /// @brief Method get_fog, addr 0x6f2152c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_fog();

  /// @brief Method get_fogColor, addr 0x6f216b4, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_fogColor();

  /// @brief Method get_fogColor_Injected, addr 0x6f216fc, size 0x3c, virtual false, abstract: false, final false
  static inline void get_fogColor_Injected(::by_ref<::UnityEngine::Color> ret);

  /// @brief Method get_fogDensity, addr 0x6f217b8, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fogDensity();

  /// @brief Method get_fogEndDistance, addr 0x6f215f0, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fogEndDistance();

  /// @brief Method get_fogMode, addr 0x6f21650, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::FogMode get_fogMode();

  /// @brief Method get_fogStartDistance, addr 0x6f21590, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_fogStartDistance();

  /// @brief Method get_haloStrength, addr 0x6f22804, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_haloStrength();

  /// @brief Method get_haloTexture, addr 0x6f22c80, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> get_haloTexture();

  /// @brief Method get_haloTexture_Injected, addr 0x6f22d94, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_haloTexture_Injected();

  /// @brief Method get_reflectionBounces, addr 0x6f2259c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_reflectionBounces();

  /// @brief Method get_reflectionIntensity, addr 0x6f2253c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_reflectionIntensity();

  /// @brief Method get_skybox, addr 0x6f21d90, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_skybox();

  /// @brief Method get_skybox_Injected, addr 0x6f21ea4, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_skybox_Injected();

  /// @brief Method get_spotCookieTexture, addr 0x6f22a88, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> get_spotCookieTexture();

  /// @brief Method get_spotCookieTexture_Injected, addr 0x6f22b9c, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_spotCookieTexture_Injected();

  /// @brief Method get_subtractiveShadowColor, addr 0x6f21c8c, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color get_subtractiveShadowColor();

  /// @brief Method get_subtractiveShadowColor_Injected, addr 0x6f21cd4, size 0x3c, virtual false, abstract: false, final false
  static inline void get_subtractiveShadowColor_Injected(::by_ref<::UnityEngine::Color> ret);

  /// @brief Method get_sun, addr 0x6f21f88, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Light> get_sun();

  /// @brief Method get_sun_Injected, addr 0x6f2209c, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_sun_Injected();

  /// @brief Method set_ambientEquatorColor, addr 0x6f21a04, size 0x44, virtual false, abstract: false, final false
  static inline void set_ambientEquatorColor(::UnityEngine::Color value);

  /// @brief Method set_ambientEquatorColor_Injected, addr 0x6f21a48, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientEquatorColor_Injected(::by_ref<::UnityEngine::Color const> value);

  /// @brief Method set_ambientGroundColor, addr 0x6f21b08, size 0x44, virtual false, abstract: false, final false
  static inline void set_ambientGroundColor(::UnityEngine::Color value);

  /// @brief Method set_ambientGroundColor_Injected, addr 0x6f21b4c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientGroundColor_Injected(::by_ref<::UnityEngine::Color const> value);

  /// @brief Method set_ambientIntensity, addr 0x6f2149c, size 0x38, virtual false, abstract: false, final false
  static inline void set_ambientIntensity(float_t value);

  /// @brief Method set_ambientLight, addr 0x6f21c0c, size 0x44, virtual false, abstract: false, final false
  static inline void set_ambientLight(::UnityEngine::Color value);

  /// @brief Method set_ambientLight_Injected, addr 0x6f21c50, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientLight_Injected(::by_ref<::UnityEngine::Color const> value);

  /// @brief Method set_ambientMode, addr 0x6f21840, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientMode(::UnityEngine::Rendering::AmbientMode value);

  /// @brief Method set_ambientProbe, addr 0x6f22228, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientProbe(::UnityEngine::Rendering::SphericalHarmonicsL2 value);

  /// @brief Method set_ambientProbe_Injected, addr 0x6f22264, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientProbe_Injected(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2 const> value);

  /// @brief Method set_ambientSkyColor, addr 0x6f21900, size 0x44, virtual false, abstract: false, final false
  static inline void set_ambientSkyColor(::UnityEngine::Color value);

  /// @brief Method set_ambientSkyColor_Injected, addr 0x6f21944, size 0x3c, virtual false, abstract: false, final false
  static inline void set_ambientSkyColor_Injected(::by_ref<::UnityEngine::Color const> value);

  /// @brief Method set_ambientSkyboxAmount, addr 0x6f21464, size 0x38, virtual false, abstract: false, final false
  static inline void set_ambientSkyboxAmount(float_t value);

  /// [NativeThrows]
  /// @brief Method set_customReflection, addr 0x6f22454, size 0x4, virtual false, abstract: false, final false
  static inline void set_customReflection(::UnityEngine::Cubemap* value);

  /// [NativeThrows]
  /// @brief Method set_customReflectionTexture, addr 0x6f22458, size 0x80, virtual false, abstract: false, final false
  static inline void set_customReflectionTexture(::UnityEngine::Texture* value);

  /// @brief Method set_customReflectionTexture_Injected, addr 0x6f22500, size 0x3c, virtual false, abstract: false, final false
  static inline void set_customReflectionTexture_Injected(::System::IntPtr value);

  /// @brief Method set_defaultReflectionMode, addr 0x6f22764, size 0x3c, virtual false, abstract: false, final false
  static inline void set_defaultReflectionMode(::UnityEngine::Rendering::DefaultReflectionMode value);

  /// @brief Method set_defaultReflectionResolution, addr 0x6f227c8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_defaultReflectionResolution(int32_t value);

  /// @brief Method set_flareFadeSpeed, addr 0x6f228ec, size 0x38, virtual false, abstract: false, final false
  static inline void set_flareFadeSpeed(float_t value);

  /// @brief Method set_flareStrength, addr 0x6f2288c, size 0x38, virtual false, abstract: false, final false
  static inline void set_flareStrength(float_t value);

  /// @brief Method set_fog, addr 0x6f21554, size 0x3c, virtual false, abstract: false, final false
  static inline void set_fog(bool value);

  /// @brief Method set_fogColor, addr 0x6f21738, size 0x44, virtual false, abstract: false, final false
  static inline void set_fogColor(::UnityEngine::Color value);

  /// @brief Method set_fogColor_Injected, addr 0x6f2177c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_fogColor_Injected(::by_ref<::UnityEngine::Color const> value);

  /// @brief Method set_fogDensity, addr 0x6f217e0, size 0x38, virtual false, abstract: false, final false
  static inline void set_fogDensity(float_t value);

  /// @brief Method set_fogEndDistance, addr 0x6f21618, size 0x38, virtual false, abstract: false, final false
  static inline void set_fogEndDistance(float_t value);

  /// @brief Method set_fogMode, addr 0x6f21678, size 0x3c, virtual false, abstract: false, final false
  static inline void set_fogMode(::UnityEngine::FogMode value);

  /// @brief Method set_fogStartDistance, addr 0x6f215b8, size 0x38, virtual false, abstract: false, final false
  static inline void set_fogStartDistance(float_t value);

  /// @brief Method set_haloStrength, addr 0x6f2282c, size 0x38, virtual false, abstract: false, final false
  static inline void set_haloStrength(float_t value);

  /// @brief Method set_haloTexture, addr 0x6f22dbc, size 0x80, virtual false, abstract: false, final false
  static inline void set_haloTexture(::UnityEngine::Texture2D* value);

  /// @brief Method set_haloTexture_Injected, addr 0x6f22e3c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_haloTexture_Injected(::System::IntPtr value);

  /// @brief Method set_reflectionBounces, addr 0x6f225c4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_reflectionBounces(int32_t value);

  /// @brief Method set_reflectionIntensity, addr 0x6f22564, size 0x38, virtual false, abstract: false, final false
  static inline void set_reflectionIntensity(float_t value);

  /// @brief Method set_skybox, addr 0x6f21ecc, size 0x80, virtual false, abstract: false, final false
  static inline void set_skybox(::UnityEngine::Material* value);

  /// @brief Method set_skybox_Injected, addr 0x6f21f4c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_skybox_Injected(::System::IntPtr value);

  /// @brief Method set_spotCookieTexture, addr 0x6f22bc4, size 0x80, virtual false, abstract: false, final false
  static inline void set_spotCookieTexture(::UnityEngine::Texture2D* value);

  /// @brief Method set_spotCookieTexture_Injected, addr 0x6f22c44, size 0x3c, virtual false, abstract: false, final false
  static inline void set_spotCookieTexture_Injected(::System::IntPtr value);

  /// @brief Method set_subtractiveShadowColor, addr 0x6f21d10, size 0x44, virtual false, abstract: false, final false
  static inline void set_subtractiveShadowColor(::UnityEngine::Color value);

  /// @brief Method set_subtractiveShadowColor_Injected, addr 0x6f21d54, size 0x3c, virtual false, abstract: false, final false
  static inline void set_subtractiveShadowColor_Injected(::by_ref<::UnityEngine::Color const> value);

  /// @brief Method set_sun, addr 0x6f220c4, size 0x80, virtual false, abstract: false, final false
  static inline void set_sun(::UnityEngine::Light* value);

  /// @brief Method set_sun_Injected, addr 0x6f22144, size 0x3c, virtual false, abstract: false, final false
  static inline void set_sun_Injected(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderSettings", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderSettings(RenderSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderSettings", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderSettings(RenderSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9748 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::RenderSettings) == 0x18, "Size mismatch!");

} // namespace UnityEngine
