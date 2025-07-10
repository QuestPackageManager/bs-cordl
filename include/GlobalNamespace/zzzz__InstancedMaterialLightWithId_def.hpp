#pragma once
// IWYU pragma private; include "GlobalNamespace/InstancedMaterialLightWithId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InstancedMaterialLightWithId)
namespace GlobalNamespace {
class MaterialPropertyBlockColorSetter;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class InstancedMaterialLightWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::InstancedMaterialLightWithId);
// Dependencies LightWithIdMonoBehaviour, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: InstancedMaterialLightWithId
class CORDL_TYPE InstancedMaterialLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
  // Declarations
  /// @brief Field _color, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _hdr, offset 0x4d, size 0x1
  __declspec(property(get = __cordl_internal_get__hdr, put = __cordl_internal_set__hdr)) bool _hdr;

  /// @brief Field _intensity, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__intensity, put = __cordl_internal_set__intensity)) float_t _intensity;

  /// @brief Field _materialPropertyBlockColorSetter, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockColorSetter,
                      put = __cordl_internal_set__materialPropertyBlockColorSetter)) ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter>
      _materialPropertyBlockColorSetter;

  /// @brief Field _minAlpha, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__minAlpha, put = __cordl_internal_set__minAlpha)) float_t _minAlpha;

  /// @brief Field _originalColor, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__originalColor, put = __cordl_internal_set__originalColor)) ::UnityEngine::Color _originalColor;

  /// @brief Field _saturateIntensity, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get__saturateIntensity, put = __cordl_internal_set__saturateIntensity)) bool _saturateIntensity;

  /// @brief Field _setColorOnly, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__setColorOnly, put = __cordl_internal_set__setColorOnly)) bool _setColorOnly;

  /// @brief Field _startColorWasSet, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__startColorWasSet, put = __cordl_internal_set__startColorWasSet)) bool _startColorWasSet;

  __declspec(property(get = get_intensity, put = set_intensity)) float_t intensity;

  /// @brief Method AddNecessaryComponents, addr 0x39e15f4, size 0x104, virtual false, abstract: false, final false
  inline void AddNecessaryComponents();

  /// @brief Method ColorWasSet, addr 0x39e154c, size 0xa8, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color newColor);

  static inline ::GlobalNamespace::InstancedMaterialLightWithId* New_ctor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr bool const& __cordl_internal_get__hdr() const;

  constexpr bool& __cordl_internal_get__hdr();

  constexpr float_t const& __cordl_internal_get__intensity() const;

  constexpr float_t& __cordl_internal_get__intensity();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> const& __cordl_internal_get__materialPropertyBlockColorSetter() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter>& __cordl_internal_get__materialPropertyBlockColorSetter();

  constexpr float_t const& __cordl_internal_get__minAlpha() const;

  constexpr float_t& __cordl_internal_get__minAlpha();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__originalColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__originalColor();

  constexpr bool const& __cordl_internal_get__saturateIntensity() const;

  constexpr bool& __cordl_internal_get__saturateIntensity();

  constexpr bool const& __cordl_internal_get__setColorOnly() const;

  constexpr bool& __cordl_internal_get__setColorOnly();

  constexpr bool const& __cordl_internal_get__startColorWasSet() const;

  constexpr bool& __cordl_internal_get__startColorWasSet();

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__hdr(bool value);

  constexpr void __cordl_internal_set__intensity(float_t value);

  constexpr void __cordl_internal_set__materialPropertyBlockColorSetter(::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> value);

  constexpr void __cordl_internal_set__minAlpha(float_t value);

  constexpr void __cordl_internal_set__originalColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__saturateIntensity(bool value);

  constexpr void __cordl_internal_set__setColorOnly(bool value);

  constexpr void __cordl_internal_set__startColorWasSet(bool value);

  /// @brief Method .ctor, addr 0x39e16f8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_intensity, addr 0x39e152c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_intensity();

  /// @brief Method set_intensity, addr 0x39e1534, size 0x18, virtual false, abstract: false, final false
  inline void set_intensity(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstancedMaterialLightWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstancedMaterialLightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstancedMaterialLightWithId(InstancedMaterialLightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstancedMaterialLightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstancedMaterialLightWithId(InstancedMaterialLightWithId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16321 };

  /// @brief Field _materialPropertyBlockColorSetter, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> ____materialPropertyBlockColorSetter;

  /// @brief Field _setColorOnly, offset: 0x40, size: 0x1, def value: None
  bool ____setColorOnly;

  /// @brief Field _intensity, offset: 0x44, size: 0x4, def value: None
  float_t ____intensity;

  /// @brief Field _minAlpha, offset: 0x48, size: 0x4, def value: None
  float_t ____minAlpha;

  /// @brief Field _saturateIntensity, offset: 0x4c, size: 0x1, def value: None
  bool ____saturateIntensity;

  /// @brief Field _hdr, offset: 0x4d, size: 0x1, def value: None
  bool ____hdr;

  /// @brief Field _originalColor, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ____originalColor;

  /// @brief Field _color, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _startColorWasSet, offset: 0x70, size: 0x1, def value: None
  bool ____startColorWasSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InstancedMaterialLightWithId, ____materialPropertyBlockColorSetter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstancedMaterialLightWithId, ____setColorOnly) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstancedMaterialLightWithId, ____intensity) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstancedMaterialLightWithId, ____minAlpha) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstancedMaterialLightWithId, ____saturateIntensity) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstancedMaterialLightWithId, ____hdr) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstancedMaterialLightWithId, ____originalColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstancedMaterialLightWithId, ____color) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InstancedMaterialLightWithId, ____startColorWasSet) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InstancedMaterialLightWithId, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::InstancedMaterialLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InstancedMaterialLightWithId*, "", "InstancedMaterialLightWithId");
