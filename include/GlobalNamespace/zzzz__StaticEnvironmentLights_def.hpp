#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(StaticEnvironmentLights)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class StaticEnvironmentLights;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StaticEnvironmentLights);
// Type: ::StaticEnvironmentLights
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5002))
// CS Name: ::StaticEnvironmentLights*
class CORDL_TYPE StaticEnvironmentLights : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _lightColors, offset 0x18, size 0x8
  __declspec(property(get = __get__lightColors, put = __set__lightColors))::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> _lightColors;

  /// @brief Field _materials, offset 0x20, size 0x8
  __declspec(property(get = __get__materials, put = __set__materials))::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> _materials;

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& __get__lightColors();

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& __get__lightColors() const;

  constexpr void __set__lightColors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  constexpr ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>& __get__materials();

  constexpr ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> const& __get__materials() const;

  constexpr void __set__materials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value);

  /// @brief Method Awake addr 0x23b76fc size 0x94 virtual false final false
  inline void Awake();

  static inline ::GlobalNamespace::StaticEnvironmentLights* New_ctor();

  /// @brief Method .ctor addr 0x23b7790 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StaticEnvironmentLights", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StaticEnvironmentLights(StaticEnvironmentLights&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StaticEnvironmentLights", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StaticEnvironmentLights(StaticEnvironmentLights const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StaticEnvironmentLights();

public:
  /// @brief Field _lightColors, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> ____lightColors;

  /// @brief Field _materials, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> ____materials;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StaticEnvironmentLights, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StaticEnvironmentLights);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticEnvironmentLights*, "", "StaticEnvironmentLights");
