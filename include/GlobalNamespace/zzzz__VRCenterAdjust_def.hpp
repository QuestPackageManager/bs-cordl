#pragma once
// IWYU pragma private; include "GlobalNamespace/VRCenterAdjust.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VRCenterAdjust)
namespace BeatSaber::GameSettings {
class MainSettingsHandler;
}
namespace GlobalNamespace {
class SettingsApplicatorSO;
}
// Forward declare root types
namespace GlobalNamespace {
class VRCenterAdjust;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VRCenterAdjust);
// Type: ::VRCenterAdjust
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VRCenterAdjust*
class CORDL_TYPE VRCenterAdjust : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _mainSettingsHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsHandler, put = __cordl_internal_set__mainSettingsHandler))::BeatSaber::GameSettings::MainSettingsHandler* _mainSettingsHandler;

  /// @brief Field _settingsApplicator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsApplicator, put = __cordl_internal_set__settingsApplicator))::UnityW<::GlobalNamespace::SettingsApplicatorSO> _settingsApplicator;

  static inline ::GlobalNamespace::VRCenterAdjust* New_ctor();

  /// @brief Method OnDestroy, addr 0x26b47c8, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x26b46f8, size 0xd0, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x26b4628, size 0xd0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ResetRoom, addr 0x26b43f0, size 0x118, virtual false, abstract: false, final false
  inline void ResetRoom();

  /// @brief Method SetRoomTransformOffset, addr 0x26b4508, size 0xf4, virtual false, abstract: false, final false
  inline void SetRoomTransformOffset();

  /// @brief Method Start, addr 0x26b4354, size 0x9c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x26b45fc, size 0x2c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::BeatSaber::GameSettings::MainSettingsHandler*& __cordl_internal_get__mainSettingsHandler();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::MainSettingsHandler*> const& __cordl_internal_get__mainSettingsHandler() const;

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& __cordl_internal_get__settingsApplicator() const;

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& __cordl_internal_get__settingsApplicator();

  constexpr void __cordl_internal_set__mainSettingsHandler(::BeatSaber::GameSettings::MainSettingsHandler* value);

  constexpr void __cordl_internal_set__settingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value);

  /// @brief Method .ctor, addr 0x26b47cc, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _mainSettingsHandler, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::GameSettings::MainSettingsHandler* ____mainSettingsHandler;

  /// @brief Field _settingsApplicator, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsApplicatorSO> ____settingsApplicator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRCenterAdjust, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VRCenterAdjust, ____mainSettingsHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRCenterAdjust, ____settingsApplicator) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRCenterAdjust);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRCenterAdjust*, "", "VRCenterAdjust");
