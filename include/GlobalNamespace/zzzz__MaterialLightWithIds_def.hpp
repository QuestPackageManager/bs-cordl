#pragma once
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
class MeshRenderer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialLightWithIds;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialLightWithIds);
// Type: ::MaterialLightWithIds
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14552)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14546))
// CS Name: ::MaterialLightWithIds*
class CORDL_TYPE MaterialLightWithIds : public ::GlobalNamespace::RuntimeLightWithIds {
public:
  // Declarations
  /// @brief Field _meshRenderer, offset 0x48, size 0x8
  __declspec(property(get = __get__meshRenderer, put = __set__meshRenderer))::UnityEngine::MeshRenderer* _meshRenderer;

  /// @brief Field _setAlphaOnly, offset 0x50, size 0x1
  __declspec(property(get = __get__setAlphaOnly, put = __set__setAlphaOnly)) bool _setAlphaOnly;

  /// @brief Field _alphaIntoColor, offset 0x51, size 0x1
  __declspec(property(get = __get__alphaIntoColor, put = __set__alphaIntoColor)) bool _alphaIntoColor;

  /// @brief Field _setColorOnly, offset 0x52, size 0x1
  __declspec(property(get = __get__setColorOnly, put = __set__setColorOnly)) bool _setColorOnly;

  /// @brief Field _colorProperty, offset 0x58, size 0x8
  __declspec(property(get = __get__colorProperty, put = __set__colorProperty))::StringW _colorProperty;

  /// @brief Field _color, offset 0x60, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  /// @brief Field _alpha, offset 0x70, size 0x4
  __declspec(property(get = __get__alpha, put = __set__alpha)) float_t _alpha;

  /// @brief Field _propertyId, offset 0x74, size 0x4
  __declspec(property(get = __get__propertyId, put = __set__propertyId)) int32_t _propertyId;

  /// @brief Field _materialPropertyBlock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__materialPropertyBlock, put = setStaticF__materialPropertyBlock))::UnityEngine::MaterialPropertyBlock* _materialPropertyBlock;

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

  /// @brief Method Awake, addr 0x2111c50, size 0x84, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method ColorWasSet, addr 0x2111cd4, size 0x140, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::MaterialLightWithIds* New_ctor();

  /// @brief Method .ctor, addr 0x2111e14, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MaterialLightWithIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialLightWithIds(MaterialLightWithIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialLightWithIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialLightWithIds(MaterialLightWithIds const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialLightWithIds();

public:
  /// @brief Field _meshRenderer, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::MeshRenderer* ____meshRenderer;

  /// @brief Field _setAlphaOnly, offset: 0x50, size: 0x1, def value: None
  bool ____setAlphaOnly;

  /// @brief Field _alphaIntoColor, offset: 0x51, size: 0x1, def value: None
  bool ____alphaIntoColor;

  /// @brief Field _setColorOnly, offset: 0x52, size: 0x1, def value: None
  bool ____setColorOnly;

  /// @brief Field _colorProperty, offset: 0x58, size: 0x8, def value: None
  ::StringW ____colorProperty;

  /// @brief Field _color, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _alpha, offset: 0x70, size: 0x4, def value: None
  float_t ____alpha;

  /// @brief Field _propertyId, offset: 0x74, size: 0x4, def value: None
  int32_t ____propertyId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialLightWithIds, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithIds, ____meshRenderer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithIds, ____setAlphaOnly) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithIds, ____alphaIntoColor) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithIds, ____setColorOnly) == 0x52, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithIds, ____colorProperty) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithIds, ____color) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithIds, ____alpha) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialLightWithIds, ____propertyId) == 0x74, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialLightWithIds*, "", "MaterialLightWithIds");
