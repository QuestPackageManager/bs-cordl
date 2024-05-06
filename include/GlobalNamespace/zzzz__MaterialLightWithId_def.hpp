#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialLightWithId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialLightWithId)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialLightWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialLightWithId);
// Type: ::MaterialLightWithId
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MaterialLightWithId*
class CORDL_TYPE MaterialLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  /// @brief Field _alpha, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__alpha, put = __cordl_internal_set__alpha)) float_t _alpha;

  /// @brief Field _alphaIntensity, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__alphaIntensity, put = __cordl_internal_set__alphaIntensity)) float_t _alphaIntensity;

  /// @brief Field _alphaIntoColor, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__alphaIntoColor, put = __cordl_internal_set__alphaIntoColor)) bool _alphaIntoColor;

  /// @brief Field _color, offset 0x54, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color))::UnityEngine::Color _color;

  /// @brief Field _colorMultiplier, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__colorMultiplier, put = __cordl_internal_set__colorMultiplier)) float_t _colorMultiplier;

  /// @brief Field _colorProperty, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__colorProperty, put = __cordl_internal_set__colorProperty))::StringW _colorProperty;

  /// @brief Field _materialPropertyBlock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__materialPropertyBlock, put = setStaticF__materialPropertyBlock))::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  /// @brief Field _meshRenderer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__meshRenderer, put = __cordl_internal_set__meshRenderer))::UnityW<::UnityEngine::MeshRenderer> _meshRenderer;

  /// @brief Field _multiplyColor, offset 0x4d, size 0x1
  __declspec(property(get = __cordl_internal_get__multiplyColor, put = __cordl_internal_set__multiplyColor)) bool _multiplyColor;

  /// @brief Field _multiplyColorWithAlpha, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get__multiplyColorWithAlpha, put = __cordl_internal_set__multiplyColorWithAlpha)) bool _multiplyColorWithAlpha;

  /// @brief Field _propertyId, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__propertyId, put = __cordl_internal_set__propertyId)) int32_t _propertyId;

  /// @brief Field _setAlphaOnly, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__setAlphaOnly, put = __cordl_internal_set__setAlphaOnly)) bool _setAlphaOnly;

  /// @brief Field _setColorOnly, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get__setColorOnly, put = __cordl_internal_set__setColorOnly)) bool _setColorOnly;

  __declspec(property(get = get_color))::UnityEngine::Color color;

  /// @brief Method Awake, addr 0x24f4764, size 0x80, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ColorWasSet, addr 0x24f47e4, size 0x188, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::MaterialLightWithId* New_ctor();

  constexpr float_t const& __cordl_internal_get__alpha() const;

  constexpr float_t& __cordl_internal_get__alpha();

  constexpr float_t const& __cordl_internal_get__alphaIntensity() const;

  constexpr float_t& __cordl_internal_get__alphaIntensity();

  constexpr bool const& __cordl_internal_get__alphaIntoColor() const;

  constexpr bool& __cordl_internal_get__alphaIntoColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr float_t const& __cordl_internal_get__colorMultiplier() const;

  constexpr float_t& __cordl_internal_get__colorMultiplier();

  constexpr ::StringW const& __cordl_internal_get__colorProperty() const;

  constexpr ::StringW& __cordl_internal_get__colorProperty();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__meshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__meshRenderer();

  constexpr bool const& __cordl_internal_get__multiplyColor() const;

  constexpr bool& __cordl_internal_get__multiplyColor();

  constexpr bool const& __cordl_internal_get__multiplyColorWithAlpha() const;

  constexpr bool& __cordl_internal_get__multiplyColorWithAlpha();

  constexpr int32_t const& __cordl_internal_get__propertyId() const;

  constexpr int32_t& __cordl_internal_get__propertyId();

  constexpr bool const& __cordl_internal_get__setAlphaOnly() const;

  constexpr bool& __cordl_internal_get__setAlphaOnly();

  constexpr bool const& __cordl_internal_get__setColorOnly() const;

  constexpr bool& __cordl_internal_get__setColorOnly();

  constexpr void __cordl_internal_set__alpha(float_t value);

  constexpr void __cordl_internal_set__alphaIntensity(float_t value);

  constexpr void __cordl_internal_set__alphaIntoColor(bool value);

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__colorMultiplier(float_t value);

  constexpr void __cordl_internal_set__colorProperty(::StringW value);

  constexpr void __cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set__multiplyColor(bool value);

  constexpr void __cordl_internal_set__multiplyColorWithAlpha(bool value);

  constexpr void __cordl_internal_set__propertyId(int32_t value);

  constexpr void __cordl_internal_set__setAlphaOnly(bool value);

  constexpr void __cordl_internal_set__setColorOnly(bool value);

  /// @brief Method .ctor, addr 0x24f496c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock();

  /// @brief Method get_color, addr 0x24f4758, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialLightWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialLightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialLightWithId(MaterialLightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialLightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialLightWithId(MaterialLightWithId const&) = delete;

  /// @brief Field _meshRenderer, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ____meshRenderer;

  /// @brief Field _setAlphaOnly, offset: 0x38, size: 0x1, def value: None
  bool ____setAlphaOnly;

  /// @brief Field _alphaIntoColor, offset: 0x39, size: 0x1, def value: None
  bool ____alphaIntoColor;

  /// @brief Field _setColorOnly, offset: 0x3a, size: 0x1, def value: None
  bool ____setColorOnly;

  /// @brief Field _colorProperty, offset: 0x40, size: 0x8, def value: None
  ::StringW ____colorProperty;

  /// @brief Field _alphaIntensity, offset: 0x48, size: 0x4, def value: None
  float_t ____alphaIntensity;

  /// @brief Field _multiplyColorWithAlpha, offset: 0x4c, size: 0x1, def value: None
  bool ____multiplyColorWithAlpha;

  /// @brief Field _multiplyColor, offset: 0x4d, size: 0x1, def value: None
  bool ____multiplyColor;

  /// @brief Field _colorMultiplier, offset: 0x50, size: 0x4, def value: None
  float_t ____colorMultiplier;

  /// @brief Field _color, offset: 0x54, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _alpha, offset: 0x64, size: 0x4, def value: None
  float_t ____alpha;

  /// @brief Field _propertyId, offset: 0x68, size: 0x4, def value: None
  int32_t ____propertyId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialLightWithId, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithId, ____meshRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithId, ____setAlphaOnly) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithId, ____alphaIntoColor) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithId, ____setColorOnly) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithId, ____colorProperty) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithId, ____alphaIntensity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithId, ____multiplyColorWithAlpha) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithId, ____multiplyColor) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithId, ____colorMultiplier) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithId, ____color) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithId, ____alpha) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithId, ____propertyId) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialLightWithId*, "", "MaterialLightWithId");
