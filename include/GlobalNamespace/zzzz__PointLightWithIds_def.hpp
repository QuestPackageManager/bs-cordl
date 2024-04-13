#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_def.hpp"
CORDL_MODULE_EXPORT(PointLightWithIds)
namespace GlobalNamespace {
class PointLight;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class PointLightWithIds;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PointLightWithIds);
// Type: ::PointLightWithIds
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PointLightWithIds*
class CORDL_TYPE PointLightWithIds : public ::GlobalNamespace::RuntimeLightWithIds {
public:
  // Declarations
  /// @brief Field _pointLight, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__pointLight, put = __cordl_internal_set__pointLight))::UnityW<::GlobalNamespace::PointLight> _pointLight;

  /// @brief Method ColorWasSet, addr 0x23fda9c, size 0x20, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::PointLightWithIds* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::PointLight> const& __cordl_internal_get__pointLight() const;

  constexpr ::UnityW<::GlobalNamespace::PointLight>& __cordl_internal_get__pointLight();

  constexpr void __cordl_internal_set__pointLight(::UnityW<::GlobalNamespace::PointLight> value);

  /// @brief Method .ctor, addr 0x23fdabc, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointLightWithIds();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointLightWithIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointLightWithIds(PointLightWithIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointLightWithIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointLightWithIds(PointLightWithIds const&) = delete;

  /// @brief Field _pointLight, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PointLight> ____pointLight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PointLightWithIds, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PointLightWithIds, ____pointLight) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PointLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PointLightWithIds*, "", "PointLightWithIds");
