#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RuntimeLightWithLightGroupIds_def.hpp"
CORDL_MODULE_EXPORT(DirectionalLightWithLightGroupIds)
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class DirectionalLight;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14554))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14528))
// CS Name: ::DirectionalLightWithLightGroupIds*
class CORDL_TYPE DirectionalLightWithLightGroupIds : public ::GlobalNamespace::RuntimeLightWithLightGroupIds {
public:
  // Declarations
  /// @brief Field _directionalLight, offset 0x50, size 0x8
  __declspec(property(get = __get__directionalLight, put = __set__directionalLight))::GlobalNamespace::DirectionalLight* _directionalLight;

  constexpr ::GlobalNamespace::DirectionalLight*& __get__directionalLight();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DirectionalLight*> const& __get__directionalLight() const;

  constexpr void __set__directionalLight(::GlobalNamespace::DirectionalLight* value);

  /// @brief Method ColorWasSet addr 0x210f1f4 size 0x20 virtual true final false
  inline void ColorWasSet(::UnityEngine::Color color);

  static inline ::GlobalNamespace::DirectionalLightWithLightGroupIds* New_ctor();

  /// @brief Method .ctor addr 0x210f214 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithLightGroupIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DirectionalLightWithLightGroupIds(DirectionalLightWithLightGroupIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithLightGroupIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DirectionalLightWithLightGroupIds(DirectionalLightWithLightGroupIds const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DirectionalLightWithLightGroupIds();

public:
  /// @brief Field _directionalLight, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::DirectionalLight* ____directionalLight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DirectionalLightWithLightGroupIds, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DirectionalLightWithLightGroupIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DirectionalLightWithLightGroupIds*, "", "DirectionalLightWithLightGroupIds");
