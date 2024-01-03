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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14552))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14550))
// CS Name: ::PointLightWithIds*
class CORDL_TYPE PointLightWithIds : public ::GlobalNamespace::RuntimeLightWithIds {
public:
  // Declarations
  /// @brief Field _pointLight, offset 0x48, size 0x8
  __declspec(property(get = __get__pointLight, put = __set__pointLight))::GlobalNamespace::PointLight* _pointLight;

  constexpr ::GlobalNamespace::PointLight*& __get__pointLight();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PointLight*> const& __get__pointLight() const;

  constexpr void __set__pointLight(::GlobalNamespace::PointLight* value);

  /// @brief Method ColorWasSet, addr 0x2112910, size 0x20, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::PointLightWithIds* New_ctor();

  /// @brief Method .ctor, addr 0x2112930, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PointLightWithIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointLightWithIds(PointLightWithIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointLightWithIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointLightWithIds(PointLightWithIds const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointLightWithIds();

public:
  /// @brief Field _pointLight, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::PointLight* ____pointLight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PointLightWithIds, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PointLightWithIds, ____pointLight) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PointLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PointLightWithIds*, "", "PointLightWithIds");
