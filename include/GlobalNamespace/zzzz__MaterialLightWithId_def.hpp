#pragma once
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
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Color;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(14542))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14545))
// CS Name: ::MaterialLightWithId*
class CORDL_TYPE MaterialLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  /// @brief Field _meshRenderer, offset 0x30, size 0x8
  __declspec(property(get = __get__meshRenderer, put = __set__meshRenderer))::UnityEngine::MeshRenderer* _meshRenderer;

  /// @brief Field _setAlphaOnly, offset 0x38, size 0x1
  __declspec(property(get = __get__setAlphaOnly, put = __set__setAlphaOnly)) bool _setAlphaOnly;

  /// @brief Field _alphaIntoColor, offset 0x39, size 0x1
  __declspec(property(get = __get__alphaIntoColor, put = __set__alphaIntoColor)) bool _alphaIntoColor;

  /// @brief Field _setColorOnly, offset 0x3a, size 0x1
  __declspec(property(get = __get__setColorOnly, put = __set__setColorOnly)) bool _setColorOnly;

  /// @brief Field _colorProperty, offset 0x40, size 0x8
  __declspec(property(get = __get__colorProperty, put = __set__colorProperty))::StringW _colorProperty;

  /// @brief Field _alphaIntensity, offset 0x48, size 0x4
  __declspec(property(get = __get__alphaIntensity, put = __set__alphaIntensity)) float_t _alphaIntensity;

  /// @brief Field _multiplyColorWithAlpha, offset 0x4c, size 0x1
  __declspec(property(get = __get__multiplyColorWithAlpha, put = __set__multiplyColorWithAlpha)) bool _multiplyColorWithAlpha;

  /// @brief Field _multiplyColor, offset 0x4d, size 0x1
  __declspec(property(get = __get__multiplyColor, put = __set__multiplyColor)) bool _multiplyColor;

  /// @brief Field _colorMultiplier, offset 0x50, size 0x4
  __declspec(property(get = __get__colorMultiplier, put = __set__colorMultiplier)) float_t _colorMultiplier;

  /// @brief Field _color, offset 0x54, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  /// @brief Field _alpha, offset 0x64, size 0x4
  __declspec(property(get = __get__alpha, put = __set__alpha)) float_t _alpha;

  /// @brief Field _propertyId, offset 0x68, size 0x4
  __declspec(property(get = __get__propertyId, put = __set__propertyId)) int32_t _propertyId;

  /// @brief Field _materialPropertyBlock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__materialPropertyBlock, put = setStaticF__materialPropertyBlock))::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  __declspec(property(get = get_color))::UnityEngine::Color color;

  constexpr ::UnityEngine::MeshRenderer*& __get__meshRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& __get__meshRenderer() const;

  constexpr void __set__meshRenderer(::UnityEngine::MeshRenderer* value);

  constexpr bool& __get__setAlphaOnly();

  constexpr bool const& __get__setAlphaOnly() const;

  constexpr void __set__setAlphaOnly(bool value);

  constexpr bool& __get__alphaIntoColor();

  constexpr bool const& __get__alphaIntoColor() const;

  constexpr void __set__alphaIntoColor(bool value);

  constexpr bool& __get__setColorOnly();

  constexpr bool const& __get__setColorOnly() const;

  constexpr void __set__setColorOnly(bool value);

  constexpr ::StringW& __get__colorProperty();

  constexpr ::StringW const& __get__colorProperty() const;

  constexpr void __set__colorProperty(::StringW value);

  constexpr float_t& __get__alphaIntensity();

  constexpr float_t const& __get__alphaIntensity() const;

  constexpr void __set__alphaIntensity(float_t value);

  constexpr bool& __get__multiplyColorWithAlpha();

  constexpr bool const& __get__multiplyColorWithAlpha() const;

  constexpr void __set__multiplyColorWithAlpha(bool value);

  constexpr bool& __get__multiplyColor();

  constexpr bool const& __get__multiplyColor() const;

  constexpr void __set__multiplyColor(bool value);

  constexpr float_t& __get__colorMultiplier();

  constexpr float_t const& __get__colorMultiplier() const;

  constexpr void __set__colorMultiplier(float_t value);

  constexpr ::UnityEngine::Color& __get__color();

  constexpr ::UnityEngine::Color const& __get__color() const;

  constexpr void __set__color(::UnityEngine::Color value);

  constexpr float_t& __get__alpha();

  constexpr float_t const& __get__alpha() const;

  constexpr void __set__alpha(float_t value);

  constexpr int32_t& __get__propertyId();

  constexpr int32_t const& __get__propertyId() const;

  constexpr void __set__propertyId(int32_t value);

  static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock();

  /// @brief Method get_color, addr 0x21119d8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method Awake, addr 0x21119e4, size 0x80, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ColorWasSet, addr 0x2111a64, size 0x188, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::MaterialLightWithId* New_ctor();

  /// @brief Method .ctor, addr 0x2111bec, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MaterialLightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialLightWithId(MaterialLightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialLightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialLightWithId(MaterialLightWithId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialLightWithId();

public:
  /// @brief Field _meshRenderer, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::MeshRenderer* ____meshRenderer;

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
