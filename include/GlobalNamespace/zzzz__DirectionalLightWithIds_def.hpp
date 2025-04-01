#pragma once
// IWYU pragma private; include "GlobalNamespace/DirectionalLightWithIds.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(DirectionalLightWithIds)
namespace GlobalNamespace {
class DirectionalLight;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class DirectionalLightWithIds;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DirectionalLightWithIds);
// Dependencies RuntimeLightWithIds, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: DirectionalLightWithIds
class CORDL_TYPE DirectionalLightWithIds : public ::GlobalNamespace::RuntimeLightWithIds {
public:
  // Declarations
  /// @brief Field _defaultColor, offset 0x5c, size 0x10
  __declspec(property(get = __cordl_internal_get__defaultColor, put = __cordl_internal_set__defaultColor)) ::UnityEngine::Color _defaultColor;

  /// @brief Field _directionalLight, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__directionalLight, put = __cordl_internal_set__directionalLight)) ::UnityW<::GlobalNamespace::DirectionalLight> _directionalLight;

  /// @brief Field _setIntensityOnly, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__setIntensityOnly, put = __cordl_internal_set__setIntensityOnly)) bool _setIntensityOnly;

  /// @brief Method ColorWasSet, addr 0x39dc5bc, size 0x44, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::DirectionalLightWithIds* New_ctor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__defaultColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__defaultColor();

  constexpr ::UnityW<::GlobalNamespace::DirectionalLight> const& __cordl_internal_get__directionalLight() const;

  constexpr ::UnityW<::GlobalNamespace::DirectionalLight>& __cordl_internal_get__directionalLight();

  constexpr bool const& __cordl_internal_get__setIntensityOnly() const;

  constexpr bool& __cordl_internal_get__setIntensityOnly();

  constexpr void __cordl_internal_set__defaultColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__directionalLight(::UnityW<::GlobalNamespace::DirectionalLight> value);

  constexpr void __cordl_internal_set__setIntensityOnly(bool value);

  /// @brief Method .ctor, addr 0x39dc600, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DirectionalLightWithIds();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DirectionalLightWithIds(DirectionalLightWithIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DirectionalLightWithIds(DirectionalLightWithIds const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16310 };

  /// @brief Field _directionalLight, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DirectionalLight> ____directionalLight;

  /// @brief Field _setIntensityOnly, offset: 0x58, size: 0x1, def value: None
  bool ____setIntensityOnly;

  /// @brief Field _defaultColor, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::Color ____defaultColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DirectionalLightWithIds, ____directionalLight) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DirectionalLightWithIds, ____setIntensityOnly) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DirectionalLightWithIds, ____defaultColor) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DirectionalLightWithIds, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DirectionalLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DirectionalLightWithIds*, "", "DirectionalLightWithIds");
