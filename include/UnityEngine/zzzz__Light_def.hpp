#pragma once
// IWYU pragma private; include "UnityEngine/Light.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Light)
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
// Forward declare root types
namespace UnityEngine {
class Light;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Light);
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Light
class CORDL_TYPE Light : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_bakingOutput)) ::UnityEngine::LightBakingOutput bakingOutput;

  __declspec(property(get = get_bounceIntensity)) float_t bounceIntensity;

  __declspec(property(get = get_color, put = set_color)) ::UnityEngine::Color color;

  __declspec(property(get = get_colorTemperature)) float_t colorTemperature;

  __declspec(property(get = get_cookie)) ::UnityW<::UnityEngine::Texture> cookie;

  __declspec(property(get = get_cookieSize)) float_t cookieSize;

  __declspec(property(get = get_intensity, put = set_intensity)) float_t intensity;

  /// @brief Field m_BakedIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BakedIndex, put = __cordl_internal_set_m_BakedIndex)) int32_t m_BakedIndex;

  __declspec(property(get = get_range)) float_t range;

  __declspec(property(get = get_shadows)) ::UnityEngine::LightShadows shadows;

  __declspec(property(get = get_spotAngle)) float_t spotAngle;

  __declspec(property(get = get_type)) ::UnityEngine::LightType type;

  __declspec(property(get = get_useColorTemperature)) bool useColorTemperature;

  static inline ::UnityEngine::Light* New_ctor();

  constexpr int32_t const& __cordl_internal_get_m_BakedIndex() const;

  constexpr int32_t& __cordl_internal_get_m_BakedIndex();

  constexpr void __cordl_internal_set_m_BakedIndex(int32_t value);

  /// @brief Method .ctor, addr 0x4886b40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bakingOutput, addr 0x48869e0, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::LightBakingOutput get_bakingOutput();

  /// @brief Method get_bakingOutput_Injected, addr 0x4886a48, size 0x44, virtual false, abstract: false, final false
  inline void get_bakingOutput_Injected(::ByRef<::UnityEngine::LightBakingOutput> ret);

  /// @brief Method get_bounceIntensity, addr 0x4886968, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_bounceIntensity();

  /// @brief Method get_color, addr 0x4886734, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_colorTemperature, addr 0x4886868, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_colorTemperature();

  /// @brief Method get_color_Injected, addr 0x488678c, size 0x44, virtual false, abstract: false, final false
  inline void get_color_Injected(::ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_cookie, addr 0x4886b04, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_cookie();

  /// @brief Method get_cookieSize, addr 0x4886ac8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_cookieSize();

  /// @brief Method get_intensity, addr 0x48868e0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method get_range, addr 0x48869a4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_range();

  /// @brief Method get_shadows, addr 0x4886a8c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::LightShadows get_shadows();

  /// @brief Method get_spotAngle, addr 0x48866f8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_spotAngle();

  /// @brief Method get_type, addr 0x48866bc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::LightType get_type();

  /// @brief Method get_useColorTemperature, addr 0x48868a4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useColorTemperature();

  /// @brief Method set_color, addr 0x48867d0, size 0x54, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_color_Injected, addr 0x4886824, size 0x44, virtual false, abstract: false, final false
  inline void set_color_Injected(::ByRef<::UnityEngine::Color> value);

  /// @brief Method set_intensity, addr 0x488691c, size 0x4c, virtual false, abstract: false, final false
  inline void set_intensity(float_t value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10744 };

  /// @brief Field m_BakedIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_BakedIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Light, ___m_BakedIndex) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Light, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Light);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Light*, "UnityEngine", "Light");
