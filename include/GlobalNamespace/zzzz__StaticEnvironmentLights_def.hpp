#pragma once
// IWYU pragma private; include "GlobalNamespace\StaticEnvironmentLights.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(StaticEnvironmentLights)
// Forward declare root types
namespace GlobalNamespace {
class StaticEnvironmentLights;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StaticEnvironmentLights*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StaticEnvironmentLights*, "", "StaticEnvironmentLights");
// Dependencies UnityEngine.Color, UnityEngine.Material, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: StaticEnvironmentLights
class CORDL_TYPE StaticEnvironmentLights : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _lightColors, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lightColors, put = __cordl_internal_set__lightColors)) ::ArrayW<::UnityEngine::Color> _lightColors;

  /// @brief Field _materials, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__materials, put = __cordl_internal_set__materials)) ::ArrayW<::UnityW<::UnityEngine::Material>> _materials;

  /// @brief Method Awake, addr 0x59a833c, size 0x84, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::StaticEnvironmentLights* New_ctor();

  constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get__lightColors() const;

  constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get__lightColors();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get__materials() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get__materials();

  constexpr void __cordl_internal_set__lightColors(::ArrayW<::UnityEngine::Color> value);

  constexpr void __cordl_internal_set__materials(::ArrayW<::UnityW<::UnityEngine::Material>> value);

  /// @brief Method .ctor, addr 0x59a83c0, size 0x4, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5987 };

  /// @brief Field _lightColors, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color> ____lightColors;

  /// @brief Field _materials, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>> ____materials;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StaticEnvironmentLights, ____lightColors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StaticEnvironmentLights, ____materials) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StaticEnvironmentLights) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
