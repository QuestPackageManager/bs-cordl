#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Light)
namespace UnityEngine {
struct LightBakingOutput;
}
namespace UnityEngine {
struct LightType;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct LightShadows;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine {
class Light;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Light);
// Type: UnityEngine::Light
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10115))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9991))
// CS Name: ::UnityEngine::Light*
class CORDL_TYPE Light : public ::UnityEngine::Behaviour {
public:
  // Declarations
  /// @brief Field m_BakedIndex, offset 0x18, size 0x4
  __declspec(property(get = __get_m_BakedIndex, put = __set_m_BakedIndex)) int32_t m_BakedIndex;

  __declspec(property(get = get_shadows))::UnityEngine::LightShadows shadows;

  __declspec(property(get = get_cookieSize)) float_t cookieSize;

  __declspec(property(get = get_cookie))::UnityEngine::Texture* cookie;

  __declspec(property(get = get_type))::UnityEngine::LightType type;

  __declspec(property(get = get_spotAngle)) float_t spotAngle;

  __declspec(property(get = get_color, put = set_color))::UnityEngine::Color color;

  __declspec(property(get = get_colorTemperature)) float_t colorTemperature;

  __declspec(property(get = get_useColorTemperature)) bool useColorTemperature;

  __declspec(property(get = get_intensity, put = set_intensity)) float_t intensity;

  __declspec(property(get = get_bounceIntensity)) float_t bounceIntensity;

  __declspec(property(get = get_range)) float_t range;

  __declspec(property(get = get_bakingOutput))::UnityEngine::LightBakingOutput bakingOutput;

  constexpr int32_t& __get_m_BakedIndex();

  constexpr int32_t const& __get_m_BakedIndex() const;

  constexpr void __set_m_BakedIndex(int32_t value);

  /// @brief Method get_shadows addr 0x2b3d914 size 0x3c virtual false final false
  inline ::UnityEngine::LightShadows get_shadows();

  /// @brief Method get_cookieSize addr 0x2b3d950 size 0x3c virtual false final false
  inline float_t get_cookieSize();

  /// @brief Method get_cookie addr 0x2b3d98c size 0x3c virtual false final false
  inline ::UnityEngine::Texture* get_cookie();

  /// @brief Method get_type addr 0x2b3d9c8 size 0x3c virtual false final false
  inline ::UnityEngine::LightType get_type();

  /// @brief Method get_spotAngle addr 0x2b3da04 size 0x3c virtual false final false
  inline float_t get_spotAngle();

  /// @brief Method get_color addr 0x2b3da40 size 0x58 virtual false final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method set_color addr 0x2b3dadc size 0x54 virtual false final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method get_colorTemperature addr 0x2b3db74 size 0x3c virtual false final false
  inline float_t get_colorTemperature();

  /// @brief Method get_useColorTemperature addr 0x2b3dbb0 size 0x3c virtual false final false
  inline bool get_useColorTemperature();

  /// @brief Method get_intensity addr 0x2b3dbec size 0x3c virtual false final false
  inline float_t get_intensity();

  /// @brief Method set_intensity addr 0x2b3dc28 size 0x4c virtual false final false
  inline void set_intensity(float_t value);

  /// @brief Method get_bounceIntensity addr 0x2b3dc74 size 0x3c virtual false final false
  inline float_t get_bounceIntensity();

  /// @brief Method get_range addr 0x2b3dcb0 size 0x3c virtual false final false
  inline float_t get_range();

  /// @brief Method get_bakingOutput addr 0x2b3dcec size 0x68 virtual false final false
  inline ::UnityEngine::LightBakingOutput get_bakingOutput();

  /// @brief Method get_color_Injected addr 0x2b3da98 size 0x44 virtual false final false
  inline void get_color_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method set_color_Injected addr 0x2b3db30 size 0x44 virtual false final false
  inline void set_color_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method get_bakingOutput_Injected addr 0x2b3dd54 size 0x44 virtual false final false
  inline void get_bakingOutput_Injected(ByRef<::UnityEngine::LightBakingOutput> ret);

  // Ctor Parameters [CppParam { name: "", ty: "Light", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Light(Light&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Light", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Light(Light const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Light();

public:
  /// @brief Field m_BakedIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_BakedIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Light, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Light, ___m_BakedIndex) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Light);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Light*, "UnityEngine", "Light");
