#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(StaticEnvironmentLights)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
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
// CS Name: ::StaticEnvironmentLights*
class CORDL_TYPE StaticEnvironmentLights : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _lightColors, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lightColors, put = __cordl_internal_set__lightColors))::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> _lightColors;

  /// @brief Field _materials, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__materials, put = __cordl_internal_set__materials))::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> _materials;

  /// @brief Method Awake, addr 0x24ad49c, size 0x94, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::StaticEnvironmentLights* New_ctor();

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& __cordl_internal_get__lightColors() const;

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& __cordl_internal_get__lightColors();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get__materials() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get__materials();

  constexpr void __cordl_internal_set__lightColors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  constexpr void __cordl_internal_set__materials(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  /// @brief Method .ctor, addr 0x24ad530, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StaticEnvironmentLights();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StaticEnvironmentLights", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StaticEnvironmentLights(StaticEnvironmentLights&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StaticEnvironmentLights", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StaticEnvironmentLights(StaticEnvironmentLights const&) = delete;

  /// @brief Field _lightColors, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> ____lightColors;

  /// @brief Field _materials, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ____materials;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StaticEnvironmentLights, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticEnvironmentLights, ____lightColors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticEnvironmentLights, ____materials) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StaticEnvironmentLights);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticEnvironmentLights*, "", "StaticEnvironmentLights");
