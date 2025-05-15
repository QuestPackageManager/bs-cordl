#pragma once
// IWYU pragma private; include "GlobalNamespace/LightIdColorPair.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightIdColorPair)
namespace GlobalNamespace {
class ColorSO;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class LightIdColorPair;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightIdColorPair);
// Dependencies System.Object, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightIdColorPair
class CORDL_TYPE LightIdColorPair : public ::System::Object {
public:
  // Declarations
  /// @brief Field _useScriptableObjectColor, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get__useScriptableObjectColor, put = __cordl_internal_set__useScriptableObjectColor)) bool _useScriptableObjectColor;

  /// @brief Field baseColor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_baseColor, put = __cordl_internal_set_baseColor)) ::UnityW<::GlobalNamespace::ColorSO> baseColor;

  /// @brief Field color, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color)) ::UnityEngine::Color color;

  /// @brief Field intensity, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_intensity, put = __cordl_internal_set_intensity)) float_t intensity;

  __declspec(property(get = get_lightColor)) ::UnityEngine::Color lightColor;

  /// @brief Field lightId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_lightId, put = __cordl_internal_set_lightId)) int32_t lightId;

  __declspec(property(get = get_useScriptableObjectColor, put = set_useScriptableObjectColor)) bool useScriptableObjectColor;

  static inline ::GlobalNamespace::LightIdColorPair* New_ctor();

  constexpr bool const& __cordl_internal_get__useScriptableObjectColor() const;

  constexpr bool& __cordl_internal_get__useScriptableObjectColor();

  constexpr ::UnityW<::GlobalNamespace::ColorSO> const& __cordl_internal_get_baseColor() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSO>& __cordl_internal_get_baseColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr float_t const& __cordl_internal_get_intensity() const;

  constexpr float_t& __cordl_internal_get_intensity();

  constexpr int32_t const& __cordl_internal_get_lightId() const;

  constexpr int32_t& __cordl_internal_get_lightId();

  constexpr void __cordl_internal_set__useScriptableObjectColor(bool value);

  constexpr void __cordl_internal_set_baseColor(::UnityW<::GlobalNamespace::ColorSO> value);

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_intensity(float_t value);

  constexpr void __cordl_internal_set_lightId(int32_t value);

  /// @brief Method .ctor, addr 0x3c28cec, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_lightColor, addr 0x3c28c98, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_lightColor();

  /// @brief Method get_useScriptableObjectColor, addr 0x3c28cd8, size 0x8, virtual false, abstract: false, final false
  inline bool get_useScriptableObjectColor();

  /// @brief Method set_useScriptableObjectColor, addr 0x3c28ce0, size 0xc, virtual false, abstract: false, final false
  inline void set_useScriptableObjectColor(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightIdColorPair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightIdColorPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightIdColorPair(LightIdColorPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightIdColorPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightIdColorPair(LightIdColorPair const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19241 };

  /// @brief Field lightId, offset: 0x10, size: 0x4, def value: None
  int32_t ___lightId;

  /// @brief Field _useScriptableObjectColor, offset: 0x14, size: 0x1, def value: None
  bool ____useScriptableObjectColor;

  /// @brief Field color, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  /// @brief Field baseColor, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSO> ___baseColor;

  /// @brief Field intensity, offset: 0x30, size: 0x4, def value: None
  float_t ___intensity;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightIdColorPair, ___lightId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightIdColorPair, ____useScriptableObjectColor) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightIdColorPair, ___color) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightIdColorPair, ___baseColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightIdColorPair, ___intensity) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightIdColorPair, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightIdColorPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightIdColorPair*, "", "LightIdColorPair");
