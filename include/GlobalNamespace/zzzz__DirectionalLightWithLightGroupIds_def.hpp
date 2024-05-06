#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RuntimeLightWithLightGroupIds_def.hpp"
CORDL_MODULE_EXPORT(DirectionalLightWithLightGroupIds)
namespace GlobalNamespace {
class DirectionalLight;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class DirectionalLightWithLightGroupIds;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DirectionalLightWithLightGroupIds);
// Type: ::DirectionalLightWithLightGroupIds
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DirectionalLightWithLightGroupIds*
class CORDL_TYPE DirectionalLightWithLightGroupIds : public ::GlobalNamespace::RuntimeLightWithLightGroupIds {
public:
  // Declarations
  /// @brief Field _directionalLight, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__directionalLight, put = __cordl_internal_set__directionalLight))::UnityW<::GlobalNamespace::DirectionalLight> _directionalLight;

  /// @brief Method ColorWasSet, addr 0x24f1f28, size 0x20, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::DirectionalLightWithLightGroupIds* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::DirectionalLight> const& __cordl_internal_get__directionalLight() const;

  constexpr ::UnityW<::GlobalNamespace::DirectionalLight>& __cordl_internal_get__directionalLight();

  constexpr void __cordl_internal_set__directionalLight(::UnityW<::GlobalNamespace::DirectionalLight> value);

  /// @brief Method .ctor, addr 0x24f1f48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DirectionalLightWithLightGroupIds();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithLightGroupIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DirectionalLightWithLightGroupIds(DirectionalLightWithLightGroupIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithLightGroupIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DirectionalLightWithLightGroupIds(DirectionalLightWithLightGroupIds const&) = delete;

  /// @brief Field _directionalLight, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DirectionalLight> ____directionalLight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DirectionalLightWithLightGroupIds, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DirectionalLightWithLightGroupIds, ____directionalLight) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DirectionalLightWithLightGroupIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DirectionalLightWithLightGroupIds*, "", "DirectionalLightWithLightGroupIds");
