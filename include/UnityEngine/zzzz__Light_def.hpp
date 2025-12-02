#pragma once
// IWYU pragma private; include "UnityEngine/Light.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "UnityEngine/zzzz__LightShape_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Light)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Rendering {
struct LightShadowResolution;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct LightBakingOutput;
}
namespace UnityEngine {
struct LightShadows;
}
namespace UnityEngine {
struct LightType;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Light;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Light);
// Dependencies UnityEngine.Behaviour, UnityEngine.LightShape
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Light
class CORDL_TYPE Light : public ::UnityEngine::Behaviour {
public:
  // Declarations
  /// @brief Field <shape>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__shape_k__BackingField, put = __cordl_internal_set__shape_k__BackingField)) ::UnityEngine::LightShape _shape_k__BackingField;

  __declspec(property(get = get_areaSize)) ::UnityEngine::Vector2 areaSize;

  __declspec(property(get = get_bakingOutput)) ::UnityEngine::LightBakingOutput bakingOutput;

  __declspec(property(get = get_bounceIntensity)) float_t bounceIntensity;

  __declspec(property(get = get_color, put = set_color)) ::UnityEngine::Color color;

  __declspec(property(get = get_colorTemperature)) float_t colorTemperature;

  __declspec(property(get = get_cookie)) ::UnityW<::UnityEngine::Texture> cookie;

  __declspec(property(get = get_cookieSize)) float_t cookieSize;

  __declspec(property(get = get_dilatedRange)) float_t dilatedRange;

  __declspec(property(get = get_enableSpotReflector)) bool enableSpotReflector;

  __declspec(property(get = get_innerSpotAngle)) float_t innerSpotAngle;

  __declspec(property(get = get_intensity, put = set_intensity)) float_t intensity;

  __declspec(property(get = get_luxAtDistance)) float_t luxAtDistance;

  /// @brief Field m_BakedIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BakedIndex, put = __cordl_internal_set_m_BakedIndex)) int32_t m_BakedIndex;

  __declspec(property(get = get_range)) float_t range;

  __declspec(property(put = set_renderingLayerMask)) int32_t renderingLayerMask;

  __declspec(property(get = get_shadowBias)) float_t shadowBias;

  __declspec(property(get = get_shadowNearPlane)) float_t shadowNearPlane;

  __declspec(property(get = get_shadowNormalBias)) float_t shadowNormalBias;

  __declspec(property(get = get_shadowResolution)) ::UnityEngine::Rendering::LightShadowResolution shadowResolution;

  __declspec(property(get = get_shadowStrength)) float_t shadowStrength;

  __declspec(property(get = get_shadows)) ::UnityEngine::LightShadows shadows;

  __declspec(property(get = get_spotAngle)) float_t spotAngle;

  __declspec(property(get = get_type)) ::UnityEngine::LightType type;

  __declspec(property(get = get_useColorTemperature)) bool useColorTemperature;

  static inline ::UnityEngine::Light* New_ctor();

  constexpr ::UnityEngine::LightShape const& __cordl_internal_get__shape_k__BackingField() const;

  constexpr ::UnityEngine::LightShape& __cordl_internal_get__shape_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_BakedIndex() const;

  constexpr int32_t& __cordl_internal_get_m_BakedIndex();

  constexpr void __cordl_internal_set__shape_k__BackingField(::UnityEngine::LightShape value);

  constexpr void __cordl_internal_set_m_BakedIndex(int32_t value);

  /// @brief Method .ctor, addr 0x68722d8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_areaSize, addr 0x68721fc, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_areaSize();

  /// @brief Method get_areaSize_Injected, addr 0x6872294, size 0x44, virtual false, abstract: false, final false
  static inline void get_areaSize_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_bakingOutput, addr 0x6871bb4, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::LightBakingOutput get_bakingOutput();

  /// @brief Method get_bakingOutput_Injected, addr 0x6871c68, size 0x44, virtual false, abstract: false, final false
  static inline void get_bakingOutput_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::LightBakingOutput> ret);

  /// @brief Method get_bounceIntensity, addr 0x68715d4, size 0x80, virtual false, abstract: false, final false
  inline float_t get_bounceIntensity();

  /// @brief Method get_bounceIntensity_Injected, addr 0x6871654, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_bounceIntensity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_color, addr 0x6871108, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_colorTemperature, addr 0x68712c4, size 0x80, virtual false, abstract: false, final false
  inline float_t get_colorTemperature();

  /// @brief Method get_colorTemperature_Injected, addr 0x6871344, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_colorTemperature_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_color_Injected, addr 0x68711a4, size 0x44, virtual false, abstract: false, final false
  static inline void get_color_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_cookie, addr 0x6872070, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_cookie();

  /// @brief Method get_cookieSize, addr 0x6871fb4, size 0x80, virtual false, abstract: false, final false
  inline float_t get_cookieSize();

  /// @brief Method get_cookieSize_Injected, addr 0x6872034, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_cookieSize_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_cookie_Injected, addr 0x68721c0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_cookie_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_dilatedRange, addr 0x6871af8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_dilatedRange();

  /// @brief Method get_dilatedRange_Injected, addr 0x6871b78, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_dilatedRange_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_enableSpotReflector, addr 0x687174c, size 0x80, virtual false, abstract: false, final false
  inline bool get_enableSpotReflector();

  /// @brief Method get_enableSpotReflector_Injected, addr 0x68717cc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_enableSpotReflector_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_innerSpotAngle, addr 0x687104c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_innerSpotAngle();

  /// @brief Method get_innerSpotAngle_Injected, addr 0x68710cc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_innerSpotAngle_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_intensity, addr 0x687143c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method get_intensity_Injected, addr 0x68714bc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_intensity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_luxAtDistance, addr 0x6871690, size 0x80, virtual false, abstract: false, final false
  inline float_t get_luxAtDistance();

  /// @brief Method get_luxAtDistance_Injected, addr 0x6871710, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_luxAtDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_range, addr 0x6871a3c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_range();

  /// @brief Method get_range_Injected, addr 0x6871abc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_range_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_shadowBias, addr 0x6871808, size 0x80, virtual false, abstract: false, final false
  inline float_t get_shadowBias();

  /// @brief Method get_shadowBias_Injected, addr 0x6871888, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_shadowBias_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_shadowNearPlane, addr 0x6871980, size 0x80, virtual false, abstract: false, final false
  inline float_t get_shadowNearPlane();

  /// @brief Method get_shadowNearPlane_Injected, addr 0x6871a00, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_shadowNearPlane_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_shadowNormalBias, addr 0x68718c4, size 0x80, virtual false, abstract: false, final false
  inline float_t get_shadowNormalBias();

  /// @brief Method get_shadowNormalBias_Injected, addr 0x6871944, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_shadowNormalBias_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_shadowResolution, addr 0x6871ef8, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::LightShadowResolution get_shadowResolution();

  /// @brief Method get_shadowResolution_Injected, addr 0x6871f78, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::LightShadowResolution get_shadowResolution_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_shadowStrength, addr 0x6871e3c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_shadowStrength();

  /// @brief Method get_shadowStrength_Injected, addr 0x6871ebc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_shadowStrength_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_shadows, addr 0x6871d80, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::LightShadows get_shadows();

  /// @brief Method get_shadows_Injected, addr 0x6871e00, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::LightShadows get_shadows_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_spotAngle, addr 0x6870f90, size 0x80, virtual false, abstract: false, final false
  inline float_t get_spotAngle();

  /// @brief Method get_spotAngle_Injected, addr 0x6871010, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_spotAngle_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_type, addr 0x6870ed4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::LightType get_type();

  /// @brief Method get_type_Injected, addr 0x6870f54, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::LightType get_type_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useColorTemperature, addr 0x6871380, size 0x80, virtual false, abstract: false, final false
  inline bool get_useColorTemperature();

  /// @brief Method get_useColorTemperature_Injected, addr 0x6871400, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useColorTemperature_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_color, addr 0x68711e8, size 0x98, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_color_Injected, addr 0x6871280, size 0x44, virtual false, abstract: false, final false
  static inline void set_color_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Color> value);

  /// @brief Method set_intensity, addr 0x68714f8, size 0x90, virtual false, abstract: false, final false
  inline void set_intensity(float_t value);

  /// @brief Method set_intensity_Injected, addr 0x6871588, size 0x4c, virtual false, abstract: false, final false
  static inline void set_intensity_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_renderingLayerMask, addr 0x6871cac, size 0x90, virtual false, abstract: false, final false
  inline void set_renderingLayerMask(int32_t value);

  /// @brief Method set_renderingLayerMask_Injected, addr 0x6871d3c, size 0x44, virtual false, abstract: false, final false
  static inline void set_renderingLayerMask_Injected(::System::IntPtr _unity_self, int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Light();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Light", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Light(Light&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Light", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Light(Light const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10142 };

  /// @brief Field <shape>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::LightShape ____shape_k__BackingField;

  /// @brief Field m_BakedIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_BakedIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Light, ____shape_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Light, ___m_BakedIndex) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Light, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Light);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Light*, "UnityEngine", "Light");
