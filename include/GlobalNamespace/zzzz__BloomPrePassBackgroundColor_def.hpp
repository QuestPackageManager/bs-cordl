#pragma once
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
// Type: ::BloomPrePassBackgroundColor
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(14478))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14456))
// CS Name: ::BloomPrePassBackgroundColor*
class CORDL_TYPE BloomPrePassBackgroundColor : public ::GlobalNamespace::BloomPrePassNonLightPass {
public:
  // Declarations
  /// @brief Field _intensity, offset 0x20, size 0x4
  __declspec(property(get = __get__intensity, put = __set__intensity)) float_t _intensity;

  /// @brief Field _minAlpha, offset 0x24, size 0x4
  __declspec(property(get = __get__minAlpha, put = __set__minAlpha)) float_t _minAlpha;

  /// @brief Field _grayscaleFactor, offset 0x28, size 0x4
  __declspec(property(get = __get__grayscaleFactor, put = __set__grayscaleFactor)) float_t _grayscaleFactor;

  /// @brief Field _shader, offset 0x30, size 0x8
  __declspec(property(get = __get__shader, put = __set__shader))::UnityEngine::Shader* _shader;

  /// @brief Field _color, offset 0x38, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  /// @brief Field _colorID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__colorID, put = setStaticF__colorID)) int32_t _colorID;

  /// @brief Field _material, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__material, put = setStaticF__material))::UnityEngine::Material* _material;

  /// @brief Field _initialized, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__initialized, put = setStaticF__initialized)) bool _initialized;

  __declspec(property(get = get_color, put = set_color))::UnityEngine::Color color;

  __declspec(property(get = get_bgColor))::UnityEngine::Color bgColor;

  constexpr float_t& __get__intensity();

  constexpr float_t const& __get__intensity() const;

  constexpr void __set__intensity(float_t value);

  constexpr float_t& __get__minAlpha();

  constexpr float_t const& __get__minAlpha() const;

  constexpr void __set__minAlpha(float_t value);

  constexpr float_t& __get__grayscaleFactor();

  constexpr float_t const& __get__grayscaleFactor() const;

  constexpr void __set__grayscaleFactor(float_t value);

  constexpr ::UnityEngine::Shader*& __get__shader();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& __get__shader() const;

  constexpr void __set__shader(::UnityEngine::Shader* value);

  constexpr ::UnityEngine::Color& __get__color();

  constexpr ::UnityEngine::Color const& __get__color() const;

  constexpr void __set__color(::UnityEngine::Color value);

  static inline void setStaticF__colorID(int32_t value);

  static inline int32_t getStaticF__colorID();

  static inline void setStaticF__material(::UnityEngine::Material* value);

  static inline ::UnityEngine::Material* getStaticF__material();

  static inline void setStaticF__initialized(bool value);

  static inline bool getStaticF__initialized();

  /// @brief Method get_color, addr 0x2103dc4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method set_color, addr 0x2103dd0, size 0xc, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method get_bgColor, addr 0x2103ddc, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_bgColor();

  /// @brief Method InitIfNeeded, addr 0x2103e6c, size 0x184, virtual false, abstract: false, final false
  inline void InitIfNeeded();

  /// @brief Method Render, addr 0x2103ff0, size 0xd4, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::RenderTexture* dest, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix);

  static inline ::GlobalNamespace::BloomPrePassBackgroundColor* New_ctor();

  /// @brief Method .ctor, addr 0x21040c4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundColor(BloomPrePassBackgroundColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundColor(BloomPrePassBackgroundColor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundColor();

public:
  /// @brief Field _intensity, offset: 0x20, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief Field _minAlpha, offset: 0x24, size: 0x4, def value: None
  float_t ____minAlpha;

  /// @brief Field _grayscaleFactor, offset: 0x28, size: 0x4, def value: None
  float_t ____grayscaleFactor;

  /// @brief Field _shader, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Shader* ____shader;

  /// @brief Field _color, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundColor, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColor, ____intensity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColor, ____minAlpha) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColor, ____grayscaleFactor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColor, ____shader) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundColor, ____color) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColor*, "", "BloomPrePassBackgroundColor");
