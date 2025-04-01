#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialLightWithIds.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialLightWithIds)
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
class MaterialLightWithIds;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialLightWithIds);
// Dependencies RuntimeLightWithIds, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialLightWithIds
class CORDL_TYPE MaterialLightWithIds : public ::GlobalNamespace::RuntimeLightWithIds {
public:
  // Declarations
  /// @brief Field _alpha, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__alpha, put = __cordl_internal_set__alpha)) float_t _alpha;

  /// @brief Field _alphaIntoColor, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get__alphaIntoColor, put = __cordl_internal_set__alphaIntoColor)) bool _alphaIntoColor;

  /// @brief Field _color, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _colorProperty, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__colorProperty, put = __cordl_internal_set__colorProperty)) ::StringW _colorProperty;

  /// @brief Field _materialPropertyBlock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__materialPropertyBlock, put = setStaticF__materialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

  /// @brief Field _meshRenderer, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__meshRenderer, put = __cordl_internal_set__meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer> _meshRenderer;

  /// @brief Field _propertyId, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get__propertyId, put = __cordl_internal_set__propertyId)) int32_t _propertyId;

  /// @brief Field _setAlphaOnly, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__setAlphaOnly, put = __cordl_internal_set__setAlphaOnly)) bool _setAlphaOnly;

  /// @brief Field _setColorOnly, offset 0x5a, size 0x1
  __declspec(property(get = __cordl_internal_get__setColorOnly, put = __cordl_internal_set__setColorOnly)) bool _setColorOnly;

  /// @brief Method Awake, addr 0x39defec, size 0x84, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method ColorWasSet, addr 0x39df070, size 0x130, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::MaterialLightWithIds* New_ctor();

  constexpr float_t const& __cordl_internal_get__alpha() const;

  constexpr float_t& __cordl_internal_get__alpha();

  constexpr bool const& __cordl_internal_get__alphaIntoColor() const;

  constexpr bool& __cordl_internal_get__alphaIntoColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr ::StringW const& __cordl_internal_get__colorProperty() const;

  constexpr ::StringW& __cordl_internal_get__colorProperty();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__meshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__meshRenderer();

  constexpr int32_t const& __cordl_internal_get__propertyId() const;

  constexpr int32_t& __cordl_internal_get__propertyId();

  constexpr bool const& __cordl_internal_get__setAlphaOnly() const;

  constexpr bool& __cordl_internal_get__setAlphaOnly();

  constexpr bool const& __cordl_internal_get__setColorOnly() const;

  constexpr bool& __cordl_internal_get__setColorOnly();

  constexpr void __cordl_internal_set__alpha(float_t value);

  constexpr void __cordl_internal_set__alphaIntoColor(bool value);

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__colorProperty(::StringW value);

  constexpr void __cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set__propertyId(int32_t value);

  constexpr void __cordl_internal_set__setAlphaOnly(bool value);

  constexpr void __cordl_internal_set__setColorOnly(bool value);

  /// @brief Method .ctor, addr 0x39df1a0, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF__materialPropertyBlock();

  static inline void setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialLightWithIds();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialLightWithIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialLightWithIds(MaterialLightWithIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialLightWithIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialLightWithIds(MaterialLightWithIds const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16334 };

  /// @brief Field _meshRenderer, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ____meshRenderer;

  /// @brief Field _setAlphaOnly, offset: 0x58, size: 0x1, def value: None
  bool ____setAlphaOnly;

  /// @brief Field _alphaIntoColor, offset: 0x59, size: 0x1, def value: None
  bool ____alphaIntoColor;

  /// @brief Field _setColorOnly, offset: 0x5a, size: 0x1, def value: None
  bool ____setColorOnly;

  /// @brief Field _colorProperty, offset: 0x60, size: 0x8, def value: None
  ::StringW ____colorProperty;

  /// @brief Field _color, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _alpha, offset: 0x78, size: 0x4, def value: None
  float_t ____alpha;

  /// @brief Field _propertyId, offset: 0x7c, size: 0x4, def value: None
  int32_t ____propertyId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialLightWithIds, ____meshRenderer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithIds, ____setAlphaOnly) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithIds, ____alphaIntoColor) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithIds, ____setColorOnly) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithIds, ____colorProperty) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithIds, ____color) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithIds, ____alpha) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithIds, ____propertyId) == 0x7c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialLightWithIds, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialLightWithIds*, "", "MaterialLightWithIds");
