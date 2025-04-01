#pragma once
// IWYU pragma private; include "GlobalNamespace/VRControllersValueSettingsOffsets.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VRControllerTransformOffset_def.hpp"
CORDL_MODULE_EXPORT(VRControllersValueSettingsOffsets)
namespace BeatSaber::GameSettings {
class ControllerProfilesModel;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class VRControllersValueSettingsOffsets;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VRControllersValueSettingsOffsets);
// Dependencies VRControllerTransformOffset
namespace GlobalNamespace {
// Is value type: false
// CS Name: VRControllersValueSettingsOffsets
class CORDL_TYPE VRControllersValueSettingsOffsets : public ::GlobalNamespace::VRControllerTransformOffset {
public:
  // Declarations
  /// @brief Field _controllersProfile, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__controllersProfile, put = __cordl_internal_set__controllersProfile)) ::BeatSaber::GameSettings::ControllerProfilesModel* _controllersProfile;

  /// @brief Field _settingsManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  __declspec(property(get = get_alternativeHandling)) bool alternativeHandling;

  __declspec(property(get = get_leftPositionOffset)) ::UnityEngine::Vector3 leftPositionOffset;

  __declspec(property(get = get_leftRotationOffset)) ::UnityEngine::Vector3 leftRotationOffset;

  __declspec(property(get = get_positionOffset)) ::UnityEngine::Vector3 positionOffset;

  __declspec(property(get = get_rightPositionOffset)) ::UnityEngine::Vector3 rightPositionOffset;

  __declspec(property(get = get_rightRotationOffset)) ::UnityEngine::Vector3 rightRotationOffset;

  __declspec(property(get = get_rotationOffset)) ::UnityEngine::Vector3 rotationOffset;

  static inline ::GlobalNamespace::VRControllersValueSettingsOffsets* New_ctor();

  constexpr ::BeatSaber::GameSettings::ControllerProfilesModel* const& __cordl_internal_get__controllersProfile() const;

  constexpr ::BeatSaber::GameSettings::ControllerProfilesModel*& __cordl_internal_get__controllersProfile();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr void __cordl_internal_set__controllersProfile(::BeatSaber::GameSettings::ControllerProfilesModel* value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  /// @brief Method .ctor, addr 0x26fd4f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_alternativeHandling, addr 0x26fd418, size 0x28, virtual true, abstract: false, final false
  inline bool get_alternativeHandling();

  /// @brief Method get_leftPositionOffset, addr 0x26fd440, size 0x2c, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_leftPositionOffset();

  /// @brief Method get_leftRotationOffset, addr 0x26fd46c, size 0x2c, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_leftRotationOffset();

  /// @brief Method get_positionOffset, addr 0x26fd3d0, size 0x24, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_positionOffset();

  /// @brief Method get_rightPositionOffset, addr 0x26fd498, size 0x2c, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_rightPositionOffset();

  /// @brief Method get_rightRotationOffset, addr 0x26fd4c4, size 0x2c, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_rightRotationOffset();

  /// @brief Method get_rotationOffset, addr 0x26fd3f4, size 0x24, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_rotationOffset();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRControllersValueSettingsOffsets();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VRControllersValueSettingsOffsets", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRControllersValueSettingsOffsets(VRControllersValueSettingsOffsets&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRControllersValueSettingsOffsets", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRControllersValueSettingsOffsets(VRControllersValueSettingsOffsets const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13316 };

  /// @brief Field _settingsManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _controllersProfile, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::GameSettings::ControllerProfilesModel* ____controllersProfile;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRControllersValueSettingsOffsets, ____settingsManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersValueSettingsOffsets, ____controllersProfile) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRControllersValueSettingsOffsets, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRControllersValueSettingsOffsets);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRControllersValueSettingsOffsets*, "", "VRControllersValueSettingsOffsets");
