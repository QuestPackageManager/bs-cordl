#pragma once
// IWYU pragma private; include "GlobalNamespace/ObstacleShaderWarmup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ObstacleShaderWarmup)
namespace GlobalNamespace {
class ObstacleMaterialSetter;
}
namespace GlobalNamespace {
class SettingsManager;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleShaderWarmup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleShaderWarmup);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ObstacleShaderWarmup
class CORDL_TYPE ObstacleShaderWarmup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _obstacleMaterialSetter, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleMaterialSetter, put = __cordl_internal_set__obstacleMaterialSetter)) ::UnityW<::GlobalNamespace::ObstacleMaterialSetter>
      _obstacleMaterialSetter;

  /// @brief Field _settingsManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  static inline ::GlobalNamespace::ObstacleShaderWarmup* New_ctor();

  /// @brief Method Start, addr 0x3b0096c, size 0x50, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::ObstacleMaterialSetter> const& __cordl_internal_get__obstacleMaterialSetter() const;

  constexpr ::UnityW<::GlobalNamespace::ObstacleMaterialSetter>& __cordl_internal_get__obstacleMaterialSetter();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr void __cordl_internal_set__obstacleMaterialSetter(::UnityW<::GlobalNamespace::ObstacleMaterialSetter> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  /// @brief Method .ctor, addr 0x3b009bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleShaderWarmup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObstacleShaderWarmup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleShaderWarmup(ObstacleShaderWarmup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleShaderWarmup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleShaderWarmup(ObstacleShaderWarmup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4151 };

  /// @brief Field _obstacleMaterialSetter, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ObstacleMaterialSetter> ____obstacleMaterialSetter;

  /// @brief Field _settingsManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObstacleShaderWarmup, ____obstacleMaterialSetter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleShaderWarmup, ____settingsManager) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleShaderWarmup, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleShaderWarmup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleShaderWarmup*, "", "ObstacleShaderWarmup");
