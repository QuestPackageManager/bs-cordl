#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBackgroundColor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassBackgroundColor)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundColor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundColor);
// Dependencies BloomPrePassNonLightPass, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassBackgroundColor
class CORDL_TYPE BloomPrePassBackgroundColor : public ::GlobalNamespace::BloomPrePassNonLightPass {
public:
  // Declarations
  /// @brief Field _color, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _colorID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__colorID, put = setStaticF__colorID)) int32_t _colorID;

  /// @brief Field _grayscaleFactor, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__grayscaleFactor, put = __cordl_internal_set__grayscaleFactor)) float_t _grayscaleFactor;

  /// @brief Field _initialized, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__initialized, put = setStaticF__initialized)) bool _initialized;

  /// @brief Field _intensity, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__intensity, put = __cordl_internal_set__intensity)) float_t _intensity;

  /// @brief Field _material, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__material, put = setStaticF__material)) ::UnityW<::UnityEngine::Material> _material;

  /// @brief Field _minAlpha, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__minAlpha, put = __cordl_internal_set__minAlpha)) float_t _minAlpha;

  /// @brief Field _shader, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__shader, put = __cordl_internal_set__shader)) ::UnityW<::UnityEngine::Shader> _shader;

  __declspec(property(get = get_bgColor)) ::UnityEngine::Color bgColor;

  __declspec(property(get = get_color, put = set_color)) ::UnityEngine::Color color;

  /// @brief Method InitIfNeeded, addr 0x39d6db8, size 0x184, virtual false, abstract: false, final false
  inline void InitIfNeeded();

  static inline ::GlobalNamespace::BloomPrePassBackgroundColor* New_ctor();

  /// @brief Method Render, addr 0x39d6f3c, size 0xd4, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::RenderTexture* dest, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix);

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr float_t const& __cordl_internal_get__grayscaleFactor() const;

  constexpr float_t& __cordl_internal_get__grayscaleFactor();

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr float_t const& __cordl_internal_get__minAlpha() const;

  constexpr float_t& __cordl_internal_get__minAlpha();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__shader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__shader();

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__grayscaleFactor(float_t value);

  constexpr void __cordl_internal_set__intensity(float_t value);

  constexpr void __cordl_internal_set__minAlpha(float_t value);

  constexpr void __cordl_internal_set__shader(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x39d7010, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__colorID();

  static inline bool getStaticF__initialized();

  static inline ::UnityW<::UnityEngine::Material> getStaticF__material();

  /// @brief Method get_bgColor, addr 0x39d6d28, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_bgColor();

  /// @brief Method get_color, addr 0x39d6d10, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  static inline void setStaticF__colorID(int32_t value);

  static inline void setStaticF__initialized(bool value);

  static inline void setStaticF__material(::UnityW<::UnityEngine::Material> value);

  /// @brief Method set_color, addr 0x39d6d1c, size 0xc, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundColor(BloomPrePassBackgroundColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundColor(BloomPrePassBackgroundColor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16234 };

  /// @brief Field _intensity, offset: 0x28, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief Field _minAlpha, offset: 0x2c, size: 0x4, def value: None
  float_t ____minAlpha;

  /// @brief Field _grayscaleFactor, offset: 0x30, size: 0x4, def value: None
  float_t ____grayscaleFactor;

  /// @brief Field _shader, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____shader;

  /// @brief Field _color, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColor, ____intensity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColor, ____minAlpha) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColor, ____grayscaleFactor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColor, ____shader) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColor, ____color) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundColor, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColor*, "", "BloomPrePassBackgroundColor");
