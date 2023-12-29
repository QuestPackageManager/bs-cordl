#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(DirectionalLightWithIds)
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class DirectionalLight;
}
// Forward declare root types
namespace GlobalNamespace {
class DirectionalLightWithIds;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DirectionalLightWithIds);
// Type: ::DirectionalLightWithIds
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 100, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14770)), TypeDefinitionIndex(TypeDefinitionIndex(10178))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14739))
// CS Name: ::DirectionalLightWithIds*
class CORDL_TYPE DirectionalLightWithIds : public ::GlobalNamespace::RuntimeLightWithIds {
public:
  // Declarations
  /// @brief Field _directionalLight, offset 0x48, size 0x8
  __declspec(property(get = __get__directionalLight, put = __set__directionalLight))::GlobalNamespace::DirectionalLight* _directionalLight;

  /// @brief Field _setIntensityOnly, offset 0x50, size 0x1
  __declspec(property(get = __get__setIntensityOnly, put = __set__setIntensityOnly)) bool _setIntensityOnly;

  /// @brief Field _defaultColor, offset 0x54, size 0x10
  __declspec(property(get = __get__defaultColor, put = __set__defaultColor))::UnityEngine::Color _defaultColor;

  constexpr ::GlobalNamespace::DirectionalLight*& __get__directionalLight();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DirectionalLight*> const& __get__directionalLight() const;

  constexpr void __set__directionalLight(::GlobalNamespace::DirectionalLight* value);

  constexpr bool& __get__setIntensityOnly();

  constexpr bool const& __get__setIntensityOnly() const;

  constexpr void __set__setIntensityOnly(bool value);

  constexpr ::UnityEngine::Color& __get__defaultColor();

  constexpr ::UnityEngine::Color const& __get__defaultColor() const;

  constexpr void __set__defaultColor(::UnityEngine::Color value);

  /// @brief Method ColorWasSet addr 0x1fb9ac0 size 0x44 virtual true final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::DirectionalLightWithIds* New_ctor();

  /// @brief Method .ctor addr 0x1fb9b04 size 0x24 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DirectionalLightWithIds(DirectionalLightWithIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DirectionalLightWithIds(DirectionalLightWithIds const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DirectionalLightWithIds();

public:
  /// @brief Field _directionalLight, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::DirectionalLight* ____directionalLight;

  /// @brief Field _setIntensityOnly, offset: 0x50, size: 0x1, def value: None
  bool ____setIntensityOnly;

  /// @brief Field _defaultColor, offset: 0x54, size: 0x10, def value: None
  ::UnityEngine::Color ____defaultColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DirectionalLightWithIds, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DirectionalLightWithIds, ____directionalLight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DirectionalLightWithIds, ____setIntensityOnly) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DirectionalLightWithIds, ____defaultColor) == 0x54, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DirectionalLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DirectionalLightWithIds*, "", "DirectionalLightWithIds");
