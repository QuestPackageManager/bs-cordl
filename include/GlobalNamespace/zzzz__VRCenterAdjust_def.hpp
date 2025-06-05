#pragma once
// IWYU pragma private; include "GlobalNamespace/VRCenterAdjust.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VRCenterAdjust)
namespace GlobalNamespace {
class SettingsApplicatorSO;
}
namespace GlobalNamespace {
class SettingsManager;
}
// Forward declare root types
namespace GlobalNamespace {
class VRCenterAdjust;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VRCenterAdjust);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VRCenterAdjust
class CORDL_TYPE VRCenterAdjust : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _settingsApplicator, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsApplicator, put = __cordl_internal_set__settingsApplicator)) ::UnityW<::GlobalNamespace::SettingsApplicatorSO> _settingsApplicator;

  /// @brief Field _settingsManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  static inline ::GlobalNamespace::VRCenterAdjust* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b33a98, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x3b339cc, size 0xcc, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3b33900, size 0xcc, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ResetRoom, addr 0x3b33754, size 0xc4, virtual false, abstract: false, final false
  inline void ResetRoom();

  /// @brief Method SetRoomTransformOffset, addr 0x3b33818, size 0xbc, virtual false, abstract: false, final false
  inline void SetRoomTransformOffset();

  /// @brief Method Start, addr 0x3b336f0, size 0x64, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3b338d4, size 0x2c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& __cordl_internal_get__settingsApplicator() const;

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& __cordl_internal_get__settingsApplicator();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr void __cordl_internal_set__settingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  /// @brief Method .ctor, addr 0x3b33a9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRCenterAdjust();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VRCenterAdjust", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRCenterAdjust(VRCenterAdjust&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRCenterAdjust", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRCenterAdjust(VRCenterAdjust const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5191 };

  /// @brief Field _settingsManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _settingsApplicator, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsApplicatorSO> ____settingsApplicator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRCenterAdjust, ____settingsManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRCenterAdjust, ____settingsApplicator) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRCenterAdjust, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRCenterAdjust);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRCenterAdjust*, "", "VRCenterAdjust");
